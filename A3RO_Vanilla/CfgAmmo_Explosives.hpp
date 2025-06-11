// Creating ANM8 Smoke Grenade Ammo
class SmokeShellANM8 : SmokeShell
{
effectsSmoke = "SmokeShellWhiteEffect";
explosionTime = 1.2+random 0.8001; // 1.2 to 2. "Fixed" in 2.18, x value is now excluded from random.
model = "\A3\Weapons_f\ammo\ANM8_white_throw";
timeToLive = 121+random 1.201; // Desired Effect: ~120s +/- 1s
};
class SmokeShellANM8_Infinite : SmokeShellANM8
{
timeToLive = 1e+010;
};

// Editing the one or two Grenade Ammo Classes here
class G_40mm_HE : GrenadeBase // M441
{
aiAmmoUsageFlags = "64 + 128"; // Missing???
airFriction = -0.0005; // -0.001 > -0.0005 Lowered to Value of Smoke Shells for uniformity(?)
audibleFire = 20; // 30 > 20. A GL from a distance would get drowned out from gunfire. Can't be louder than a P90, right?
caliber = 2; // Vanilla
dangerRadiusHit = -1; // Let Engine handle it
fuseDistance = 2.4+random 0.601; // M441 uses M552 PD Fuze which arms 2.4 to 3m from Muzzle
hit = 80; // Vanilla
indirectHit = 12; // 8 > 12. I did a lot of calculations but going by what looks right has yielded actual results.
indirectHitRange = 5; // 6 > 5 IndirectHit calculates decreasing damage out to 4x of the IndirectHitRange value. Kill Radius of 5 deals 100% iH damage
suppressionRadiusHit = 15; // 3*Lethal Radius
typicalSpeed = 76; // 76ms Vel0
};

// Enabling Hidden HEDP Ammo
class G_40mm_HEDP : G_40mm_HE // I need to spawn a Submunition in the way HEAT does it.
{
caliber = 2; // 3 > 2 like HE
deleteParentWhenTriggered = 0; // Otherwise no Boom
fuseDistance = 14+random 13.001; // M433 uses M550 PIBD Fuze which arms 14 to 27m from Muzzle
hit = 80; // 100 > 80 Same as HE on direct Hit
indirectHit = 8.4375; // Secret Formula
indirectHitRange = 5; // From value
submunitionAmmo = "ammo_Penetrator_40mm_HEDP";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {0,0,-0.2};
submunitionInitSpeed = 1000;
submunitionParentSpeedCoef = 0;
triggerOnImpact = 1; // Most Important Setting here
typicalSpeed = 76; // 76ms Vel0
};

// G_40mm_HEDP_Bullet inherits wrong. Crashes my game. Making new class.
class ammo_Penetrator_40mm_HEDP : ammo_Penetrator_Base
{
caliber = 3; // 3.33 > 3
hit = 100; // Value from Original
warheadName = "HEAT";
};

// Changing Ignition Delay and Illumination Time of Flares
class F_40mm_White : FlareBase 
{
airFriction = -0.0005;
caliber = 2;
triggerTime = 4+random 1.001;
timeToLive = 44+random 1.001; // 40 +/-1s: tTL= 40s (Actual Burn Time) + 5s (Maximum Ignition Delay) - 1s (combined random averages of tT and tTL)
};
class F_40mm_Yellow : F_40mm_White
{
triggerTime = 4.1+random 0.801;
};
class F_40mm_Cir : F_40mm_White
{
nvgOnly = 1;
};

// Also adjusting Smoke to not bounce away like Tigger. Any Smoke that inherits from this will work the same.
class G_40mm_Smoke : SmokeShell
{
caliber = 2;
deflecting = 45; // 30 > 45
deflectionSlowDown = 0.2; // 0.8 > 0.4
explosionTime = 2;
hit = 2; // 0 > 2 Ow
simulation = "shotSmoke"; // shotSmokeX is the main perpetrator
timeToLive = 91+random 2.001; // 90s from Deployment of smoke +/- 1 (+2 cause of 2s ignition delay)
typicalSpeed = 76;
};

// Creating Additional NATO UGL Ammo Types
class G_40mm_UGL_Practice : G_40mm_Smoke // M781 Chalk Practice
{
aiAmmoUsageFlags = "2";
deflecting = 5;
deleteParentWhenTriggered = 1;
effectsSmoke = "SmokeShellWhite";
explosionTime = -1;
simulation = "shotDeploy"; // MUST be used for any Smoke (or Projectile in general) that deploys upon Impact = Uses a submunition.
submunitionAmmo = "G_40mm_UGL_Practice_Poof";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionParentSpeedCoef = 0;
submunitionInitSpeed = 0;
timeToLive = 15;
triggerOnImpact = 1;
};
class G_40mm_UGL_Practice_Poof : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
effectsSmoke = "SmokeShellPracticeEffect";
smokeColor[] = {0.6697,0.2275,0.10053,1};
explosionTime = 0.0001; // Cannot be 0 (Engine doesn't recognize it?), cannot be -1 as the grenade does not re-impact so it is not triggered either.
simulation = "shotSmoke";
timeToLive = 0.22+random 0.041;
};
// Creating new Pellets Submunition instead of using default 12 #00 Buck
class G_40mm_Pellets_Submunition_Deploy : B_12Gauge_Pellets_Submunition_Deploy // M576
{
airFriction = -0.00410106;
audibleFire = 28.7;
caliber = 2.005;
hit = 1.4884;
timeToLive = 15;
typicalSpeed = 269;
};
class G_40mm_UGL_Buckshot : B_12Gauge_Pellets_Submunition // 20 Pellets totaling 24g of Shot. 0.83333333g per Pellet = 12.8 Grains. Closest would be AAA Waterfowl. 5.16mm
{
caliber = 2.005;
deleteParentWhenTriggered = 1;
hit = 29.7687;
submunitionAmmo = "G_40mm_Pellets_Submunition_Deploy";
submunitionConeAngle = 2;
submunitionConeType[] = {"poissondisc",20};
submunitionInitSpeed = 269;
triggerTime = 0.005;
timeToLive = 15;
typicalSpeed = 269;
};
class G_40mm_UGL_CrowdDispersal : G_40mm_UGL_Buckshot // M1029 Rubber Pellets. 48 Balls in .48 Cal so .48in diameter.
{
caliber = 0.1;
deleteParentWhenTriggered = 1;
hit = 2.4;
submunitionAmmo = "G_40mm_CrowdDispersal_Submunition_Deploy";
submunitionConeAngle = 7;
submunitionConeType[] = {"poissondisc",48};
submunitionInitSpeed = 375;
triggerTime = 0.005;
timeToLive = 10;
typicalSpeed = 375;
};
class G_40mm_CrowdDispersal_Submunition_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.00968994;
audibleFire = 40.01;
caliber = 0.1;
hit = 0.05;
timeToLive = 10;
typicalSpeed = 375;
};
class G_40mm_UGL_HE_Airburst : G_40mm_HE // M397A1 Jumping Airburst
{
fuseDistance = 14+random 13.001; // M397A1 uses M536 PD Fuze which arms 14 to 27m from Muzzle
typicalSpeed = 76; // 76ms Vel0
hit = 4;
indirectHit = 0;
indirectHitRange = 0.333;
submunitionAmmo = "G_40mm_UGL_HE_Airburst_Boing";
submunitionConeAngle = -90;
submunitionConeAngleHorizontal = -180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "submunitionAutoleveling";
submunitionInitSpeed = 15;
submunitionParentSpeedCoef = 0;
suppressionRadiusHit = 1;
triggerOnImpact = 1;
};
class G_40mm_UGL_HE_Airburst_Boing : G_40mm_HE
{
explosionTime = 0.1414; // 0.5 - 1.5m. At 45° 2.121m Pythagoras Yo
fuseDistance = 0.001; 
hit = 80.52;
indirectHit = 12;
indirectHitRange = 5;
suppressionRadiusHit = 15;
typicalSpeed = 15;
};
// G_40mm_UGL_CS I am not smart enough to make a script for this. RHS has one.
class G_40mm_UGL_LessLethal : G_40mm_HE // M1006 Rubber
{
aiAmmoUsageFlags = "64";
caliber = 0.1;
fuseDistance = 0.001;
deflecting = 5;
explosionTime = -1;
explosive = 0;
explosionForceCoef = 1;
explosionSoundEffect = "";
hit = 2.4;
indirectHit = 0;
indirectHitRange = 0.333;
suppressionRadiusHit = 1;
soundHit1[] = {"",0.0316228,1};
soundHit2[] = {"",0.0316228,1};
soundHit3[] = {"",0.0316228,1};
soundHit4[] = {}; 
soundHit5[] = {};
soundHit6[] = {};
soundHitBody3[] = {};
soundHitBody4[] = {};
soundHitBody5[] = {};
soundHitBody6[] = {};
SoundSetExplosion[] = {};
warheadName = "";
    class CamShakeExplode
    {
    distance = 1;
    power = 10;
    };
};

// Creating GP-25 Ammo
class G_40mm_GP25_VOG25M : G_40mm_HE
{
airFriction = -0.00049370;
audibleFire = 20.13;
caliber = 1.9748;
fuseDistance = 10+random 30.001; // 10-40m
hit = 80.52;
indirectHit = 12.75;
indirectHitRange = 9;
suppressionRadiusHit = 27;
timeToLive = 14+random 5.001; // 14-19. I need to set up an Eventhandler to have it blow up in flight as triggerTime and triggerOnImpact do not mix.
typicalSpeed = 76.5;
};
class G_40mm_GP25_VOG25PM : G_40mm_GP25_VOG25M
{
hit = 4;
indirectHit = 0;
indirectHitRange = 0.333;
submunitionAmmo = "G_40mm_GP25_VOG25PM_Boing";
submunitionConeAngle = -90;
submunitionConeAngleHorizontal = -180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "submunitionAutoleveling";
submunitionInitSpeed = 15;
submunitionParentSpeedCoef = 0;
suppressionRadiusHit = 1;
triggerOnImpact = 1;
};
class G_40mm_GP25_VOG25PM_Boing : G_40mm_HE
{
airFriction = -0.00049370;
audibleFire = 20.13;
caliber = 1.9748;
explosionTime = 0.1414; // 0.5 - 1.5m. More towards 1.5
fuseDistance = 0.001; 
hit = 80.52;
indirectHit = 10.5;
indirectHitRange = 9;
suppressionRadiusHit = 27;
typicalSpeed = 15;
};
class G_40mm_GP25_VG40TB : G_40mm_GP25_VOG25M
{
explosionEffects = "ThermobaricExplosion";
indirectHit = 46.875;
indirectHitRange = 3; // Balancing w/dmg distr. function in mind
suppressionRadiusHit = 12;
};
class G_40mm_GP25_VUS25 : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
airFriction = -0.00049370;
audibleFire = 20.13;
caliber = 1.9748;
deflecting = 5;
deleteParentWhenTriggered = 1;
effectsSmoke = "SmokeShellWhite";
explosionTime = -1;
simulation = "shotDeploy";
submunitionAmmo = "G_40mm_GP25_VUS25_Poof";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionParentSpeedCoef = 0;
submunitionInitSpeed = 0;
timeToLive = 15;
triggerOnImpact = 1;
typicalSpeed = 76.5;
};
class G_40mm_GP25_VUS25_Poof : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
airFriction = -0.00049370;
caliber = 1.9748;
effectsSmoke = "SmokeShellPracticeEffect";
smokeColor[] = {0.671,0.17025,0.102,1}; // Red-Orange
explosionTime = 0.0001;
simulation = "shotSmokeX";
timeToLive = 0.22+random 0.041;
typicalSpeed = 76.5;
};
class G_40mm_GP25_RLV_HEDP : G_40mm_GP25_VOG25M
{
indirectHit = 15;
indirectHitRange = 6; // From Website
suppressionRadiusHit = 18;
submunitionAmmo = "ammo_Penetrator_40mm_GP25_HEDP";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {0,0,-0.2};
submunitionInitSpeed = 1000;
submunitionParentSpeedCoef = 0;
triggerOnImpact = 1;
typicalSpeed = 76;
};
class ammo_Penetrator_40mm_GP25_HEDP : ammo_Penetrator_Base
{
airFriction = -0.00049370;
caliber = 2.9622;
hit = 100.65;
warheadName = "HEAT";
};
// Imagine finding info on Russian Smoke Grenades.
class SmokeLauncherAmmo;
class G_40mm_GP25_VDG25 : G_40mm_Smoke
{
airFriction = -0.00049370;
audibleFire = 20.13;
caliber = 1.9748;
deleteParentWhenTriggered = 1;
explosionTime = -1;
simulation = "shotDeploy";
submunitionAmmo = "G_40mm_GP25_VDG25_SmkScreen";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionParentSpeedCoef = 0;
submunitionInitSpeed = 0;
timeToLive = 15;
triggerOnImpact = 1;
typicalSpeed = 76.5;
};
class G_40mm_GP25_VDG25_SmkScreen : G_40mm_Smoke
{
airFriction = -0.00049370;
caliber = 1.9748;
effectFly = "AmmoClassic";
effectsSmoke = "SmokeScreenUGLExplosion";
smokeColor[] = {1,1,1,1};
explosionTime = 0.0001;
simulation = "shotSmokeX";
timeToLive = 19+random 2.001; // 20 +/-1
typicalSpeed = 76.5;
};
class F_40mm_GP25_White : F_40mm_White
{
airFriction = -0.00049370;
audibleFire = 20.13;
caliber = 1.9748;
triggerTime = 4.1+random 0.801;
timeToLive = 28.9+random 2.101; // 25s +/-1
typicalSpeed = 76;
};
class F_40mm_GP25_White_Infinite : F_40mm_GP25_White
{
timeToLive = 1e+10;
};
class F_40mm_GP25_Red : F_40mm_GP25_White
{
lightColor[] = {0.5,0.25,0.25,0};
};
class F_40mm_GP25_Red_Infinite : F_40mm_GP25_Red
{
timeToLive = 1e+10;
};
class F_40mm_GP25_Green : F_40mm_GP25_White
{
lightColor[] = {0.25,0.5,0.25,0};
};
class F_40mm_GP25_Green_Infinite : F_40mm_GP25_Green
{
timeToLive = 1e+10;
};
class F_40mm_GP25_Yellow : F_40mm_GP25_White
{
lightColor[] = {0.5,0.5,0.25,0};
};
class F_40mm_GP25_Yellow_Infinite : F_40mm_GP25_Yellow
{
timeToLive = 1e+10;
};

// Creating QLG-10A Grenades. Due to my limited Espionage budget I just have to extrapolate from the VOG-25s.
class G_35mm_QLG10A_DFS10 : G_40mm_HE
{
airFriction = -0.00043199;
audibleFire = 20.52;
caliber = 1.7279;
fuseDistance = 10+random 20.001;
hit = 82.10;
indirectHit = 11.15625; // No Info. Using Corresponding 40mmCL Values x 0,875
indirectHitRange = 7.875; // Claims of 12m of continious damage (whatever that means) probably refer to shrapnel. Armas iH formula works similar
suppressionRadiusHit = 23.625;
timeToLive = 12+random 4.001; // 12 to 16 why not 
typicalSpeed = 78; // As per source
};
class G_35mm_QLG10A_DFS10A : G_35mm_QLG10A_DFS10
{
hit = 4;
indirectHit = 0;
indirectHitRange = 0.333;
submunitionAmmo = "G_35mm_QLG10A_DFS10A_Boing";
submunitionConeAngle = -90;
submunitionConeAngleHorizontal = -180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "submunitionAutoleveling";
submunitionInitSpeed = 15;
submunitionParentSpeedCoef = 0;
suppressionRadiusHit = 1;
triggerOnImpact = 1;
};
class G_35mm_QLG10A_DFS10A_Boing : G_40mm_HE
{
airFriction = -0.00043199;
audibleFire = 20.52;
caliber = 1.7279;
explosionTime = 0.1414; // 0.5 - 1.5m. More towards 1.5
fuseDistance = 0.001;
hit = 82.10;
indirectHit = 9.18;
indirectHitRange = 7.875;
suppressionRadiusHit = 23.625;
typicalSpeed = 15;
};
class G_35mm_QLG10A_DFJ10 : G_35mm_QLG10A_DFS10
{
indirectHit = 13.125;
indirectHitRange = 5.25;
suppressionRadiusHit = 15.75;
submunitionAmmo = "ammo_Penetrator_35mm_QLG10A_DFJ10";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {0,0,-0.2};
submunitionInitSpeed = 1000;
submunitionParentSpeedCoef = 0;
triggerOnImpact = 1;
};
class ammo_Penetrator_35mm_QLG10A_DFJ10 : ammo_Penetrator_Base
{
airFriction = -0.00043199;
caliber = 2.5918;
hit = 102.63;
warheadName = "HEAT";
};
class G_35mm_QLG10A_DFX10 : G_40mm_Smoke
{
airFriction = -0.00043199;
aiAmmoUsageFlags = "2";
audibleFire = 20.52;
caliber = 1.7279;
effectsSmoke = "TrackingGrenadeTrail";
explosionTime = 0.3+random 0.041; // ~25m from Muzzle, 0.320s
simulation = "shotSmoke";
timeToLive = 7.75+random 0.5;
typicalSpeed = 78;
};
class G_35mm_QLG10A_DFD10_White : G_40mm_Smoke
{
caliber = 1.7279;
explosionTime = 2;
timeToLive = 61+random 2.001; // 60s +/-1. Pure Guesswork.
typicalSpeed = 78;
};
class G_35mm_QLG10A_DFD10_Red : G_35mm_QLG10A_DFD10_White
{
effectsSmoke = "SmokeShellRedEffect";
smokeColor[] = {0.8438,0.1383,0.1353,1};
};
class G_35mm_QLG10A_DFD10_Green : G_35mm_QLG10A_DFD10_White
{
effectsSmoke = "SmokeShellGreenEffect";
smokeColor[] = {0.2125,0.6258,0.4891,1};
};
class G_35mm_QLG10A_DFD10_Yellow : G_35mm_QLG10A_DFD10_White
{
effectsSmoke = "SmokeShellYellowEffect";
smokeColor[] = {0.9883,0.8606,0.0719,1};
};
class G_35mm_QLG10A_DFP10 : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
airFriction = -0.00043199;
audibleFire = 20.52;
caliber = 1.7279;
deflecting = 5;
deleteParentWhenTriggered = 1;
effectsSmoke = "SmokeShellWhite";
explosionTime = -1;
simulation = "shotDeploy";
submunitionAmmo = "G_35mm_QLG10A_DFP10_Poof";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionParentSpeedCoef = 0;
submunitionInitSpeed = 0;
timeToLive = 15;
triggerOnImpact = 1;
typicalSpeed = 78;
};
class G_35mm_QLG10A_DFP10_Poof : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
airFriction = -0.00043199;
caliber = 1.7279;
effectsSmoke = "SmokeShellPracticeEffect";
smokeColor[] = {0.6697,0.455,0,1}; // Yellow-Orange
explosionTime = 0.0001;
simulation = "shotSmokeX";
timeToLive = 0.22+random 0.041;
typicalSpeed = 78;
};

// Launcher Ammo

// 9K115-2 Metis-M1
class M_Vorona_HEAT : MissileBase
{
fuseDistance = 80.001; // 50 > 80m
timeToLive = 9.1;
};

// M3A1 MAAWS. Velocity Changes are only applied when ACE is loaded as its XM157 Framework is required to simulate a functioning FCS (Otherwise Reticule would be all wrong.)
class R_MRAAWS_HEAT_F : RocketBase // HEAT 751
{
fuseDistance = 20+random 20.001;
//maxSpeed = 210;
timeToLive = 13.4;
typicalSpeed = 210;
};
class R_MRAAWS_HEAT55_F : R_MRAAWS_HEAT_F // HEAT 551
{
fuseDistance = 5+random 3.001;
//maxSpeed = 254;
timeToLive = 13.4;
typicalSpeed = 254;
};
class R_MRAAWS_HE_F : R_MRAAWS_HEAT_F // HE 441D
{
fuseDistance = 40+random 30.001;
//maxSpeed = 240;
timeToLive = 13.4;
typicalSpeed = 240;
};

// Mini-Spike
class M_Titan_AT : MissileBase // Replacing values with AP to get a working AP Warhead that can lock in Vanilla and ACE as thats apparently the only way.
{
fuseDistance = 50.001;
hit = 178.57;
indirectHit = 44.64;
indirectHitRange = 2.67;
maxSpeed = 150;
typicalSpeed = 150; // From 160
maxControlRange = 1500;
missileLockMaxDistance = 1500;
submunitionAmmo = "";
submunitionDirectionType = "";
submunitionInitSpeed = 0;
timeToLive = 12.1;
    class Components : Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent // Can't inherit somehow
                {
                aimDown = 0;
                allowsMarking = 1;
                angleRangeHorizontal = 3.7;
                angleRangeVertical = 2.3;
                animDirection = "";
                color[] = {1,0,0,1};
                componentType = "IRSensorComponent";
                groundNoiseDistanceCoef = -1;
                maxFogSeeThrough = 0.995;
                maxGroundNoiseDistance = -1;
                maxSpeedThreshold = 0;
                maxTrackableATL = 50;
                maxTrackableSpeed = 35;
                minSpeedThreshold = 0;
                minTrackableATL = -1e+10;
                minTrackableSpeed = -1e+10;
                typeRecognitionDistance = 1500;
                    class AirTarget
                    {
                    maxRange = 1500;
                    minRange = 200;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                    maxRange = 1500;
                    minRange = 200;
                    objectDistanceLimitCoef = 1;
                    viewDistanceLimitCoef = 1;
                    };
                };
            };
        };
    };
};
class M_Titan_AP : M_Titan_AT
{
hit = 178.57;
indirectHit = 44.64;
indirectHitRange = 2.67;
timeToLive = 12.1;
};
// New
class M_Titan_AT_2 : M_Titan_AT
{
hit = 50;
submunitionAmmo = "ammo_Penetrator_Titan_AT";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitSpeed = 1000;
};

// NLAW
class M_NLAW_AT_F : MissileBase
{
fuseDistance = 20.001; 
maxSpeed = 200;
typicalSpeed = 200;
timeToLive = 6.8;
};

// RPG-32
class R_PG32V_F : RocketBase
{
fuseDistance = 20+random 20.001; // Based on MRAWS
typicalSpeed = 140;
timeToLive = 14.1;
};

// RPG-7
class R_PG7_F : RocketBase
{
allowAgainstInfantry = 1;
fuseDistance = 5.001;
initTime = 0.078; // 11m
maxSpeed = 294;
timeToLive = 6.65; // 920m
typicalSpeed = 294;
};

// Titan MPRL
class M_Titan_AA : MissileBase
{
fuseDistance = 80.001;
maxControlRange = 4800;
maxSpeed = 745;
missileKeepLockedCone = 45;
missileLockCone = 3;
missileLockMaxDistance = 4800;
missileLockMaxSpeed = 2000;
missileLockMinDistance = 161;
timeToLive = 13.9;  // 4.8km
typicalSpeed = 745;
    class Components : Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent // Can't inherit somehow
                {
                aimDown = 0;
                allowsMarking = 1;
                angleRangeHorizontal = 7;
                angleRangeVertical = 4.5;
                animDirection = "";
                color[] = {1,0,0,1};
                componentType = "IRSensorComponent";
                groundNoiseDistanceCoef = 0.333; // 0.2 > 0.333
                maxFogSeeThrough = 0.666; // 0.995 > 0.666
                maxGroundNoiseDistance = 50;
                maxSpeedThreshold = 0;
                maxTrackableATL = 1e+10;
                maxTrackableSpeed = 2000; // 250 > 2000
                minSpeedThreshold = 0;
                minTrackableATL = -1e+10;
                minTrackableSpeed = -1e+10;
                typeRecognitionDistance = 4800;
                    class AirTarget
                    {
                    maxRange = 4800;
                    minRange = 161;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                    maxRange = 4800;
                    minRange = 161;
                    objectDistanceLimitCoef = 1;
                    viewDistanceLimitCoef = 1;
                    };
                };
            };
        };
    };
};

// Creating new XM307 25x59 HV Ammo to replace the wrong 20mm it uses currently
class G_20mm_HE : G_40mm_HE
{
whistleDist = 14;
};
class G_25mm_XM307_HE : G_20mm_HE
{
caliber = 1.25;
hit = 50;
indirectHit = 6.5;
indirectHitRange = 4.5;
whistleDist = 14.5;
};

// Adjusting Flare Gun Flares
class F_40mm_Green;
class F_40mm_Red;
class F_12GA_Flare_Green : F_40mm_Green
{
brightness = 6;
flareSize = 6;
triggerTime = "4.001";
timeToLive = "12";
};
class F_12GA_Flare_Red : F_40mm_Red
{
brightness = 6;
flareSize = 6;
triggerTime = "4.001";
timeToLive = "12";
};
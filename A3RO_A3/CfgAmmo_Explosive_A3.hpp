// Handheld Grenades

// Frag
// M67
class GrenadeHand : Grenade
{
audibleFire = 1; // 0.05 > 1
aiAmmoUsageFlags = "64";
dangerRadiusHit = -1;
deflecting = 7.5; // 15 > 7.5
deflectionSlowDown = 1.6; // 0.8 > 1.6
explosionTime = 4+random 1.001;
hit = 2;
indirectHit = 10; // 8 > 10
indirectHitRange = 5; // 6 > 5
suppressionRadiusHit = 20;
typicalspeed = 23;
visibleFireTime = 0.5; // 1 > 0.5
};
// V40
class mini_Grenade : GrenadeHand
{
deflecting = 15; // 30 > 15
deflectionSlowDown = 1.4; // 0.8 > 1.4
explosionTime = 4;
hit = 2;
indirectHit = 7; // 6 > 7
indirectHitRange = 3; // 4 > 3
suppressionRadiusHit = 12;
typicalspeed = 25;
};
// Creating Stone
class GrenadeHand_stone : GrenadeHand
{
dangerRadiusHit = 3;
explosionTime = -1;
hit = 0.4;
indirectHit = 0.4;
indirectHitRange = 0.1;
simulation = "shotShell"; // Allows impact on Infantry but has significant drawbacks in fidelity for regular Handgrenades
soundHit1[] = {"",1,1,100};
soundHit2[] = {"",1,1,100};
soundHit3[] = {"",1,1,100};
soundHit4[] = {"",1,1,100};
SoundSetExplosion[] = {""};
typicalspeed = 13;
soundHit[] = {"",0,1};
timeToLive = 10;
};

// Smoke
// M83
class SmokeShell : GrenadeHand
{
dangerRadiusHit = 3;
deflecting = 15;
deflectionSlowDown = 1.2;
explosionTime = 0.7+random 1.301;
hit = 2;
indirectHitRange = 0;
timeToLive = 40+random 30.001; // 25-70 is a large variation.
typicalspeed = 22;
};
// M18
class SmokeShellBlue : SmokeShell
{
timeToLive = 50+random 20.001;
typicalspeed = 24;
};
class SmokeShellOrange : SmokeShell
{
timeToLive = 30+random 5.001;
typicalspeed = 26;
};
class SmokeShellGreen : SmokeShell
{
timeToLive = 50+random 40.001;
typicalspeed = 21;
};
class SmokeShellPurple : SmokeShell
{
timeToLive = 50+random 40.001;
typicalspeed = 21;
};
class SmokeShellRed : SmokeShell
{
timeToLive = 50+random 40.001;
typicalspeed = 21;
};
class SmokeShellYellow : SmokeShell
{
timeToLive = 50+random 40.001;
typicalspeed = 21;
};

// Creating ANM8 Smoke Grenade Ammo
class SmokeShellANM8 : SmokeShell
{
deflecting = 15;
deflectionSlowDown = 1.2;
effectsSmoke = "SmokeShellWhiteEffect";
explosionTime = 0.7+random 1.301; // 0.7 to 2. "Fixed" in 2.18, x value is now excluded from random.
hit = 1;
model = "\A3\Weapons_f\ammo\ANM8_white_throw";
timeToLive = 105+random 45.001; // Desired Effect: ~105 - 150s.
typicalspeed = 19;
};
class SmokeShellANM8_Infinite : SmokeShellANM8
{
timeToLive = 1e+010;
};

// Chemlights, 12h
class Chemlight_base : SmokeShell
{
dangerRadiusHit = 2;
deflecting = 10;
deflectionSlowDown = 1;
explosionTime = 0.001;
explosionEffectsRadius = 0;
hit = 1;
timeToLive = 43200;
typicalspeed = 14;
};
// Creating Orange
class Chemlight_orange : Chemlight_base
{
effectsSmoke = "ChemlightLight_orange";
model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
};
class Chemlight_orange_Infinite : Chemlight_orange
{
timeToLive = 1e+10;
};
// Chemlights, 8h
class Chemlight_blue : Chemlight_base
{
timeToLive = 28800;
};
// Creating White, IR
class Chemlight_white : Chemlight_base
{
effectsSmoke = "ChemlightLight_white";
model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
timeToLive = 28800;
};
class Chemlight_white_Infinite : Chemlight_white
{
timeToLive = 1e+10;
};
class Chemlight_IR : Chemlight_base
{
effectsSmoke = "ChemlightLight_IR";
irLock = 1;
model = "\A3\Weapons_f\chemlight\chemlight_green";
timeToLive = 28800;
};
class Chemlight_IR_Infinite : Chemlight_IR
{
timeToLive = 1e+10;
};
// 3H
class Chemlight_IR_3H : Chemlight_IR
{
effectsSmoke = "ChemlightLight_IR";
timeToLive = 1800;
};
// 30m HI
class Chemlight_yellow_HI : Chemlight_yellow
{
effectsSmoke = "ChemlightLight_yellow_HI";
timeToLive = 1800;
};
class Chemlight_yellow_HI_infinite : Chemlight_yellow_HI
{
timeToLive = 1e+10;
};
class Chemlight_red_HI : Chemlight_red
{
effectsSmoke = "ChemlightLight_red_HI";
timeToLive = 1800;
};
class Chemlight_red_HI_infinite : Chemlight_red_HI
{
timeToLive = 1e+10;
};
class Chemlight_white_HI : Chemlight_white
{
effectsSmoke = "ChemlightLight_white_HI";
timeToLive = 1800;
};
class Chemlight_white_HI_infinite : Chemlight_white_HI
{
timeToLive = 1e+10;
};
// 5m UHI
class Chemlight_orange_UHI : Chemlight_orange
{
effectsSmoke = "ChemlightLight_orange_UHI";
timeToLive = 300;
};
class Chemlight_orange_UHI_Infinite : Chemlight_orange_UHI
{
timeToLive = 1e+10;
};

// IR Strobes
class IRStrobeBase : GrenadeCore
{
dangerRadiusHit = 3;
audibleFire = 1;
deflectionSlowDown = 0.8;
hit = 2;
indirectHit = 0;
indirectHitRange = 0;
typicalspeed = 22;
visibleFire = 0.5;
visibleFireTime = 0.5;
};
class B_IRStrobe : IRStrobeBase
{
explosionTime = 1080010;
timeToLive = 1080000;
};
class I_IRStrobe : IRStrobeBase
{
explosionTime = 1080010;
timeToLive = 1080000;
typicalspeed = 24;
};
class O_IRStrobe : IRStrobeBase
{
explosionTime = 234010;
hit = 1;
timeToLive = 234000;
typicalspeed = 14;
};

// UGL Grenades
// Editing the one or two Grenade Ammo Classes here (Update: Ignorance is bliss)
class G_40mm_HE : GrenadeBase // M441
{
aiAmmoUsageFlags = "64 + 128"; // Missing???
airFriction = -0.0005; // -0.001 > -0.0005 Lowered to Value of Smoke Shells for uniformity(?)
audibleFire = 20; // 30 > 20. A GL from a distance would get drowned out from gunfire. Can't be louder than a P90, right?
caliber = 2; // Vanilla
dangerRadiusHit = -1; // Let Engine handle it
deflecting = 15;
deflectionSlowDown = 1.2;
explosionTime = -1; // Impact
fuseDistance = 2.4+random 0.601; // M441 uses M552 PD Fuze which arms 2.4 to 3m from Muzzle
hit = 80; // Vanilla
indirectHit = 12; // 8 > 12. I did a lot of calculations but going by what looks right has yielded actual results.
indirectHitRange = 4.5; // 6 > 5 IndirectHit calculates decreasing damage out to 4x of the IndirectHitRange value. Kill Radius of 5 deals 100% iH damage. Reduced to 4.5
suppressionRadiusHit = 15; // 3*Lethal Radius
typicalSpeed = 76.2; // 76ms Vel0
};

// Enabling Hidden HEDP Ammo
class G_40mm_HEDP : G_40mm_HE // I need to spawn a Submunition in the way HEAT does it.
{
caliber = 2; // 3 > 2 like HE
deleteParentWhenTriggered = 0; // Otherwise no Boom
fuseDistance = 14+random 13.001; // M433 uses M550 PIBD Fuze which arms 14 to 27m from Muzzle
hit = 80; // 100 > 80 Same as HE on direct Hit
indirectHit = 8.4375; // Secret Formula
indirectHitRange = 4.5; // From value
submunitionAmmo = "ammo_Penetrator_40mm_HEDP";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {0,0,-0.2};
submunitionInitSpeed = 1000.049;
submunitionParentSpeedCoef = 0;
triggerOnImpact = 1; // Most Important Setting here
typicalSpeed = 76.2; // 76ms Vel0
};

// G_40mm_HEDP_Bullet inherits wrong. Crashes my game. Making new class.
class ammo_Penetrator_40mm_HEDP : ammo_Penetrator_Base
{
caliber = 3; // 3.33 > 3
hit = 100; // Value from Original
warheadName = "HEAT";
};

// Changing Ignition Delay and Illumination Time of Flares.
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
// Applying Edits onto new Illumination Flare Ammo, then using that for Magazines instead.
class F_40mm_Red;
class F_40mm_Green;
class F_40mm_White_Illumination : F_40mm_White
{
timeToLive = 44+random 1.001;
};
class F_40mm_Yellow_Illumination : F_40mm_Yellow
{
timeToLive = 44+random 1.001;
};
class F_40mm_Red_Illumination : F_40mm_Red
{
timeToLive = 44+random 1.001;
};
class F_40mm_Green_Illumination : F_40mm_Green
{
timeToLive = 44+random 1.001;
};
// Creating (missing?) Infrared Flare Illumination class that takes advantage of the new Attenuation feature
class F_40mm_Cir_Illumination : F_40mm_Cir
{
affectedByWind = 1;
flareAirFriction = -1.1;
intensity = 35000;
class Attenuation
    {
    constant = 0.1;
    linear = 0.1;
    quadratic = 0.03;
    start = 15;
    };
};

// Also adjusting Smoke to not bounce away like Tigger. Any Smoke that inherits from this will work the same.
class G_40mm_Smoke : SmokeShell
{
caliber = 2;
deflecting = 45; // 30 > 45
deflectionSlowDown = 0.2; // 0.8 > 0.2
explosionTime = 2;
hit = 7; // 0 > 7 Ow
simulation = "shotSmoke"; // shotSmokeX is the main perpetrator
suppressionRadiusHit = 1.5; // Foomp
timeToLive = 91+random 2.001; // 90s from Deployment of smoke +/- 1 (+2 cause of 2s ignition delay)
typicalSpeed = 76.2;
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
explosionTime = 0.001; // Cannot be 0 (Engine doesn't recognize it?), cannot be -1 as the grenade does not re-impact so it is not triggered either.
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
typicalSpeed = 269.139;
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
typicalSpeed = 269.139;
};
class G_40mm_UGL_CrowdDispersal : G_40mm_UGL_Buckshot // M1029 Rubber Pellets. 48 Balls in .48 Cal so .48in diameter.
{
caliber = 0.1;
deleteParentWhenTriggered = 1;
hit = 2.4;
submunitionAmmo = "G_40mm_CrowdDispersal_Submunition_Deploy";
submunitionConeAngle = 7;
submunitionConeType[] = {"poissondisc",48};
submunitionInitSpeed = 374.904;
triggerTime = 0.005;
timeToLive = 10;
typicalSpeed = 374.904;
};
class G_40mm_CrowdDispersal_Submunition_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.00968994;
audibleFire = 40.01;
caliber = 0.1;
hit = 0.05;
timeToLive = 10;
typicalSpeed = 374.904;
};
class G_40mm_UGL_HE_Airburst : G_40mm_HE // M397A1 Jumping Airburst
{
fuseDistance = 14+random 13.001; // M397A1 uses M536 PD Fuze which arms 14 to 27m from Muzzle
hit = 7;
indirectHit = 0;
indirectHitRange = 0.333;
submunitionAmmo = "G_40mm_UGL_HE_Airburst_Boing";
submunitionConeAngle = -90;
submunitionConeAngleHorizontal = -180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "submunitionAutoleveling";
submunitionInitSpeed = 15.24;
submunitionParentSpeedCoef = 0;
suppressionRadiusHit = 1;
triggerOnImpact = 1;
typicalSpeed = 76.2; // 76ms Vel0
};
class G_40mm_UGL_HE_Airburst_Boing : G_40mm_HE
{
explosionTime = 0.1414; // 0.5 - 1.5m. At 45° 2.121m Pythagoras Yo
fuseDistance = 0.001; 
hit = 80.52;
indirectHit = 12;
indirectHitRange = 4.5;
suppressionRadiusHit = 15;
typicalSpeed = 15.24;
};
// G_40mm_UGL_CS I am not smart enough to make a script for this. RHS has one.
class G_40mm_UGL_LessLethal : G_40mm_HE // M1006 Rubber
{
aiAmmoUsageFlags = "64";
caliber = 0.1;
deflecting = 5;
explosionTime = -1;
explosive = 0;
explosionForceCoef = 1;
explosionSoundEffect = "";
fuseDistance = 0.001;
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
indirectHitRange = 8.1; // 9 > 8.1
suppressionRadiusHit = 27;
timeToLive = 14+random 5.001; // 14-19.
typicalSpeed = 76.505;
};
class G_40mm_GP25_VOG25PM : G_40mm_GP25_VOG25M
{
hit = 7;
indirectHit = 0;
indirectHitRange = 0.333;
submunitionAmmo = "G_40mm_GP25_VOG25PM_Boing";
submunitionConeAngle = -90;
submunitionConeAngleHorizontal = -180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "submunitionAutoleveling";
submunitionInitSpeed = 15.24;
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
indirectHitRange = 8.1;
suppressionRadiusHit = 27;
typicalSpeed = 15.24;
};
class G_40mm_GP25_VG40TB : G_40mm_GP25_VOG25M
{
explosionEffects = "ThermobaricExplosion";
indirectHit = 46.875;
indirectHitRange = 2.7; // Balancing w/dmg distr. function in mind
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
typicalSpeed = 76.505;
};
class G_40mm_GP25_VUS25_Poof : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
airFriction = -0.00049370;
caliber = 1.9748;
effectsSmoke = "SmokeShellPracticeEffect";
smokeColor[] = {0.671,0.17025,0.102,1}; // Red-Orange
explosionTime = 0.001;
simulation = "shotSmokeX";
timeToLive = 0.22+random 0.041;
typicalSpeed = 76.505;
};
class G_40mm_GP25_RLV_HEDP : G_40mm_GP25_VOG25M
{
indirectHit = 15;
indirectHitRange = 5.4; // From Website. > 5.4
suppressionRadiusHit = 18;
submunitionAmmo = "ammo_Penetrator_40mm_GP25_HEDP";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {0,0,-0.2};
submunitionInitSpeed = 1000.049;
submunitionParentSpeedCoef = 0;
triggerOnImpact = 1;
typicalSpeed = 76.505;
};
class ammo_Penetrator_40mm_GP25_HEDP : ammo_Penetrator_Base
{
airFriction = -0.00049370;
caliber = 2.9622;
hit = 100.65;
warheadName = "HEAT";
};
// Imagine finding info on Russian Smoke Grenades.
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
typicalSpeed = 76.505;
};
class G_40mm_GP25_VDG25_SmkScreen : G_40mm_Smoke
{
airFriction = -0.00049370;
caliber = 1.9748;
effectFly = "AmmoClassic";
effectsSmoke = "SmokeScreenUGLExplosion";
smokeColor[] = {1,1,1,1};
explosionTime = 0.001;
simulation = "shotSmokeX";
timeToLive = 19+random 2.001; // 20 +/-1
typicalSpeed = 76.505;
};
class F_40mm_GP25_FlareWhite : F_40mm_White_Illumination
{
airFriction = -0.00049370;
audibleFire = 20.13;
caliber = 1.9748;
triggerTime = 4.1+random 0.801;
timeToLive = 28.9+random 2.101; // 25s +/-1
typicalSpeed = 76.505;
};
class F_40mm_GP25_FlareWhite_Infinite : F_40mm_GP25_FlareWhite
{
timeToLive = 1e+10;
};
class F_40mm_GP25_FlareRed : F_40mm_GP25_FlareWhite
{
lightColor[] = {0.5,0.25,0.25,0};
};
class F_40mm_GP25_FlareRed_Infinite : F_40mm_GP25_FlareRed
{
timeToLive = 1e+10;
};
class F_40mm_GP25_FlareGreen : F_40mm_GP25_FlareWhite
{
lightColor[] = {0.25,0.5,0.25,0};
};
class F_40mm_GP25_FlareGreen_Infinite : F_40mm_GP25_FlareGreen
{
timeToLive = 1e+10;
};
class F_40mm_GP25_FlareYellow : F_40mm_GP25_FlareWhite
{
lightColor[] = {0.5,0.5,0.25,0};
};
class F_40mm_GP25_FlareYellow_Infinite : F_40mm_GP25_FlareYellow
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
indirectHitRange = 7.0875; // Claims of 12m of continious damage (whatever that means) probably refer to shrapnel. Armas iH formula works similar > 1.0875
suppressionRadiusHit = 23.625;
timeToLive = 12+random 4.001; // 12 to 16 why not 
typicalSpeed = 78.029; // As per source
};
class G_35mm_QLG10A_DFS10A : G_35mm_QLG10A_DFS10
{
hit = 7;
indirectHit = 0;
indirectHitRange = 0.333;
submunitionAmmo = "G_35mm_QLG10A_DFS10A_Boing";
submunitionConeAngle = -90;
submunitionConeAngleHorizontal = -180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "submunitionAutoleveling";
submunitionInitSpeed = 15.24;
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
indirectHitRange = 7.0875;
suppressionRadiusHit = 23.625;
typicalSpeed = 15.24;
};
class G_35mm_QLG10A_DFJ10 : G_35mm_QLG10A_DFS10
{
indirectHit = 13.125;
indirectHitRange = 4.725; // > 4.725
suppressionRadiusHit = 15.75;
submunitionAmmo = "ammo_Penetrator_35mm_QLG10A_DFJ10";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {0,0,-0.2};
submunitionInitSpeed = 1000.049;
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
typicalSpeed = 78.029;
};
class G_35mm_QLG10A_DFD10_White : G_40mm_Smoke
{
caliber = 1.7279;
explosionTime = 2;
timeToLive = 61+random 2.001; // 60s +/-1. Pure Guesswork.
typicalSpeed = 78.029;
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
typicalSpeed = 78.029;
};
class G_35mm_QLG10A_DFP10_Poof : G_40mm_Smoke
{
aiAmmoUsageFlags = "2";
airFriction = -0.00043199;
caliber = 1.7279;
effectsSmoke = "SmokeShellPracticeEffect";
smokeColor[] = {0.6697,0.455,0,1}; // Yellow-Orange
explosionTime = 0.001;
simulation = "shotSmokeX";
timeToLive = 0.22+random 0.041;
typicalSpeed = 78.029;
};

// Launcher Ammo

// 9K115-2 Metis-M1
class M_Vorona_HEAT : MissileBase
{
allowAgainstInfantry = 0;
fuseDistance = 80.001; // 50 > 80m
suppressionRadiusHit = 14;
timeToLive = 9.1;
};
class M_Vorona_HE : M_Vorona_HEAT
{
allowAgainstInfantry = 1;
suppressionRadiusHit = 32;
};

// M3A1 MAAWS. Velocity Changes are only applied when ACE is loaded as its XM157 Framework is required to simulate a functioning FCS (Otherwise Reticle would be all wrong.)
class R_MRAAWS_HEAT_F : RocketBase // HEAT 751
{
airLock = 1;
fuseDistance = 20+random 20.001;
//maxSpeed = 210.008;
suppressionRadiusHit = 12;
timeToLive = 13.4;
typicalSpeed = 210.008;
};
class R_MRAAWS_HEAT55_F : R_MRAAWS_HEAT_F // HEAT 551
{
fuseDistance = 5+random 3.001;
//maxSpeed = 253.899;
suppressionRadiusHit = 12;
timeToLive = 13.4;
typicalSpeed = 253.899;
};
class R_MRAAWS_HE_F : R_MRAAWS_HEAT_F // HE 441D
{
fuseDistance = 40+random 30.001;
//maxSpeed = 253.899;
suppressionRadiusHit = 24;
timeToLive = 13.4;
typicalSpeed = 253.899;
};

// Mini-Spike.
class M_Titan_AT : MissileBase // Replacing values with AP to get a working AP Warhead that can lock in Vanilla and ACE as thats apparently the only way.
{
cost = 500;
fuseDistance = 50.001;
maxSpeed = 12;
typicalSpeed = 75;
maxControlRange = 1500;
missileLockMaxDistance = 1500;
missileManualControlCone = 60;
suppressionRadiusHit = 13.2;
timeToLive = 12.1;
thrust = 40;
thrustTime = 5;
    class Components : Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent // : SensorTemplateIR   Won't let me inherit
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
                    maxRange = 1500; // Changed
                    minRange = 50;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                    maxRange = 1500; // Same
                    minRange = 50;
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
flightProfiles[] = {"Direct","TopDown"};
lockType = 0;
suppressionRadiusHit = 40;
timeToLive = 12.1;
    class Components : Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent // : SensorTemplateIR
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
                    minRange = 50;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                    maxRange = 1500;
                    minRange = 50;
                    objectDistanceLimitCoef = 1;
                    viewDistanceLimitCoef = 1;
                    };
                };
            };
        };
    };
};

// NLAW
class M_NLAW_AT_F : MissileBase
{
fuseDistance = 20.001; 
maxSpeed = 199.949;
suppressionRadiusHit = 9.6;
typicalSpeed = 199.949;
timeToLive = 6.8;
};

// RPG-32
class R_PG32V_F : RocketBase
{
airLock=1;
allowAgainstInfantry = 1;
fuseDistance = 20+random 20.001; // Based on MRAWS
typicalSpeed = 139.904;
suppressionRadiusHit = 12;
timeToLive = 14.1;
};
class R_TBG32V_F : R_PG32V_F
{
suppressionRadiusHit = 24;
};

// RPG-7
class R_PG7_F : RocketBase
{
airLock=1;
allowAgainstInfantry = 1;
fuseDistance = 5.001;
initTime = 0.078; // 11m
maxSpeed = 294.132;
suppressionRadiusHit = 14.4;
timeToLive = 6.65; // 920m
typicalSpeed = 294.132;
};

// Titan MPRL
class M_Titan_AA : MissileBase
{
fuseDistance = 80.001;
maxControlRange = 4800;
maxSpeed = 744.932;
missileKeepLockedCone = 45;
missileLockCone = 3;
missileLockMaxDistance = 4800;
missileLockMaxSpeed = 2000;
missileLockMinDistance = 161;
suppressionRadiusHit = 24;
timeToLive = 13.9;  // 4.8km
typicalSpeed = 744.932;
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
indirectHitRange = 4.05; // > 4.05
whistleDist = 14.5;
};

// Adjusting Flare Gun Flares
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

// Mines
class APERSMine_Range_Ammo : MineBase
{
hit = 10;
indirectHit = 10;
indirectHitRange = 5;
mineInconspicuousness = 70; // 50 > 70
mineTrigger = "RangeTriggerShort";
};
class ATMine_Range_Ammo : MineBase
{
hit = 2000;
indirectHit = 2000;
indirectHitRange = 1.5; // 1 > 1.5
mineInconspicuousness = 40;
};
class APERSBoundingMine_Range_Ammo : BoundingMineBase
{
hit = 15; // 20 V, 10 ACE
indirectHit = 15;
indirectHitRange = 20;
mineBoundingDist = 2;
mineBoundingTime = 0.2; // 0.3 > 0.2
mineInconspicuousness = 50; // 40 > 50
};
class SLAMDirectionalMine_Wire_Ammo : DirectionalBombBase
{
explosionAngle = 45; // 60 > 45
hit = 750; // V 1000 is excessive, 750
indirectHit = 750;
indirectHitRange = 7.62;
mineInconspicuousness = 25; // 20 > 25
};
class ClaymoreDirectionalMine_Remote_Ammo : DirectionalBombBase
{
explosionAngle = 30; // 60 > 30
hit = 20; // 40 > 20
indirectHit = 20;
indirectHitRange = 66.6667; // 30 > 66.666* (*1.5 = 20% of iH at 100m / Max effective Range, 4)
mineInconspicuousness = 30; // 20 > 30
};
class APERSTripMine_Wire_Ammo : DirectionalBombBase // Circumvented
{
hit = 15;
indirectHit = 15;
indirectHitRange = 10;
mineInconspicuousness = 30;
};
// New classes to Offset Explosion as Submunition
class APERSTripMine_Wire_Ammo_Deploy : GrenadeHand
{
hit = 15;
indirectHit = 15;
indirectHitRange = 10;
mineInconspicuousness = 30;
cost = 200;
CraterEffects = "MineCrater";
craterShape = "\A3\weapons_f\empty.p3d";
craterWaterEffects = "ImpactEffectsWater";
explosionTime = 0.001;
explosionAngle = 360;
explosionEffects = "MineExplosion";
icon = "iconExplosiveAP";
mapsize = 1;
model = "";
mineCanBeReactivated = 0;
mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_tripwire_d";
suppressionRadiusHit = -1;
};
class APERSTripMine_Wire_Ammo_Init : APERSTripMine_Wire_Ammo
{
CraterEffects = "";
explosionEffects = "";
hit = 0;
indirectHit = 0;
indirectHitRange = 0;
simulation = "shotMine";
submunitionAmmo[] = {"APERSTripMine_Wire_Ammo_Deploy",1};
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {-1.4,0.2,0};
};

class APERSMineDispenser_Ammo : PipeBombBase
{
hit = 0; // 1 > 0
indirectHit = 0;
indirectHitRange = 0;
mineInconspicuousness = 5;
};
class IEDLandBig_Remote_Ammo : PipeBombBase
{
hit = 2000;
indirectHit = 2000;
indirectHitRange = 5;
mineInconspicuousness = 30;
};
class IEDLandSmall_Remote_Ammo : PipeBombBase
{
hit = 1500; // 1000 > 1500
indirectHit = 1500;
indirectHitRange = 5; // 3 > 5
mineInconspicuousness = 40; // 50 > 40
};
class IEDUrbanBig_Remote_Ammo : PipeBombBase
{
hit = 2060;
indirectHit = 2060; // 2000 > 2057, rounding.
indirectHitRange = 5;
mineInconspicuousness = 20;
};
class IEDUrbanSmall_Remote_Ammo : PipeBombBase
{
hit = 560;
indirectHit = 560; // 1000 > 557
indirectHitRange = 5; // 3 > 5
mineInconspicuousness = 50; // 40 > 50
};
class DemoCharge_Remote_Ammo : PipeBombBase
{
hit = 770; // 1000 in Vanilla, 500 in ACE
indirectHit = 770;
indirectHitRange = 5; // 3 V, 7 ACE
mineInconspicuousness = 15; // 5 > 15
};
class SatchelCharge_Remote_Ammo : PipeBombBase
{
hit = 3000;
indirectHit = 3000;
indirectHitRange = 5;
mineInconspicuousness = 5; // 3 > 5
};
class APERSMineDispenser_Mine_Ammo : APERSMine_Range_Ammo
{
hit = 7;
indirectHit = 7;
indirectHitRange = 4; // 3 > 4
mineInconspicuousness = 60;
};
class TrainingMine_Ammo : APERSMine_Range_Ammo
{
hit = 1;
indirectHit = 0;
indirectHitRange = 0;
mineInconspicuousness = 15; // 30 > 15
mineTrigger = "RangeTriggerShort";
};

// Adding Rake
class RakeMine_Ammo : APERSMineDispenser_Ammo
{
defaultMagazine = "RakeMine_Mag";
explosionEffects = "PersonDust";
hit = 6;
indirectHit = 6;
indirectHitRange = 0.6;
mineInconspicuousness = 80;
mineTrigger = "RangeTriggerShort";
mineModelDisabled = "\A3\Weapons_F\mines\rake";
model = "\A3\Weapons_F\mines\rake";
soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01",1,1,20};
soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01",1.99526,1,20};
soundHit1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_midShot_01",1,1,100};
soundHit2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_midShot_02",1,1,100};
soundHit3[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_midShot_03",1,1,100};
soundHit4[] = {"",1,1,100};
SoundSetExplosion[] = {""};
soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Trigger_01",1,1,20};
submunitionAmmo = "RakeMine_Upright";
submunitionAutoleveling = 0;
submunitionConeAngle = 90;
submunitionConeAngleHorizontal = 180;
submunitionConeType[] = {"randomupcone", 1};
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitSpeed = 0.8;
submunitionParentSpeedCoef = 0;
suppressionRadiusHit = 1;
triggerWhenDestroyed = 1;
};
class APERSMineDispenser_Deploy;
class RakeMine_Upright : APERSMineDispenser_Deploy
{
defaultMagazine = "RakeMine_Mag";
explosionEffects = "PersonDust";
explosionTime = 0.3;
hit = 0;
indirectHit = 0;
indirectHitRange = 0;
mineFloating = 0;
mineInconspicuousness = 20;
model = "\A3\Weapons_F\mines\rake";
submunitionAmmo = "";
submunitionAutoleveling = 1;
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitSpeed = 0;
};
// Creating Flare Tripwire
class FlareTripMine_Wire_Ammo_Deploy : F_40mm_White_Illumination // New
{
timeToLive = "55+random 5.001";
triggerTime = "0.001";
};
// Creating new Class to offset Flare as a Submunition.
class FlareTripMine_Wire_Ammo_Init : APERSTripMine_Wire_Ammo
{
CraterEffects = "";
defaultMagazine = "FlareTripMine_Mag";
explosionEffects = "";
hit = 0;
indirectHit = 0;
indirectHitRange = 0;
mineModelDisabled = "\A3\Weapons_F\explosives\Flare_tripwire_d";
model = "\A3\Weapons_F\explosives\Flare_tripwire";
simulation = "shotMine";
soundHit[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3",1.25893,1,100};
SoundSetExplosion[] = {};
soundTrigger[] = {"",1,1};
submunitionAmmo[] = {"FlareTripMine_Wire_Ammo_Deploy",1};
submunitionDirectionType = "SubmunitionModelDirection";
submunitionInitialOffset[] = {-1.505,0.12,0};
};
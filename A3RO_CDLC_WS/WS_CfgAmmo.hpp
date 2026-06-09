class BulletBase;
class B_12Gauge_Slug_NoCartridge;
class B_12Gauge_Pellets_Submunition;
class B_12Gauge_Pellets_Submunition_Deploy;
class G_40mm_HE;
class G_40mm_Smoke;
class BombCluster_01_Ammo_F;

class lxWS_B_SG_HE : B_12Gauge_Slug_NoCartridge // FRAG-12
{ // Adjusting Speed so as to achieve 274.32 out of the AA12 Barrel which is significantly shorter
fuseDistance = 3.001;
timeToLive = 15; // Blanco
typicalSpeed = 298.095;
};

class lxWS_B_SG_Smoke : B_12Gauge_Slug_NoCartridge
{
hit = 2;
timeToLive = 15;
typicalSpeed = 487.68; 
};

// Adjusting 40mm Pellets Munition
class B_40mm_Pellets_Submunition_Deploy : B_12Gauge_Pellets_Submunition_Deploy 
{
airFriction = -0.00257322;
caliber = 0.8523;
hit = 1.4884;
typicalSpeed = 269.139;
};

class B_40mm_Pellets_Submunition_lxWS : B_12Gauge_Pellets_Submunition // Applying M576 Config to WS Grenade
{
hit = 29.7687;
submunitionAmmo = "B_40mm_Pellets_Submunition_Deploy";
submunitionConeAngle = 2;
submunitionConeType[] = {"poissondisc",20};
submunitionInitSpeed = 269.139;
triggerTime = 0.005;
timeToLive = 15;
typicalSpeed = 269.139;
};

// Adjusting WS Rifle Grenades
class lxWS_G_40mm_HE : G_40mm_HE
{
caliber = 6; // 3 > 6 Since there is no Submunition
explosive = 0.75; // 75% of dmg is explosive, 25% of dmg is kinetic
fuseDistance = 0; // Armed upon firing
hit = 106.66; // 40 > 106. Compared to HEDP, it has a very limited Range. Its more explosive though. (HEDP is 76, HE is 80, HEDP Penetrator is 100)
indirectHit = 10; // 9 > 10
indirectHitRange = 12; // 8 > 12 As that is the Kill Range
typicalSpeed = 74.981;
};

class lxWS_G_50mm_AT : lxWS_G_40mm_HE
{
caliber = 4;
fuseDistance = 3.001; 
hit = 70; // 100 > 70 Penetrator does most Damage
indirectHit = 6; // 3 > 6
indirectHitRange = 3;
typicalSpeed = 74.981;
};

class lxWS_G_50mm_Smoke : G_40mm_Smoke
{
deflecting = 15; // 10 > 15
deflectionSlowDown = 0.4; // 0.8 > 0.4
deleteParentWhenTriggered = 1;
effectsSmoke = "SmokeShellWhite";
hit = 4; // 1 > 4 Wouldn't want that to hit my head
indirectHitRange = 0.4; // 0.2 > 0.4. No iH. Maybe Camshake?
simulation = "shotDeploy"; // From shotSmokeX
submunitionAmmo = "lxWS_G_50mm_Smoke_Deploy";
submunitionDirectionType = "SubmunitionModelDirection";
submunitionParentSpeedCoef = 0;
submunitionInitSpeed = 0;
timeToLive = 15;
fuseDistance = 0; // No Info
triggerOnImpact = 1;
typicalSpeed = 74.981;
};

// Creating new Deployed Smoke Class to account for TTL subtracting from Smoke time.
class lxWS_G_50mm_Smoke_Deploy : G_40mm_Smoke
{
airFriction = -0.001;
deflecting = 15;
deflectionSlowDown = 0.4;
effectsSmoke = "SmokeShellWhiteEffect";
explosionTime = 0.001;
fuseDistance = 0;
hiddenSelections[] = {"camo"};
hiddenSelectionsTextures[] = {"\lxWS\weapons_f_lxWS\Rifles\Slr\data\grenades_co.paa"};
hit = 4;
indirectHitRange = 0.5;
model = "\lxWS\weapons_f_lxWS\Ammo\lxWS_SLR_Grenade_Smoke.p3d";
timeToLive = 39+random 2.001;
typicalSpeed = 74.981;
};

class G_ZGLA_85 : BombCluster_01_Ammo_F
{
airFriction = -0.0005;
audibleFire = 20;
autoSeekTarget = 0;
caliber = 2;
cmImmunity = 1;
cost = 10;
CraterEffects = "GrenadeCrater";
dangerRadiusHit = -1;
deflecting = 5;
explosionEffects = "GrenadeExplosion";
explosionForceCoef = 4;
explosionTime = 0;
fuseDistance = "0.1";
laserLock = 0;
muzzleEffect = ""; 
model = "\A3\weapons_f\ammo\UGL_slug";
proxyShape = ""; 
simulation = "shotShell";
submunitionAmmo[] = {"Mo_cluster_Bomb_01_F",0.93,"BombCluster_01_UXO_deploy",0.07};
submunitionConeType[] = {"randomcenter",30}; // Down from 85, don't be absurd :)
submunitionInitSpeed = 0;
thrustTime = 1.5;
timeToLive = 60;
trackLead = 1;
triggerDistance = 150;
submunitionParentSpeedCoef = 1;
typicalSpeed = 76.2;
warheadName = "HE";
weaponLockSystem = 0;
};
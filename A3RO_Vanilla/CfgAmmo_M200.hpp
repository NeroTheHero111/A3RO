// Editing 408 Ammo Class to have proper Radius settings. Values inbetween those of .338LM and .50BMG. Also transferring some fixes Ive seen in the ACE Config.
class B_408_Ball : BulletBase // Deserttech 446 Gr Premium Match
{
airLock = 1;
audibleFire = 109.72;
dangerRadiusBulletClose = 11;
dangerRadiusHit = 15;
hit = 21.94;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
suppressionRadiusBulletClose = 8;
suppressionRadiusHit = 11;
timeToLive = 15;
tracerEndTime = 4.35; // No Tracer, using 12.7x99
tracerScale = 1.6701;
tracerStartTime = 0.137;
typicalSpeed = 832.104;
};

// Creating.375 Chey Tac Ammo. Values based off of .338LM, .408CT and .50BMG
class B_375_Ball : BulletBase // Desertech 352 Gr Premium Match
{
airFriction = -0.00044108;
airLock = 1;
audibleFire = 123.79;
caliber = 2.3563;
cartridge = "FxCartridge_127";
cost = 7;
dangerRadiusBulletClose = 11;
dangerRadiusHit = 15;
hit = 24.75;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
suppressionRadiusBulletClose = 8;
suppressionRadiusHit = 11;
timeToLive = 14;
tracerEndTime = 4.35;
tracerScale = 1.6701;
tracerStartTime = 0.137;
typicalSpeed = 938.784;
visibleFire = 5;
visibleFireTime = 3;
	class CamShakeExplode
	{
	distance = 9.48683;
	duration = 0.6;
	frequency = 20;
	power = 3.16228;
	};
	class CamShakeFire
	{
	distance = 0;
	duration = 0;
	frequency = 0;
	power = 0;
	};
	class CamShakeHit
	{
	distance = 1;
	duration = 0.4;
	frequency = 20;
	power = 10;
	};
	class CamShakePlayerFire
	{
	distance = 0;
	duration = 0;
	frequency = 0;
	power = 0;
	};
};

// Adjusting 12.7x108. Turning it into MG Ammo
class B_127x108_Ball : BulletBase // 745 Gr 57-BZ-542 API
{
airFriction = -0.00086;
audibleFire = 116.58; // Of HMG
caliber = 2.7703;
timeToLive = 12.5;
typicalSpeed = 860;
tracerEndTime = 3.027; // Min 2.9s so
tracerScale = 2.2771;
tracerStartTime = 0.127;
visibleFire = 8;
};
class B_127x108_APDS : B_127x108_Ball // Changing to 680 Gr Tulammo Hunting 
{
airFriction = -0.00060138; // Of Sniper
audibleFire = 113.4; // Of Sniper
caliber = 3.0649;
cost = 5;
hit = 37.56; // Of Anti-Mat
tracerEndTime = 1.75;
typicalSpeed = 923;
};
// Creating new 12.7x108 Sniper Ammo
class B_127x108_7N34_Ball : B_127x108_APDS // 914 Gr 7N34
{
audibleFire = 103.51;
hit = 31.94;
typicalSpeed = 785;
};

// Adjusting 12.7x99
class B_127x99_Ball : BulletBase // 706.7 Gr M33
{
hit = 36.09;
timeToLive = 12.5;
tracerEndTime = 4.35;
tracerScale = 2.2771;
tracerStartTime = 0.137;
typicalSpeed = 887;
visibleFireTime = 3;
};
class B_127x99_SLAP : B_127x99_Ball
{
airFriction = -0.00050486;
audibleFire = 165.28;
hit = 49.61;
tracerScale = 1.3368; // Tungsten Penetrator Type Beat
typicalSpeed = 1219.2; // Caliber Left at 3.4 as its a Penetrator so my regular Calculations don't apply
};

// Creating IR Ammo
class B_127x99_Ball_IR : B_127x99_Ball
{
nvgOnly = 1;
};
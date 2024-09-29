// Editing 408 Ammo Class to have proper Radius settings. Values inbetween those of .338LM and .50BMG. Also transferring some fixes Ive seen in the ACE Config.
class B_408_Ball : BulletBase // Deserttech 446 Gr Premium Match
{
airLock = 1;
audibleFire = 109.72;
dangerRadiusBulletClose = 11;
dangerRadiusHit = 15;
hit = 21.94;
suppressionRadiusBulletClose = 8;
suppressionRadiusHit = 11;
tracerScale = 1.3;
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
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
suppressionRadiusBulletClose = 8;
suppressionRadiusHit = 11;
timeToLive = 10;
tracerEndTime = 2.15957;
tracerScale = 1.3;
tracerStartTime = 0.075;
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

// Editing 12.7x108
class B_127x108_Ball : BulletBase
{
typicalSpeed = 860;
};
class B_127x108_APDS : B_127x108_Ball // Changing to 681 Gr 
{
typicalSpeed = 923;
};

// Creating IR-DIM Ammo
class B_127x108_Ball_IR : B_127x108_Ball
{
nvgOnly = 1;
tracerEndTime = 2.15957;
};

// Creating 12.7x99 and IR-DIM Ammo
class B_127x99_Ball : BulletBase
{
typicalSpeed = 900;
};
class B_127x99_Ball_IR : B_127x99_Ball
{
nvgOnly = 1;
tracerEndTime = 2.15957;	
};

// Creating .375 IR-DIM Ammo
class B_375_Ball_IR : B_375_Ball
{
nvgOnly = 1;
};

// Creating .408 IR-DIM Ammo
class B_408_Ball_IR : B_408_Ball
{
nvgOnly = 1;
};
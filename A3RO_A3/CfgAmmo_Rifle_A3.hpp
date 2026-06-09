// Adjusting 556x45
class B_556x45_Ball : BulletBase // Winchester 62 Gr M855 
{
aiAmmoUsageFlags = "64 + 128 + 256";
audibleFire = 33.72;
hit = 8.6723;
model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
timeToLive = 11;
tracerEndTime = 2.1;
tracerScale = 1;
tracerStartTime = 0.089;
typicalSpeed = 913.486;
};

// Creating .223 Remington Ammo. Values based off of 5.56x45 NATO and Federal .223 55gr. Adding ACE Tracer Config.
// No Red / Green Tracer because .223 is a Civvie Cartidge, Red is BLUFOR, Green is OPFOR and Yellow is INDFOR
class B_223REM_Ball : BulletBase // Federal 55 Gr M193/55
{
airFriction = -0.00120000;
audibleFire = 37.20;
caliber = 0.8635;
cartridge = "FxCartridge_556";
cost = 1;
dangerRadiusBulletClose = 8;
dangerRadiusHit = 12;
hit = 9.5664;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
suppressionRadiusBulletClose = 6;
suppressionRadiusHit = 8;
timeToLive = 12;
tracerEndTime = 2.1;
tracerScale = 1;
tracerStartTime = 0.089;
typicalSpeed = 1007.669;
waterFriction = -0.3;
	class CamShakeExplode
	{
	distance = 6.7082;
	duration = 0.4;
	frequency = 20;
	power = 2.23607;
	};
	class CamShakeHit
	{
	distance = 1;
	duration = 0.2;
	frequency = 20;
	power = 5;
	};
};

// 5.45 Adjusting TypicalSpeed
class B_545x39_Ball_F : BulletBase // 7N6 FMJ
{
timeToLive = 11;
tracerEndTime = 1.55;
tracerScale = 0.9824;
tracerStartTime = 0.123;
typicalSpeed = 890.016;
};

// Creating 5.56 IR-DIM Ammo
class B_556x45_Ball_IR : B_556x45_Ball
{
nvgOnly = 1;	
};

// UW Ammo
class B_556x45_dual : B_556x45_Ball // Applying 556 Values
{
airFriction = -0.00120000;
audibleFire = 37.20;
caliber = 0.869565;
cartridge = "FxCartridge_556";
hit = 9.5664;
nvgOnly = 0;
suppressionRadiusBulletClose = 3;
};

// Adjusting unused .22LR Ammo
class B_56x15_dual : BulletBase // SK 40 Gr Semi-Auto
{
airFriction = -0.00120421;
audibleFire = 12.73;
caliber = 0.384790;
cartridge = "FxCartridge_556";
hit = 3.2753;
nvgOnly = 0;
timeToLive = 11; // Untested Needs Fix
tracerEndTime = 2.1; // Untested Needs Fix
tracerScale = 1.0035;
tracerStartTime = 0;
typicalSpeed = 345.034;
};

// .50 Beowulf (12.7x42) Adjusting Stats
class B_50BW_Ball_F : BulletBase // Alexander Arms Hawk 400 Gr JSP. Its supposed to be a Rifle Cartridge used on the AR-15 Platform
{
airFriction = -0.00225913; // Using Pistol Values as Reference
audibleFire = 46.22;
caliber = 2.2334;
hit = 7.7046;
timeToLive = 8.8;
tracerEndTime = 2.65; // Using 9x21 Values
tracerScale = 2.2368; // Except this
tracerStartTime = 0.256;
typicalSpeed = 554.736;
};
// 5.8 Adjusting TypicalSpeed
class B_580x42_Ball_F : BulletBase // 64Gr DPB87
{
timeToLive = 11;
tracerEndTime = 1.75;
tracerScale = 1.0526;
tracerStartTime = 0.104;
typicalSpeed = 930.25;
};

// Adjusting 6.5 Grendel
class B_65x39_Caseless : BulletBase
{
timeToLive = 12;
tracerEndTime = 2;
tracerScale = 1.1754;
tracerStartTime = 0.196;
typicalSpeed = 786.384;
};
class B_65x39_Case : B_65x39_Caseless // Hornady 123 Gr FMJ Frontier®
{
timeToLive = 12;
tracerEndTime = 2;
tracerScale = 1.1754;
tracerStartTime = 0.196;
typicalSpeed = 786.384;
};

// Creating 6.5 Grendel IR-DIM Ammo
class B_65x39_Case_IR : B_65x39_Case
{
nvgOnly = 1;	
};
class B_65x39_Minigun_Caseless : SubmunitionBullet
{
aiAmmoUsageFlags = 64;
audibleFire = 40;
caliber = 3.2;
timeToLive = 24; // x2 Because Helicopter
tracerEndTime = 2;
tracerScale = 1.1754;
tracerStartTime = 0.196;
typicalSpeed = 780.898;
};
class B_65x39_Minigun_Caseless_Red_splash : B_65x39_Caseless
{
timeToLive = 24; // x2 Because Helicopter
tracerEndTime = 2;
tracerScale = 1.1754;
tracerStartTime = 0.196;
typicalSpeed = 780.898;
};

// 7.62 Adjusting TypicalSpeed
class B_762x39_Ball_F : BulletBase // M43 FMJ
{
timeToLive = 10;
tracerEndTime = 1.3;
tracerScale = 1.3894;
tracerStartTime = 0.105;
typicalSpeed = 717.804;	
};
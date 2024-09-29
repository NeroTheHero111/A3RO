// Adjusting 556x45
class B_556x45_Ball : BulletBase // Winchester 62 Gr M855 
{
aiAmmoUsageFlags = "64 + 128 + 256";
audibleFire = 34.85;
hit = 8.96;
tracerEndTime = 1.57123;
tracerStartTime = 0.073;
typicalSpeed = 943.9656;
};

// Creating .223 Remington Ammo. Values based off of 5.56x45 NATO and Federal .223 55gr. Adding ACE Tracer Config.
class B_223Rem_Ball : BulletBase // Federal 55 Gr M193/55
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
timeToLive = 6;
tracerEndTime = 1.57123;
tracerScale = 1;
tracerStartTime = 0.073;
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
class B_223Rem_Ball_Tracer_Green : B_223Rem_Ball
{
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
};
class B_223Rem_Ball_Tracer_Red : B_223Rem_Ball
{
model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

// Creating 5.56 IR-DIM Ammo
class B_556x45_Ball_IR : B_556x45_Ball
{
nvgOnly = 1;	
};

// Creating .223 IR-DIM Ammo
class B_223Rem_Ball_IR : B_223Rem_Ball
{
nvgOnly = 1;
};

// Creating 6.5 Grendel IR-DIM Ammo
class B_65x39_Caseless;
class B_65x39_Case : B_65x39_Caseless
{
typicalSpeed = 859.2312;
};
class B_65x39_Case_IR : B_65x39_Case
{
nvgOnly = 1;	
};

// Creating 5.45 IR-DIM Ammo
class B_545x39_Ball_F : BulletBase
{
typicalSpeed = 890;
};
class B_545x39_Ball_IR : B_545x39_Ball_F
{
nvgOnly = 1;	
};

// Creating 7.62 IR-DIM Ammo
class B_762x39_Ball_F : BulletBase
{
typicalSpeed = 715;		
};
class B_762x39_Ball_IR : B_762x39_Ball_F
{
nvgOnly = 1;	
};

// Adjusting TypicalSpeed
class B_580x42_Ball_F : BulletBase
{
typicalSpeed = 930;
};

// Creating 5.8 IR-DIM Ammo
class B_580x42_Ball_IR : B_580x42_Ball_F
{
nvgOnly = 1;	
};
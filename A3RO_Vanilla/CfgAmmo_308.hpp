// Adjusting 7.62x51 NATO Config to match Magazine.
class B_762x51_Ball : BulletBase // IMI Samson 150 Gr M80 FMJ
{
audibleFire = 44.63;
hit = 11.50;	
tracerEndTime = 2.15957;
typicalSpeed = 843.0768;
};

// Adjusting 7.62x54mmR Config to use Green Tracer. Typicalspeed.
class B_762x54_Ball : B_762x51_Ball
{
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
typicalSpeed = 800;
};

// Creating .308 Winchester Ammo. Values based off of 7.62x51 NATO
class B_308WIN_Ball : BulletBase // Winchester 147 Gr FMJ
{
airFriction = -0.00100000;
airLock = 1;
audibleFire = 46.94;
caliber = 1.6;
cartridge = "";
cost = 1.2;
dangerRadiusBulletClose = 8;
dangerRadiusHit = 12;
hit = 12.10;
model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
suppressionRadiusBulletClose = 6;
suppressionRadiusHit = 8;
timeToLive = 6;
tracerEndTime = 2.15957;
tracerScale = 0.6;
tracerStartTime = 0.075;
typicalSpeed = 886.6632;
visibleFire = 3;
visibleFireTime = 2;
	class CamShakeExplode
	{
	distance = 5.19615;
	duration = 0.4;
	frequency = 20;
	power = 1.73205;
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
	duration = 0.2;
	frequency = 20;
	power = 3;
	};
	class CamShakePlayerFire
	{
	distance = 0;
	duration = 0;
	frequency = 0;
	power = 0;
	};
};

// Creating 20mm Railgun Slug
class Sh_75mm_Railgun_APFSDS;
class B_20mm_Railgun_APFSDS : Sh_75mm_Railgun_APFSDS
{
aiAmmoUsageFlags = "64 + 128 + 256 + 512";
airFriction = -0.000092756; // Sniper Config with an added Zero infront
audibleFire = 120;
caliber = 8.8888;	
cartridge = "";
deflecting = 16;
cost = 15;
hit = 213.33333;
simulation = "shotBullet";
timeToLive = 15;
typicalSpeed = 2058;
};

// Creating .300 Winchester Magnum. Values based off of 308
class B_300WM_Ball : BulletBase // Federal 190 Gr Gold Medal Sierra MatchKing
{
airFriction = -0.00055615;
airLock = 1;
audibleFire = 80.02;
caliber = 1.8147;
cartridge = "";
cost = 1.2;
dangerRadiusBulletClose = 8;
dangerRadiusHit = 12;
hit = 16;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
suppressionRadiusBulletClose = 6;
suppressionRadiusHit = 8;
timeToLive = 6;
tracerEndTime = 2.15957;
tracerScale = 1.2;
tracerStartTime = 0.073;
typicalSpeed = 881.4816;
visibleFire = 3;
visibleFireTime = 2;
	class CamShakeExplode
	{
	distance = 5.19615;
	duration = 0.4;
	frequency = 20;
	power = 1.73205;
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
	duration = 0.2;
	frequency = 20;
	power = 3;
	};
	class CamShakePlayerFire
	{
	distance = 0;
	duration = 0;
	frequency = 0;
	power = 0;
	};
};

// Creating .300 WM IR-DIM Ammo
class B_300WM_Ball_IR : B_300WM_Ball
{
nvgOnly = 1;
};

// Tracer Value taken from ACE 7.62x51
class B_338_Ball : BulletBase // Sierra 250 Gr MatchKing
{
tracerEndTime = 2.15957;
tracerScale = 1.2;
tracerStartTime = 0.073;
typicalSpeed = 881.1768;
};

// Creating .338 LM IR-DIM Ammo
class B_338_Ball_IR : B_338_Ball
{
nvgOnly = 1;	
};

// Creating .308 Winchester IR-DIM Ammo
class B_308WIN_Ball_IR : B_308WIN_Ball
{
nvgOnly = 1;	
};

// Creating 7.62 IR-DIM Ammo
class B_762x51_Ball_IR : B_762x51_Ball
{
nvgOnly = 1;	
};

// Creating 12.7x55 IR-DIM Ammo
class B_127x54_Ball : BulletBase
{
tracerStartTime = 0.073;
typicalSpeed = 300;
};
class B_127x54_Ball_IR : B_127x54_Ball
{
nvgOnly = 1;
};

// Creating .338 Norma Magnum IR-DIM Ammo
class B_338_NM_Ball;
class B_338_NM_Ball_IR : B_338_NM_Ball
{
nvgOnly = 1;
};

// Adjusting 9.3 Brenneke
class B_93x64_Ball : BulletBase
{
tracerEndTime = 2.15957;	
tracerStartTime = 0.073;
typicalSpeed = 780;
};

// Creating 9.3 IR-DIM Ammo
class B_93x64_Ball_IR : B_93x64_Ball
{
nvgOnly = 1;
};

// 7.62 Russian
class B_762x54_Ball_IR : B_762x54_Ball
{
nvgOnly = 1;
};
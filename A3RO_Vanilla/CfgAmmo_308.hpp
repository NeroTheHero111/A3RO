// Adjusting 7.62x51 NATO Config to match Magazine.
class B_762x51_Ball : BulletBase // IMI Samson 150 Gr M80 FMJ
{
audibleFire = 44.63;
hit = 11.50;	
timeToLive = 11.5;
tracerEndTime = 3;
tracerScale = 1.3771;
tracerStartTime = 0.099;
typicalSpeed = 843.0768;
};

// Creating 7.62 IR-DIM Ammo
class B_762x51_Ball_IR : B_762x51_Ball
{
nvgOnly = 1;	
};

class B_762x51_Minigun_Tracer_Red : SubmunitionBullet // From Regular 7.62
{
airFriction = -0.001;
audibleFire = 44.63;
caliber = 1.6;
hit = 11.50;	
timeToLive = 23; // 2x Helicopter Ammo
tracerEndTime = 3;
tracerScale = 1.3771;
tracerStartTime = 0.099;
typicalSpeed = 843.0768;
};
class B_762x51_Minigun_Tracer_Red_splash : B_762x51_Ball
{
caliber = 1.6;
hit = 11.50;	
};

// Adjusting 7.62x54mmR Config to use Green Tracer. Typicalspeed.
class B_762x54_Ball : B_762x51_Ball
{
airFriction = -0.00100891;
audibleFire = 43.67;
caliber = 1.7358;
hit = 11.25;
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
timeToLive = 11.5;
tracerEndTime = 1.7;
tracerScale = 1.3894;
tracerStartTime = 0.1375;
typicalSpeed = 825;
};

// Creating 7.62x54R 7N14 Ammo to distinguish MG and Sniper loads
class B_762x54_Tracer_Green;
class B_762x54_7N14_Ball : B_762x54_Tracer_Green
{
audibleFire = 43.94;
hit = 11.32;
typicalSpeed = 830;
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
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
suppressionRadiusBulletClose = 6;
suppressionRadiusHit = 8;
timeToLive = 11;
tracerEndTime = 3;
tracerScale = 1.3771;
tracerStartTime = 0.099;
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
cost = 7;
hit = 213.33333;
simulation = "shotBullet";
timeToLive = 15;
typicalSpeed = 2058;
};

// Creating .300 Winchester Magnum. Values based off of 308
class B_300WM_Ball : BulletBase // Federal 180 Gr Power-Shok
{
airFriction = -0.00055615;
airLock = 1;
audibleFire = 81.9;
caliber = 1.8147;
cartridge = "";
cost = 1.2;
dangerRadiusBulletClose = 8;
dangerRadiusHit = 12;
hit = 16.38;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
suppressionRadiusBulletClose = 6;
suppressionRadiusHit = 8;
timeToLive = 12;
tracerEndTime = 3; // No Tracer known. Copying over incase.
tracerScale = 1.3771;
tracerStartTime = 0.099;
typicalSpeed = 902.208;
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

// Tracer Value taken from ACE 7.62x51
class B_338_Ball : BulletBase // Sierra 250 Gr MatchKing
{
tracerEndTime = 3; // No Tracer known.
tracerScale = 1.5105;
tracerStartTime = 0.099;
timeToLive = 12.5;
typicalSpeed = 881.1768;
};

// Adjusting 9.3 Brenneke
class B_93x64_Ball : BulletBase // 7N33
{
airFriction = -0.00065888;
audibleFire = 70.81;
caliber = 1.8310;
hit = 14.16;
timeToLive = 11.6;
tracerEndTime = 1.75; // No Tracer
tracerScale = 1.6315;
tracerStartTime = 0.127;
typicalSpeed = 780;
};

// Adjusting 338 NM
class B_338_NM_Ball : BulletBase
{
airFriction = -0.00060929;
audibleFire = 74.71;
caliber = 2;
hit = 14.94;
timeToLive = 13;
tracerEndTime = 3;	// No Tracer, using 308
tracerScale = 1.5087;
tracerStartTime = 0.099;
typicalSpeed = 823;
};

// Adjusting 12.7x55 Ammo
class B_127x54_Ball : BulletBase // STs-130VPS
{
airFriction = -0.00058079;
audibleFire = 11.07; // Using Calc of Rifle
caliber = 2.0218;
hit = 12.2093; // Anti-Materiel Calc
timeToLive = 9;
tracerEndTime = 1.75; // No Tracer, using 12.7x108 incase
tracerScale = 2.2824;
tracerStartTime = 0.127;
typicalSpeed = 300;
visibleFire = 1;
visibleFireTime = 2;
};
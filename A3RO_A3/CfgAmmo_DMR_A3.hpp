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
tracerEndTime = 3.027; // Min 2.9s so
tracerScale = 2.2771;
tracerStartTime = 0.127;
typicalSpeed = 860.146;
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
typicalSpeed = 922.935;
};
// Creating new 12.7x108 Sniper Ammo
class B_127x108_7N34_Ball : B_127x108_APDS // 914 Gr 7N34
{
audibleFire = 103.51;
hit = 31.94;
typicalSpeed = 784.86;
};

// Adjusting 12.7x99
class B_127x99_Ball : BulletBase // 706.7 Gr M33
{
hit = 36.09;
timeToLive = 12.5;
tracerEndTime = 4.35;
tracerScale = 2.2771;
tracerStartTime = 0.137;
typicalSpeed = 886.968;
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

// Adjusting 7.62x51 NATO Config to match Magazine.
class B_762x51_Ball : BulletBase // IMI Samson 150 Gr M80 FMJ
{
audibleFire = 44.63;
hit = 11.50;	
timeToLive = 11.5;
tracerEndTime = 3;
tracerScale = 1.3771;
tracerStartTime = 0.099;
typicalSpeed = 843.077;
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
typicalSpeed = 843.077;
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
typicalSpeed = 825.094;
};

// Creating 7.62x54R 7N14 Ammo to distinguish MG and Sniper loads
class B_762x54_7N14_Ball : B_762x54_Tracer_Green
{
audibleFire = 43.94;
hit = 11.32;
typicalSpeed = 829.971;
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
typicalSpeed = 886.664;
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
typicalSpeed = 2058.01;
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
typicalSpeed = 881.177;
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
typicalSpeed = 779.984;
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
typicalSpeed = 822.96;
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
typicalSpeed = 299.924;
visibleFire = 1;
visibleFireTime = 2;
};
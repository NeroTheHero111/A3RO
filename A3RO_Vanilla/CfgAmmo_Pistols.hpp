// Adjusting .45 ACP typicalSpeed
class B_45ACP_Ball : BulletBase // 185 Gr Buffalo Bore JHP
{
airFriction = -0.00203410;	
audibleFire = 28.82;
caliber = 1.3064;
hit = 4.80;
timeToLive = 8;
tracerEndTime = 2;
tracerScale = 2.0140;
tracerStartTime = 0;
typicalSpeed = 345.948;
};

// Creating 10 mm Auto Ammo.
class B_10mmA_Ball_Red : BulletBase // 180gr FMJ Federal
{
airFriction = -0.00180199;
audibleFire = 25.48;
caliber = 1.290;
cartridge = "FxCartridge_9mm";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 4.28;
model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
timeToLive = 8;
tracerEndTime = 2;
tracerScale = 1.7842;
tracerStartTime = 0;
typicalSpeed = 308.7624;
};

// Creating 9x18 Makarov Ammo. Values based off of 9x21mm IMI, my 9x19 Parabellum and 5.7x28
class B_9x18_Ball_Green : BulletBase // 95 Gr Hornady XTP
{
airFriction = -0.00164252;
audibleFire = 24.51;
caliber = 1.008;
cartridge = "FxCartridge_9mm";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 4.08;
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
timeToLive = 7;
tracerEndTime = 2.65;
tracerScale = 1.6263;
tracerStartTime = 0.256;
typicalSpeed = 294.132;
};

// Creating .380 Auto
class B_380Auto_Ball_Yellow : BulletBase // 90 Gr Hornady HP / XPT FPD
{
airFriction = -0.00160177;
audibleFire = 23.03;
caliber = 1.008;
cartridge = "FxCartridge_9mm";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 3.83;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
timeToLive = 6.5;
tracerEndTime = 0.5;
tracerScale = 1.5859;
tracerStartTime = 0;
typicalSpeed = 276.4536;
};

// Creating .40 S&W. Values based off 9x21 and my 9x19
class B_40SW_Ball_Green : BulletBase // 180 Gr Federal JHP
{
airFriction = -0.00180199;
audibleFire = 25.80;
caliber = 1.1628;
cartridge = "FxCartridge_9mm";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 4.30;
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
timeToLive = 7.5;
tracerEndTime = 2;
tracerScale = 1.7842;
tracerStartTime = 0;
typicalSpeed = 309.6768;
};

// Creating .357 Magnum. Values based off my .45 Colt and .50 AE present ingame
class B_357M_Ball_Yellow : BulletBase // 158 Gr Federal JHP
{
airFriction = -0.00161594;
audibleFire = 33.83;
caliber = 1.629;
cartridge = "FxCartridge_9mm";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 5.63;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
timeToLive = 8;
tracerEndTime = 1.6;
tracerScale = 1.6;
tracerStartTime = 0;
typicalSpeed = 405.9936;
};

// Creating .45 Colt Ammo. Values based off of .50 AE from in-game files
class B_45Colt_Ball : BulletBase // Cor Bon 225 Gr DPX
{
airFriction = -0.00205182;
audibleFire = 27.76;
caliber = 1.6392;
cartridge = "FxCartridge_127";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 4.62;
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
timeToLive = 7.5;
tracerEndTime = 2.1;
tracerScale = 2.0315;
tracerStartTime = 0;
typicalSpeed = 333.1464;
};

class B_12Gauge_Slug : BulletBase
{
timeToLive = 10;
typicalSpeed = 487.68;
};
class B_12Gauge_Slug_NoCartridge : B_12Gauge_Slug
{
typicalSpeed = 487.68;
};

// Creating .410 bore Ammo. Values based of 12 Gauge Vanilla and ACE No3 Buck Shot
class B_410bore_Pellets_Submunition_000_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.00670000;
audibleFire = 42.27;
caliber = 0.5816;
hit = 10.14;
timeToLive = 6;
typicalSpeed = 396.24;
};
class B_410bore_Pellets_Submunition_4_Shot_Deploy : B_410bore_Pellets_Submunition_000_Buck_Deploy
{
airFriction = -0.00241903;
caliber = 0.5816;
hit = 0.9489;
timeToLive = 8.5;
typicalSpeed = 345.948;
};

// #000 Buck
class B_410bore_Pellets_Submunition_000_Buck : BulletBase
{
airFriction = -0.00050000;
audibleFire = 44.02;
caliber = 0.5816;
cartridge = "";
cost = 1;
hit = 50.73;
simulationStep = 0.0001;
submunitionAmmo = "B_410bore_Pellets_Submunition_000_Buck_Deploy";
submunitionConeAngle = 0.79;
submunitionConeType[] = {"poissondisc",5};
submunitionInitSpeed = 396.24;
timeToLive = 6;
triggerSpeedCoef[] = {0.85,1};
triggerTime = 0.001;
typicalSpeed = 396.24;
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

// #4 Shot. Based on Winchester Lead Shot
class B_410bore_Pellets_Submunition_4_Shot : B_410bore_Pellets_Submunition_000_Buck
{
airFriction = -0.00018051;
hit = 29.41;
submunitionAmmo = "B_410bore_Pellets_Submunition_4_Shot_Deploy";
submunitionConeAngle = 1.1;
submunitionConeType[] = {"poissondisc",62}; // Amount of Shot (2/3rd of actual for performance)
submunitionInitSpeed = 345.948;
timeToLive = 8.5;
typicalSpeed = 345.948;
};

// .410 bore Slug
class B_410bore_Slug : B_12Gauge_Slug_NoCartridge
{
airFriction = -0.00465346;	
audibleFire = 44.02;
caliber = 1.7450;
cartridge = "";
hit = 31.77;
model = "\A3\weapons_f\empty";
simulation = "shotSubmunitions";
timeToLive = 11;
typicalSpeed = 487.68;
};
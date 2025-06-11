// Adjusting 5.7x28 typicalSpeed. Disabling Default 5.7 Ammo from being IR-Tracer. only when Tracers are enabled.
class B_570x28_Ball : BulletBase // SS190 AP FMJ
{
nvgOnly = 0; 
timeToLive = 10.5;
tracerEndTime = 0.6;
tracerScale = 1;
tracerStartTime = 0.03;
typicalSpeed = 716;
model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

// Creating 5.7x28 Red Tracer Class
class B_570x28_Ball_Red : B_570x28_Ball
{
model = "\A3\Weapons_f\Data\bullettracer\tracer_red";	
};

// Adjusting 9x21 Class TypicalSpeed, Flags and Hit
class B_9x21_Ball : BulletBase
{
aiAmmoUsageFlags = "64 + 128";
hit = 5;
timeToLive = 8.5;
tracerEndTime = 1; // No Tracer. Using 9x19
tracerScale = 1.5842;
tracerStartTime = 0;
typicalSpeed = 320.04;
};

// Creating 9x19 Parabellum Ammo. Values based off of 9x21mm IMI
class B_9x19_Ball_Green : BulletBase // Based of 124 Gr FMJ Federal
{
aiAmmoUsageFlags = "64 + 128";
airFriction = -0.001600;
airLock = 1;
audibleFire = 29.99;
caliber = 1.1975;
cartridge = "FxCartridge_9mm";
cost = 100;
dangerRadiusHit = 8;
deflecting = 25;
hit = 5;
model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
timeToLive = 8;
tracerEndTime = 1;
tracerScale = 1.5842;
tracerStartTime = 0;
typicalSpeed = 360;
};
class B_9x19_Ball_Red : B_9x19_Ball_Green
{
model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
};
class B_9x19_Ball_Yellow : B_9x19_Ball_Green
{
model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
};

// Creating 4.6x30mm Ammo. Values based off of FN 5.7x28mm NATO
class B_460x30_Ball : BulletBase
{
aiAmmoUsageFlags = "64 + 128 + 256";
airFriction = -0.00142443;
audibleFire = 21.71;
caliber = 0.5318;
dangerRadiusBulletClose = 8;
dangerRadiusHit = 12;
deflecting = 20;
hit = 6.94;
model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
nvgOnly = 0;
suppressionRadiusBulletClose = 6;
suppressionRadiusHit = 8;
timeToLive = 10.5;
tracerEndTime = 0.6; // No Tracers, using 5.7
tracerScale = 0.8157;
tracerStartTime = 0.03;
typicalSpeed = 622;
};
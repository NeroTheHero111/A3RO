// Adjusting .45 ACP typicalSpeed
class B_45ACP_Ball : BulletBase // 185 Gr Buffalo Bore JHP
{
airFriction = -0.00203410;	
audibleFire = 28.82;
caliber = 1.3064;
hit = 4.80;
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
tracerEndTime = 1;
tracerScale = 0.5;
tracerStartTime = 0.05;
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
tracerEndTime = 1;
tracerScale = 0.5;
tracerStartTime = 0.05;
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
tracerEndTime = 1;
tracerScale = 0.5;
tracerStartTime = 0.05;
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
tracerEndTime = 1;
tracerScale = 0.5;
tracerStartTime = 0.05;
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
tracerEndTime = 1;
tracerScale = 0.5;
tracerStartTime = 0.05;
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
tracerEndTime = 1;
tracerScale = 1.2;
tracerStartTime = 0.075;
typicalSpeed = 333.1464;
};

class B_12Gauge_Pellets_Submunition : BulletBase
{
typicalSpeed = 374.904;
};

class B_12Gauge_Slug : BulletBase
{
initSpeed = 487.68;
};
class B_12Gauge_Slug_NoCartridge : B_12Gauge_Slug
{
initSpeed = 487.68;
};

// Creating .410 bore Ammo. Values based of 12 Gauge Vanilla and ACE No3 Buck Shot
class B_410bore_Pellets_Submunition_000_Buck_Deploy : BulletBase
{
airFriction = -0.00670000;
audibleFire = 42.27;
bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",1.9,1,100};
bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",1.9,1,100};
bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",1.9,1,100};
bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",1.9,1,100};
bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",1.9,1,100};
bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",1.9,1,100};
bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",1.9,1,100};
bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",1.9,1,100};
bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",1.9,1,100};
bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",1.9,1,100};
bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",1.9,1,100};
bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",1.9,1,100};
caliber = 0.5770;
deflecting = 35;
hit = 10.14;
hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
hitArmorInt[] = {"soundVehiclePlateInt1",0.066,"soundVehiclePlateInt2",0.066,"soundVehiclePlateInt3",0.066,"soundVehiclePlateInt4",0.066,"soundVehiclePlateInt5",0.066,"soundVehiclePlateInt6",0.066,"soundVehiclePlateInt7",0.066,"soundVehiclePlateInt8",0.066,"soundVehiclePlateInt9",0.066,"soundVehiclePlateInt10",0.066,"soundVehiclePlateInt11",0.066,"soundVehiclePlateInt12",0.066,"soundVehiclePlateInt13",0.066,"soundVehiclePlateInt14",0.066,"soundVehiclePlateInt15",0.066};
hitBuilding[] = {"soundHitBuilding1",0.2,"soundHitBuilding2",0.2,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1};
hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
hitMetalInt[] = {"soundMetalInt1",0.166,"soundMetalInt2",0.166,"soundMetalInt3",0.166,"soundMetalInt4",0.166,"soundMetalInt5",0.166,"soundMetalInt6",0.166};
hitWood[] = {"soundWood1",0.0625,"soundWood2",0.0625,"soundWood3",0.0625,"soundWood4",0.0625,"soundWood5",0.0625,"soundWood6",0.0625,"soundWood7",0.0625,"soundWood8",0.0625,"soundWood9",0.0625,"soundWood10",0.0625,"soundWood11",0.0625,"soundWood12",0.0625,"soundWood13",0.0625,"soundWood14",0.0625,"soundWood15",0.0625,"soundWood16",0.0625};
soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",1.8,1,100};
soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",1.8,1,100};
soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",1.8,1,100};
soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",1.8,1,100};
soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",1.8,1,100};
soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",1.8,1,100};
soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",1.8,1,100};
soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",1.8,1,100};
soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",1.5,1,100};
soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",1.5,1,100};
soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",1.5,1,100};
soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",1.5,1,100};
soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",1.5,1,100};
soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",1.5,1,100};
soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",1.5,1,100};
soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",1.5,1,100};
soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",0.25,1,100};
soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",0.25,1,100};
soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",0.25,1,100};
soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",0.25,1,100};
soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",0.25,1,100};
soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",0.25,1,100};
soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",0.25,1,100};
soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",0.25,1,100};
soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01",0.25,1,100};
soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02",0.25,1,100};
soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03",0.25,1,100};
soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04",0.25,1,100};
soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05",0.25,1,100};
soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06",0.25,1,100};
soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07",0.25,1,100};
soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08",0.25,1,100};
soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",1.5,1,100};
soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02",1.5,1,100};
soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03",1.5,1,100};
soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04",1.5,1,100};
soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05",1.5,1,100};
soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06",1.5,1,100};
soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07",1.5,1,100};
soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08",1.5,1,100};
soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01",1.5,1,100};
soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02",1.5,1,100};
soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03",1.5,1,100};
soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04",1.5,1,100};
soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05",1.5,1,100};
soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06",1.5,1,100};
soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07",1.5,1,100};
soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08",1.5,1,100};
soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",1.5,1,100};
soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",1.5,1,100};
soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",1.5,1,100};
soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",1.5,1,100};
soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",1.5,1,100};
soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",1.5,1,100};
soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",1.5,1,100};
soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",1.5,1,100};
soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01",1.5,1,100};
soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02",1.5,1,100};
soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03",1.5,1,100};
soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04",1.5,1,100};
soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05",1.5,1,100};
soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06",1.5,1,100};
soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07",1.5,1,100};
soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08",1.5,1,100};
soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01",1.3,1,100};
soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02",1.3,1,100};
soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03",1.3,1,100};
soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04",1.3,1,100};
soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05",1.3,1,100};
soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06",1.3,1,100};
soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07",1.3,1,100};
soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08",1.3,1,100};
soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll",2.51189,1,200};
soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01",1.5,1,100};
soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02",1.5,1,100};
soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03",1.5,1,100};
soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04",1.5,1,100};
soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05",1.5,1,100};
soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06",1.5,1,100};
soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07",1.5,1,100};
soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08",1.5,1,100};
soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01",1,1,100};
soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02",1,1,100};
soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03",1,1,100};
soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04",1,1,100};
soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05",1,1,100};
soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06",1,1,100};
soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01",1.2,1,100};
soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02",1.2,1,100};
soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03",1.2,1,100};
soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04",1.2,1,100};
soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05",1.2,1,100};
soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06",1.2,1,100};
soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07",1.2,1,100};
soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08",1.2,1,100};
soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01",1.2,1,100};
soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02",1.2,1,100};
soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03",1.2,1,100};
soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04",1.2,1,100};
soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05",1.2,1,100};
soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06",1.2,1,100};
soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01",1.5,1,100};
soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02",1.5,1,100};
soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03",1.5,1,100};
soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04",1.5,1,100};
soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05",1.5,1,100};
soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06",1.5,1,100};
soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07",1.5,1,100};
soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08",1.5,1,100};
soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01",1,1,100};
soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02",1,1,100};
soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03",1,1,100};
soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04",1,1,100};
soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05",1,1,100};
soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06",1,1,100};
soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07",1,1,100};
soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08",1,1,100};
soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01",1,1,100};
soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10",1,1,100};
soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11",1,1,100};
soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12",1,1,100};
soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13",1,1,100};
soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14",1,1,100};
soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15",1,1,100};
soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02",1,1,100};
soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03",1,1,100};
soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04",1,1,100};
soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05",1,1,100};
soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06",1,1,100};
soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07",1,1,100};
soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08",1,1,100};
soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09",1,1,100};
soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01",1.3,1,100};
soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02",1.3,1,100};
soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03",1.3,1,100};
soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04",1.3,1,100};
soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05",1.3,1,100};
soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06",1.3,1,100};
soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08",1.3,1,100};
soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07",1.3,1,100};
soundWood1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_01",1.8,1,100};
soundWood10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_10",1.8,0.9,100};
soundWood11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_11",1.8,0.9,100};
soundWood12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_12",1.8,0.9,100};
soundWood13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_13",1.8,0.9,100};
soundWood14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_14",1.8,0.9,100};
soundWood15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_15",1.8,0.9,100};
soundWood16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_16",1.8,0.9,100};
soundWood2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_02",1.8,1,100};
soundWood3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_03",1.8,1,100};
soundWood4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_04",1.8,1,100};
soundWood5[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_05",1.8,1,100};
soundWood6[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_06",1.8,1,100};
soundWood7[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_07",1.8,1,100};
soundWood8[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_08",1.8,1,100};
soundWood9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_09",1.8,0.9,100};
typicalSpeed = 396.24;
};
class B_410bore_Pellets_Submunition_4_Shot_Deploy : B_410bore_Pellets_Submunition_000_Buck_Deploy
{
airFriction = -0.00241903;
caliber = 0.5770;
hit = 0.9489;
typicalSpeed = 345.948;
};

// #000 Buck
class B_410bore_Pellets_Submunition_000_Buck : BulletBase
{
airFriction = -0.00050000;
audibleFire = 44.02;
caliber = 0.5770;
cartridge = "";
cost = 1;
hit = 50.73;
simulationStep = 0.0001;
submunitionAmmo = "B_410bore_Pellets_Submunition_000_Buck_Deploy";
submunitionConeAngle = 0.79;
submunitionConeType[] = {"poissondisc",5};
triggerSpeedCoef[] = {0.85,1};
triggerTime = 0.001;
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
submunitionConeType[] = {"poissondisc",31}; // Amount of Shot (1/3rd of actual for performance)
};

// .410 bore Slug
class B_410bore_Slug : B_12Gauge_Slug_NoCartridge
{
airFriction = -0.00461640;	
audibleFire = 44.02;
caliber = 1.7311;
cartridge = "";
hit = 31.49;
model = "\A3\weapons_f\empty";
simulation = "shotSubmunitions";
typicalSpeed = 487.68;
};

// IR-DIM
class B_45ACP_Ball_IR : B_45ACP_Ball
{
tracerEndTime = 1;
nvgOnly = 1;
};
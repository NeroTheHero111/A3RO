// ASP Kir 12.7x55 10Rnd Magazines. Changing: Description. No Tracer
class 10Rnd_127x54_Mag : CA_Magazine
{
descriptionShort = "Calibre: 12.7x55mm<br />Rounds: 10<br />Tracers: None<br />Used in: ASP-1 Kir";
displayName = "12.7x55 10Rnd Mag";
displayNameShort = "";
initSpeed = 300;
mass = 37.27576;
};

// CMR-76 10Rnd Magazine. Changing: Name. Description. Ammo from 6.5 to 5.8. Ammocount from 20 to 10
class 20Rnd_650x39_Cased_Mag_F : CA_Magazine
{
ammo = "B_580x42_Ball_F";
count = 10;
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 10<br />Tracers: None<br />Used in: QBU-88";
displayName = "5.8x42 10Rnd Mag";
displayNameShort = "";
initSpeed = 930;
mass = 5.8083;
};

// Creating 5.8 10Rnd Tracer, Tracer Every 4 and Reload Tracer Magazines
class 20Rnd_580x42_Cased_Tracer_Mag_F : 20Rnd_650x39_Cased_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 10<br />Tracers: Every Round<br />Used in: QBU-88";
displayName = "5.8x42 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 10;
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_58x42_GT_Mag_F_CA.paa";
tracersEvery = 10;
};

// Cyrus 9.3 10Rnd Magazine. Changing: Description. Changing back Caliber edited for MG5 Boxes
class 10Rnd_93x64_DMR_05_Mag : 150Rnd_93x64_Mag
{
ammo = "B_93x64_Ball";
descriptionShort = "Calibre: 9.3x64mm Brenneke<br />Rounds: 10<br />Tracers: None<br />Used in: SVDK Magpul";
displayName = "9.3x64 10Rnd Mag";
displayNameShort = "";
mass = 20.48951;
};

// MAR-10 .338 10Rnd Magazine. Changing: Description. No Evidence of .338 LM Tracer
class 10Rnd_338_Mag : CA_Magazine
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
displayName = ".338 LM 10Rnd Mag";
displayNameShort = "";
initSpeed = 881.1768;
mass = 14.0637; // 4 Decimal Places
};

// Creating Bad News ULR .300 Winchester Magazines
class 10Rnd_300WM_Ball : 10Rnd_338_Mag
{
ammo = "B_300WM_Ball";
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Mag";
displayNameShort = "";
initSpeed = 902.208;
mass = 13.6642;
};

// Rahim 7.62x54mmR 10Rnd Magazine
class 10Rnd_762x54_Mag : 10Rnd_762x51_Mag
{
ammo = "B_762x54_7N14_Ball";
descriptionShort = "Calibre: 7.62x54mmR<br />Rounds: 10<br />Tracers: None<br />Used in: VS-121";
displayName = "7.62x54R 10Rnd 7N14 Mag";
displayNameShort = "";
initSpeed = 800;
mass = 7.0331;
scope = 2; // Unhiding because parent was hidden due to wrong Name
};
class 10Rnd_762x54_Mag_Tracer : 10Rnd_762x54_Mag
{
descriptionShort = "Calibre: 7.62x54mmR<br />Rounds: 10<br />Tracers: Every Round<br />Used in: VS-121";
displayName = "7.62x54R 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_GT_762x54_CA.paa";
tracersEvery = 1;
};

// Creating Railgun Magazine
// 200Gr / Shot. 362g Mag
class 5Rnd_20mm_RailGun_Mag : 10Rnd_338_Mag
{
ammo = "B_20mm_Railgun_APFSDS";
author = "Bohemia Interactive";
count = 5;
descriptionShort = "Calibre: 20x82mm Slug<br />Rounds: 5<br />Tracers: None<br />Used in: ZRG-20 Mk. II";
displayName = "20x82 5Rnd Slug Mag";
displayNameShort = "Slug";
initSpeed = 2058;
mass = 29.2288;
maxLeadSpeed = 205;
muzzleImpulseFactor[] = {2,1};
nameSound = "magazine";
picture = "\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
};

// Creating 5.56 10Rnd KBU-97A Magazines
class 10Rnd_556x45_KBU_NT_Mag_F : 20Rnd_650x39_Cased_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 10<br />Tracers: None<br />Used in: KBU-97A";
displayName = "5.56x45 10Rnd KBU Mag";
displayNameShort = "";
initSpeed = 913.4856;
mass = 5.7787;
};
class 10Rnd_556x45_KBU_Tracer_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 10<br />Tracers: Every Round<br />Used in: KBU-97A";
displayName = "5.56x45 10Rnd Tracer (Red) KBU Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 10;
tracersEvery = 10;
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_556x45_RT_Mag_F_CA.paa";
};

// Creating .223 10Rnd KBU-97A Magazines
class 10Rnd_223REM_KBU_NT_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 10<br />Tracers: None<br />Used in: KBU-97A";
displayName = ".223 10Rnd KBU Mag";
displayNameShort = "";
initSpeed = 1007.669;
mass = 5.6644;
};
class 10Rnd_223REM_KBU_Tracer_Mag_F : 10Rnd_223REM_KBU_NT_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 10<br />Tracers: Every Round<br />Used in: KBU-97A";
displayName = ".223 10Rnd Tracer (Yellow) KBU Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 10;
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_556x45_YT_Mag_F_CA.paa";
tracersEvery = 10;
};

// IR-DIM
// 5.56
class 10Rnd_556x45_KBU_IRT_Mag_F : 10Rnd_556x45_KBU_Tracer_Mag_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 10Rnd Tracer (IR-DIM) KBU Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_556x45_IRT_Mag_F_CA.paa";
};

// This shows up in Vest Magazines in Arsenal if you have the ZRG Equipped. I think the fuck not.
// Its only present for the User that has the weapon equipped. Weird. Only in ACE Arsenal.
/*class ESD_01_DummyMagazine_base;
class ESD_01_DummyMagazine_1 : ESD_01_DummyMagazine_base
{
scopeArsenal = 0;
};*/
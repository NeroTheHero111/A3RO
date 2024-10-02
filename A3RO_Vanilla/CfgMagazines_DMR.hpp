// ASP Kir 12.7x55 10Rnd Magazines. Changing: Description
class 10Rnd_127x54_Mag : CA_Magazine
{
descriptionShort = "Calibre: 12.7x55mm<br />Rounds: 10<br />Used in: ASP-1 Kir";
initSpeed = 300;
};
// Creating ASP-1 Kir 12.7 10Rnd Tracer and Reload Tracer Magazines
class 10Rnd_127x54_Tracer_Mag: 10Rnd_127x54_Mag 
{
displayName = "12.7 mm 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;
tracersEvery = 1;
};

// CMR-76 10Rnd Magazine. Changing: Name. Description. Ammo from 6.5 to 5.8. Ammocount from 20 to 10
class 20Rnd_650x39_Cased_Mag_F : CA_Magazine
{
ammo = "B_580x42_Ball_F";
count = 10;
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 10<br />Used in: QBU-88";
displayName = "5.8 mm 10Rnd Mag";
initSpeed = 930;
mass = 4.9276;
};

// Creating 5.8 10Rnd Tracer, Tracer Every 4 and Reload Tracer Magazines
class 20Rnd_580x42_Cased_Tracer_Mag_F : 20Rnd_650x39_Cased_Mag_F
{
displayName = "5.8 mm 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;
tracersEvery = 10;
};

// Cyrus 9.3 10Rnd Magazine. Changing: Description. Changing back Caliber edited for MG5 Belts
class 10Rnd_93x64_DMR_05_Mag : 150Rnd_93x64_Mag
{
ammo = "B_93x64_Ball";
descriptionShort = "Calibre: 9.3x64mm Brenneke<br />Rounds: 10<br />Used in: SVDK Magpul";	
};

// Creating 9.3 10Rnd Tracer and Reload Tracer Magazines
class 10Rnd_93x64_DMR_05_Tracer_Mag : 10Rnd_93x64_DMR_05_Mag
{
displayName = "9.3 mm 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;	
tracersEvery = 1;
};

// MAR-10 .338 10Rnd Magazine. Changing: Description
class 10Rnd_338_Mag : CA_Magazine
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
initSpeed = 881.1768;
mass = 11.55222;
};

// Creating MAR-10 .338 10Rnd Tracer and Reload Tracer Magazines
class 10Rnd_338_Tracer_Mag : 10Rnd_338_Mag
{
displayName = ".338 LM 10Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;	
tracersEvery = 1;
};

// Creating Bad News ULR .300 Winchester Magazines
class 10Rnd_300WM_Ball : 10Rnd_338_Mag
{
ammo = "B_300WM_Ball";
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Mag";
initSpeed = 881.4816;
mass = 10.69502;
};
class 10Rnd_300WM_Tracer_Mag : 10Rnd_300WM_Ball
{
displayName = ".300 WM 10Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;	
tracersEvery = 1;
};

// Rahim 7.62x54mmR 10Rnd Magazine
class 10Rnd_762x54_Mag : 10Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x54mmR<br />Rounds: 10<br />Used in: VS-121";
displayName = "7.62 mm 10Rnd VS-121 Mag";
initSpeed = 800;
};
class 10Rnd_762x54_Mag_Tracer : 10Rnd_762x54_Mag
{
displayName = "7.62 mm 10Rnd Tracer (Green) VS-121 Mag";
displayNameShort = "Tracer";
tracersEvery = 1;
};

// Creating Railgun Magazine
// 200Gr / Shot. 362g Mag
class 5Rnd_20mm_RailGun_Mag : 10Rnd_338_Mag
{
ammo = "B_20mm_Railgun_APFSDS";
author = "Bohemia Interactive";
count = 5;
descriptionShort = "Calibre: 20x82mm Slug<br />Rounds: 5<br />Used in: XRG-20 Mk. II";
displayName = "5Rnd Slug Mag";
initSpeed = 2058;
mass = 3.002696;
maxLeadSpeed = 205;
muzzleImpulseFactor[] = {2,1};
nameSound = "magazine";
picture = "\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
};

// Creating 5.56 10Rnd KBU-97A Magazines
class 10Rnd_556x45_KBU_NT_Mag_F : 20Rnd_650x39_Cased_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 10<br />Used in: KBU-97A";
displayName = "5.56 mm 10Rnd KBU Mag";
initSpeed = 943.9656;
mass = 4.7953;
};
class 10Rnd_556x45_KBU_Tracer_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
displayName = "5.56 mm 10Rnd Tracer (Red) KBU Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;
tracersEvery = 10;
};

// Creating .223 10Rnd KBU-97A Magazines
class 10Rnd_223Rem_KBU_NT_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
ammo = "B_223Rem_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 10<br />Used in: KBU-97A";
displayName = ".223 10Rnd KBU Mag";
initSpeed = 1007.669;
};
class 10Rnd_223Rem_KBU_Tracer_Mag_F : 10Rnd_223Rem_KBU_NT_Mag_F
{
displayName = ".223 10Rnd Tracer (Yellow) KBU Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;
tracersEvery = 10;
};

// IR-DIM
// .300 WM
class 10Rnd_300WM_IRT_Mag : 10Rnd_300WM_Tracer_Mag
{
ammo = "B_300WM_Ball_IR";
displayName = ".300 WM 10Rnd Tracer (IR-DIM) Mag";
};

// .338 LM
class 10Rnd_338_IRT_Mag : 10Rnd_338_Tracer_Mag
{
ammo = "B_338_Ball_IR";
displayName = ".338 LM 10Rnd Tracer (IR-DIM) Mag";
};

// 12.7x55
class 10Rnd_127x54_IRT_Mag: 10Rnd_127x54_Tracer_Mag 
{
ammo = "B_127x54_Ball_IR";
displayName = "12.7 mm 10Rnd Tracer (IR-DIM) Mag";
};

// .5.56
class 10Rnd_556x45_KBU_IRT_Mag_F : 10Rnd_556x45_KBU_Tracer_Mag_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 10Rnd Tracer (IR-DIM) KBU Mag";
};

// 223 Rem
class 10Rnd_223Rem_KBU_IRT_Mag_F : 10Rnd_223Rem_KBU_Tracer_Mag_F
{
ammo = "B_223Rem_Ball_IR";	    
displayName = ".223 10Rnd Tracer (IR-DIM) KBU Mag";
};

// 5.8
class 20Rnd_580x42_Cased_IRT_Mag_F : 20Rnd_580x42_Cased_Tracer_Mag_F
{
ammo = "B_580x42_Ball_IR";
displayName = "5.8 mm 10Rnd Tracer (IR-DIM) Mag";
};

// 9.3
class 10Rnd_93x64_DMR_05_IRT_Mag : 10Rnd_93x64_DMR_05_Tracer_Mag
{
ammo = "B_93x64_Ball_IR";
displayName = "9.3 mm 10Rnd Tracer (IR-DIM) Mag";
};

// 7.62
class 10Rnd_762x54_Mag_IRT : 10Rnd_762x54_Mag_Tracer
{
ammo = "B_762x54_Ball_IR";
displayName = "7.62 mm 10Rnd Tracer (IR-DIM) VS-121 Mag";
};

// No IR-DIM T4 as they are all 10 Rounds max

// This shows up in Vest Magazines in Arsenal if you have the XRG Equipped. I think the fuck not.
// Its only present for the User that has the weapon equipped. Weird. Only in ACE Arsenal.
/*class ESD_01_DummyMagazine_base;
class ESD_01_DummyMagazine_1 : ESD_01_DummyMagazine_base
{
scopeArsenal = 0;
};*/
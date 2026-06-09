// M320. Changing: Name. Description
class 7Rnd_408_Mag : CA_Magazine
{
descriptionShort = "Calibre: .408 Cheyenne Tactical<br />Rounds: 7<br />Tracers: None<br />Used in: M200 Intervention® .408";
displayName = ".408 7Rnd Mag";
displayNameShort = "446 Gr";
initSpeed = 832.104;
mass = 21.6900;
picture = "\A3RO_A3\Textures\UI\icon_7Rnd_408CT_CA";
};

// Creating .375 CheyTac 7Rnd Tracer and tracerless Magazines. No Tracer
class 7Rnd_375_Mag : CA_Magazine
{
ammo = "B_375_Ball";
count = 7;
descriptionShort = "Calibre: .375 Cheyenne Tactical<br />Rounds: 7<br />Tracers: None<br />Used in: M200 Intervention® .375";
displayName = ".375 7Rnd Mag";
displayNameShort = "352 Gr";
initSpeed = 938.784;
mass = 20.2714;
picture = "\A3RO_A3\Textures\UI\icon_7Rnd_408CT_CA.paa";
scope = 2;
};

// GM6 Lynx 12.7x108 5Rnd Magazines. Changing: Description.
class 5Rnd_127x108_Mag : CA_Magazine
{
ammo = "B_127x108_7N34_Ball";
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7x108 5Rnd 7N34 Mag";
displayNameShort = "7N34";
initSpeed = 784.86;
mass = 30.9805;
picture = "\A3RO_A3\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
};
class 5Rnd_127x108_APDS_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7x108 5Rnd 680 Gr Mag";
displayNameShort = "680 Gr";
initSpeed = 922.935;
mass = 29.3876;
picture = "\A3RO_A3\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
};

// Creating 12.7x108 5Rnd Tracer Magazine
class 5Rnd_127x108_Tracer_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Tracers: Every Round<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7x108 5Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 5;
picture = "\A3RO_A3\Textures\UI\icon_5Rnd_127x108_GT_Ball_CA.paa";
tracersEvery = 1;
};

// Creating 12.7x99 NATO 5Rnd Tracer and tracerless Magazines
class 5Rnd_127x99_Mag : 500Rnd_127x99_mag
{
ammo = "B_127x99_Ball_Tracer_Red";	
count = 5;
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 5Rnd Mag";
displayNameShort = "700 Gr";
initSpeed = 801.32;
mass = 27.6432;
picture = "\A3RO_A3\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
tracersEvery = 0;
type = 256;
};
class 5Rnd_127x99_Tracer_Mag : 5Rnd_127x99_Mag
{
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Tracers: Every Round<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 5Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 5;
picture = "\A3RO_A3\Textures\UI\icon_5Rnd_127x99_RT_Ball_CA.paa";
tracersEvery = 1;	
};

// IR-DIM. No IRT4
class 5Rnd_127x99_IRT_Mag : 5Rnd_127x99_Tracer_Mag
{	
ammo = "B_127x99_Ball_IR";
displayName = "12.7x99 5Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_5Rnd_127x99_IRT_Ball_CA.paa";
};

// ASP Kir 12.7x55 10Rnd Magazines. Changing: Description. No Tracer
class 10Rnd_127x54_Mag : CA_Magazine
{
descriptionShort = "Calibre: 12.7x55mm<br />Rounds: 10<br />Tracers: None<br />Used in: ASP-1 Kir";
displayName = "12.7x55 10Rnd Mag";
displayNameShort = "";
initSpeed = 299.924;
mass = 37.2758;
};

// CMR-76 10Rnd Magazine. Changing: Name. Description. Ammo from 6.5 to 5.8. Ammocount from 20 to 10
class 20Rnd_650x39_Cased_Mag_F : CA_Magazine
{
ammo = "B_580x42_Ball_F";
count = 10;
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 10<br />Tracers: None<br />Used in: QBU-88";
displayName = "5.8x42 10Rnd Mag";
displayNameShort = "";
initSpeed = 930.25;
mass = 5.8083;
};

// Creating 5.8 10Rnd Tracer, Tracer Every 4 and Reload Tracer Magazines
class 20Rnd_580x42_Cased_Tracer_Mag_F : 20Rnd_650x39_Cased_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 10<br />Tracers: Every Round<br />Used in: QBU-88";
displayName = "5.8x42 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 10;
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_58x42_GT_Mag_F_CA.paa";
tracersEvery = 10;
};

// Cyrus 9.3 10Rnd Magazine. Changing: Description. Changing back Caliber edited for MG5 Boxes
class 10Rnd_93x64_DMR_05_Mag : 150Rnd_93x64_Mag
{
ammo = "B_93x64_Ball";
descriptionShort = "Calibre: 9.3x64mm Brenneke<br />Rounds: 10<br />Tracers: None<br />Used in: SVDK Magpul";
displayName = "9.3x64 10Rnd Mag";
displayNameShort = "";
mass = 20.4895;
};

// MAR-10 .338 10Rnd Magazine. Changing: Description. No Evidence of .338 LM Tracer
class 10Rnd_338_Mag : CA_Magazine
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
displayName = ".338 LM 10Rnd Mag";
displayNameShort = "";
initSpeed = 881.177;
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
initSpeed = 800.1;
mass = 7.0331;
picture = "\A3\Weapons_F_EPA\Data\ui\M_10Rnd_762x51_CA.paa";
scope = 2; // Unhiding because parent was hidden due to wrong Name
};
class 10Rnd_762x54_Mag_Tracer : 10Rnd_762x54_Mag
{
descriptionShort = "Calibre: 7.62x54mmR<br />Rounds: 10<br />Tracers: Every Round<br />Used in: VS-121";
displayName = "7.62x54R 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_GT_762x54_CA.paa";
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
initSpeed = 2058.01;
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
initSpeed = 913.486;
mass = 5.7787;
};
class 10Rnd_556x45_KBU_Tracer_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 10<br />Tracers: Every Round<br />Used in: KBU-97A";
displayName = "5.56x45 10Rnd Tracer (Red) KBU Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 10;
tracersEvery = 10;
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_556x45_RT_Mag_F_CA.paa";
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
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_556x45_YT_Mag_F_CA.paa";
tracersEvery = 10;
};

// IR-DIM
// 5.56
class 10Rnd_556x45_KBU_IRT_Mag_F : 10Rnd_556x45_KBU_Tracer_Mag_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 10Rnd Tracer (IR-DIM) KBU Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_556x45_IRT_Mag_F_CA.paa";
};

// This shows up in Vest Magazines in Arsenal if you have the ZRG Equipped. I think the fuck not.
// Its only present for the User that has the weapon equipped. Weird. Only in ACE Arsenal.
/*class ESD_01_DummyMagazine_base;
class ESD_01_DummyMagazine_1 : ESD_01_DummyMagazine_base
{
scopeArsenal = 0;
};*/

// Creating 7.62x51 NATO 20Rnd Tracer, Tracer Every 4 and Reload Tracer Magazines
class 20Rnd_762x51_Tracer_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 20;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_RT_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_T4_Mag : 20Rnd_762x51_Tracer_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_RT4_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_RT_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_RRT_Mag_CA.paa";
};

// 7.62x51 NATO 10Rnd Magazine. Changing: Description. Changing Ammo Count to 5 (Its a goddamn 5Rnd Mag. Not editing all those Comments)
class 10Rnd_Mk14_762x51_Mag : 20Rnd_762x51_Mag
{
count = 5;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd Mag";
displayNameShort = "";
mass = 5.2755;
};

// Creating 7.62x51 NATO 10Rnd Tracer Magazine
class 10Rnd_Mk14_762x51_Tracer_Mag : 10Rnd_Mk14_762x51_Mag
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 5;
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_762x51_RT_Mag_CA.paa";
tracersEvery = 1;
};

// Creating .308 Winchester Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 20Rnd_308WIN_Mag : CA_Magazine
{
ammo = "B_308WIN_Ball";
count = 20;
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: None<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Mag";
displayNameShort = "";
initSpeed = 886.664;
mass = 15.7630;
modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
modelSpecialIsProxy = 1;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_20Rnd_762x51_Mag_ca.paa";
scope = 2;
};
class 20Rnd_308WIN_Tracer_Mag : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 20;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_YT_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_308WIN_T4_Mag : 20Rnd_308WIN_Tracer_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_YT4_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_308WIN_RT_Mag : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_YRT_Mag_CA.paa";
};

// Creating .308 Winchester Tracer and tracerless 10Rnd Magazines
class 10Rnd_308WIN_Mag : 20Rnd_308WIN_Mag
{
count = 5;
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 5<br />Tracers: None<br />Used in: M1A ACLS";
displayName = ".308 5Rnd Mag";
displayNameShort = "";
mass = 5.1918;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x51_mk14_10rnd";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_10Rnd_Mk14_762x51_Mag_ca.paa";
};
class 10Rnd_308WIN_Tracer_Mag : 10Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 5<br />Tracers: Every Round<br />Used in: M1A ACLS";
displayName = ".308 5Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 10;
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_762x51_YT_Mag_CA.paa";
tracersEvery = 1;
};

// Creating 7.62x51 HK Magazines for the MR 308
class 20Rnd_762x51_HK_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd HK Mag";
displayNameShort = "";
mass = 14.3120;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_NT_HK_Mag_CA.paa";
};
class 20Rnd_762x51_RT_HK_Mag : 20Rnd_762x51_HK_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd Tracer (Red) HK Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 20;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_RT_HK_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_RT4_HK_Mag : 20Rnd_762x51_RT_HK_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) HK Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_RT4_HK_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_RRT_HK_Mag : 20Rnd_762x51_HK_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd Reload Tracer (Red) HK Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_RRT_HK_Mag_CA.paa";
};

// Creating .308 Winchester HK Magazines for the MR 308
class 20Rnd_308WIN_HK_Mag : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: None<br />Used in: MR308 A3-28 20''";
displayName = ".308 20Rnd HK Mag";
mass = 13.9773;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_NT_HK_Mag_CA.paa";
};
class 20Rnd_308WIN_YT_HK_Mag : 20Rnd_308WIN_HK_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer (Yellow) HK Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 20;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_YT_HK_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_308WIN_YT4_HK_Mag : 20Rnd_308WIN_YT_HK_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) HK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_YT4_HK_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_308WIN_YRT_HK_Mag : 20Rnd_308WIN_HK_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Reload Tracer (Yellow) HK Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_YRT_HK_Mag_CA.paa";
};

// Creating AK-308 7.62x51 Magazines
class 20Rnd_762x51_AK_Mag_RT_F : 20Rnd_762x51_Mag
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: AK-308";
displayName = "7.62x51 20Rnd Reload Tracer (Green) AK Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
mass = 14.6868;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_GRT_mag_ca.paa";
};
class 20Rnd_762x51_AK_Mag_Tracer_F : 20Rnd_762x51_AK_Mag_RT_F
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: AK-308";
displayName = "7.62x51 20Rnd Tracer (Green) AK Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_GT_mag_ca.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_AK_Mag_T4_F : 20Rnd_762x51_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: AK-308";
displayName = "7.62x51 20Rnd Tracer Every 4 (Green) AK Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_GT4_mag_ca.paa";
tracersEvery = 4;	
};
class 20Rnd_762x51_AK_Mag_NT_F : 20Rnd_762x51_AK_Mag_RT_F
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: AK-308";
displayName = "7.62x51 20Rnd AK Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
};

// Creating AK-308 .308 Winchester Magazines
class 20Rnd_308WIN_AK_Mag_RT_F : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: AK-308";
displayName = ".308 20Rnd Reload Tracer (Yellow) AK Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
mass = 14.3521;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_YRT_mag_ca.paa";
};
class 20Rnd_308WIN_AK_Mag_Tracer_F : 20Rnd_308WIN_AK_Mag_RT_F
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: AK-308";
displayName = ".308 20Rnd Tracer (Yellow) AK Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_YT_mag_ca.paa";
};
class 20Rnd_308WIN_AK_Mag_T4_F : 20Rnd_308WIN_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: AK-308";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) AK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_YT4_mag_ca.paa";
tracersEvery = 4;
};
class 20Rnd_308WIN_AK_Mag_NT_F : 20Rnd_308WIN_AK_Mag_RT_F
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: None<br />Used in: AK-308";  
displayName = ".308 20Rnd AK Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
};

// Creating "New" RFB Magazines that get overwritten when CDLC is loaded to avoid duplicates
class 30Rnd_762x51_slr_lxWS : 20Rnd_762x51_Mag
{
author = "Rotators Collective";
count = 30;
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: None<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd FAL Mag";
mass = 23.5447;
scope = 1;
};
class 20Rnd_762x51_slr_lxWS : 30Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Green";
count = 20;
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: None<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd FAL Mag";
displaynameshort = "";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_RFB_CA.paa";
scope = 2;
};

// Required for Inheritance
class 20Rnd_762x51_slr_reload_tracer_green_lxWS : 20Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Reload Tracer (Green) FAL Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_RFB_CA.paa";
scope = 1;
};
class 20Rnd_762x51_slr_reload_tracer_red_lxWS : 20Rnd_762x51_slr_reload_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Reload Tracer (Red) FAL Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_RRT_RFB_CA.paa";
scope = 2;
};

// Inheritance
class 20Rnd_762x51_slr_tracer_green_lxWS : 20Rnd_762x51_slr_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer (Green) FAL Mag";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_RFB_CA.paa";
tracersEvery = 1;
scope = 1;
};
class 20Rnd_762x51_slr_tracer_red_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Tracer (Red) FAL Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_RT_RFB_CA.paa";
scope = 2;
};
class 20Rnd_762x51_slr_T4_red_lxWS : 20Rnd_762x51_slr_tracer_red_lxWS
{
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) FAL Mag";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_RT4_RFB_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_IRT_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) FAL Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_IRT_RFB_CA.paa";
scope = 2;
};
class 20Rnd_762x51_slr_IRT4_lxWS : 20Rnd_762x51_slr_IRT_lxWS
{
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) FAL Mag";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_IRT4_RFB_CA.paa";
tracersEvery = 4;
};

// IR-DIM
class 20Rnd_762x51_AK_Mag_IRT_F : 20Rnd_762x51_AK_Mag_Tracer_F
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) AK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_IRT_mag_ca.paa";
};
class 10Rnd_Mk14_762x51_IRT_Mag : 10Rnd_Mk14_762x51_Tracer_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 5Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_762x51_IRT_Mag_CA.paa";
};
class 20Rnd_762x51_IRT_Mag : 20Rnd_762x51_Tracer_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_IRT_Mag_CA.paa";
};
class 20Rnd_762x51_IRT_HK_Mag : 20Rnd_762x51_RT_HK_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) HK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_IRT_HK_Mag_CA.paa";
};

// IR-DIM T4
class 20Rnd_762x51_AK_Mag_IRT4_F : 20Rnd_762x51_AK_Mag_T4_F
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) AK Mag";	
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_msbs_IRT4_mag_ca.paa";
};
class 20Rnd_762x51_IRT4_Mag : 20Rnd_762x51_T4_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_IRT4_Mag_CA.paa";
};
class 20Rnd_762x51_IRT4_HK_Mag : 20Rnd_762x51_RT4_HK_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) HK Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_762x51_IRT4_HK_Mag_CA.paa";
};
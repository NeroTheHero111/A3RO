// Creating 7.62x51 NATO 20Rnd Tracer, Tracer Every 4 and Reload Tracer Magazines
class 20Rnd_762x51_Tracer_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 20;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_RT_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_T4_Mag : 20Rnd_762x51_Tracer_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_RT4_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_RT_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_RRT_Mag_CA.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_762x51_RT_Mag_CA.paa";
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
initSpeed = 886.6632;
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
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_YT_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_308WIN_T4_Mag : 20Rnd_308WIN_Tracer_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_YT4_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_308WIN_RT_Mag : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_YRT_Mag_CA.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_762x51_YT_Mag_CA.paa";
tracersEvery = 1;
};

// Creating 7.62x51 HK Magazines for the MR 308
class 20Rnd_762x51_HK_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd HK Mag";
displayNameShort = "";
mass = 14.3120;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_NT_HK_Mag_CA.paa";
};
class 20Rnd_762x51_RT_HK_Mag : 20Rnd_762x51_HK_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd Tracer (Red) HK Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 20;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_RT_HK_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_RT4_HK_Mag : 20Rnd_762x51_RT_HK_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) HK Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_RT4_HK_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_RRT_HK_Mag : 20Rnd_762x51_HK_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: MR308 A3-28 20''";
displayName = "7.62x51 20Rnd Reload Tracer (Red) HK Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_RRT_HK_Mag_CA.paa";
};

// Creating .308 Winchester HK Magazines for the MR 308
class 20Rnd_308WIN_HK_Mag : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: None<br />Used in: MR308 A3-28 20''";
displayName = ".308 20Rnd HK Mag";
mass = 13.9773;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_NT_HK_Mag_CA.paa";
};
class 20Rnd_308WIN_YT_HK_Mag : 20Rnd_308WIN_HK_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer (Yellow) HK Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 20;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_YT_HK_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_308WIN_YT4_HK_Mag : 20Rnd_308WIN_YT_HK_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) HK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_YT4_HK_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_308WIN_YRT_HK_Mag : 20Rnd_308WIN_HK_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Reload Tracer (Yellow) HK Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_YRT_HK_Mag_CA.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_GRT_mag_ca.paa";
};
class 20Rnd_762x51_AK_Mag_Tracer_F : 20Rnd_762x51_AK_Mag_RT_F
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: AK-308";
displayName = "7.62x51 20Rnd Tracer (Green) AK Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_GT_mag_ca.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_AK_Mag_T4_F : 20Rnd_762x51_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: AK-308";
displayName = "7.62x51 20Rnd Tracer Every 4 (Green) AK Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_GT4_mag_ca.paa";
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
mass = 14.35209;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_YRT_mag_ca.paa";
};
class 20Rnd_308WIN_AK_Mag_Tracer_F : 20Rnd_308WIN_AK_Mag_RT_F
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: AK-308";
displayName = ".308 20Rnd Tracer (Yellow) AK Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_YT_mag_ca.paa";
};
class 20Rnd_308WIN_AK_Mag_T4_F : 20Rnd_308WIN_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: AK-308";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) AK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_YT4_mag_ca.paa";
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
class 20Rnd_762x51_slr_lxWS : 20Rnd_762x51_Mag
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: None<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd FAL Mag";
displaynameshort = "";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_RFB_CA.paa";
};

// Required for Inheritance
class 20Rnd_762x51_slr_reload_tracer_green_lxWS : 20Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Reload Tracer (Green) FAL Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_RFB_CA.paa";
scope = 1;
};
class 20Rnd_762x51_slr_reload_tracer_red_lxWS : 20Rnd_762x51_slr_reload_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Reload Tracer (Red) FAL Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_RRT_RFB_CA.paa";
scope = 2;
};

// Inheritance
class 20Rnd_762x51_slr_tracer_green_lxWS : 20Rnd_762x51_slr_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer (Green) FAL Mag";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_RFB_CA.paa";
tracersEvery = 1;
scope = 1;
};
class 20Rnd_762x51_slr_tracer_red_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Tracer (Red) FAL Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_RT_RFB_CA.paa";
scope = 2;
};
class 20Rnd_762x51_slr_T4_red_lxWS : 20Rnd_762x51_slr_tracer_red_lxWS
{
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) FAL Mag";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_RT4_RFB_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_IRT_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) FAL Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_IRT_RFB_CA.paa";
scope = 2;
};
class 20Rnd_762x51_slr_IRT4_lxWS : 20Rnd_762x51_slr_IRT_lxWS
{
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) FAL Mag";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_IRT4_RFB_CA.paa";
tracersEvery = 4;
};

// IR-DIM
class 20Rnd_762x51_AK_Mag_IRT_F : 20Rnd_762x51_AK_Mag_Tracer_F
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) AK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_IRT_mag_ca.paa";
};
class 10Rnd_Mk14_762x51_IRT_Mag : 10Rnd_Mk14_762x51_Tracer_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 5Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_762x51_IRT_Mag_CA.paa";
};
class 20Rnd_762x51_IRT_Mag : 20Rnd_762x51_Tracer_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_IRT_Mag_CA.paa";
};
class 20Rnd_762x51_IRT_HK_Mag : 20Rnd_762x51_RT_HK_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) HK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_IRT_HK_Mag_CA.paa";
};

// IR-DIM T4
class 20Rnd_762x51_AK_Mag_IRT4_F : 20Rnd_762x51_AK_Mag_T4_F
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) AK Mag";	
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_msbs_IRT4_mag_ca.paa";
};
class 20Rnd_762x51_IRT4_Mag : 20Rnd_762x51_T4_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_IRT4_Mag_CA.paa";
};
class 20Rnd_762x51_IRT4_HK_Mag : 20Rnd_762x51_RT4_HK_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) HK Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_762x51_IRT4_HK_Mag_CA.paa";
};
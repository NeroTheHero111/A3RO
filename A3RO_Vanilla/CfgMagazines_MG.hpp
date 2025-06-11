// LIM-85 5.56 200Rnd Reload Tracer Box. Changing: Removing Tracer every 4.
class 200Rnd_556x45_Box_F : CA_Magazine
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Last 4 Rounds<br />Used in: M249 PARA";
displayName = "5.56x45 200Rnd Reload Tracer (Yellow) Box";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 913.4856;
mass = 75.1142;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YRT_Box_F_CA.paa";
tracersEvery = 0;
};
class 200Rnd_556x45_Box_Red_F : 200Rnd_556x45_Box_F
{
displayName = "5.56x45 200Rnd Reload Tracer (Red) Box";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.4856;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_RRT_Box_F_CA.paa";
};
// Tracer. Changing Name.
class  200Rnd_556x45_Box_Tracer_F : 200Rnd_556x45_Box_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every Round<br />Used in: M249 PARA";
displayName = "5.56x45 200Rnd Tracer (Yellow) Box";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YT_Box_F_CA.paa";
};
class 200Rnd_556x45_Box_Tracer_Red_F : 200Rnd_556x45_Box_Tracer_F
{
displayName = "5.56x45 200Rnd Tracer (Red) Box";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_RT_Box_F_CA.paa";
};

// Creating new 200Rnd Tracer Every 4 and tracerless Boxes
class 200Rnd_556x45_Box_T4_F : 200Rnd_556x45_Box_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every 4th Round<br />Used in: M249 PARA";
displayName = "5.56x45 200Rnd Tracer Every 4 (Yellow) Box";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YT4_Box_F_CA.paa";
};
class 200Rnd_556x45_Box_Red_T4_F : 200Rnd_556x45_Box_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every 4th Round<br />Used in: M249 PARA";
ammo = "B_556x45_Ball_Tracer_Red";
displayName = "5.56x45 200Rnd Tracer Every 4 (Red) Box";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_RT4_Box_F_CA.paa";
};
class 200Rnd_556x45_Box_NT_F : 200Rnd_556x45_Box_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: None<br />Used in: M249 PARA";
displayName = "5.56x45 200Rnd Box";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
};

// Creating .223 Remington MG Boxes
class 200Rnd_223REM_Box_RT_F : 200Rnd_556x45_Box_F
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 200<br />Tracers: Last 4 Rounds<br />Used in: M249 PARA, M249S® PARA";
displayName = ".223 200Rnd Reload Tracer (Yellow) Box";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 72.8284;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YRT_Box_F_CA.paa";
};
class 200Rnd_223REM_Box_Tracer_F : 200Rnd_223REM_Box_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 200<br />Tracers: Every Round<br />Used in: M249 PARA, M249S® PARA";
displayName = ".223 200Rnd Tracer (Yellow) Box";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YT_Box_F_CA.paa";
tracersEvery = 1;
};
class 200Rnd_223REM_Box_T4_F : 200Rnd_223REM_Box_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 200<br />Tracers: Every 4th Round<br />Used in: M249 PARA, M249S® PARA";
displayName = ".223 200Rnd Tracer Every 4 (Yellow) Box";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YT4_Box_F_CA.paa";
tracersEvery = 4;	
};
class 200Rnd_223REM_Box_NT_F : 200Rnd_223REM_Box_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 200<br />Tracers: None<br />Used in: M249 PARA, M249S® PARA";
displayName = ".223 200Rnd Box";
displayNameShort = ""; 
lastRoundsTracer = 0;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
};

// Mk200 6.5 200Rnd Boxes. Changing: Name. Description. Calibre to 5.56. Ammocount to 100
class 200Rnd_65x39_cased_Box : 100Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Yellow";
count = 100;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Last 4 Rounds<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Reload Tracer (Yellow) Stoner 96 Box";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 913.4856;
mass = 34.4092;
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YRT_Stoner_CA.paa";
tracersEvery = 0;
};
class 200Rnd_65x39_cased_Box_Red : 100Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Red";
count = 100;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Last 4 Rounds<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Reload Tracer (Red) Stoner 96 Box";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.4856;
mass = 34.4092;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_RRT_Stoner_CA.paa";
};
class 200Rnd_65x39_cased_Box_Tracer : 200Rnd_65x39_cased_Box
{
ammo = "B_556x45_Ball_Tracer_Yellow";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every Round<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Tracer (Yellow) Stoner 96 Box";
displayNameShort = "Tracer (Yellow)";
};
class 200Rnd_65x39_cased_Box_Tracer_Red : 200Rnd_65x39_cased_Box
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every Round<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Tracer (Red) Stoner 96 Box";
displayNameShort = "Tracer (Red)";
};

// Creating 5.56 200Rnd Tracer Every 4 and tracerless Boxes
class 200Rnd_65x39_cased_Box_T4 : 200Rnd_65x39_cased_Box_Tracer
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every 4th Round<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Tracer Every 4 (Yellow) Stoner 96 Box";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YT4_Stoner_CA.paa";
tracersEvery = 4;
};
class 200Rnd_65x39_cased_Box_T4_Red : 200Rnd_65x39_cased_Box_Tracer_Red
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: Every 4th Round<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Tracer Every 4 (Red) Stoner 96 Box";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_RT4_Stoner_CA.paa";
tracersEvery = 4;
};
class 200Rnd_65x39_cased_Box_NT : 200Rnd_65x39_cased_Box
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Tracers: None<br />Used in: Stoner 96";
displayName = "5.56x45 100Rnd Stoner 96 Box";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
};

// Creating new MG5 7.62 120Rnd Tracer, Tracer Every 4 and tracerless Boxes
class 150Rnd_93x64_Mag_Tracer : 150Rnd_93x64_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 120<br />Tracers: Every Round<br />Used in: MG5 A2";
displayName = "7.62x51 120Rnd Tracer (Green) MG5 Box";
displayNameShort = "Tracer (Green)";
initSpeed = 843.0768;
lastRoundsTracer = 120;
picture = "\A3RO_Vanilla\Textures\UI\icon_120Rnd_762x51_GT_CA.paa";
tracersEvery = 1;
};
class 150Rnd_93x64_Mag_T4 : 150Rnd_93x64_Mag_Tracer
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 120<br />Tracers: Every 4th Round<br />Used in: MG5 A2";
displayName = "7.62x51 120Rnd Tracer Every 4 (Green) MG5 Box";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_120Rnd_762x51_GT4_CA.paa";
tracersEvery = 4;
};
class 150Rnd_93x64_Mag_NT : 150Rnd_93x64_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 120<br />Tracers: None<br />Used in: MG5 A2";
displayName = "7.62x51 120Rnd MG5 Box";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
};

// SPMG .338 NM 130Rnd Boxes. Changing: Name. Description
class 130Rnd_338_Mag : CA_Magazine
{
descriptionShort = "Calibre: .338 Norma Magnum<br />Rounds: 130<br />Tracers: None<br />Used in: RM338";
displayName = ".338 NM 130Rnd Box";
displaynameshort = "";
lastRoundsTracer = 0;
mass = 154.4749;
tracersEvery = 0;
};

class 150Rnd_762x51_Box : CA_Magazine
{
scope = 1; // BI can't decide which Magazine we should use
};

// Zafir 7.62 150Rnd Boxes. Changing: Name. Description. Calibre to 7.62 NATO. Ammocount to 100.
class 150Rnd_762x54_Box : 150Rnd_762x51_Box
{
ammo = "B_762x51_Tracer_Green";
count = 100;	
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: Negev NG-7";
displayName = "7.62x51 100Rnd Reload Tracer (Green) NG-7 Box";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
initSpeed = 843.0768;
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_762x51_GRT_NG7_CA.paa";
tracersEvery = 0;
mass = 67.07247884;
scope = 2; // Unhiding due to Dead Parent
};
class 150Rnd_762x54_Box_Tracer : 150Rnd_762x54_Box
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Every Round<br />Used in: Negev NG-7";
displayName = "7.62x51 100Rnd Tracer (Green) NG-7 Box";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_762x51_GT_NG7_CA.paa";
tracersEvery = 1;
};

// Creating 7.62 100Rnd Tracer Every 4 and tracerless Boxes
class 100Rnd_762x51_NG7_Box_GT4 : 150Rnd_762x54_Box_Tracer
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Every 4th Round<br />Used in: Negev NG-7";
displayName = "7.62x51 100Rnd Tracer Every 4 (Green) NG-7 Box";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_762x51_GT4_NG7_CA.paa";
tracersEvery = 4;
};
class 100Rnd_762x51_NG7_Box_NT : 150Rnd_762x54_Box
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: None<br />Used in: Negev NG-7";
displayName = "7.62x51 100Rnd NG-7 Box";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
};

// Creating Stoner 96 200Rnd .223 Remington Pouches
class 200Rnd_223REM_Mk200_RT_Box : 200Rnd_65x39_cased_Box
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: Stoner 96";
displayName = ".223 100Rnd Reload Tracer (Yellow) Stoner 96 Box";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YRT_Stoner_CA.paa";
};
class 200Rnd_223REM_Mk200_Tracer_Box : 200Rnd_223REM_Mk200_RT_Box
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every Round<br />Used in: Stoner 96";
displayName = ".223 100Rnd Tracer (Yellow) Stoner 96 Box";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
tracersEvery = 1;
};
class 200Rnd_223REM_Mk200_T4_Box : 200Rnd_223REM_Mk200_Tracer_Box
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: Stoner 96";
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Stoner 96 Box";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_YT4_Stoner_CA.paa";
tracersEvery = 4;
};
class 200Rnd_223REM_Mk200_NT_Box : 200Rnd_223REM_Mk200_RT_Box
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: None<br />Used in: Stoner 96";
displayName = ".223 100Rnd Stoner 96 Box";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
};

// IR-DIM
class 200Rnd_556x45_Box_IRT_F : 200Rnd_556x45_Box_Tracer_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 200Rnd Tracer (IR-DIM) Box";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_IRT_Box_F_CA.paa";
};
class 150Rnd_93x64_Mag_IRT : 150Rnd_93x64_Mag_Tracer
{
ammo = "B_762x51_Ball_IR";	
displayName = "7.62x51 120Rnd Tracer (IR-DIM) MG5 Box";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_120Rnd_762x51_IRT_CA.paa";
};
class 100Rnd_762x51_NG7_Box_IRT : 150Rnd_762x54_Box_Tracer
{
ammo = "B_762x51_Ball_IR";		
displayName = "7.62x51 100Rnd Tracer (IR-DIM) NG-7 Box";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_762x51_IRT_NG7_CA.paa";
};
class 200Rnd_556x45_Mk200_IRT_Box : 200Rnd_65x39_cased_Box_Tracer
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 100Rnd Tracer (IR-DIM) Stoner 96 Box";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_IRT_Stoner_CA.paa";
};

// IR-DIM T4
class 200Rnd_556x45_Box_IRT4_F : 200Rnd_556x45_Box_T4_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 200Rnd Tracer Every 4 (IR-DIM) Box";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_IRT4_Box_F_CA.paa";
};
class 150Rnd_93x64_Mag_IRT4 : 150Rnd_93x64_Mag_T4
{
ammo = "B_762x51_Ball_IR";	
displayName = "7.62x51 120Rnd Tracer Every 4 (IR-DIM) MG5 Box";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_120Rnd_762x51_IRT4_CA.paa";
};
class 100Rnd_762x51_NG7_Box_IRT4 : 100Rnd_762x51_NG7_Box_GT4
{
ammo = "B_762x51_Ball_IR";		
displayName = "7.62x51 100Rnd Tracer Every 4 (IR-DIM) NG-7 Box";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_762x51_IRT4_NG7_CA.paa";
};
class 200Rnd_556x45_Mk200_IRT4_Box : 200Rnd_65x39_cased_Box_T4
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 100Rnd Tracer Every 4 (IR-DIM) Stoner 96 Box";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_200Rnd_556x45_IRT4_Stoner_CA.paa";
};
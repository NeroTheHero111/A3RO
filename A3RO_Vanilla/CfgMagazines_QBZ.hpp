// QBZ-95-1 30Rnd 5.8 Magazines. Changing: Name. Description

class 30Rnd_580x42_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 930;
mass = 12.0899;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_58x42_GRT_Mag_F_CA.paa";
};
class 30Rnd_580x42_Mag_Tracer_F : 30Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_58x42_GT_Mag_F_CA.paa";
};

// QJB-95-1 75Rnd 5.8 Magazines. Changing: Name. Description. Mass. Ammocount from 100 to 75
class 100Rnd_580x42_Mag_F : 30Rnd_580x42_Mag_F
{
count = 75;
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Reload Tracer (Green) Mag";
mass = 43.0797;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GRT_Mag_F_CA.paa";
};
class 100Rnd_580x42_ghex_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8x42 75Rnd Reload Tracer (Green) Green Hex Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GRT_GHex_Mag_F_CA.paa";
};
class 100Rnd_580x42_hex_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8x42 75Rnd Reload Tracer (Green) Hex Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GRT_Hex_Mag_F_CA.paa";
};
class 100Rnd_580x42_Mag_Tracer_F : 100Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 75;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GT_Mag_F_CA.paa";
};
class 100Rnd_580x42_ghex_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
{
displayName = "5.8x42 75Rnd Tracer (Green) Green Hex Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GT_GHex_Mag_F_CA.paa";
};
class 100Rnd_580x42_hex_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
{
displayName = "5.8x42 75Rnd Tracer (Green) Hex Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GT_Hex_Mag_F_CA.paa";
};


// Creating 5.8 Tracer Every 4 and tracerless Magazines
// 30Rnd
class 30Rnd_580x42_Mag_T4_F : 30Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_58x42_GT4_Mag_F_CA.paa";
tracersEvery = 4;
};
class 30Rnd_580x42_NT_Mag_F : 30Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// 100Rnd
class 100Rnd_580x42_T4_Mag_F : 100Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GT4_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_580x42_ghex_T4_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer Every 4 (Green) Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GT4_GHex_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_580x42_hex_T4_Mag_F : 100Rnd_580x42_hex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer Every 4 (Green) Hex Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_GT4_Hex_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_580x42_NT_Mag_F : 100Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_Mag_F_CA.paa";
};
class 100Rnd_580x42_ghex_NT_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Green Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_GHex_Mag_F_CA.paa";
};
class 100Rnd_580x42_hex_NT_Mag_F : 100Rnd_580x42_hex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_Hex_Mag_F_CA.paa";
};


// QBZ 5.56 NATO Magazines and Drums
//30 Rnd
class 30Rnd_556x45_RT_QBZ_Mag_F : 30Rnd_580x42_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd Reload Tracer (Red) QBZ Mag";	
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.4856;
mass = 12.0009;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_RRT_QBZ_Mag_F_CA.paa";
};
class 30Rnd_556x45_Tracer_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd Tracer (Red) QBZ Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_RT_QBZ_Mag_F_CA.paa";
tracersEvery = 1;
};
class 30Rnd_556x45_T4_QBZ_Mag_F : 30Rnd_556x45_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd Tracer Every 4 (Red) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_RT4_QBZ_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 30Rnd_556x45_NT_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// 100Rnds
// GHex
class 75Rnd_556x45_RT_Ghex_QBZ_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Reload Tracer (Red) QBZ Green Hex Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.4856;
mass = 42.8571;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RRT_GHex_QBZ_CA.paa";
};
class 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer (Red) QBZ Green Hex Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RT_GHex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_556x45_T4_Ghex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer Every 4 (Red) QBZ Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RT4_GHex_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd QBZ Green Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_GHex_Mag_F_CA.paa";
};

// Hex
class 75Rnd_556x45_RT_Hex_QBZ_Mag_F : 100Rnd_580x42_hex_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Reload Tracer (Red) QBZ Hex Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.4856;
mass = 42.8571;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RRT_Hex_QBZ_CA.paa";
};
class 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer (Red) QBZ Hex Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RT_Hex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_556x45_T4_Hex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer Every 4 (Red) QBZ Hex Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RT4_Hex_QBZ_CA.paa";
tracersEvery = 4;
};
class 75Rnd_556x45_NT_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd QBZ Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_Hex_Mag_F_CA.paa";
};

// Black
class 75Rnd_556x45_RT_QBZ_Mag_F : 100Rnd_580x42_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Reload Tracer (Red) QBZ Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.4856;
mass = 42.8571;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RRT_QBZ_CA.paa";
};
class 75Rnd_556x45_Tracer_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer (Red) QBZ Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RT_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_556x45_T4_QBZ_Mag_F : 75Rnd_556x45_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer Every 4 (Red) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_RT4_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_Mag_F_CA.paa";
};


// T97NSR-A .223 NATO Magazines and Drums
//30 Rnd
class 30Rnd_223REM_RT_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Reload Tracer (Yellow) QBZ Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 11.6580;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_YRT_QBZ_Mag_F_CA.paa";
};
class 30Rnd_223REM_Tracer_QBZ_Mag_F : 30Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Tracer (Yellow) QBZ Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_YT_QBZ_Mag_F_CA.paa";
tracersEvery = 1;
};
class 30Rnd_223REM_T4_QBZ_Mag_F : 30Rnd_223REM_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_YT4_QBZ_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 30Rnd_223REM_NT_QBZ_Mag_F : 30Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 30Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// 100Rnds
// GHex
class 75Rnd_223REM_RT_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Green Hex Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 42.0000;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YRT_GHex_QBZ_CA.paa";
};
class 75Rnd_223REM_Tracer_Ghex_QBZ_Mag_F : 75Rnd_223REM_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer (Yellow) QBZ Green Hex Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YT_GHex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_223REM_T4_Ghex_QBZ_Mag_F : 75Rnd_223REM_Tracer_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YT4_GHex_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_223REM_NT_Ghex_QBZ_Mag_F : 75Rnd_223REM_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 75Rnd QBZ Green Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_GHex_Mag_F_CA.paa";
};

// Hex
class 75Rnd_223REM_RT_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Hex Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 42.0000;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YRT_Hex_QBZ_CA.paa";
};
class 75Rnd_223REM_Tracer_Hex_QBZ_Mag_F : 75Rnd_223REM_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer (Yellow) QBZ Hex Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YT_Hex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_223REM_T4_Hex_QBZ_Mag_F : 75Rnd_223REM_Tracer_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Hex Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YT4_Hex_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_223REM_NT_Hex_QBZ_Mag_F : 75Rnd_223REM_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 75Rnd QBZ Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_Hex_Mag_F_CA.paa";
};

// Black
class 75Rnd_223REM_RT_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 42.0000;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YRT_QBZ_CA.paa";
};
class 75Rnd_223REM_Tracer_QBZ_Mag_F : 75Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer (Yellow) QBZ Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YT_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_223REM_T4_QBZ_Mag_F : 75Rnd_223REM_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_YT4_QBZ_CA.paa";
tracersEvery = 4;
};
class 75Rnd_223REM_NT_QBZ_Mag_F : 75Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 75Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// IR-DIM 
// 5.56
class 30Rnd_556x45_IRT_QBZ_Mag_F : 30Rnd_556x45_Tracer_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 30Rnd Tracer (IR-DIM) QBZ Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_IRT_QBZ_Mag_F_CA.paa";
};
class 75Rnd_556x45_IRT_Ghex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer (IR-DIM) QBZ Green Hex Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_IRT_GHex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT_Hex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer (IR-DIM) QBZ Hex Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_IRT_Hex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT_QBZ_Mag_F : 75Rnd_556x45_Tracer_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer (IR-DIM) QBZ Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_IRT_QBZ_CA.paa";
};

// IR-DIM T4
// 5.56
class 30Rnd_556x45_IRT4_QBZ_Mag_F : 30Rnd_556x45_T4_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_556x45_IRT4_QBZ_Mag_F_CA.paa";
};
class 75Rnd_556x45_IRT4_Ghex_QBZ_Mag_F : 75Rnd_556x45_T4_Ghex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer Every 4 (IR-DIM) QBZ Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_IRT4_GHex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT4_Hex_QBZ_Mag_F : 75Rnd_556x45_T4_Hex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer Every 4 (IR-DIM) QBZ Hex Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_IRT4_Hex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT4_QBZ_Mag_F : 75Rnd_556x45_T4_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_556x45_IRT4_QBZ_CA.paa";
};
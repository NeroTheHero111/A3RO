// ADR-97 50Rnd Magazine. Changing: Name. Description. InitSpeed to Match TypicalSpeed
class 50Rnd_570x28_SMG_03 : CA_Magazine
{
ammo = "B_570x28_Ball_Red";
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 50<br />Tracers: None<br />Used in: P90, PS90";	
displayName = "5.7x28 50Rnd P90 Mag";
displayNameShort = "";
initSpeed = 716;
mass = 10.1253;
picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
};

// Creating 5.7 50Rnd Tracer, Tracer Every 4 and Reload Tracer Mags
class 50Rnd_570x28_SMG_03_Tracer : 50Rnd_570x28_SMG_03
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 50<br />Tracers: Every Round<br />Used in: P90, PS90";	
displayName = "5.7x28 50Rnd Tracer (Red) P90 Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 50;
picture = "\A3RO_Vanilla\Textures\UI\icon_50Rnd_57x28_RT_Mag.paa";
tracersEvery = 1;
};
class 50Rnd_570x28_SMG_03_T4 : 50Rnd_570x28_SMG_03_Tracer
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 50<br />Tracers: Every 4th Round<br />Used in: P90, PS90";	
displayName = "5.7x28 50Rnd Tracer Every 4 (Red) P90 Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_50Rnd_57x28_RT4_Mag.paa";
tracersEvery = 4;
};
class 50Rnd_570x28_SMG_03_RT : 50Rnd_570x28_SMG_03
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 50<br />Tracers: Last 4 Rounds<br />Used in: P90, PS90";	
displayName = "5.7x28 50Rnd Reload Tracer (Red) P90 Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_50Rnd_57x28_RRT_Mag.paa";
};

// Creating new 30Rnd 9x19mm Parabellum CPW Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_9x19_Mag : 30Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Green";
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: None<br />Used in: CPW 9x19";
displayName = "9x19 30Rnd CPW Mag";
displayNameShort = "";
initSpeed = 360;
mass = 10.40582;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_57x28_CPW_Mag.paa"
scope = 2; // Unhiding after Parent gone
};

// Tracer
class 30Rnd_9x19_Tracer_Green_Mag : 30Rnd_9x19_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Every Round<br />Used in: CPW 9x19";
displayName = "9x19 30Rnd Tracer (Green) CPW Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GT_CPW_Mag.paa";
tracersEvery = 1;
};
class 30Rnd_9x19_Tracer_Red_Mag : 30Rnd_9x19_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Tracer (Red) CPW Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RT_CPW_Mag.paa";
};
class 30Rnd_9x19_Tracer_Yellow_Mag : 30Rnd_9x19_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Tracer (Yellow) CPW Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YT_CPW_Mag.paa";
};

// Tracer Every 4
class 30Rnd_9x19_T4_Green_Mag : 30Rnd_9x19_Tracer_Green_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: CPW 9x19";
displayName = "9x19 30Rnd Tracer Every 4 (Green) CPW Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GT4_CPW_Mag.paa";
tracersEvery = 4;
};
class 30Rnd_9x19_T4_Red_Mag : 30Rnd_9x19_T4_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Tracer Every 4 (Red) CPW Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RT4_CPW_Mag.paa";
};
class 30Rnd_9x19_T4_Yellow_Mag : 30Rnd_9x19_T4_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Tracer Every 4 (Yellow) CPW Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YT4_CPW_Mag.paa";
};

// Reload Tracer
class 30Rnd_9x19_RT_Green_Mag : 30Rnd_9x19_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: CPW 9x19";
displayName = "9x19 30Rnd Reload Tracer (Green) CPW Mag";
displaynameshort = "Rel. Tr. (Green)";	
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GRT_CPW_Mag.paa";
};
class 30Rnd_9x19_RT_Red_Mag : 30Rnd_9x19_RT_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Reload Tracer (Red) CPW Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RRT_CPW_Mag.paa";
};
class 30Rnd_9x19_RT_Yellow_Mag : 30Rnd_9x19_RT_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Reload Tracer (Yellow) CPW Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YRT_CPW_Mag.paa";
};

// Creating new 30Rnd FN 5.7x28mm NATO CPW Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_570x28_Mag : 30Rnd_9x21_Mag
{
ammo = "B_570x28_Ball_Red";
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: CPW 5.7x28";
displayName = "5.7x28 30Rnd CPW Mag";
displayNameShort = "";	
initSpeed = 716;
mass = 6.2062;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_57x28_CPW_Mag.paa";
scope = 2; // Out of unhiding related jokes
};
class 30Rnd_570x28_Tracer_Red_Mag : 30Rnd_570x28_Mag
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: CPW 5.7x28";
displayName = "5.7x28 30Rnd Tracer (Red) CPW Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_57x28_RT_CPW_Mag.paa";
tracersEvery = 1;
};
class 30Rnd_570x28_T4_Red_Mag : 30Rnd_570x28_Tracer_Red_Mag
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: CPW 5.7x28";
displayName = "5.7x28 30Rnd Tracer Every 4 (Red) CPW Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_57x28_RT4_CPW_Mag.paa";
tracersEvery = 4;
};
class 30Rnd_570x28_RT_Red_Mag : 30Rnd_570x28_Mag
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: CPW 5.7x28";
displayName = "5.7x28 30Rnd Reload Tracer (Red) CPW Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_57x28_RRT_CPW_Mag.paa";
lastRoundsTracer = 4;
};

// Creating new 30Rnd 4.6x30mm CPW Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_460x30_Mag : 30Rnd_9x21_Mag
{
ammo = "B_460x30_Ball";
descriptionShort = "Calibre: 4.6x30mm<br />Rounds: 30<br />Tracers: None<br />Used in: CPW 4.6x30";
displayName = "4.6x30 30Rnd CPW Mag";
displayNameShort = "";
initSpeed = 622;
mass = 6.5697;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_57x28_CPW_Mag.paa";
scope = 2;
};
/* On the off-chance I find proof of 4.6 Tracer Ammo.
class 30Rnd_460x30_Tracer_Yellow_Mag : 30Rnd_460x30_Mag
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: CPW 4.6x30";
displayName = "4.6x30 30Rnd Tracer (Yellow) CPW Mag";
displayNameShort = "Tracer (Yellow)";
tracersEvery = 1;
};
class 30Rnd_460x30_T4_Yellow_Mag : 30Rnd_460x30_Tracer_Yellow_Mag
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: CPW 4.6x30";
displayName = "4.6x30 30Rnd Tracer Every 4 (Yellow) CPW Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
tracersEvery = 4;
};
class 30Rnd_460x30_RT_Yellow_Mag : 30Rnd_460x30_Mag
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: CPW 4.6x30";
displayName = "4.6x30 30Rnd Reload Tracer (Yellow) CPW Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
};*/

// Creating new SMG 30Rnd 9x19mm Parabellum Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_9x19_SMG_Mag : 30Rnd_9x19_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: None<br />Used in: Scorpion EVO 3 A1, Scorpion EVO 3 S1";
displayName = "9x19 30Rnd Mag";
displayNameShort = "";
mass = 10.6262;
picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
};

// Tracer
class 30Rnd_9x19_SMG_Tracer_Green_Mag : 30Rnd_9x19_SMG_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Every Round<br />Used in: Scorpion EVO 3 A1, Scorpion EVO 3 S1";
displayName = "9x19 30Rnd Tracer (Green) Mag";	
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GT_SMG_Mag_CA.paa";
tracersEvery = 1;
};
class 30Rnd_9x19_SMG_Tracer_Red_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Tracer (Red) Mag";	
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RT_SMG_Mag_CA.paa";
};
class 30Rnd_9x19_SMG_Tracer_Yellow_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YT_SMG_Mag_CA.paa";
};

// Tracer Every 4
class 30Rnd_9x19_SMG_T4_Green_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: Scorpion EVO 3 A1, Scorpion EVO 3 S1";
displayName = "9x19 30Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GT4_SMG_Mag_CA.paa";
tracersEvery = 4;
};
class 30Rnd_9x19_SMG_T4_Red_Mag : 30Rnd_9x19_SMG_T4_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Tracer Every 4 (Red) Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RT4_SMG_Mag_CA.paa";
};
class 30Rnd_9x19_SMG_T4_Yellow_Mag : 30Rnd_9x19_SMG_T4_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YT4_SMG_Mag_CA.paa";
};

// Reload Tracer
class 30Rnd_9x19_SMG_RT_Green_Mag : 30Rnd_9x19_SMG_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: Scorpion EVO 3 A1, Scorpion EVO 3 S1";
displayName = "9x19 30Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GRT_SMG_Mag_CA.paa";
};
class 30Rnd_9x19_SMG_RT_Red_Mag : 30Rnd_9x19_SMG_RT_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RRT_SMG_Mag_CA.paa";
};
class 30Rnd_9x19_SMG_RT_Yellow_Mag : 30Rnd_9x19_SMG_RT_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YRT_SMG_Mag_CA.paa";
};

// Creating new MP5 30Rnd 9x19mm Parabellum Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_9x19_MP5_Mag : 30Rnd_9x19_SMG_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: None<br />Used in: MP5K-PDW, SP5K-PDW";
displayName = "9x19 30Rnd HK Mag";
displayNameShort = "";
mass = 12.4781;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_MP5_Mag_CA.paa";
};
// Tracer
class 30Rnd_9x19_GT_MP5_Mag : 30Rnd_9x19_MP5_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Every Round<br />Used in: MP5K-PDW, SP5K-PDW";
displayName = "9x19 30Rnd Tracer (Green) HK Mag";	
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GT_MP5_Mag_CA.paa";
tracersEvery = 1;
};
class 30Rnd_9x19_RT_MP5_Mag : 30Rnd_9x19_GT_MP5_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Tracer (Red) HK Mag";	
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RT_MP5_Mag_CA.paa";
};
class 30Rnd_9x19_YT_MP5_Mag : 30Rnd_9x19_GT_MP5_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Tracer (Yellow) HK Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YT_MP5_Mag_CA.paa";
};
// Tracer Every 4
class 30Rnd_9x19_GT4_MP5_Mag : 30Rnd_9x19_GT_MP5_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: MP5K-PDW, SP5K-PDW";
displayName = "9x19 30Rnd Tracer Every 4 (Green) HK Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GT4_MP5_Mag_CA.paa";
tracersEvery = 4;
};
class 30Rnd_9x19_RT4_MP5_Mag : 30Rnd_9x19_GT4_MP5_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Tracer Every 4 (Red) HK Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RT4_MP5_Mag_CA.paa";
};
class 30Rnd_9x19_YT4_MP5_Mag : 30Rnd_9x19_GT4_MP5_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Tracer Every 4 (Yellow) HK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YT4_MP5_Mag_CA.paa";
};
// Reload Tracer
class 30Rnd_9x19_GRT_MP5_Mag : 30Rnd_9x19_MP5_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: MP5K-PDW, SP5K-PDW";
displayName = "9x19 30Rnd Reload Tracer (Green) HK Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_GRT_MP5_Mag_CA.paa";
};
class 30Rnd_9x19_RRT_MP5_Mag : 30Rnd_9x19_GRT_MP5_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 30Rnd Reload Tracer (Red) HK Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_RRT_MP5_Mag_CA.paa";
};
class 30Rnd_9x19_YRT_MP5_Mag : 30Rnd_9x19_GRT_MP5_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 30Rnd Reload Tracer (Yellow) HK Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_9x19_YRT_MP5_Mag_CA.paa";
};

// Vermin 30Rnd Magazines. Changing: Name. Description. 30Rnd_45ACP_Mag_SMG_01 defined in Vanilla.hpp as it is used in Pistol config aswell
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Every Round<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Tracer (Red) Vector Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_RT_Vector_Mag_CA.paa";
};
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Every Round<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Tracer (Green) Vector Mag";
displayNameShort = "Tracer (Green)";
initSpeed = 345.948;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_GT_Vector_Mag_CA.paa";
};
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Every Round<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Tracer (Yellow) Vector Mag";	
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_YT_Vector_Mag_CA.paa";
};

// Adding Reload Tracer, Tracer Every 4 and tracerless Magazines
class 30Rnd_45ACP_Mag_SMG_01_RT_Green : 30Rnd_45ACP_Mag_SMG_01
{
ammo = "B_45ACP_Ball_Green";
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Reload Tracer (Green) Vector Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_GRT_Vector_Mag_CA.paa";
};
class 30Rnd_45ACP_Mag_SMG_01_RT_Yellow : 30Rnd_45ACP_Mag_SMG_01
{
ammo = "B_45ACP_Ball_Yellow";
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Reload Tracer (Yellow) Vector Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_YRT_Vector_Mag_CA.paa";
};
class 30Rnd_45ACP_Mag_SMG_01_T4_Red : 30Rnd_45ACP_Mag_SMG_01_Tracer_Red
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Tracer Every 4 (Red) Vector Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_RT4_Vector_Mag_CA.paa";
tracersEvery = 4;
};
class 30Rnd_45ACP_Mag_SMG_01_T4_Green : 30Rnd_45ACP_Mag_SMG_01_T4_Red
{
ammo = "B_45ACP_Ball_Green";	
displayName = ".45 ACP 30Rnd Tracer Every 4 (Green) Vector Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_GT4_Vector_Mag_CA.paa";
};
class 30Rnd_45ACP_Mag_SMG_01_T4_Yellow : 30Rnd_45ACP_Mag_SMG_01_T4_Red
{
ammo = "B_45ACP_Ball_Yellow";	
displayName = ".45 ACP 30Rnd Tracer Every 4 (Yellow) Vector Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_YT4_Vector_Mag_CA.paa";
};
class 30Rnd_45ACP_Mag_SMG_01_NT : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: None<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Vector Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_Vector_Mag_CA.paa";
};

// Creating new Vector 40Rnd 9x19mm Parabellum Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 40Rnd_9x19_Vector_Mag : 30Rnd_9x19_Mag
{
count = 40;	
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 40<br />Tracers: None<br />Used in: Vector SMG Gen I 9x19";
displayName = "9x19 40Rnd Vector Mag";
displayNameShort = "";
mass = 15.69948;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_Vector_Mag_CA.paa";
};

// Tracer
class 40Rnd_9x19_Vector_Tracer_Green_Mag : 40Rnd_9x19_Vector_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 40<br />Tracers: Every Round<br />Used in: Vector SMG Gen I 9x19";
displayName = "9x19 40Rnd Tracer (Green) Vector Mag";	
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_GT_Vector_Mag_CA.paa";
tracersEvery = 1;
};
class 40Rnd_9x19_Vector_Tracer_Red_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 40Rnd Tracer (Red) Vector Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_RT_Vector_Mag_CA.paa";
};
class 40Rnd_9x19_Vector_Tracer_Yellow_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 40Rnd Tracer (Yellow) Vector Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_YT_Vector_Mag_CA.paa";
};

// Tracer Every 4
class 40Rnd_9x19_Vector_T4_Green_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 40<br />Tracers: Every 4th Round<br />Used in: Vector SMG Gen I 9x19";
displayName = "9x19 40Rnd Tracer Every 4 (Green) Vector Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_GT4_Vector_Mag_CA.paa";
tracersEvery = 4;
};
class 40Rnd_9x19_Vector_T4_Red_Mag : 40Rnd_9x19_Vector_T4_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 40Rnd Tracer Every 4 (Red) Vector Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_RT4_Vector_Mag_CA.paa";
};
class 40Rnd_9x19_Vector_T4_Yellow_Mag : 40Rnd_9x19_Vector_T4_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 40Rnd Tracer Every 4 (Yellow) Vector Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_YT4_Vector_Mag_CA.paa";
};

// Reload Tracer
class 40Rnd_9x19_Vector_RT_Green_Mag : 40Rnd_9x19_Vector_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 40<br />Tracers: Last 4 Rounds<br />Used in: Vector SMG Gen I 9x19";
displayName = "9x19 40Rnd Reload Tracer (Green) Vector Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_GRT_Vector_Mag_CA.paa";
};
class 40Rnd_9x19_Vector_RT_Red_Mag : 40Rnd_9x19_Vector_RT_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9x19 40Rnd Reload Tracer (Red) Vector Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_RRT_Vector_Mag_CA.paa";
};
class 40Rnd_9x19_Vector_RT_Yellow_Mag : 40Rnd_9x19_Vector_RT_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 40Rnd Reload Tracer (Yellow) Vector Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_40Rnd_9x19_YRT_Vector_Mag_CA.paa";
};
// Katiba 6.5 30Rnd Magazines. Changing: Description. Ammo to 5.56. 
class 30Rnd_65x39_caseless_green : 30Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Green";
count = 20;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd Reload Tracer (Green) KH-2002 Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 913.4856;
mass = 8.0961;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_GRT_Katiba_CA.paa";
};
class 30Rnd_65x39_caseless_green_mag_Tracer : 30Rnd_65x39_caseless_green
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd Tracer (Green) KH-2002 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_GT_Katiba_CA.paa";
};

// Creating KH-2002 5.56 20Rnd Tracer every 4 and tracerless Magazine.
class 20Rnd_556x45_Katiba_GT4_Mag : 30Rnd_65x39_caseless_green_mag_Tracer
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd Tracer Every 4 (Green) KH-2002 Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_GT4_Katiba_CA.paa";
};
class 20Rnd_556x45_Katiba_NT_Mag : 30Rnd_65x39_caseless_green
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd KH-2002 Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
};

// Type 115 Integrated .50BW Magazine. Changing: Name. Description
class 10Rnd_50BW_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Tracers: None<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Mag";
displayNameShort = "";
mass = 13.5714;
};
// No Evidence of .50BW Tracer
/*class 10Rnd_50BW_Mag_Tracer_F : 10Rnd_50BW_Mag_F
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Tracers: Every Round<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 10;
picture = "\A3RO_Vanilla\Textures\UI\icon_10Rnd_50BW_Tracer_Mag_F_CA.paa";
tracersEvery = 1;
};*/

// Creating .223 Remington KH-2002 Magazines
class 20Rnd_223REM_Katiba_YRT_Mag : 30Rnd_65x39_caseless_green
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd Reload Tracer (Yellow) KH-2002 Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 7.8675;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_YRT_Katiba_CA.paa";
};
class 20Rnd_223REM_Katiba_YT_Mag : 20Rnd_223REM_Katiba_YRT_Mag
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd Tracer (Yellow) KH-2002 Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_YT_Katiba_CA.paa";
tracersEvery = 1;
};
class 20Rnd_223REM_Katiba_YT4_Mag : 20Rnd_223REM_Katiba_YT_Mag
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd Tracer Every 4 (Yellow) KH-2002 Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_YT4_Katiba_CA.paa";
tracersEvery = 4;	
};
class 20Rnd_223REM_Katiba_NT_Mag : 20Rnd_223REM_Katiba_YRT_Mag
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd KH-2002 Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
};

// IR-DIM
class 20Rnd_556x45_Katiba_IRT_Mag : 30Rnd_65x39_caseless_green_mag_Tracer
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 20Rnd Tracer (IR-DIM) KH-2002 Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_IRT_Katiba_CA.paa";
};
// IR-DIM T4
class 20Rnd_556x45_Katiba_IRT4_Mag : 20Rnd_556x45_Katiba_GT4_Mag
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 20Rnd Tracer Every 4 (IR-DIM) KH-2002 Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_20Rnd_556x45_IRT4_Katiba_CA.paa";
};
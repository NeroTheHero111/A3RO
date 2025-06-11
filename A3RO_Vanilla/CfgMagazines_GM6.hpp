// GM6 Lynx 12.7x108 5Rnd Magazines. Changing: Description.
class 5Rnd_127x108_Mag : CA_Magazine
{
ammo = "B_127x108_7N34_Ball";
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7x108 5Rnd 7N34 Mag";
displayNameShort = "7N34";
initSpeed = 785;
mass = 30.9805;
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
};
class 5Rnd_127x108_APDS_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7x108 5Rnd 680 Gr Mag";
displayNameShort = "680 Gr";
initSpeed = 923;
mass = 29.38762;
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
};

// Creating 12.7x108 5Rnd Tracer Magazine
class 5Rnd_127x108_Tracer_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Tracers: Every Round<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7x108 5Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 5;
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x108_GT_Ball_CA.paa";
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
initSpeed = 801.1741;
mass = 27.6432;
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
tracersEvery = 0;
type = 256;
};
class 5Rnd_127x99_Tracer_Mag : 5Rnd_127x99_Mag
{
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Tracers: Every Round<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 5Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 5;
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x99_RT_Ball_CA.paa";
tracersEvery = 1;	
};

// IR-DIM. No IRT4
class 5Rnd_127x99_IRT_Mag : 5Rnd_127x99_Tracer_Mag
{	
ammo = "B_127x99_Ball_IR";
displayName = "12.7x99 5Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x99_IRT_Ball_CA.paa";
};

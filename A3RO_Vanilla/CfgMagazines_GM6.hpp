// GM6 Lynx 12.7x108 5Rnd Magazines. Changing: Description.
class 5Rnd_127x108_Mag : CA_Magazine
{
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Used in: GM6 Lynx 12.7x108";
initSpeed = 860;
};
class 5Rnd_127x108_APDS_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 5<br />Used in: GM6 Lynx 12.7x108";
displayName = "12.7 mm 5Rnd 681 Gr Mag";
displayNameShort = "";
initSpeed = 923;
};

// Creating 12.7x108 5Rnd Tracer Magazine
class 5Rnd_127x108_Tracer_Mag : 5Rnd_127x108_Mag
{	
displayName = "12.7 mm 5Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 5;	
tracersEvery = 1;	
};

// Creating 12.7x99 NATO 5Rnd Tracer and tracerless Magazines
class 5Rnd_127x99_Mag : 500Rnd_127x99_mag
{
ammo = "B_127x99_Ball_Tracer_Green";	
count = 5;
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 mm 5Rnd Mag";
initSpeed = 801.1741;
mass = 16;
picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
tracersEvery = 0;
type = 256;
};
class 5Rnd_127x99_Tracer_Mag : 5Rnd_127x99_Mag
{
displayName = "12.7x99 mm 5Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 5;	
tracersEvery = 1;	
};

// IR-DIM
class 5Rnd_127x108_IRT_Mag : 5Rnd_127x108_Tracer_Mag
{	
ammo = "B_127x108_Ball_IR";
displayName = "12.7 mm 5Rnd Tracer (IR-DIM) Mag";
};

class 5Rnd_127x99_IRT_Mag : 5Rnd_127x99_Tracer_Mag
{	
ammo = "B_127x99_Ball_IR";
displayName = "12.7x99 mm 5Rnd Tracer (IR-DIM) Mag";
};

// No IRT4
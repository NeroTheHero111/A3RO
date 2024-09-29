// M320. Changing: Name. Description
class 7Rnd_408_Mag : CA_Magazine
{
descriptionShort = "Calibre: .408 Cheyenne Tactical<br />Rounds: 7<br />Used in: M200 Intervention® .408";
displayName = ".408 7Rnd Mag";
initSpeed = 832.104;
};
class 7Rnd_408_Tracer_Mag : 7Rnd_408_Mag
{
displayName = ".408 7Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 7;
tracersEvery = 1;
};

// Creating .375 CheyTac 7Rnd Tracer and tracerless Magazines
class 7Rnd_375_Mag : CA_Magazine
{
ammo = "B_375_Ball";
count = 7;
descriptionShort = "Calibre: .375 Cheyenne Tactical<br />Rounds: 7<br />Used in: M200 Intervention® .375";
displayName = ".375 7Rnd Mag";
initSpeed = 938.784;
mass = 13;
picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
scope = 2;
};
class 7Rnd_375_Tracer_Mag : 7Rnd_375_Mag
{
displayName = ".375 7Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 7;
tracersEvery = 1;
};

// IR-DIM
class 7Rnd_375_IRT_Mag : 7Rnd_375_Tracer_Mag
{
ammo = "B_375_Ball_IR";
displayName = ".375 7Rnd Tracer (IR-DIM) Mag";
};
class 7Rnd_408_IRT_Mag : 7Rnd_408_Tracer_Mag
{
ammo = "B_408_Ball_IR";
displayName = ".408 7Rnd Tracer (IR-DIM) Mag";
};

// NO IRT4!
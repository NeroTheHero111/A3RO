// Katiba 6.5 30Rnd Magazines. Changing: Description. Ammo to 5.56. 
class 30Rnd_65x39_caseless_green : 30Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56 mm 30Rnd Reload Tracer (Green) KH-2002 Mag";
initSpeed = 943.9656;
};
class 30Rnd_65x39_caseless_green_mag_Tracer : 30Rnd_65x39_caseless_green
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56 mm 30Rnd Tracer (Green) KH-2002 Mag";	
};

// Creating KH-2002 5.56 30Rnd Tracer every 4 and tracerless Magazine.
class 30Rnd_65x39_caseless_green_mag_T4 : 30Rnd_65x39_caseless_green_mag_Tracer
{
displayName = "5.56 mm 30Rnd Tracer Every 4 (Green) KH-2002 Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_65x39_caseless_green_mag_NT : 30Rnd_65x39_caseless_green
{
	
displayName = "5.56 mm 30Rnd KH-2002 Mag";
lastRoundsTracer = 0;	
};

// Type 115 Integrated .50BW Magazine. Changing: Name. Description
class 10Rnd_50BW_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Mag";
};
class 10Rnd_50BW_Mag_Tracer_F : 10Rnd_50BW_Mag_F
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Tracer (Green) Mag";
lastRoundsTracer = 10;
tracersEvery = 1;
};
class 10Rnd_50BW_Mag_RT_F : 10Rnd_50BW_Mag_F
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Reload Tracer (Green) Mag";
lastRoundsTracer = 4;
};

// Creating .223 Remington KH-2002 Magazines
class 30Rnd_223Rem_Katiba_RT_Mag : 30Rnd_65x39_caseless_green
{
ammo = "B_223Rem_Ball_Tracer_Green"; 
displayName = ".223 30Rnd Reload Tracer (Green) KH-2002 Mag";
initSpeed = 1007.669;
};
class 30Rnd_223Rem_Katiba_Tracer_Mag : 30Rnd_223Rem_Katiba_RT_Mag
{
displayName = ".223 30Rnd Tracer (Green) KH-2002 Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 30Rnd_223Rem_Katiba_T4_Mag : 30Rnd_223Rem_Katiba_Tracer_Mag
{
displayName = ".223 30Rnd Tracer Every 4 (Green) KH-2002 Mag";
tracersEvery = 4;	
};
class 30Rnd_223Rem_Katiba_NT_Mag : 30Rnd_223Rem_Katiba_RT_Mag
{
displayName = ".223 30Rnd KH-2002 Mag";   
lastRoundsTracer = 0;
};

// IR-DIM
class 30Rnd_556x45_Katiba_IRT_Mag : 30Rnd_65x39_caseless_green_mag_Tracer
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 30Rnd Tracer (IR-DIM) KH-2002 Mag";	
};

class 30Rnd_223Rem_Katiba_IRT_Mag : 30Rnd_223Rem_Katiba_Tracer_Mag
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 30Rnd Tracer (IR-DIM) KH-2002 Mag";	
};

// IR-DIM T4
class 30Rnd_556x45_Katiba_IRT4_Mag : 30Rnd_65x39_caseless_green_mag_T4
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 30Rnd Tracer Every 4 (IR-DIM) KH-2002 Mag";	
};

class 30Rnd_223Rem_Katiba_IRT4_Mag : 30Rnd_223Rem_Katiba_T4_Mag
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 30Rnd Tracer Every 4 (IR-DIM) KH-2002 Mag";	
};
// ADR-97 50Rnd Magazine. Changing: Name. Description. InitSpeed to Match TypicalSpeed
class 50Rnd_570x28_SMG_03 : CA_Magazine
{
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 50<br />Used in: P90, PS90";	
displayName = "5.7 mm 50Rnd P90 Mag";
initSpeed = 716;
};

// Creating 5.7 50Rnd Tracer, Tracer Every 4 and Reload Tracer Mags
class 50Rnd_570x28_SMG_03_Tracer : 50Rnd_570x28_SMG_03
{
displayName = "5.7 mm 50Rnd P90 Tracer (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 50;	
tracersEvery = 1;
};
class 50Rnd_570x28_SMG_03_T4 : 50Rnd_570x28_SMG_03_Tracer
{
displayName = "5.7 mm 50Rnd P90 Tracer Every 4 (Green) Mag";
lastRoundsTracer = 0;	
tracersEvery = 4;
};
class 50Rnd_570x28_SMG_03_RT : 50Rnd_570x28_SMG_03
{
displayName = "5.7 mm 50Rnd P90 Reload Tracer (Green) Mag";
lastRoundsTracer = 4;	
};

// Creating new 30Rnd 9x19mm Parabellum CPW Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_9x19_Mag : 30Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Green";
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Used in: CPW 9x19";
displayName = "9 mm 30Rnd CPW Mag";
initSpeed = 323.3928;
};

// Tracer
class 30Rnd_9x19_Tracer_Green_Mag : 30Rnd_9x19_Mag
{
displayName = "9 mm 30Rnd Tracer (Green) CPW Mag";
displayNameShort = "Tracer";	
tracersEvery = 1;
};
class 30Rnd_9x19_Tracer_Red_Mag : 30Rnd_9x19_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 30Rnd Tracer (Red) CPW Mag";	
};
class 30Rnd_9x19_Tracer_Yellow_Mag : 30Rnd_9x19_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 30Rnd Tracer (Yellow) CPW Mag";	
};

// Tracer Every 4
class 30Rnd_9x19_T4_Green_Mag : 30Rnd_9x19_Tracer_Green_Mag
{
displayName = "9 mm 30Rnd Tracer Every 4 (Green) CPW Mag";	
tracersEvery = 4;
};
class 30Rnd_9x19_T4_Red_Mag : 30Rnd_9x19_T4_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 30Rnd Tracer Every 4 (Red) CPW Mag";	
};
class 30Rnd_9x19_T4_Yellow_Mag : 30Rnd_9x19_T4_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 30Rnd Tracer Every 4 (Yellow) CPW Mag";	
};

// Reload Tracer
class 30Rnd_9x19_RT_Green_Mag : 30Rnd_9x19_Mag
{
displayName = "9 mm 30Rnd Reload Tracer (Green) CPW Mag";	
lastRoundsTracer = 4;
};
class 30Rnd_9x19_RT_Red_Mag : 30Rnd_9x19_RT_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 30Rnd Reload Tracer (Red) CPW Mag";	
};
class 30Rnd_9x19_RT_Yellow_Mag : 30Rnd_9x19_RT_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 30Rnd Reload Tracer (Yellow) CPW Mag";	
};

// Creating new 30Rnd FN 5.7x28mm NATO CPW Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_570x28_Mag : 30Rnd_9x21_Mag
{
ammo = "B_570x28_Ball_Red";
descriptionShort = "Calibre: FN 5.7x28mm NATO<br />Rounds: 30<br />Used in: CPW 5.7x28";
displayName = "5.7 mm 30Rnd CPW Mag";
initSpeed = 716;
};
class 30Rnd_570x28_Tracer_Red_Mag : 30Rnd_570x28_Mag
{
displayName = "5.7 mm 30Rnd Tracer (Red) CPW Mag";
displayNameShort = "Tracer";	
tracersEvery = 1;
};
class 30Rnd_570x28_T4_Red_Mag : 30Rnd_570x28_Tracer_Red_Mag
{
displayName = "5.7 mm 30Rnd Tracer Every 4 (Red) CPW Mag";	
tracersEvery = 4;
};
class 30Rnd_570x28_RT_Red_Mag : 30Rnd_570x28_Mag
{
displayName = "5.7 mm 30Rnd Reload Tracer (Red) CPW Mag";	
lastRoundsTracer = 4;
};

// Creating new 30Rnd 4.6x30mm CPW Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_460x30_Mag : 30Rnd_9x21_Mag
{
ammo = "B_460x30_Ball";
descriptionShort = "Calibre: 4.6x30mm<br />Rounds: 30<br />Used in: CPW 4.6x30";
displayName = "4.6 mm 30Rnd CPW Mag";
initSpeed = 680;
};
class 30Rnd_460x30_Tracer_Yellow_Mag : 30Rnd_460x30_Mag
{
displayName = "4.6 mm 30Rnd Tracer (Yellow) CPW Mag";	
displayNameShort = "Tracer";	
tracersEvery = 1;
};
class 30Rnd_460x30_T4_Yellow_Mag : 30Rnd_460x30_Tracer_Yellow_Mag
{
displayName = "4.6 mm 30Rnd Tracer Every 4 (Yellow) CPW Mag";	
tracersEvery = 4;
};
class 30Rnd_460x30_RT_Yellow_Mag : 30Rnd_460x30_Mag
{
displayName = "4.6 mm 30Rnd Reload Tracer (Yellow) CPW Mag";	
lastRoundsTracer = 4;
};

// Creating new SMG 30Rnd 9x19mm Parabellum Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 30Rnd_9x19_SMG_Mag : 30Rnd_9x19_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 30<br />Used in: MP5K-PDW, SP5K-PDW, Scorpion EVO 3 A1, Scorpion EVO 3 S1";
displayName = "9 mm 30Rnd Mag";
picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
};

// Tracer
class 30Rnd_9x19_SMG_Tracer_Green_Mag : 30Rnd_9x19_SMG_Mag
{
displayName = "9 mm 30Rnd Tracer (Green) Mag";	
displayNameShort = "Tracer";	
tracersEvery = 1;
};
class 30Rnd_9x19_SMG_Tracer_Red_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 30Rnd Tracer (Red) Mag";	
};
class 30Rnd_9x19_SMG_Tracer_Yellow_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 30Rnd Tracer (Yellow) Mag";	
};

// Tracer Every 4
class 30Rnd_9x19_SMG_T4_Green_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
displayName = "9 mm 30Rnd Tracer Every 4 (Green) Mag";	
tracersEvery = 4;
};
class 30Rnd_9x19_SMG_T4_Red_Mag : 30Rnd_9x19_SMG_T4_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 30Rnd Tracer Every 4 (Red) Mag";	
};
class 30Rnd_9x19_SMG_T4_Yellow_Mag : 30Rnd_9x19_SMG_T4_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 30Rnd Tracer Every 4 (Yellow) Mag";	
};

// Reload Tracer
class 30Rnd_9x19_SMG_RT_Green_Mag : 30Rnd_9x19_SMG_Mag
{
displayName = "9 mm 30Rnd Reload Tracer (Green) Mag";	
lastRoundsTracer = 4;
};
class 30Rnd_9x19_SMG_RT_Red_Mag : 30Rnd_9x19_SMG_RT_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 30Rnd Reload Tracer (Red) Mag";	
};
class 30Rnd_9x19_SMG_RT_Yellow_Mag : 30Rnd_9x19_SMG_RT_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 30Rnd Reload Tracer (Yellow) Mag";	
};


// Vermin 30Rnd Magazines. Changing: Name. Description. 30Rnd_45ACP_Mag_SMG_01 defined in Vanilla.hpp as it is used in Pistol config aswell
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Vector Tracer (Red) Mag";
displaynameshort = "Tracer";
};
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Vector Tracer (Green) Mag";	
};
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow : 30Rnd_45ACP_Mag_SMG_01
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Vector Tracer (Yellow) Mag";	
displaynameshort = "Tracer";	
};

// Adding Reload Tracer, Tracer Every 4 and tracerless Magazines
class 30Rnd_45ACP_Mag_SMG_01_RT_Green : 30Rnd_45ACP_Mag_SMG_01
{
ammo = "B_45ACP_Ball_Green";	
displayName = ".45 ACP 30Rnd Vector Reload Tracer (Green) Mag";	
};
class 30Rnd_45ACP_Mag_SMG_01_RT_Yellow : 30Rnd_45ACP_Mag_SMG_01
{
ammo = "B_45ACP_Ball_Yellow";
displayName = ".45 ACP 30Rnd Vector Reload Tracer (Yellow) Mag";	
};
class 30Rnd_45ACP_Mag_SMG_01_T4_Red : 30Rnd_45ACP_Mag_SMG_01_Tracer_Red
{
displayName = ".45 ACP 30Rnd Vector Tracer Every 4 (Red) Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_45ACP_Mag_SMG_01_T4_Green : 30Rnd_45ACP_Mag_SMG_01_T4_Red
{
ammo = "B_45ACP_Ball_Green";	
displayName = ".45 ACP 30Rnd Vector Tracer Every 4 (Green) Mag";	
};
class 30Rnd_45ACP_Mag_SMG_01_T4_Yellow : 30Rnd_45ACP_Mag_SMG_01_T4_Red
{
ammo = "B_45ACP_Ball_Yellow";	
displayName = ".45 ACP 30Rnd Vector Tracer Every 4 (Yellow) Mag";	
};
class 30Rnd_45ACP_Mag_SMG_01_NT : 30Rnd_45ACP_Mag_SMG_01
{
displayName = ".45 ACP 30Rnd Vector Mag";	
lastRoundsTracer = 0;	
};

// Creating new Vector 40Rnd 9x19mm Parabellum Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 40Rnd_9x19_Vector_Mag : 30Rnd_9x19_Mag
{
count = 40;	
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 40<br />Used in: Vector SMG Gen I 9x19";
displayName = "9 mm 40Rnd Vector Mag";
picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
mass = 13;
};

// Tracer
class 40Rnd_9x19_Vector_Tracer_Green_Mag : 40Rnd_9x19_Vector_Mag
{
displayName = "9 mm 40Rnd Tracer (Green) Mag";	
displayNameShort = "Tracer";	
tracersEvery = 1;
};
class 40Rnd_9x19_Vector_Tracer_Red_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 40Rnd Tracer (Red) Mag";	
};
class 40Rnd_9x19_Vector_Tracer_Yellow_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 40Rnd Tracer (Yellow) Mag";	
};

// Tracer Every 4
class 40Rnd_9x19_Vector_T4_Green_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
displayName = "9 mm 40Rnd Tracer Every 4 (Green) Mag";	
tracersEvery = 4;
};
class 40Rnd_9x19_Vector_T4_Red_Mag : 40Rnd_9x19_Vector_T4_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 40Rnd Tracer Every 4 (Red) Mag";	
};
class 40Rnd_9x19_Vector_T4_Yellow_Mag : 40Rnd_9x19_Vector_T4_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 40Rnd Tracer Every 4 (Yellow) Mag";	
};

// Reload Tracer
class 40Rnd_9x19_Vector_RT_Green_Mag : 40Rnd_9x19_Vector_Mag
{
displayName = "9 mm 40Rnd Reload Tracer (Green) Mag";	
lastRoundsTracer = 4;
};
class 40Rnd_9x19_Vector_RT_Red_Mag : 40Rnd_9x19_Vector_RT_Green_Mag
{
ammo = "B_9x19_Ball_Red";
displayName = "9 mm 40Rnd Reload Tracer (Red) Mag";	
};
class 40Rnd_9x19_Vector_RT_Yellow_Mag : 40Rnd_9x19_Vector_RT_Green_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 40Rnd Reload Tracer (Yellow) Mag";	
};

// IR-DIM

// 4.6
class 30Rnd_460x30_IRT_Mag : 30Rnd_460x30_Tracer_Yellow_Mag
{
ammo = "B_460x30_Ball_IR";
displayName = "4.6 mm 30Rnd Tracer (IR-DIM) CPW Mag";	
};

// 5.7
class 30Rnd_570x28_IRT_Mag : 30Rnd_570x28_Tracer_Red_Mag
{
ammo = "B_570x28_Ball_IR";
displayName = "5.7 mm 30Rnd Tracer (IR-DIM) CPW Mag";	
};
class 50Rnd_570x28_SMG_03_IRT : 50Rnd_570x28_SMG_03_Tracer
{
ammo = "B_570x28_Ball_IR";	
displayName = "5.7 mm 50Rnd P90 Tracer (IR-DIM) Mag";
};

// 9x19
class 30Rnd_9x19_IRT_Mag : 30Rnd_9x19_Tracer_Red_Mag
{
ammo = "B_9x19_Ball_IR";
displayName = "9 mm 30Rnd Tracer (IR-DIM) CPW Mag";	
};
class 30Rnd_9x19_SMG_IRT_Mag : 30Rnd_9x19_SMG_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_IR";
displayName = "9 mm 30Rnd Tracer (IR-DIM) Mag";	
};
class 40Rnd_9x19_Vector_IRT_Mag : 40Rnd_9x19_Vector_Tracer_Green_Mag
{
ammo = "B_9x19_Ball_IR";
displayName = "9 mm 40Rnd Tracer (IR-DIM) Mag";	
};

// .45
class 30Rnd_45ACP_Mag_SMG_01_IRT : 30Rnd_45ACP_Mag_SMG_01_Tracer_Red
{
ammo = "B_45ACP_Ball_IR";
displayName = ".45 ACP 30Rnd Vector Tracer (IR-DIM) Mag";
};


// IR-DIM T4

// 4.6
class 30Rnd_460x30_IRT4_Mag : 30Rnd_460x30_T4_Yellow_Mag
{
ammo = "B_460x30_Ball_IR";
displayName = "4.6 mm 30Rnd Tracer Every 4 (IR-DIM) CPW Mag";	
};

// 5.7
class 30Rnd_570x28_IRT4_Mag : 30Rnd_570x28_T4_Red_Mag
{
ammo = "B_570x28_Ball_IR";
displayName = "5.7 mm 30Rnd Tracer Every 4 (IR-DIM) CPW Mag";	
};
class 50Rnd_570x28_SMG_03_IRT4 : 50Rnd_570x28_SMG_03_T4
{
ammo = "B_570x28_Ball_IR";	
displayName = "5.7 mm 50Rnd P90 Tracer Every 4 (IR-DIM) Mag";
};

// 9x19
class 30Rnd_9x19_IRT4_Mag : 30Rnd_9x19_T4_Red_Mag
{
ammo = "B_9x19_Ball_IR";
displayName = "9 mm 30Rnd Tracer Every 4 (IR-DIM) CPW Mag";	
};
class 30Rnd_9x19_SMG_IRT4_Mag : 30Rnd_9x19_SMG_T4_Green_Mag
{
ammo = "B_9x19_Ball_IR";
displayName = "9 mm 30Rnd Tracer Every 4 (IR-DIM) Mag";	
};
class 40Rnd_9x19_Vector_IRT4_Mag : 40Rnd_9x19_Vector_T4_Green_Mag
{
ammo = "B_9x19_Ball_IR";
displayName = "9 mm 40Rnd Tracer Every 4 (IR-DIM) Mag";	
};

// .45
class 30Rnd_45ACP_Mag_SMG_01_IRT4 : 30Rnd_45ACP_Mag_SMG_01_T4_Red
{
ammo = "B_45ACP_Ball_IR";
displayName = ".45 ACP 30Rnd Vector Tracer Every 4 (IR-DIM) Mag";
};
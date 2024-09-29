// QBZ-95-1 30Rnd 5.8 Magazines. Changing: Name. Description

class 30Rnd_580x42_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8 mm 30Rnd Reload Tracer (Green) Mag";
initSpeed = 930;
};

// QJB-95-1 75Rnd 5.8 Magazines. Changing: Name. Description. Mass. Ammocount from 100 to 75
class 100Rnd_580x42_Mag_F : 30Rnd_580x42_Mag_F
{
count = 75;
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8 mm 75Rnd Reload Tracer (Green) Mag";
mass = 26;
};
class 100Rnd_580x42_ghex_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8 mm 75Rnd Reload Tracer (Green) Green Hex Mag";
};
class 100Rnd_580x42_hex_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8 mm 75Rnd Reload Tracer (Green) Hex Mag";
};
class 100Rnd_580x42_Mag_Tracer_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8 mm 75Rnd Tracer (Green) Mag";
lastRoundsTracer = 75;
};
class 100Rnd_580x42_ghex_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
{
displayName = "5.8 mm 75Rnd Tracer (Green) Green Hex Mag";
};
class 100Rnd_580x42_hex_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
{
displayName = "5.8 mm 75Rnd Tracer (Green) Hex Mag";
};


// Creating 5.8 Tracer Every 4 and tracerless Magazines

// 30Rnd
class 30Rnd_580x42_Mag_T4_F : 30Rnd_580x42_Mag_F
{
displayName = "5.8 mm 30Rnd Tracer Every 4 (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_580x42_NT_Mag_F : 30Rnd_580x42_Mag_F
{
displayName = "5.8 mm 30Rnd Mag";
lastRoundsTracer = 0;
};

// 100Rnd
class 100Rnd_580x42_T4_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8 mm 75Rnd Tracer Every 4 (Green) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 100Rnd_580x42_ghex_T4_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
displayName = "5.8 mm 75Rnd Tracer Every 4 (Green) Green Hex Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 100Rnd_580x42_hex_T4_Mag_F : 100Rnd_580x42_hex_Mag_F
{
displayName = "5.8 mm 75Rnd Tracer Every 4 (Green) Hex Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 100Rnd_580x42_NT_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8 mm 75Rnd Mag";
lastRoundsTracer = 0;
};
class 100Rnd_580x42_ghex_NT_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
displayName = "5.8 mm 75Rnd Green Hex Mag";
lastRoundsTracer = 0;
};
class 100Rnd_580x42_hex_NT_Mag_F : 100Rnd_580x42_hex_Mag_F
{
displayName = "5.8 mm 75Rnd Hex Mag";
lastRoundsTracer = 0;
};


// QBZ 5.56 NATO Magazines and Drums
//30 Rnd
class 30Rnd_556x45_RT_QBZ_Mag_F : 30Rnd_580x42_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56 mm 30Rnd Reload Tracer (Red) QBZ Mag";	
initSpeed = 943.9656;
};
class 30Rnd_556x45_Tracer_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
displayName = "5.56 mm 30Rnd Tracer (Red) QBZ Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 30Rnd_556x45_T4_QBZ_Mag_F : 30Rnd_556x45_Tracer_QBZ_Mag_F
{
displayName = "5.56 mm 30Rnd Tracer Every 4 (Red) QBZ Mag";
tracersEvery = 4;	
};
class 30Rnd_556x45_NT_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
displayName = "5.56 mm 30Rnd QBZ Mag";
lastRoundsTracer = 0;
};

// 100Rnds
// GHex
class 75Rnd_556x45_RT_Ghex_QBZ_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56 mm 75Rnd Reload Tracer (Red) QBZ Green Hex Mag";
initSpeed = 943.9656;	
};
class 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd Tracer (Red) QBZ Green Hex Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_556x45_T4_Ghex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd Tracer Every 4 (Red) QBZ Green Hex Mag";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd QBZ Green Hex Mag";
lastRoundsTracer = 0;
};

// Hex
class 75Rnd_556x45_RT_Hex_QBZ_Mag_F : 100Rnd_580x42_hex_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56 mm 75Rnd Reload Tracer (Red) QBZ Hex Mag";
initSpeed = 943.9656;
};
class 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd Tracer (Red) QBZ Hex Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_556x45_T4_Hex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd Tracer Every 4 (Red) QBZ Hex Mag";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd QBZ Hex Mag";
lastRoundsTracer = 0;
};

// Black
class 75Rnd_556x45_RT_QBZ_Mag_F : 100Rnd_580x42_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56 mm 75Rnd Reload Tracer (Red) QBZ Mag";
initSpeed = 943.9656;
};
class 75Rnd_556x45_Tracer_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd Tracer (Red) QBZ Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_556x45_T4_QBZ_Mag_F : 75Rnd_556x45_Tracer_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd Tracer Every 4 (Red) QBZ Mag";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
displayName = "5.56 mm 75Rnd QBZ Mag";
lastRoundsTracer = 0;
};


// T97NSR-A .223 NATO Magazines and Drums
//30 Rnd
class 30Rnd_223Rem_RT_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
ammo = "B_223Rem_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Reload Tracer (Yellow) QBZ Mag";
initSpeed = 1007.669;
};
class 30Rnd_223Rem_Tracer_QBZ_Mag_F : 30Rnd_223Rem_RT_QBZ_Mag_F
{
displayName = ".223 30Rnd Tracer (Yellow) QBZ Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 30Rnd_223Rem_T4_QBZ_Mag_F : 30Rnd_223Rem_Tracer_QBZ_Mag_F
{
displayName = ".223 30Rnd Tracer Every 4 (Yellow) QBZ Mag";
tracersEvery = 4;	
};
class 30Rnd_223Rem_NT_QBZ_Mag_F : 30Rnd_223Rem_RT_QBZ_Mag_F
{
displayName = ".223 30Rnd QBZ Mag";
lastRoundsTracer = 0;
};

// 100Rnds
// GHex
class 75Rnd_223Rem_RT_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
ammo = "B_223Rem_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Green Hex Mag";
initSpeed = 1007.669;
};
class 75Rnd_223Rem_Tracer_Ghex_QBZ_Mag_F : 75Rnd_223Rem_RT_Ghex_QBZ_Mag_F
{
displayName = ".223 75Rnd Tracer (Yellow) QBZ Green Hex Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_223Rem_T4_Ghex_QBZ_Mag_F : 75Rnd_223Rem_Tracer_Ghex_QBZ_Mag_F
{
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Green Hex Mag";
tracersEvery = 4;	
};
class 75Rnd_223Rem_NT_Ghex_QBZ_Mag_F : 75Rnd_223Rem_RT_Ghex_QBZ_Mag_F
{
displayName = ".223 75Rnd QBZ Green Hex Mag";
lastRoundsTracer = 0;
};

// Hex
class 75Rnd_223Rem_RT_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
ammo = "B_223Rem_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Hex Mag";
initSpeed = 1007.669;
};
class 75Rnd_223Rem_Tracer_Hex_QBZ_Mag_F : 75Rnd_223Rem_RT_Hex_QBZ_Mag_F
{
displayName = ".223 75Rnd Tracer (Yellow) QBZ Hex Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_223Rem_T4_Hex_QBZ_Mag_F : 75Rnd_223Rem_Tracer_Hex_QBZ_Mag_F
{
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Hex Mag";
tracersEvery = 4;	
};
class 75Rnd_223Rem_NT_Hex_QBZ_Mag_F : 75Rnd_223Rem_RT_Hex_QBZ_Mag_F
{
displayName = ".223 75Rnd QBZ Hex Mag";
lastRoundsTracer = 0;
};

// Black
class 75Rnd_223Rem_RT_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
ammo = "B_223Rem_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Mag";	
initSpeed = 1007.669;
};
class 75Rnd_223Rem_Tracer_QBZ_Mag_F : 75Rnd_223Rem_RT_QBZ_Mag_F
{
displayName = ".223 75Rnd Tracer (Yellow) QBZ Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_223Rem_T4_QBZ_Mag_F : 75Rnd_223Rem_Tracer_QBZ_Mag_F
{
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Mag";
tracersEvery = 4;	
};
class 75Rnd_223Rem_NT_QBZ_Mag_F : 75Rnd_223Rem_RT_QBZ_Mag_F
{
displayName = ".223 75Rnd QBZ Mag";
lastRoundsTracer = 0;
};

// IR-DIM 

// 5.8
class 30Rnd_580x42_Mag_Tracer_F;
class 30Rnd_580x42_Mag_IRT_F : 30Rnd_580x42_Mag_Tracer_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 30Rnd Tracer (IR-DIM) Mag";
};
class 100Rnd_580x42_ghex_Mag_IRT_F : 100Rnd_580x42_ghex_Mag_Tracer_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 75Rnd Tracer (IR-DIM) Green Hex Mag";
};
class 100Rnd_580x42_hex_Mag_IRT_F : 100Rnd_580x42_hex_Mag_Tracer_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 75Rnd Tracer (IR-DIM) Hex Mag";
};
class 100Rnd_580x42_Mag_IRT_F : 100Rnd_580x42_Mag_Tracer_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 75Rnd Tracer (IR-DIM) Mag";
};

// .223
class 30Rnd_223Rem_IRT_QBZ_Mag_F : 30Rnd_223Rem_Tracer_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 30Rnd Tracer (IR-DIM) QBZ Mag";
};
class 75Rnd_223Rem_IRT_Ghex_QBZ_Mag_F : 75Rnd_223Rem_Tracer_Ghex_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 75Rnd Tracer (IR-DIM) QBZ Green Hex Mag";
};
class 75Rnd_223Rem_IRT_Hex_QBZ_Mag_F : 75Rnd_223Rem_Tracer_Hex_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 75Rnd Tracer (IR-DIM) QBZ Hex Mag";
};
class 75Rnd_223Rem_IRT_QBZ_Mag_F : 75Rnd_223Rem_Tracer_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 75Rnd Tracer (IR-DIM) QBZ Mag";
};

// 5.56
class 30Rnd_556x45_IRT_QBZ_Mag_F : 30Rnd_556x45_Tracer_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 30Rnd Tracer (IR-DIM) QBZ Mag";
};
class 75Rnd_556x45_IRT_Ghex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 75Rnd Tracer (IR-DIM) QBZ Green Hex Mag";
};
class 75Rnd_556x45_IRT_Hex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 75Rnd Tracer (IR-DIM) QBZ Hex Mag";
};
class 75Rnd_556x45_IRT_QBZ_Mag_F : 75Rnd_556x45_Tracer_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 75Rnd Tracer (IR-DIM) QBZ Mag";
};

// IR-DIM T4

// 5.8
class 30Rnd_580x42_Mag_IRT4_F : 30Rnd_580x42_Mag_T4_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 30Rnd Tracer Every 4 (IR-DIM) Mag";
};
class 100Rnd_580x42_ghex_Mag_IRT4_F : 100Rnd_580x42_ghex_T4_Mag_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 75Rnd Tracer Every 4 (IR-DIM) Green Hex Mag";
};
class 100Rnd_580x42_hex_Mag_IRT4_F : 100Rnd_580x42_hex_T4_Mag_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 75Rnd Tracer Every 4 (IR-DIM) Hex Mag";
};
class 100Rnd_580x42_Mag_IRT4_F : 100Rnd_580x42_T4_Mag_F
{
ammo = "B_580x42_Ball_IR";	
displayName = "5.8 mm 75Rnd Tracer Every 4 (IR-DIM) Mag";
};

// .223
class 30Rnd_223Rem_IRT4_QBZ_Mag_F : 30Rnd_223Rem_T4_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 30Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
};
class 75Rnd_223Rem_IRT4_Ghex_QBZ_Mag_F : 75Rnd_223Rem_T4_Ghex_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 75Rnd Tracer Every 4 (IR-DIM) QBZ Green Hex Mag";
};
class 75Rnd_223Rem_IRT4_Hex_QBZ_Mag_F : 75Rnd_223Rem_T4_Hex_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 75Rnd Tracer Every 4 (IR-DIM) QBZ Hex Mag";
};
class 75Rnd_223Rem_IRT4_QBZ_Mag_F : 75Rnd_223Rem_T4_QBZ_Mag_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 75Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
};

// 5.56
class 30Rnd_556x45_IRT4_QBZ_Mag_F : 30Rnd_556x45_T4_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 30Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
};
class 75Rnd_556x45_IRT4_Ghex_QBZ_Mag_F : 75Rnd_556x45_T4_Ghex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 75Rnd Tracer Every 4 (IR-DIM) QBZ Green Hex Mag";
};
class 75Rnd_556x45_IRT4_Hex_QBZ_Mag_F : 75Rnd_556x45_T4_Hex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 75Rnd Tracer Every 4 (IR-DIM) QBZ Hex Mag";
};
class 75Rnd_556x45_IRT4_QBZ_Mag_F : 75Rnd_556x45_T4_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 75Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
};
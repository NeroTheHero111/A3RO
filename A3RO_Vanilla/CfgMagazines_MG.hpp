// LIM-85 5.56 200Rnd Reload Tracer Box. Changing: Removing Tracer every 4.
class 200Rnd_556x45_Box_F : CA_Magazine
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Used in: M249 Para";
initSpeed = 943.9656;
tracersEvery = 0;
};

class 200Rnd_556x45_Box_Red_F : 200Rnd_556x45_Box_F
{
initSpeed = 943.9656;
};

// Creating new 200Rnd Tracer Every 4 and tracerless Boxes
class 200Rnd_556x45_Box_T4_F : 200Rnd_556x45_Box_F
{
displayName = "5.56 mm 200Rnd Tracer Every 4 (Yellow) Box";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
};
class 200Rnd_556x45_Box_Red_T4_F : 200Rnd_556x45_Box_F
{
ammo = "B_556x45_Ball_Tracer_Red";
displayName = "5.56 mm 200Rnd Tracer Every 4 (Red) Box";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
};
class 200Rnd_556x45_Box_NT_F : 200Rnd_556x45_Box_F
{
displayName = "5.56 mm 200Rnd Box";
lastRoundsTracer = 0;
};

// Creating .223 Remington MG Boxes
class 200Rnd_223Rem_Box_RT_F : 200Rnd_556x45_Box_F
{
ammo = "B_223Rem_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 200<br />Used in: M249 PARA, M249S® PARA";
displayName = ".223 200Rnd Reload Tracer (Yellow) Box";
initSpeed = 1007.669;
};
class 200Rnd_223Rem_Box_Tracer_F : 200Rnd_223Rem_Box_RT_F
{
displayName = ".223 200Rnd Tracer (Yellow) Box";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
};
class 200Rnd_223Rem_Box_T4_F : 200Rnd_223Rem_Box_Tracer_F
{
displayName = ".223 200Rnd Tracer Every 4 (Yellow) Box";
tracersEvery = 4;	
};
class 200Rnd_223Rem_Box_NT_F : 200Rnd_223Rem_Box_RT_F
{
displayName = ".223 200Rnd Box";   
lastRoundsTracer = 0;
};

// Mk200 6.5 200Rnd Belts. Changing: Name. Description. Calibre to 5.56
class 200Rnd_65x39_cased_Box : 100Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Yellow";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Used in: Stoner 96";
displayName = "5.56 mm 200Rnd Reload Tracer (Yellow) Stoner 96 Belt";
initSpeed = 943.9656;
mass = 35;
lastRoundsTracer = 4;
tracersEvery = 0;
};
class 200Rnd_65x39_cased_Box_Red : 100Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Used in: Stoner 96";
displayName = "5.56 mm 200Rnd Reload Tracer (Red) Stoner 96 Belt";
initSpeed = 943.9656;
mass = 35;
};
class 200Rnd_65x39_cased_Box_Tracer : 200Rnd_65x39_cased_Box
{
ammo = "B_556x45_Ball_Tracer_Yellow";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Used in: Stoner 96";
displayName = "5.56 mm 200Rnd Tracer (Yellow) Stoner 96 Belt";
};
class 200Rnd_65x39_cased_Box_Tracer_Red : 200Rnd_65x39_cased_Box
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Used in: Stoner 96";
displayName = "5.56 mm 200Rnd Tracer (Red) Stoner 96 Belt";
};

// Creating 5.56 200Rnd Tracer Every 4 and tracerless Belts
class 200Rnd_65x39_cased_Box_T4 : 200Rnd_65x39_cased_Box_Tracer
{
displayName = "5.56 mm 200Rnd Tracer Every 4 (Yellow) Stoner 96 Belt";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 200Rnd_65x39_cased_Box_T4_Red : 200Rnd_65x39_cased_Box_Tracer_Red
{
displayName = "5.56 mm 200Rnd Tracer Every 4 (Red) Stoner 96 Belt";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 200Rnd_65x39_cased_Box_NT : 200Rnd_65x39_cased_Box
{
displayName = "5.56 mm 200Rnd Stoner 96 Belt";
lastRoundsTracer = 0;
};

// Creating new MG5 7.62 120Rnd Tracer, Tracer Every 4 and tracerless Belts
class 150Rnd_93x64_Mag_Tracer : 150Rnd_93x64_Mag
{
displayName = "7.62 mm 120Rnd Tracer (Green) Belt";
displayNameShort = "Tracer";
initSpeed = 843.0768;
lastRoundsTracer = 120;
tracersEvery = 1;
};
class 150Rnd_93x64_Mag_T4 : 150Rnd_93x64_Mag_Tracer
{
displayName = "7.62 mm 120Rnd Tracer Every 4 (Green) Belt";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 150Rnd_93x64_Mag_NT : 150Rnd_93x64_Mag
{
displayName = "7.62 mm 120Rnd Belt";
lastRoundsTracer = 0;
};

// SPMG .338 NM 130Rnd Belts. Changing: Name. Description
class 130Rnd_338_Mag : CA_Magazine
{
descriptionShort = "Calibre: .338 Norma Magnum<br />Rounds: 130<br />Used in: RM338";
displayName = ".338 NM 130Rnd Reload Tracer (Red) Belt";
lastRoundsTracer = 4;
tracersEvery = 0;
};
class 130Rnd_338_Mag_Tracer : 130Rnd_338_Mag
{
displayName = ".338 NM 130Rnd Tracer (Red) Belt";
displayNameShort = "Tracer";
lastRoundsTracer = 130;
tracersEvery = 1;
};
class 130Rnd_338_Mag_T4 : 130Rnd_338_Mag_Tracer
{
displayName = ".338 NM 130Rnd Tracer Every 4 (Red) Belt";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 130Rnd_338_Mag_NT : 130Rnd_338_Mag
{
displayName = ".338 NM 130Rnd Belt";
lastRoundsTracer = 0;
};

// Zafir 7.62 150Rnd Boxes. Changing: Name. Description. Calibre to 7.62 NATO. Ammocount to 100.
class 150Rnd_762x54_Box : 150Rnd_762x51_Box
{
ammo = "B_762x54_Tracer_Green";	
count = 100;	
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Used in: Negev NG-7";
displayName = "7.62 mm 100Rnd Reload Tracer (Green) Box";
initSpeed = 843.0768;
tracersEvery = 0;
mass = 33;
};
class 150Rnd_762x54_Box_Tracer : 150Rnd_762x54_Box
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Used in: Negev NG-7";
displayName = "7.62 mm 100Rnd Tracer (Green) Box";
lastRoundsTracer = 0;
tracersEvery = 1;
};

// Creating 7.62 100Rnd Tracer Every 4 and tracerless Boxes
class 150Rnd_762x54_Box_T4 : 150Rnd_762x54_Box_Tracer
{
displayName = "7.62 mm 100Rnd Tracer Every 4 (Green) Box";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 150Rnd_762x54_Box_NT : 150Rnd_762x54_Box
{
displayName = "7.62 mm 100Rnd Box";
lastRoundsTracer = 0;
};

// Creating Stoner 96 200Rnd .223 Remington Pouches
class 200Rnd_223Rem_Mk200_RT_Box : 200Rnd_65x39_cased_Box
{
ammo = "B_223Rem_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 200<br />Used in: Stoner 96";
displayName = ".223 200Rnd Reload Tracer (Yellow) Stoner 96 Belt";
initSpeed = 1007.669;
};
class 200Rnd_223Rem_Mk200_Tracer_Box : 200Rnd_223Rem_Mk200_RT_Box
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 200<br />Used in: Stoner 96";
displayName = ".223 200Rnd Tracer (Yellow) Stoner 96 Belt";
picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
lastRoundsTracer = 0;
tracersEvery = 200;
};
class 200Rnd_223Rem_Mk200_T4_Box : 200Rnd_223Rem_Mk200_Tracer_Box
{
displayName = ".223 200Rnd Tracer Every 4 (Yellow) Stoner 96 Belt";
tracersEvery = 4;
};
class 200Rnd_223Rem_Mk200_NT_Box : 200Rnd_223Rem_Mk200_RT_Box
{
displayName = ".223 200Rnd Stoner 96 Belt";
lastRoundsTracer = 0;
};

// IR-DIM
class 200Rnd_223Rem_Box_IRT_F : 200Rnd_223Rem_Box_Tracer_F
{
ammo = "B_223Rem_Ball_IR";	
displayName = ".223 200Rnd Tracer (IR-DIM) Box";
};
class 200Rnd_556x45_Box_Tracer_F;
class 200Rnd_556x45_Box_IRT_F : 200Rnd_556x45_Box_Tracer_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 200Rnd Tracer (IR-DIM) Box";
};
class 150Rnd_93x64_Mag_IRT : 150Rnd_93x64_Mag_Tracer
{
ammo = "B_762x51_Ball_IR";	
displayName = "7.62 mm 120Rnd Tracer (IR-DIM) Belt";
};
class 150Rnd_762x54_Box_IRT : 150Rnd_762x54_Box_Tracer
{
ammo = "B_762x51_Ball_IR";		
displayName = "7.62 mm 100Rnd Tracer (IR-DIM) Box";
};
class 130Rnd_338_Mag_IRT : 130Rnd_338_Mag_Tracer
{
ammo = "B_338_NM_Ball_IR";
displayName = "7.62 mm 100Rnd Tracer (IR-DIM) Box";
};
class 200Rnd_223Rem_Mk200_IRT_Box : 200Rnd_223Rem_Mk200_Tracer_Box
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 200Rnd Tracer (IR-DIM) Stoner 96 Belt";
};
class 200Rnd_556x45_Mk200_IRT_Box : 200Rnd_65x39_cased_Box_Tracer
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 200Rnd Tracer (IR-DIM) Stoner 96 Belt";
};

// IR-DIM T4
class 200Rnd_223Rem_Box_IRT4_F : 200Rnd_223Rem_Box_T4_F
{
ammo = "B_223Rem_Ball_IR";	
displayName = ".223 200Rnd Tracer Every 4 (IR-DIM) Box";
};
class 200Rnd_556x45_Box_IRT4_F : 200Rnd_556x45_Box_T4_F
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 200Rnd Tracer Every 4 (IR-DIM) Box";
};
class 150Rnd_93x64_Mag_IRT4 : 150Rnd_93x64_Mag_T4
{
ammo = "B_762x51_Ball_IR";	
displayName = "7.62 mm 120Rnd Tracer Every 4 (IR-DIM) Belt";
};
class 150Rnd_762x54_Box_IRT4 : 150Rnd_762x54_Box_T4
{
ammo = "B_762x51_Ball_IR";		
displayName = "7.62 mm 100Rnd Tracer Every 4 (IR-DIM) Box";
};
class 130Rnd_338_Mag_IRT4 : 130Rnd_338_Mag_T4
{
ammo = "B_338_NM_Ball_IR";
displayName = "7.62 mm 100Rnd Tracer Every 4 (IR-DIM) Box";
};
class 200Rnd_223Rem_Mk200_IRT4_Box : 200Rnd_223Rem_Mk200_T4_Box
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 200Rnd Tracer Every 4 (IR-DIM) Stoner 96 Belt";
};
class 200Rnd_556x45_Mk200_IRT4_Box : 200Rnd_65x39_cased_Box_T4
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 200Rnd Tracer Every 4 (IR-DIM) Stoner 96 Belt";
};
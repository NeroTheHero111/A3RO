// 5.56 30Rnd Mags. Changing: Name. Description.

// Black
class 30Rnd_556x45_Stanag : CA_Magazine
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
initSpeed = 943.9656;	
};
class 30Rnd_556x45_Stanag_green : 30Rnd_556x45_Stanag
{
displayName = "5.56 mm 30Rnd Reload Tracer (Green) Mag";	
initSpeed = 943.9656;
};
class 30Rnd_556x45_Stanag_red : 30Rnd_556x45_Stanag
{
displayName = "5.56 mm 30Rnd Reload Tracer (Red) Mag";	
initSpeed = 943.9656;
};
class 30Rnd_556x45_Stanag_Tracer_Yellow : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56 mm 30Rnd Tracer (Yellow) Mag";
initSpeed = 943.9656;
};
class 30Rnd_556x45_Stanag_Tracer_Green : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56 mm 30Rnd Tracer (Green) Mag";
initSpeed = 943.9656;
};
class 30Rnd_556x45_Stanag_Tracer_Red : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";		
displayName = "5.56 mm 30Rnd Tracer (Red) Mag";
initSpeed = 943.9656;
};

// Sand
class 30Rnd_556x45_Stanag_Sand : 30Rnd_556x45_Stanag
{
displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Sand Mag";	
};
class 30Rnd_556x45_Stanag_Sand_green : 30Rnd_556x45_Stanag_Sand
{
displayName = "5.56 mm 30Rnd Reload Tracer (Green) Sand Mag";	
};
class 30Rnd_556x45_Stanag_Sand_red : 30Rnd_556x45_Stanag_Sand
{
displayName = "5.56 mm 30Rnd Reload Tracer (Red) Sand Mag";	
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Red : 30Rnd_556x45_Stanag_Sand 
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56 mm 30Rnd Tracer (Red) Sand Mag";	
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Green : 30Rnd_556x45_Stanag_Sand_Tracer_Red 
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56 mm 30Rnd Tracer (Green) Sand Mag";	
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow : 30Rnd_556x45_Stanag_Sand_Tracer_Red 
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56 mm 30Rnd Tracer (Yellow) Sand Mag";	
};

// Creating 30Rnd 5.56 Tracer Every 4 and tracerless Magazines

// Black
class 30Rnd_556x45_Stanag_T4_Red : 30Rnd_556x45_Stanag_Tracer_Red
{
displayName = "5.56 mm 30Rnd Tracer Every 4 (Red) Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_556x45_Stanag_T4_Green : 30Rnd_556x45_Stanag_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Green";	
displayName = "5.56 mm 30Rnd Tracer Every 4 (Green) Mag";
};
class 30Rnd_556x45_Stanag_T4_Yellow : 30Rnd_556x45_Stanag_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Yellow";	
displayName = "5.56 mm 30Rnd Tracer Every 4 (Yellow) Mag";
};
class 30Rnd_556x45_Stanag_NT : 30Rnd_556x45_Stanag
{
displayName = "5.56 mm 30Rnd Mag";
lastRoundsTracer = 0;
};

// Sand
class 30Rnd_556x45_Stanag_Sand_T4_Red : 30Rnd_556x45_Stanag_Sand_Tracer_Red
{
displayName = "5.56 mm 30Rnd Tracer Every 4 (Red) Sand Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_556x45_Stanag_Sand_T4_Green : 30Rnd_556x45_Stanag_Sand_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Green";	
displayName = "5.56 mm 30Rnd Tracer Every 4 (Green) Sand Mag";
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Green_CA.paa";	
};
class 30Rnd_556x45_Stanag_Sand_T4_Yellow : 30Rnd_556x45_Stanag_Sand_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Yellow";	
displayName = "5.56 mm 30Rnd Tracer Every 4 (Yellow) Sand Mag";
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Yellow_CA.paa";
};
class 30Rnd_556x45_Stanag_Sand_NT : 30Rnd_556x45_Stanag_Sand
{
displayName = "5.56 mm 30Rnd Sand Mag";
lastRoundsTracer = 0;
};

// 5.56 150Rnd Mags. Changing: Name. Description. Ammocount from 150 to 100
class 150Rnd_556x45_Drum_Mag_F : CA_Magazine
{
count = 100;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Used in: HK416A5 11''/14.5''";	
displayName = "5.56 mm 100Rnd Reload Tracer (Red) Mag";
initSpeed = 943.9656;
mass = 25;	
};
class 150Rnd_556x45_Drum_Mag_Tracer_F : 150Rnd_556x45_Drum_Mag_F
{
displayName = "5.56 mm 100Rnd Tracer (Red) Mag";
lastRoundsTracer = 100;
};
class 150Rnd_556x45_Drum_Green_Mag_F : 150Rnd_556x45_Drum_Mag_F
{
displayName = "5.56 mm 100Rnd Reload Tracer (Red) Green Mag";	
};
class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
{
displayName = "5.56 mm 100Rnd Tracer (Red) Green Mag";	
lastRoundsTracer = 100;
};
class 150Rnd_556x45_Drum_Sand_Mag_F : 150Rnd_556x45_Drum_Mag_F
{
displayName = "5.56 mm 100Rnd Reload Tracer (Red) Sand Mag";	
};
class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F : 150Rnd_556x45_Drum_Sand_Mag_F
{
displayName = "5.56 mm 100Rnd Tracer (Red) Sand Mag";
lastRoundsTracer = 100;
};

// Creating 5.56 100Rnd Tracer Every 4 and tracerless Magazines
class 150Rnd_556x45_Drum_Mag_T4_F : 150Rnd_556x45_Drum_Mag_Tracer_F
{
displayName = "5.56 mm 100Rnd Tracer Every 4 (Red) Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 150Rnd_556x45_Drum_Green_Mag_T4_F : 150Rnd_556x45_Drum_Green_Mag_Tracer_F
{
displayName = "5.56 mm 100Rnd Tracer Every 4 (Red) Green Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 150Rnd_556x45_Drum_Sand_Mag_T4_F : 150Rnd_556x45_Drum_Sand_Mag_Tracer_F
{
displayName = "5.56 mm 100Rnd Tracer Every 4 (Red) Sand Mag";	
lastRoundsTracer = 0;
tracersEvery = 4;	
};
class 150Rnd_556x45_Drum_Mag_NT_F : 150Rnd_556x45_Drum_Mag_F
{
displayName = "5.56 mm 100Rnd Mag";
lastRoundsTracer = 0;
};
class 150Rnd_556x45_Drum_Green_Mag_NT_F : 150Rnd_556x45_Drum_Green_Mag_F
{
displayName = "5.56 mm 100Rnd Green Mag";
lastRoundsTracer = 0;
};
class 150Rnd_556x45_Drum_Sand_Mag_NT_F : 150Rnd_556x45_Drum_Sand_Mag_F
{
displayName = "5.56 mm 100Rnd Sand Mag";
lastRoundsTracer = 0;
};

// Promet 30Rnd Mags. Changing: Name. Description. Model to hidden 5.56 one
class 30Rnd_65x39_caseless_msbs_mag : 30Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) PMAG Mag";
initSpeed = 943.9656;
modelSpecial = "a3\weapons_f_enoch\magazineproxies\mag_556x45_msbs_30rnd.p3d";
mass = 8;
};
class 30Rnd_65x39_caseless_msbs_mag_Tracer : 30Rnd_65x39_caseless_msbs_mag
{
displayName = "5.56 mm 30Rnd Tracer (Yellow) PMAG Mag";
};

// Creating 5.56 30Rnd Tracer Every 4 and tracerless PMAG Mags
class 30Rnd_65x39_caseless_msbs_mag_T4 : 30Rnd_65x39_caseless_msbs_mag_Tracer
{
displayName = "5.56 mm 30Rnd Tracer Every 4 (Yellow) PMAG Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_65x39_caseless_msbs_mag_NT : 30Rnd_65x39_caseless_msbs_mag
{
displayName = "5.56 mm 30Rnd PMAG Mag";
lastRoundsTracer = 0;
};

// Creating AK-19 5.56 Magazines
class 30Rnd_556x45_AK_Mag_RT_F : 30Rnd_556x45_Stanag
{
ammo = "B_556x45_Ball_Tracer_Green"; 
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK-19, WASR-3";
displayName = "5.56 mm 30Rnd Reload Tracer (Green) AK Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\magazine_ak19_co.paa"};
modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
picture = "\A3RO_Vanilla\Textures\icon_30Rnd_556x45_AK_Mag_F_ca";
};
class 30Rnd_556x45_AK_Mag_Tracer_F : 30Rnd_556x45_AK_Mag_RT_F
{
displayName = "5.56 mm 30Rnd Tracer (Green) AK Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_Vanilla\Textures\icon_30Rnd_556x45_AK_Mag_Tracer_Green_F_ca";
};
class 30Rnd_556x45_AK_Mag_T4_F : 30Rnd_556x45_AK_Mag_Tracer_F
{
displayName = "5.56 mm 30Rnd Tracer Every 4 (Green) AK Mag";
tracersEvery = 4;	
};
class 30Rnd_556x45_AK_Mag_NT_F : 30Rnd_556x45_AK_Mag_RT_F
{
displayName = "5.56 mm 30Rnd AK Mag";   
lastRoundsTracer = 0;
};

// Creating Stanag .223 Remington Magazines

// 30 Rnds 
// Black
class 30Rnd_223Rem_Mag_RT_F : 30Rnd_556x45_Stanag
{
ammo = "B_223Rem_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Reload Tracer (Yellow) Mag";
initSpeed = 1007.669;
};
class 30Rnd_223Rem_Mag_Tracer_F : 30Rnd_223Rem_Mag_RT_F
{
displayName = ".223 30Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 30Rnd_223Rem_Mag_T4_F : 30Rnd_223Rem_Mag_Tracer_F
{
displayName = ".223 30Rnd Tracer Every 4 (Yellow) Mag";
tracersEvery = 4;	
};
class 30Rnd_223Rem_Mag_NT_F : 30Rnd_223Rem_Mag_RT_F
{
displayName = ".223 30Rnd Mag";   
lastRoundsTracer = 0;
};
// Sand
class 30Rnd_223Rem_Mag_Sand_RT_F : 30Rnd_556x45_Stanag_Sand
{
ammo = "B_223Rem_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Reload Tracer (Yellow) Sand Mag";
initSpeed = 1007.669;
};
class 30Rnd_223Rem_Mag_Sand_Tracer_F : 30Rnd_223Rem_Mag_Sand_RT_F
{
displayName = ".223 30Rnd Tracer (Yellow) Sand Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 30Rnd_223Rem_Mag_Sand_T4_F : 30Rnd_223Rem_Mag_Sand_Tracer_F
{
displayName = ".223 30Rnd Tracer Every 4 (Yellow) Sand Mag";
tracersEvery = 4;	
};
class 30Rnd_223Rem_Mag_Sand_NT_F : 30Rnd_223Rem_Mag_Sand_RT_F
{
displayName = ".223 30Rnd Sand Mag";   
lastRoundsTracer = 0;
};

// 100Rnds
// Black
class 100Rnd_223Rem_Mag_RT_F : 150Rnd_556x45_Drum_Mag_F
{
ammo = "B_223Rem_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Reload Tracer (Yellow) Mag";
initSpeed = 1007.669;
};
class 100Rnd_223Rem_Mag_Tracer_F : 100Rnd_223Rem_Mag_RT_F
{
displayName = ".223 100Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 100Rnd_223Rem_Mag_T4_F : 100Rnd_223Rem_Mag_Tracer_F
{
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Mag";
tracersEvery = 4;	
};
class 100Rnd_223Rem_Mag_NT_F : 100Rnd_223Rem_Mag_RT_F
{
displayName = ".223 100Rnd Mag";   
lastRoundsTracer = 0;
};
// Sand
class 100Rnd_223Rem_Mag_Sand_RT_F : 150Rnd_556x45_Drum_Sand_Mag_F
{
ammo = "B_223Rem_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Reload Tracer (Yellow) Sand Mag";
initSpeed = 1007.669;
};
class 100Rnd_223Rem_Mag_Sand_Tracer_F : 100Rnd_223Rem_Mag_Sand_RT_F
{
displayName = ".223 100Rnd Tracer (Yellow) Sand Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 100Rnd_223Rem_Mag_Sand_T4_F : 100Rnd_223Rem_Mag_Sand_Tracer_F
{
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Sand Mag";
tracersEvery = 4;	
};
class 100Rnd_223Rem_Mag_Sand_NT_F : 100Rnd_223Rem_Mag_Sand_RT_F
{
displayName = ".223 100Rnd Sand Mag";   
lastRoundsTracer = 0;
};
// Green
class 100Rnd_223Rem_Mag_Green_RT_F : 150Rnd_556x45_Drum_Green_Mag_F
{
ammo = "B_223Rem_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Reload Tracer (Yellow) Green Mag";
initSpeed = 1007.669;
};
class 100Rnd_223Rem_Mag_Green_Tracer_F : 100Rnd_223Rem_Mag_Green_RT_F
{
displayName = ".223 100Rnd Tracer (Yellow) Green Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 100Rnd_223Rem_Mag_Green_T4_F : 100Rnd_223Rem_Mag_Green_Tracer_F
{
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Green Mag";
tracersEvery = 4;	
};
class 100Rnd_223Rem_Mag_Green_NT_F : 100Rnd_223Rem_Mag_Green_RT_F
{
displayName = ".223 100Rnd Green Mag";   
lastRoundsTracer = 0;
};


// .223 Remington 30Rnd PMAG Mags.
class 30Rnd_223Rem_PMAG_Mag_RT_F : 30Rnd_223Rem_Mag_RT_F
{
ammo = "B_223Rem_Ball_Tracer_Green"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 Remington 30Rnd Reload Tracer (Green) PMAG Mag";
modelSpecial = "a3\weapons_f_enoch\magazineproxies\mag_556x45_msbs_30rnd.p3d";
};
class 30Rnd_223Rem_PMAG_Mag_Tracer_F : 30Rnd_223Rem_PMAG_Mag_RT_F
{
displayName = ".223 Remington 30Rnd Tracer (Green) PMAG Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 30Rnd_223Rem_PMAG_Mag_T4_F : 30Rnd_223Rem_PMAG_Mag_Tracer_F
{
displayName = ".223 Remington Tracer Every 4 (Green) PMAG Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_223Rem_PMAG_Mag_NT_F : 30Rnd_223Rem_PMAG_Mag_RT_F
{
displayName = ".223 Remington 30Rnd PMAG Mag";
lastRoundsTracer = 0;
};

// Creating TR3 .223 Remington Magazines
class 30Rnd_223Rem_AK_Mag_RT_F : 30Rnd_223Rem_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Used in: TR3 .223, WASR-3, AK-19";
displayName = ".223 30Rnd Reload Tracer (Yellow) AK Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\magazine_ak19_co.paa"};
modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
picture = "\A3RO_Vanilla\Textures\icon_30Rnd_556x45_AK_Mag_F_ca";
};
class 30Rnd_223Rem_AK_Mag_Tracer_F : 30Rnd_223Rem_AK_Mag_RT_F
{
displayName = ".223 30Rnd Tracer (Yellow) AK Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_Vanilla\Textures\icon_30Rnd_556x45_AK_Mag_Tracer_Green_F_ca";
};
class 30Rnd_223Rem_AK_Mag_T4_F : 30Rnd_223Rem_AK_Mag_Tracer_F
{
displayName = ".223 30Rnd Tracer Every 4 (Yellow) AK Mag";
tracersEvery = 4;	
};
class 30Rnd_223Rem_AK_Mag_NT_F : 30Rnd_223Rem_AK_Mag_RT_F
{
displayName = ".223 30Rnd AK Mag";   
lastRoundsTracer = 0;
};

// 30Rnds SIG Mags
class 20Rnd_223Rem_Mag_RT_F : 30Rnd_223Rem_Mag_RT_F
{
ammo = "B_223Rem_Ball"; 
count = 20;
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Used in: SIG 556 DMR";
displayName = ".223 20Rnd Reload Tracer (Yellow) Mag";
mass = 7.1180;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_20Rnd_762x51_Mag_ca.paa";
};
class 20Rnd_223Rem_Mag_Tracer_F : 20Rnd_223Rem_Mag_RT_F
{
displayName = ".223 20Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 20Rnd_223Rem_Mag_T4_F : 20Rnd_223Rem_Mag_Tracer_F
{
displayName = ".223 20Rnd Tracer Every 4 (Yellow) Mag";
tracersEvery = 4;	
};
class 20Rnd_223Rem_Mag_NT_F : 20Rnd_223Rem_Mag_RT_F
{
displayName = ".223 20Rnd Mag";   
lastRoundsTracer = 0;
};

// IR-DIM
// .223
class 30Rnd_223Rem_AK_Mag_IRT_F : 30Rnd_223Rem_AK_Mag_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 
displayName = ".223 30Rnd Tracer (IR-DIM) AK Mag";
};
class 30Rnd_223Rem_Mag_IRT_F : 30Rnd_223Rem_Mag_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 30Rnd Tracer (IR-DIM) Mag";
};
class 30Rnd_223Rem_Mag_Sand_IRT_F : 30Rnd_223Rem_Mag_Sand_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 30Rnd Tracer (IR-DIM) Sand Mag";
};
class 30Rnd_223Rem_PMAG_Mag_IRT_F : 30Rnd_223Rem_PMAG_Mag_Tracer_F
{
ammo = "B_223Rem_Ball_IR";	
displayName = ".223 Remington Tracer (IR-DIM) PMAG Mag";
};
class 100Rnd_223Rem_Mag_IRT_F : 100Rnd_223Rem_Mag_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 100Rnd Tracer (IR-DIM) Mag";
};
class 100Rnd_223Rem_Mag_Green_IRT_F : 100Rnd_223Rem_Mag_Green_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 		
displayName = ".223 100Rnd Tracer (IR-DIM) Green Mag";
};
class 100Rnd_223Rem_Mag_Sand_IRT_F : 100Rnd_223Rem_Mag_Sand_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 100Rnd Tracer (IR-DIM) Sand Mag";
};
class 20Rnd_223Rem_Mag_IRT_F : 20Rnd_223Rem_Mag_Tracer_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 20Rnd Tracer (IR-DIM) Mag";	
};

// 5.56
class 30Rnd_556x45_AK_Mag_IRT_F : 30Rnd_556x45_AK_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56 mm 30Rnd Tracer (IR-DIM) AK Mag";
};
class 30Rnd_556x45_Stanag_IRT_F: 30Rnd_556x45_Stanag_Tracer_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 30Rnd Tracer (IR-DIM) Mag";	
};
class 30Rnd_556x45_Stanag_Sand_IRT_F : 30Rnd_556x45_Stanag_Sand_Tracer_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 30Rnd Tracer (IR-DIM) Sand Mag";
};
class 30Rnd_556x45_Stanag_PMAG_IRT_F : 30Rnd_65x39_caseless_msbs_mag_Tracer
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 30Rnd Tracer (IR-DIM) PMAG Mag";
};
class 100Rnd_556x45_Drum_Mag_IRT_F : 150Rnd_556x45_Drum_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 100Rnd Tracer (IR-DIM) Mag";
};
class 100Rnd_556x45_Drum_Green_Mag_IRT_F: 150Rnd_556x45_Drum_Green_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56 mm 100Rnd Tracer (IR-DIM) Green Mag";	
};
class 100Rnd_556x45_Drum_Sand_Mag_IRT_F : 150Rnd_556x45_Drum_Sand_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 100Rnd Tracer (IR-DIM) Sand Mag";
};

// IR-DIM T4
// .223
class 30Rnd_223Rem_AK_Mag_IRT4_F : 30Rnd_223Rem_AK_Mag_T4_F
{
ammo = "B_223Rem_Ball_IR"; 
displayName = ".223 30Rnd Tracer Every 4 (IR-DIM) AK Mag";
};
class 30Rnd_223Rem_Mag_IRT4_F : 30Rnd_223Rem_Mag_T4_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 30Rnd Tracer Every 4 (IR-DIM) Mag";
};
class 30Rnd_223Rem_Mag_Sand_IRT4_F : 30Rnd_223Rem_Mag_Sand_T4_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 30Rnd Tracer Every 4 (IR-DIM) Sand Mag";
};
class 30Rnd_223Rem_PMAG_Mag_IRT4_F : 30Rnd_223Rem_PMAG_Mag_T4_F
{
ammo = "B_223Rem_Ball_IR";	
displayName = ".223 Remington Tracer Every 4 (IR-DIM) PMAG Mag";
};
class 100Rnd_223Rem_Mag_IRT4_F : 100Rnd_223Rem_Mag_T4_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 100Rnd Tracer Every 4 (IR-DIM) Mag";
};
class 100Rnd_223Rem_Mag_Green_IRT4_F : 100Rnd_223Rem_Mag_Green_T4_F
{
ammo = "B_223Rem_Ball_IR"; 		
displayName = ".223 100Rnd Tracer Every 4 (IR-DIM) Green Mag";
};
class 100Rnd_223Rem_Mag_Sand_IRT4_F : 100Rnd_223Rem_Mag_Sand_T4_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 100Rnd Tracer Every 4 (IR-DIM) Sand Mag";
};
class 20Rnd_223Rem_Mag_IRT4_F : 20Rnd_223Rem_Mag_T4_F
{
ammo = "B_223Rem_Ball_IR"; 	
displayName = ".223 20Rnd Tracer Every 4 (IR-DIM) Mag";	
};

// 5.56
class 30Rnd_556x45_AK_Mag_IRT4_F : 30Rnd_556x45_AK_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56 mm 30Rnd Tracer Every 4 (IR-DIM) AK Mag";
};
class 30Rnd_556x45_Stanag_IRT4_F: 30Rnd_556x45_Stanag_T4_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 30Rnd Tracer Every 4 (IR-DIM) Mag";	
};
class 30Rnd_556x45_Stanag_Sand_IRT4_F : 30Rnd_556x45_Stanag_Sand_T4_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 30Rnd Tracer Every 4 (IR-DIM) Sand Mag";
};
class 30Rnd_556x45_Stanag_PMAG_IRT4_F : 30Rnd_65x39_caseless_msbs_mag_T4
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56 mm 30Rnd Tracer Every 4 (IR-DIM) PMAG Mag";
};
class 100Rnd_556x45_Drum_Mag_IRT4_F : 150Rnd_556x45_Drum_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 100Rnd Tracer Every 4 (IR-DIM) Mag";
};
class 100Rnd_556x45_Drum_Green_Mag_IRT4_F: 150Rnd_556x45_Drum_Green_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56 mm 100Rnd Tracer Every 4 (IR-DIM) Green Mag";	
};
class 100Rnd_556x45_Drum_Sand_Mag_IRT4_F : 150Rnd_556x45_Drum_Sand_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56 mm 100Rnd Tracer Every 4 (IR-DIM) Sand Mag";
};
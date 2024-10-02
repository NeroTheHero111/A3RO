// 4-Five .45 ACP 11Rnd Magazines. Changing: Name. Description. Ammocount to 15. Adjusted InitSpeed
class 11Rnd_45ACP_Mag : CA_Magazine
{
count = 15;
descriptionShort = "Calibre: .45 ACP<br />Rounds: 15<br />Used in: FNX-45 Tactical";
displayName = ".45 ACP 15Rnd Mag";
initSpeed = 345.948;
mass = 8.48;
};

// Creating Tracer, Tracer Every 4 and Reload Tracer Magazine
class 11Rnd_45ACP_Mag_Tracer : 11Rnd_45ACP_Mag
{
displayName = ".45 ACP 15Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
tracersEvery = 1;
};
class 11Rnd_45ACP_Mag_T4 : 11Rnd_45ACP_Mag_Tracer
{
displayName = ".45 ACP 15Rnd Tracer Every 4 (Red) Mag";
tracersEvery = 4;
};
class 11Rnd_45ACP_Mag_RT : 11Rnd_45ACP_Mag
{
displayName = ".45 ACP 15Rnd Reload Tracer (Red) Mag";
lastRoundsTracer = 4;
};

// Creating 10Rnd FNX-45 .45 ACP Magazines
class 10Rnd_45ACP_Mag : 11Rnd_45ACP_Mag
{
count = 10;
displayName = ".45 ACP 10Rnd Mag";
mass = 6.83;
};

// Creating Tracer, Tracer Every 4 and Reload Tracer Magazine
class 10Rnd_45ACP_Mag_Tracer : 10Rnd_45ACP_Mag
{
displayName = ".45 ACP 10Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
tracersEvery = 1;
};
class 10Rnd_45ACP_Mag_T4 : 10Rnd_45ACP_Mag_Tracer
{
displayName = ".45 ACP 10Rnd Tracer Every 4 (Red) Mag";
tracersEvery = 4;
};
class 10Rnd_45ACP_Mag_RT : 10Rnd_45ACP_Mag
{
displayName = ".45 ACP 10Rnd Reload Tracer (Red) Mag";
lastRoundsTracer = 4;
};


// ACP-C2 .45 ACP 9Rnd Magazines. Changing: Name. Description. Ammocount to 7
class 9Rnd_45ACP_Mag : 30Rnd_45ACP_Mag_SMG_01
{
count = 7;
descriptionShort = "Calibre: .45 ACP<br />Rounds: 7<br />Used in: Custom TLE/RL II .45";
displayName = ".45 ACP 7Rnd Mag";
initSpeed = 345.948;
mass = 5.25;
picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
};

// Creating Tracer Magazine
class 9Rnd_45ACP_Mag_Tracer : 9Rnd_45ACP_Mag
{
displayName = ".45 ACP 7Rnd Tracer (Green) Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};

// Creating Custom TLE/RL II 10mm Auto 8Rnd Magazines
class 8Rnd_10mmA_Mag : 9Rnd_45ACP_Mag
{
ammo = "B_10mmA_Ball_Red";
count = 8;
descriptionShort = "Calibre: 10mm Auto<br />Rounds: 8<br />Used in: Custom TLE/RL II 10x25";
displayName = "10 mm 8Rnd Mag";
initSpeed = 400;
mass = 5.05;
};
class 8Rnd_10mmA_Mag_Tracer : 8Rnd_10mmA_Mag
{
displayName = "10 mm 8Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};

// P07 9x21 16Rnd Magazines. Changing: Name. Description. Ammocount to 17. Calibre to 9x19
class 16Rnd_9x21_Mag : 30Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Red";
count = 17;
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Used in: P99 9x19, MP-443 Grach";
displayName = "9 mm 17Rnd Mag";
initSpeed = 323.3928;
mass = 6.19;	
};
class 16Rnd_9x21_green_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Green";
displayName = "9 mm 17Rnd Reload Tracer (Green) Mag";
};
class 16Rnd_9x21_red_Mag : 16Rnd_9x21_Mag
{
displayName = "9 mm 17Rnd Reload Tracer (Red) Mag";
};
class 16Rnd_9x21_yellow_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 17Rnd Reload Tracer (Yellow) Mag";
};

// Creating 9x19 17Rnd Tracer and Tracer Every 4 Magazines
class 16Rnd_9x21_Mag_Tracer : 16Rnd_9x21_Mag
{
displayName = "9 mm 17Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
initSpeed = 323.3928;
tracersEvery = 1;	
};
class 16Rnd_9x21_Mag_Tracer_Green : 16Rnd_9x21_Mag_Tracer
{
ammo = "B_9x19_Ball_Green";	
displayName = "9 mm 17Rnd Tracer (Green) Mag";	
};
class 16Rnd_9x21_Mag_Tracer_Yellow : 16Rnd_9x21_Mag_Tracer
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9 mm 17Rnd Tracer (Yellow) Mag";	
};
class 16Rnd_9x21_Mag_T4 : 16Rnd_9x21_Mag_Tracer
{
displayName = "9 mm 17Rnd Tracer Every 4 (Red) Mag";
tracersEvery = 4;	
};
class 16Rnd_9x21_Mag_T4_Green : 16Rnd_9x21_Mag_T4
{
ammo = "B_9x21_Ball_Tracer_Green";
displayName = "9 mm 17Rnd Tracer Every 4 (Green) Mag";	
};
class 16Rnd_9x21_Mag_T4_Yellow : 16Rnd_9x21_Mag_T4
{
ammo = "B_9x21_Ball_Tracer_Yellow";
displayName = "9 mm 17Rnd Tracer Every 4 (Yellow) Mag";	
};

// Creating P99 9x19 15Rnd Magazines
class 15Rnd_9x19_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Red";
count = 15;
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 15<br />Used in: P99 9x19";
displayName = "9 mm 15Rnd P99 Mag";
mass = 5.83;
};
class 15Rnd_9x19_Mag_Tracer_Red : 15Rnd_9x19_Mag
{
displayName = "9 mm 15Rnd Tracer (Red) P99 Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};
class 15Rnd_9x19_Mag_T4_Red : 15Rnd_9x19_Mag_Tracer_Red
{
displayName = "9 mm 15Rnd Tracer Every 4 (Red) P99 Mag";
tracersEvery = 4;	
};
class 15Rnd_9x19_Mag_RT_Red : 15Rnd_9x19_Mag
{
displayName = "9 mm 15Rnd Reload Tracer (Red) P99 Mag";
lastRoundsTracer = 4;
};

// Creating MP433 9x19 18Rnd Magazines
class 18Rnd_9x19_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x18_Ball_Green";	
count = 18;
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 18<br />Used in: MP-443 Grach";
displayName = "9 mm 18Rnd MP-443 Mag";
mass = 6.36;
initSpeed = 323.3928;
};
class 18Rnd_9x19_Mag_Tracer_Green : 18Rnd_9x19_Mag
{
displayName = "9 mm 18Rnd Tracer (Green) MP-443 Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};
class 18Rnd_9x19_Mag_T4_Green : 18Rnd_9x19_Mag_Tracer_Green
{
displayName = "9 mm 18Rnd Tracer Every 4 (Green) MP-443 Mag";
tracersEvery = 4;	
};
class 18Rnd_9x19_Mag_RT_Green : 18Rnd_9x19_Mag
{
displayName = "9 mm 18Rnd Reload Tracer (Green) MP-443 Mag";
lastRoundsTracer = 4;
};

// Creating P99 9x21 IMI 15Rnd Magazines
class 15Rnd_P99_9x21_Mag : 15Rnd_9x19_Mag
{
ammo = "B_9x21_Ball_Tracer_Yellow";	
descriptionShort = "Calibre: 9x21mm IMI<br />Rounds: 15<br />Used in: P99 9x21";
displayName = "9 mm 15Rnd P99 Mag";
initSpeed = 320.04;
mass = 5.82;
};
class 15Rnd_P99_9x21_Mag_Tracer_Yellow : 15Rnd_P99_9x21_Mag
{
displayName = "9 mm 15Rnd Tracer (Yellow) P99 Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};
class 15Rnd_P99_9x21_Mag_T4_Yellow : 15Rnd_P99_9x21_Mag_Tracer_Yellow
{
displayName = "9 mm 15Rnd Tracer Every 4 (Yellow) P99 Mag";
tracersEvery = 4;	
};
class 15Rnd_P99_9x21_Mag_RT_Yellow : 15Rnd_P99_9x21_Mag
{
displayName = "9 mm 15Rnd Reload Tracer (Yellow) P99 Mag";
lastRoundsTracer = 4;
};

// Creating P99 .40 S&W 12Rnd Magazines
class 12Rnd_P99_40SW_Mag : 15Rnd_9x19_Mag
{
ammo = "B_40SW_Ball_Green";
count = 12;	
descriptionShort = "Calibre: .40 Smith & Wesson<br />Rounds: 12<br />Used in: P99 .40";
displayName = ".40 12Rnd P99 Mag";
initSpeed = 309.6768;
mass = 5.99;
};
class 12Rnd_P99_40SW_Mag_Tracer_Green : 12Rnd_P99_40SW_Mag
{
displayName = ".40 12Rnd Tracer (Green) P99 Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};
class 12Rnd_P99_40SW_Mag_T4_Green : 12Rnd_P99_40SW_Mag_Tracer_Green
{
displayName = ".40 12Rnd Tracer Every 4 (Green) P99 Mag";
tracersEvery = 4;	
};
class 12Rnd_P99_40SW_Mag_RT_Green : 12Rnd_P99_40SW_Mag
{
displayName = ".40 12Rnd Reload Tracer (Green) P99 Mag";
lastRoundsTracer = 4;
};

// PM 9x21 10Rnd Magazine. Changing: Name. Description. Calibre to 9x18. Ammocount to 8
class 10Rnd_9x21_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x18_Ball_Green";
count = 8;
descriptionShort = "Calibre: 9x18mm Makarov<br />Rounds: 8<br />Used in: PM";
displayName = "9 mm 8Rnd PM Mag";	
mass = 3.28;
};

// Creating 9x18 8Rnd Tracer Magazine
class 10Rnd_9x21_Mag_Tracer : 10Rnd_9x21_Mag
{
displayName = "9 mm 8Rnd PM Tracer (Green) Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};

// Creating IJ-70 .380 Auto 8Rnd Magazines
class 8Rnd_380Auto_Mag : 10Rnd_9x21_Mag
{
ammo = "B_380Auto_Ball_Yellow";
descriptionShort = "Calibre: .380 Auto<br />Rounds: 8<br />Used in: IJ-70";
displayName = ".380 8Rnd IJ-70 Mag";
initSpeed = 276.4536;
mass = 3.28;
};
class 8Rnd_380Auto_Mag_Tracer : 8Rnd_380Auto_Mag
{
displayName = ".380 8Rnd Tracer (Yellow) IJ-70 Mag";
displayNameShort = "Tracer";
tracersEvery = 1;	
};

// Starter Pistol. Changing: Name. Description
class 6Rnd_GreenSignal_F : 3Rnd_UGL_FlareGreen_F
{
displayName = "10 mm 6Rnd Flares (Green) Clip";
descriptionShort = "Calibre: 10mm Signal Flares<br />Rounds: 6<br />Used in: Starter Pistol";	
};
class 6Rnd_RedSignal_F : 6Rnd_GreenSignal_F
{
displayName = "10 mm 6Rnd Flares (Red) Clip";
descriptionShort = "Calibre: 10mm Signal Flares<br />Rounds: 6<br />Used in: Starter Pistol";	
};

// Zubr. Changing: Name. Description. Calibre to .40SW 
class 6Rnd_45ACP_Cylinder : 11Rnd_45ACP_Mag
{
ammo = "B_357M_Ball_Yellow";	
descriptionShort = "Calibre: .357 Magnum<br />Rounds: 6<br />Used in: Rhino 60DS .357";
displayName = ".357 6Rnd Clip";
initSpeed = 405.9936;
mass = 1.05;
};

// Creating Tracer Clip
class 6Rnd_45ACP_Cylinder_Tracer : 6Rnd_45ACP_Cylinder
{
displayName = ".357 6Rnd Tracer (Green) Clip";
displayNameShort = "Tracer";
tracersEvery = 1;
};

// Creating 6Rnd 9x19 Clips
class 6Rnd_9x19_Cylinder : 16Rnd_9x21_Mag
{
count = 6;	
descriptionShort = "Calibre: 9x19 Parabellum<br />Rounds: 6<br />Used in: Rhino 60DS 9x19";
displayName = "9 mm 6Rnd Clip";
initSpeed = 323.3928;
mass = 1.06;
picture = "\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
};
class 6Rnd_9x19_Cylinder_Tracer : 6Rnd_9x19_Cylinder
{
displayName = "9 mm 6Rnd Tracer (Red) Clip";
displayNameShort = "Tracer";
tracersEvery = 1;
};

// Creating 6Rnd .40SW Clips
class 6Rnd_40SW_Cylinder : 6Rnd_9x19_Cylinder
{
ammo = "B_40SW_Ball_Green";		
descriptionShort = "Calibre: .40 Smith & Wesson<br />Rounds: 6<br />Used in: Rhino 60DS .40";
displayName = ".40 6Rnd Clip";
initSpeed = 309.6768;
mass = 1.41;
};
class 6Rnd_40SW_Cylinder_Tracer : 6Rnd_40SW_Cylinder
{
displayName = ".40 6Rnd Tracer (Green) Clip";
displayNameShort = "Tracer";
tracersEvery = 1;
};

// Creating 6Rnd .45 Colt Clip
class 6Rnd_45Colt_Clip : 6Rnd_45ACP_Cylinder
{
ammo = "B_45Colt_Ball";
descriptionShort = "Calibre: .45 Colt<br />Rounds: 6<br />Used in: Judge Magnum";
displayName = ".45 6Rnd Clip";
displayNameShort = "";
initSpeed = 400;
mass = 2.51;
};

// Adjusting 12 Gauge Classes
class 2Rnd_12Gauge_Pellets : CA_Magazine
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12 Gauge 2Rnd #4 Buckshot";
displayNameShort = "#4 Buck";
initSpeed = 374.904;
};
class 2Rnd_12Gauge_Slug : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
initSpeed = 487.68;
};
class 6Rnd_12Gauge_Pellets : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12 Gauge 6Rnd #4 Buckshot";
displayNameShort = "#4 Buck";
};
class 6Rnd_12Gauge_Slug : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
};

// Creating 6Rnd .410 bore 'Magazines'
class 6Rnd_410bore_000_Pellets : 6Rnd_12Gauge_Pellets
{
ammo = "B_410bore_Pellets_Submunition_000_Buck";
descriptionShort = "Calibre: .410 bore<br />Rounds: 6<br />Used in: Judge Magnum";
displayName = ".410 6Rnd #000 Buckshot";
displayNameShort = "#000 Buck";
initSpeed = 396;
mass = 0.5;
picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
};
class 6Rnd_410bore_4Shot_Pellets : 6Rnd_410bore_000_Pellets
{
ammo = "B_410bore_Pellets_Submunition_4_Shot";
displayName = ".410 6Rnd #4 Shot";
displayNameShort = "#4 Shot";
initSpeed = 360;
mass = 0.4;
};
class 6Rnd_410bore_Slugs : 6Rnd_410bore_000_Pellets
{
ammo = "B_410bore_Slug";
displayName = ".410 6Rnd Slugs";
displayNameShort = "Slugs";
initSpeed = 550;
mass = 0.9;
picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
};
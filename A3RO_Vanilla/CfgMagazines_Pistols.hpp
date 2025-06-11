// 4-Five .45 ACP 11Rnd Magazines. Changing: Name. Description. Ammocount to 15. Adjusted InitSpeed
class 11Rnd_45ACP_Mag : CA_Magazine
{
count = 15;
descriptionShort = "Calibre: .45 ACP<br />Rounds: 15<br />Tracers: None<br />Used in: FNX-45 Tactical";
displayName = ".45 ACP 15Rnd Mag";
displayNameShort = "";
initSpeed = 345.948;
mass = 9.4355;
picture = "\A3RO_Vanilla\Textures\UI\icon_15Rnd_45ACP_CA.paa";
};

// Creating Tracer, Tracer Every 4 and Reload Tracer Magazine
class 11Rnd_45ACP_Mag_Tracer : 11Rnd_45ACP_Mag
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 15<br />Tracers: Every Round<br />Used in: FNX-45 Tactical";
displayName = ".45 ACP 15Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_15Rnd_RT_45ACP_CA.paa";
tracersEvery = 1;
};
class 11Rnd_45ACP_Mag_RT : 11Rnd_45ACP_Mag
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 15<br />Tracers: Last 4 Rounds<br />Used in: FNX-45 Tactical";
displayName = ".45 ACP 15Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_15Rnd_RRT_45ACP_CA.paa";
lastRoundsTracer = 4;
};

// Creating 10Rnd FNX-45 .45 ACP Magazines
class 10Rnd_45ACP_Mag : 11Rnd_45ACP_Mag
{
count = 10;   
descriptionShort = "Calibre: .45 ACP<br />Rounds: 10<br />Tracers: None<br />Used in: FNX-45 Tactical";
displayName = ".45 ACP 10Rnd Mag";
displayNameShort = "";
mass = 7.3926;
picture = "\A3RO_Vanilla\Textures\UI\icon_15Rnd_45ACP_CA.paa";
};

// Creating Tracer, Tracer Every 4 and Reload Tracer Magazine
class 10Rnd_45ACP_Mag_Tracer : 10Rnd_45ACP_Mag
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 10<br />Tracers: Every Round<br />Used in: FNX-45 Tactical";
displayName = ".45 ACP 10Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_15Rnd_RT_45ACP_CA.paa";
tracersEvery = 1;
};

// ACP-C2 .45 ACP 9Rnd Magazines. Changing: Name. Description. Ammocount to 7
class 9Rnd_45ACP_Mag : 30Rnd_45ACP_Mag_SMG_01
{
count = 7;
descriptionShort = "Calibre: .45 ACP<br />Rounds: 7<br />Tracers: None<br />Used in: Custom TLE/RL II .45";
displayName = ".45 ACP 7Rnd Mag";
displayNameShort = "";
initSpeed = 345.948;
mass = 4.4032;
picture = "\A3RO_Vanilla\Textures\UI\icon_7Rnd_45ACP_Mag_CA.paa";
};

// Creating Tracer Magazine
class 9Rnd_45ACP_Mag_Tracer : 9Rnd_45ACP_Mag
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 7<br />Tracers: Every Round<br />Used in: Custom TLE/RL II .45";
displayName = ".45 ACP 7Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_7Rnd_GT_45ACP_Mag_CA.paa";
tracersEvery = 1;
};

// Creating Custom TLE/RL II 10mm Auto 8Rnd Magazines
class 8Rnd_10mmA_Mag : 9Rnd_45ACP_Mag
{
ammo = "B_10mmA_Ball_Red";
count = 8;
descriptionShort = "Calibre: 10mm Auto<br />Rounds: 8<br />Tracers: None<br />Used in: Custom TLE/RL II 10x25";
displayName = "10x25 8Rnd Mag";
displayNameShort = "";
initSpeed = 400;
mass = 7.5063;
picture = "\A3RO_Vanilla\Textures\UI\icon_7Rnd_45ACP_Mag_CA.paa";
};
class 8Rnd_10mmA_Mag_Tracer : 8Rnd_10mmA_Mag
{
descriptionShort = "Calibre: 10mm Auto<br />Rounds: 8<br />Tracers: Every Round<br />Used in: Custom TLE/RL II 10x25";
displayName = "10x25 8Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_8Rnd_RT_10AUTO_Mag_CA.paa";
tracersEvery = 1;	
};

// P07 9x21 16Rnd Magazines. Changing: Name. Description. Ammocount to 17. Calibre to 9x19
class 16Rnd_9x21_Mag : 30Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Red";
count = 17;
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: None<br />Used in: P99 9x19";
displayName = "9x19 17Rnd Mag";
displayNameShort = "";
initSpeed = 360;
mass = 8.0667;
picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
scope = 2; // Unhiding after Parental Conflict
};
class 16Rnd_9x21_green_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Green";
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: Last 4 Rounds<br />Used in: P99 9x19";
displayName = "9x19 17Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_GRT_9x19_Mag_CA.paa";
};
class 16Rnd_9x21_red_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Red"; 
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: Last 4 Rounds<br />Used in: P99 9x19";
displayName = "9x19 17Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_RRT_9x19_Mag_CA.paa";
};
class 16Rnd_9x21_yellow_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Yellow";
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: Last 4 Rounds<br />Used in: P99 9x19";
displayName = "9x19 17Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_YRT_9x19_Mag_CA.paa";
};

// Creating 9x19 17Rnd Tracer Magazines
class 16Rnd_9x21_Mag_Tracer : 16Rnd_9x21_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: Every Round<br />Used in: P99 9x19";
displayName = "9x19 17Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
initSpeed = 360;
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_RT_9x19_Mag_CA.paa";
tracersEvery = 1;	
};
class 16Rnd_9x21_Mag_Tracer_Green : 16Rnd_9x21_Mag_Tracer
{
ammo = "B_9x19_Ball_Green";	
displayName = "9x19 17Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_GT_9x19_Mag_CA.paa";
};
class 16Rnd_9x21_Mag_Tracer_Yellow : 16Rnd_9x21_Mag_Tracer
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 17Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_YT_9x19_Mag_CA.paa";
};

// Creating P99 9x19 15Rnd Magazines
class 15Rnd_9x19_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Red";
count = 15;
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 15<br />Tracers: None<br />Used in: P99 9x19";
displayName = "9x19 15Rnd P99 Mag";
displayNameShort = "";
mass = 7.5067;
};
class 15Rnd_9x19_Mag_Tracer_Red : 15Rnd_9x19_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 15<br />Tracers: Every Round<br />Used in: P99 9x19";
displayName = "9x19 15Rnd Tracer (Red) P99 Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_RT_9x19_Mag_CA.paa";
tracersEvery = 1;
};
class 15Rnd_9x19_Mag_RT_Red : 15Rnd_9x19_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 15<br />Tracers: Last 4 Rounds<br />Used in: P99 9x19";
displayName = "9x19 15Rnd Reload Tracer (Red) P99 Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_17Rnd_RRT_9x19_Mag_CA.paa";
};

// Creating MP433 9x19 17Rnd Magazines
class 17Rnd_9x19_MP433_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x19_Ball_Red";
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: None<br />Used in: MP-443 Grach";
displayName = "9x19 17Rnd MP-433 Mag";
displayNameShort = "";
mass = 8.0667;
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_MP433_Mag_CA.paa";
};
class 17Rnd_9x19_GRT_MP433_Mag : 17Rnd_9x19_MP433_Mag
{
ammo = "B_9x19_Ball_Green";
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: Last 4 Rounds<br />Used in: MP-443 Grach";
displayName = "9x19 17Rnd Reload Tracer (Green) MP-433 Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_GRT_MP433_Mag_CA.paa";
};
class 17Rnd_9x19_RRT_MP433_Mag : 17Rnd_9x19_GRT_MP433_Mag
{
ammo = "B_9x19_Ball_Red"; 
displayName = "9x19 17Rnd Reload Tracer (Red) MP-433 Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_RRT_MP433_Mag_CA.paa";
};
class 17Rnd_9x19_YRT_MP433_Mag : 17Rnd_9x19_GRT_MP433_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 17Rnd Reload Tracer (Yellow) MP-433 Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_YRT_MP433_Mag_CA.paa";
};
class 17Rnd_9x19_RT_MP433_Mag : 17Rnd_9x19_MP433_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 17<br />Tracers: Every Round<br />Used in: MP-443 Grach";
displayName = "9x19 17Rnd Tracer (Red) MP-433 Mag";
displayNameShort = "Tracer (Red)";
initSpeed = 360;
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_RT_MP433_Mag_CA.paa";
tracersEvery = 1;
};
class 17Rnd_9x19_GT_MP433_Mag : 17Rnd_9x19_RT_MP433_Mag
{
ammo = "B_9x19_Ball_Green";	
displayName = "9x19 17Rnd Tracer (Green) MP-433 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_GT_MP433_Mag_CA.paa";
};
class 17Rnd_9x19_YT_MP433_Mag : 17Rnd_9x19_RT_MP433_Mag
{
ammo = "B_9x19_Ball_Yellow";
displayName = "9x19 17Rnd Tracer (Yellow) MP-433 Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_YT_MP433_Mag_CA.paa";
};
// Creating MP433 9x19 18Rnd Magazines
class 18Rnd_9x19_MP433_Mag : 17Rnd_9x19_MP433_Mag
{
ammo = "B_9x19_Ball_Green";	
count = 18;
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 18<br />Tracers: None<br />Used in: MP-443 Grach";
displayName = "9x19 18Rnd MP-443 Mag";
displayNameShort = "";
mass = 8.3467;
initSpeed = 360;
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_MP433_Mag_CA.paa";
};
class 18Rnd_9x19_GT_MP433_Mag : 18Rnd_9x19_MP433_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 18<br />Tracers: Every Round<br />Used in: MP-443 Grach";
displayName = "9x19 18Rnd Tracer (Green) MP-443 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_GT_MP433_Mag_CA.paa";
tracersEvery = 1;	
};
class 18Rnd_9x19_GRT_MP433_Mag : 18Rnd_9x19_MP433_Mag
{
descriptionShort = "Calibre: 9x19mm Parabellum<br />Rounds: 18<br />Tracers: Last 4 Rounds<br />Used in: MP-443 Grach";
displayName = "9x19 18Rnd Reload Tracer (Green) MP-443 Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_18Rnd_9x19_GRT_MP433_Mag_CA.paa";
};

// Creating P99 9x21 IMI 15Rnd Magazines
class 15Rnd_P99_9x21_Mag : 15Rnd_9x19_Mag
{
ammo = "B_9x21_Ball_Tracer_Yellow";	
descriptionShort = "Calibre: 9x21mm IMI<br />Rounds: 15<br />Tracers: None<br />Used in: P99 9x21";
displayName = "9x21 15Rnd P99 Mag";
displayNameShort = "";
initSpeed = 320.04;
mass = 7.5067;
};

// Creating P99 .40 S&W 12Rnd Magazines
class 12Rnd_P99_40SW_Mag : 15Rnd_9x19_Mag
{
ammo = "B_40SW_Ball_Green";
count = 12;	
descriptionShort = "Calibre: .40 Smith &amp; Wesson<br />Rounds: 12<br />Tracers: None<br />Used in: P99 .40";
displayName = ".40 12Rnd P99 Mag";
displayNameShort = "";
initSpeed = 309.6768;
mass = 6.4022;
};
class 12Rnd_P99_40SW_Mag_Tracer_Green : 12Rnd_P99_40SW_Mag
{
descriptionShort = "Calibre: .40 Smith &amp; Wesson<br />Rounds: 12<br />Tracers: Every Round<br />Used in: P99 .40";
displayName = ".40 12Rnd Tracer (Green) P99 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_12Rnd_GT_40SW_Mag_CA.paa";
tracersEvery = 1;
};
class 12Rnd_P99_40SW_Mag_RT_Green : 12Rnd_P99_40SW_Mag
{
descriptionShort = "Calibre: .40 Smith &amp; Wesson<br />Rounds: 12<br />Tracers: Last 4 Rounds<br />Used in: P99 .40";
displayName = ".40 12Rnd Reload Tracer (Green) P99 Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_12Rnd_GRT_40SW_Mag_CA.paa";
};

// PM 9x21 10Rnd Magazine. Changing: Name. Description. Calibre to 9x18. Ammocount to 8
class 10Rnd_9x21_Mag : 16Rnd_9x21_Mag
{
ammo = "B_9x18_Ball_Green";
count = 8;
descriptionShort = "Calibre: 9x18mm Makarov<br />Rounds: 8<br />Tracers: None<br />Used in: PM";
displayName = "9x18 8Rnd PMM Mag";
displayNameShort = "";
mass = 5.1940;
picture = "\A3RO_Vanilla\Textures\UI\icon_8Rnd_9x18_Mag_CA.paa";
};

// Creating 9x18 8Rnd Tracer Magazine
class 10Rnd_9x21_Mag_Tracer : 10Rnd_9x21_Mag
{
descriptionShort = "Calibre: 9x18mm Makarov<br />Rounds: 8<br />Tracers: Every Round<br />Used in: PM";
displayName = "9x18 8Rnd PMM Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_8Rnd_GT_9x18_Mag_CA.paa";
tracersEvery = 1;
};

// Creating IJ-70 .380 Auto 8Rnd Magazines
class 8Rnd_380Auto_Mag : 10Rnd_9x21_Mag
{
ammo = "B_380Auto_Ball_Yellow";
descriptionShort = "Calibre: .380 Auto<br />Rounds: 8<br />Tracers: None<br />Used in: IJ-70";
displayName = ".380 8Rnd IJ-70 Mag";
displayNameShort = "";
initSpeed = 276.4536;
mass = 4.8676;
picture = "\A3RO_Vanilla\Textures\UI\icon_8Rnd_9x18_Mag_CA.paa";
};
class 8Rnd_380Auto_Mag_Tracer : 8Rnd_380Auto_Mag
{
descriptionShort = "Calibre: .380 Auto<br />Rounds: 8<br />Tracers: Every Round<br />Used in: IJ-70";
displayName = ".380 8Rnd Tracer (Yellow) IJ-70 Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_8Rnd_YT_9x18_Mag_CA.paa";
tracersEvery = 1;	
};

// Starter Pistol. Changing: Name. Description
class 6Rnd_GreenSignal_F : 3Rnd_UGL_FlareGreen_F
{
ammo = "F_12GA_Flare_Green";
displayName = "12GA 6Rnd Flares (Green) Clip";
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: Flare Pistol";
mass = 5.8733;	
};
class 6Rnd_RedSignal_F : 6Rnd_GreenSignal_F
{
ammo = "F_12GA_Flare_Red";
displayName = "12GA 6Rnd Flares (Red) Clip";
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: Flare Pistol";	
};

// Zubr. Changing: Name. Description. Calibre to .40SW 
class 6Rnd_45ACP_Cylinder : 11Rnd_45ACP_Mag
{
ammo = "B_357M_Ball_Yellow";	
descriptionShort = "Calibre: .357 Magnum<br />Rounds: 6<br />Tracers: None<br />Used in: Rhino 60DS .357";
displayName = ".357 6Rnd Clip";
displayNameShort = "";
initSpeed = 405.9936;
mass = 2.2643;
};

// Creating Tracer Clip
class 6Rnd_45ACP_Cylinder_Tracer : 6Rnd_45ACP_Cylinder
{
descriptionShort = "Calibre: .357 Magnum<br />Rounds: 6<br />Tracers: Every Round<br />Used in: Rhino 60DS .357";
displayName = ".357 6Rnd Tracer (Yellow) Clip";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_6Rnd_YT_Revolver_Mag_CA.paa";
tracersEvery = 1;
};

// Creating 6Rnd 9x19 Clips
class 6Rnd_9x19_Cylinder : 16Rnd_9x21_Mag
{
count = 6;	
descriptionShort = "Calibre: 9x19 Parabellum<br />Rounds: 6<br />Tracers: None<br />Used in: Rhino 60DS 9x19";
displayName = "9x19 6Rnd Clip";
displayNameShort = "";
initSpeed = 360;
mass = 1.7465;
picture = "\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
};
class 6Rnd_9x19_Cylinder_Tracer : 6Rnd_9x19_Cylinder
{
descriptionShort = "Calibre: 9x19 Parabellum<br />Rounds: 6<br />Tracers: Every Round<br />Used in: Rhino 60DS 9x19";   
displayName = "9x19 6Rnd Tracer (Red) Clip";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_6Rnd_RT_Revolver_Mag_CA.paa";
tracersEvery = 1;
};

// Creating 6Rnd .40SW Clips
class 6Rnd_40SW_Cylinder : 6Rnd_9x19_Cylinder
{
ammo = "B_40SW_Ball_Green";		
descriptionShort = "Calibre: .40 Smith &amp; Wesson<br />Rounds: 6<br />Tracers: None<br />Used in: Rhino 60DS .40";
displayName = ".40 6Rnd Clip";
displayNameShort = "";
initSpeed = 309.6768;
mass = 1.6143;
};
class 6Rnd_40SW_Cylinder_Tracer : 6Rnd_40SW_Cylinder
{
descriptionShort = "Calibre: .40 Smith &amp; Wesson<br />Rounds: 6<br />Tracers: Every Round<br />Used in: Rhino 60DS .40";
displayName = ".40 6Rnd Tracer (Green) Clip";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_6Rnd_GT_Revolver_Mag_CA.paa";
tracersEvery = 1;
};

// Creating 6Rnd .45 Colt Clips
class 6Rnd_45Colt_Clip : 6Rnd_45ACP_Cylinder
{
ammo = "B_45Colt_Ball";
descriptionShort = "Calibre: .45 Colt<br />Rounds: 6<br />Used in: Judge Magnum";
displayName = ".45 6Rnd Clip";
displayNameShort = "";
initSpeed = 400;
mass = 2.51;
};
class 6Rnd_45Colt_T_Clip : 6Rnd_45Colt_Clip
{
descriptionShort = "Calibre: .45 Colt<br />Rounds: 6<br />Tracers: Every Round<br />Used in: Judge Magnum";
displayName = ".45 6Rnd Tracer (Green) Clip";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_6Rnd_GT_Revolver_Mag_CA.paa";
tracersEvery = 1;
};

// Adjusting 12 Gauge Classes
class 2Rnd_12Gauge_Pellets : CA_Magazine
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd #00 Buckshot";
displayNameShort = "#00 Buck";
initSpeed = 403.86;
mass = 1.7500;
};
class 2Rnd_12Gauge_Slug : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd Slug";
displayNameShort = "Slug";
initSpeed = 487.68;
mass = 1.7502;
};
class 6Rnd_12Gauge_Pellets : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #00 Buckshot Mag";
displayNameShort = "#00 Buck";
initSpeed = 403.86;
mass = 11.3127;
};
class 6Rnd_12Gauge_Slug : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd Slug Mag";
displayNameShort = "Slug";
initSpeed = 487.68;
mass = 11.3134;
};

// Creating 6Rnd .410 bore 'Magazines'
class 6Rnd_410bore_000_Pellets : 6Rnd_12Gauge_Pellets
{
ammo = "B_410bore_Pellets_Submunition_000_Buck";
descriptionShort = "Calibre: .410 bore<br />Rounds: 6<br />Used in: Judge Magnum";
displayName = ".410 6Rnd #000 Buckshot Clip";
displayNameShort = "#000 Buck";
initSpeed = 396;
mass = 3.5822;
picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
};
class 6Rnd_410bore_4Shot_Pellets : 6Rnd_410bore_000_Pellets
{
ammo = "B_410bore_Pellets_Submunition_4_Shot";
displayName = ".410 6Rnd #4 Shot Clip";
displayNameShort = "#4 Shot";
initSpeed = 360;
mass = 2.6388;
};
class 6Rnd_410bore_Slugs : 6Rnd_410bore_000_Pellets
{
ammo = "B_410bore_Slug";
displayName = ".410 6Rnd Slug Clip";
displayNameShort = "Slug";
initSpeed = 550;
mass = 1.5165;
picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
};
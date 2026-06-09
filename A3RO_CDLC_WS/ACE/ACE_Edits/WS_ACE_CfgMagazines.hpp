// Adding ACE Ammo to Magazines of new and existing Weapons for Uniformity

// Creating Galil Model 323 7.62x51 Magazines
// 25Rnd
class 25Rnd_762x51_Galil_lxWS;
class ACE_25Rnd_762x51_Galil_M118LR_Mag_F : 25Rnd_762x51_Galil_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 25Rnd M118LR Galil Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 19.5342;
};
class ACE_25Rnd_762x51_Galil_M993_Mag_F : ACE_25Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 25Rnd M993 AP Galil Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 17.7798;
};
class ACE_25Rnd_762x51_Galil_Mk316_Mag_F : ACE_25Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 25Rnd Mk316 Mod 0 Galil Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 18.7056;
};
class ACE_25Rnd_762x51_Galil_Mk319_Mag_F : ACE_25Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 25Rnd Mk319 Mod 0 Galil Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 17.0985;
};
class ACE_25Rnd_762x51_Galil_SD_Mag_F : ACE_25Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 25Rnd SD Galil Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 19.5655;
};
// 11Rnd
class 11Rnd_762x51_Galil_lxWS;
class ACE_11Rnd_762x51_Galil_M118LR_Mag_F : 11Rnd_762x51_Galil_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 11Rnd M118LR Galil Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 10.8217;
};
class ACE_11Rnd_762x51_Galil_M993_Mag_F : ACE_11Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 11Rnd M993 AP Galil Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 10.0497;
};
class ACE_11Rnd_762x51_Galil_Mk316_Mag_F : ACE_11Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 11Rnd Mk316 Mod 0 Galil Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 10.4571;
};
class ACE_11Rnd_762x51_Galil_Mk319_Mag_F : ACE_11Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 11Rnd Mk319 Mod 0 Galil Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 9.7500;
};
class ACE_11Rnd_762x51_Galil_SD_Mag_F : ACE_11Rnd_762x51_Galil_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 11Rnd SD Galil Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 10.8355;
};

// Creating 60Rnd Stanag Magazines
// M995
class 60Rnd_556x45_Stanag_NT_lxWS;
class ACE_60Rnd_556x45_M995_Mag_F : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 60Rnd M995 AP Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 22.9060;
};
// Mk262
class ACE_60Rnd_556x45_Mk262_Mag_F : ACE_60Rnd_556x45_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 60Rnd Mk262 Mod 1 Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 25.0010;
};
// Mk318
class ACE_60Rnd_556x45_Mk318_Mag_F : ACE_60Rnd_556x45_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 60Rnd Mk318 Mod 0 Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 23.7152;
};

// Creating 7.62 Mk14 Black Magazines
// 10Rnd
class 10Rnd_Mk14_762x51_Mag_blk_lxWS;
class ACE_10Rnd_762x51_M118LR_Mag_blk_F : 10Rnd_Mk14_762x51_Mag_blk_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 5Rnd M118LR Black Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 5.6264;
};
class ACE_10Rnd_762x51_M993_Mag_blk_F : ACE_10Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 5Rnd M993 AP Black Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 5.2755;
};
class ACE_10Rnd_762x51_Mk316_Mag_blk_F : ACE_10Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 5Rnd Mk316 Mod 0 Black Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 5.4607;
};
class ACE_10Rnd_762x51_Mk319_Mag_blk_F : ACE_10Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 5Rnd Mk319 Mod 0 Black Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 5.1393;
};
class ACE_10Rnd_762x51_SD_Mag_blk_F : ACE_10Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 5Rnd SD Black Mag";
displayNameShort = "SD";
initSpeed = 324.917;
};
// 20Rnd
class 20Rnd_762x51_Mag_blk_lxWS;
class ACE_20Rnd_762x51_M118LR_Mag_blk_F : 20Rnd_762x51_Mag_blk_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 20Rnd M118LR Black Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 17.5013;
};
class ACE_20Rnd_762x51_M993_Mag_blk_F : ACE_20Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP Black Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 16.0977;
};
class ACE_20Rnd_762x51_Mk316_Mag_blk_F : ACE_20Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 Black Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 16.8384;
};
class ACE_20Rnd_762x51_Mk319_Mag_blk_F : ACE_20Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 Black Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 15.5527;
};
class ACE_20Rnd_762x51_SD_Mag_blk_F : ACE_20Rnd_762x51_M118LR_Mag_blk_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD Black Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 17.5263;
};
// Snakeskin
// 10Rnd
class 10Rnd_Mk14_762x51_Mag_snake_lxWS;
class ACE_10Rnd_762x51_M118LR_Mag_snake_F : 10Rnd_Mk14_762x51_Mag_snake_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 5Rnd M118LR Snake Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 5.6264;
};
class ACE_10Rnd_762x51_M993_Mag_snake_F : ACE_10Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 5Rnd M993 AP Snake Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 5.2755;
};
class ACE_10Rnd_762x51_Mk316_Mag_snake_F : ACE_10Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 5Rnd Mk316 Mod 0 Snake Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 5.4607;
};
class ACE_10Rnd_762x51_Mk319_Mag_snake_F : ACE_10Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 5Rnd Mk319 Mod 0 Snake Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 5.1393;
};
class ACE_10Rnd_762x51_SD_Mag_snake_F : ACE_10Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 5Rnd SD Snake Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 5.6327;
};
// 20Rnd
class 20Rnd_762x51_Mag_snake_lxWS;
class ACE_20Rnd_762x51_M118LR_Mag_snake_F : 20Rnd_762x51_Mag_snake_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 20Rnd M118LR Snake Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 17.5013;
};
class ACE_20Rnd_762x51_M993_Mag_snake_F : ACE_20Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP Snake Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 16.0977;
};
class ACE_20Rnd_762x51_Mk316_Mag_snake_F : ACE_20Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 Snake Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 16.8384;
};
class ACE_20Rnd_762x51_Mk319_Mag_snake_F : ACE_20Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 Snake Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 15.5527;
};
class ACE_20Rnd_762x51_SD_Mag_snake_F : ACE_20Rnd_762x51_M118LR_Mag_snake_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD Snake Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 17.5263;
};

// Adding ACE Ammo to Galil Mags. No Im not adding more Rusty Mags.
// 35Rnd
// Plain
// M995
class 35Rnd_556x45_Velko_lxWS;
class ACE_35Rnd_556x45_M995_Galil_Mag_F : 35Rnd_556x45_Velko_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 35Rnd M995 AP Galil Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 15.5779;
};
// Mk262
class ACE_35Rnd_556x45_Mk262_Galil_Mag_F : ACE_35Rnd_556x45_M995_Galil_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 35Rnd Mk262 Mod 1 Galil Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 16.7999;
};
// Mk318
class ACE_35Rnd_556x45_Mk318_Galil_Mag_F : ACE_35Rnd_556x45_M995_Galil_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 35Rnd Mk318 Mod 0 Galil Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 16.0499;
};
// Snakeskin
// M995
class 35Rnd_556x45_Velko_snake_lxWS;
class ACE_35Rnd_556x45_M995_Galil_Snake_Mag_F : 35Rnd_556x45_Velko_snake_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 35Rnd M995 AP Galil Snake Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 15.5779;
};
// Mk262
class ACE_35Rnd_556x45_Mk262_Galil_Snake_Mag_F : ACE_35Rnd_556x45_M995_Galil_Snake_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 35Rnd Mk262 Mod 1 Galil Snake Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 16.7999;
};
// Mk318
class ACE_35Rnd_556x45_Mk318_Galil_Snake_Mag_F : ACE_35Rnd_556x45_M995_Galil_Snake_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 35Rnd Mk318 Mod 0 Galil Snake Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 16.0499;
};
// 50Rnd
// Plain
// M995
class 50Rnd_556x45_Velko_lxWS;
class ACE_50Rnd_556x45_M995_Galil_Mag_F : 50Rnd_556x45_Velko_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 50Rnd M995 AP Galil Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 21.6470;
};
// Mk262
class ACE_50Rnd_556x45_Mk262_Galil_Mag_F : ACE_50Rnd_556x45_M995_Galil_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 50Rnd Mk262 Mod 1 Galil Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 23.3928;
};
// Mk318
class ACE_50Rnd_556x45_Mk318_Galil_Mag_F : ACE_50Rnd_556x45_M995_Galil_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 50Rnd Mk318 Mod 0 Galil Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 22.3214;
};
// Snakeskin
// M995
class 50Rnd_556x45_Velko_snake_lxWS;
class ACE_50Rnd_556x45_M995_Galil_Snake_Mag_F : 50Rnd_556x45_Velko_snake_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 50Rnd M995 AP Galil Snake Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 21.6470;
};
// Mk262
class ACE_50Rnd_556x45_Mk262_Galil_Snake_Mag_F : ACE_50Rnd_556x45_M995_Galil_Snake_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 50Rnd Mk262 Mod 1 Galil Snake Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 23.3928;
};
// Mk318
class ACE_50Rnd_556x45_Mk318_Galil_Snake_Mag_F : ACE_50Rnd_556x45_M995_Galil_Snake_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 50Rnd Mk318 Mod 0 Galil Snake Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 22.3214;
};

// Creating AA-12 Magazines using ACE + #000 Ammo 
// 20Rnds
// Black
class 20Rnd_12Gauge_AA40_Pellets_lxWS;
class ACE_20Rnd_12Gauge_Pellets_No0_Buck : 20Rnd_12Gauge_AA40_Pellets_lxWS
{
ammo = "ACE_12Gauge_Pellets_Submunition_No0_Buck";
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 20Rnd #0 Buckshot Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 51.4971;
};
class ACE_20Rnd_12Gauge_Pellets_No1_Buck : ACE_20Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No1_Buck";   
displayName = "12GA 20Rnd #1 Buckshot Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 54.8308;
};
class ACE_20Rnd_12Gauge_Pellets_No4_Bird : ACE_20Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Bird";
displayName = "12GA 20Rnd #4 Birdshot Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 47.3622;
};
class ACE_20Rnd_12Gauge_Pellets_No4_Buck : ACE_20Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Buck";
displayName = "12GA 20Rnd #4 Buckshot Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 59.2316;
};
class ACE_20Rnd_12Gauge_Pellets_No000_Buck : ACE_20Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 20Rnd #000 Buckshot Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 55.6651;
};
// Snake
class 20Rnd_12Gauge_AA40_Pellets_Snake_lxWS;
class ACE_20Rnd_12Gauge_Pellets_No0_Buck_Snake : 20Rnd_12Gauge_AA40_Pellets_Snake_lxWS
{
ammo = "ACE_12Gauge_Pellets_Submunition_No0_Buck";
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 20Rnd #0 Buckshot Snake Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 51.4971;
};
class ACE_20Rnd_12Gauge_Pellets_No1_Buck_Snake : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No1_Buck";   
displayName = "12GA 20Rnd #1 Buckshot Snake Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 54.8308;
};
class ACE_20Rnd_12Gauge_Pellets_No4_Bird_Snake : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Bird";
displayName = "12GA 20Rnd #4 Birdshot Snake Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 47.3622;
};
class ACE_20Rnd_12Gauge_Pellets_No4_Buck_Snake : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Buck";
displayName = "12GA 20Rnd #4 Buckshot Snake Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 59.2316;
};
class ACE_20Rnd_12Gauge_Pellets_No000_Buck_Snake : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 20Rnd #000 Buckshot Snake Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 55.6651;
};
// Tan
class 20Rnd_12Gauge_AA40_Pellets_Tan_lxWS;
class ACE_20Rnd_12Gauge_Pellets_No0_Buck_Tan : 20Rnd_12Gauge_AA40_Pellets_Tan_lxWS
{
ammo = "ACE_12Gauge_Pellets_Submunition_No0_Buck";
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 20Rnd #0 Buckshot Tan Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 51.4971;
};
class ACE_20Rnd_12Gauge_Pellets_No1_Buck_Tan : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No1_Buck";   
displayName = "12GA 20Rnd #1 Buckshot Tan Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 54.8308;
};
class ACE_20Rnd_12Gauge_Pellets_No4_Bird_Tan : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Bird";
displayName = "12GA 20Rnd #4 Birdshot Tan Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 47.3622;
};
class ACE_20Rnd_12Gauge_Pellets_No4_Buck_Tan : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Buck";
displayName = "12GA 20Rnd #4 Buckshot Tan Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 59.2316;
};
class ACE_20Rnd_12Gauge_Pellets_No000_Buck_Tan : ACE_20Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 20Rnd #000 Buckshot Tan Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 55.6651;
};
// 8Rnds
// Black
class 8Rnd_12Gauge_AA40_Pellets_lxWS;
class ACE_8Rnd_12Gauge_Pellets_No0_Buck : 8Rnd_12Gauge_AA40_Pellets_lxWS
{
ammo = "ACE_12Gauge_Pellets_Submunition_No0_Buck";
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd #0 Buckshot Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 17.5432;
};
class ACE_8Rnd_12Gauge_Pellets_No1_Buck : ACE_8Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No1_Buck";   
displayName = "12GA 8Rnd #1 Buckshot Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 18.8767;
};
class ACE_8Rnd_12Gauge_Pellets_No4_Bird : ACE_8Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Bird";
displayName = "12GA 8Rnd #4 Birdshot Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 15.8892;
};
class ACE_8Rnd_12Gauge_Pellets_No4_Buck : ACE_8Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Buck";
displayName = "12GA 8Rnd #4 Buckshot Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 20.6370;
};
class ACE_8Rnd_12Gauge_Pellets_No000_Buck : ACE_8Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 8Rnd #000 Buckshot Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 19.2104;
};
// Snake
class 8Rnd_12Gauge_AA40_Pellets_Snake_lxWS;
class ACE_8Rnd_12Gauge_Pellets_No0_Buck_Snake : 8Rnd_12Gauge_AA40_Pellets_Snake_lxWS
{
ammo = "ACE_12Gauge_Pellets_Submunition_No0_Buck";
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd #0 Buckshot Snake Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 17.5432;
};
class ACE_8Rnd_12Gauge_Pellets_No1_Buck_Snake : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No1_Buck";   
displayName = "12GA 8Rnd #1 Buckshot Snake Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 18.8767;
};
class ACE_8Rnd_12Gauge_Pellets_No4_Bird_Snake : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Bird";
displayName = "12GA 8Rnd #4 Birdshot Snake Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 15.8892;
};
class ACE_8Rnd_12Gauge_Pellets_No4_Buck_Snake : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Buck";
displayName = "12GA 8Rnd #4 Buckshot Snake Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 20.6370;
};
class ACE_8Rnd_12Gauge_Pellets_No000_Buck_Snake : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Snake
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 8Rnd #000 Buckshot Snake Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 19.2104;
};
// Tan
class 8Rnd_12Gauge_AA40_Pellets_Tan_lxWS;
class ACE_8Rnd_12Gauge_Pellets_No0_Buck_Tan : 8Rnd_12Gauge_AA40_Pellets_Tan_lxWS
{
ammo = "ACE_12Gauge_Pellets_Submunition_No0_Buck";
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd #0 Buckshot Tan Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 17.5432;
};
class ACE_8Rnd_12Gauge_Pellets_No1_Buck_Tan : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No1_Buck";   
displayName = "12GA 8Rnd #1 Buckshot Tan Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 18.8767;
};
class ACE_8Rnd_12Gauge_Pellets_No4_Bird_Tan : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Bird";
displayName = "12GA 8Rnd #4 Birdshot Tan Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 15.8892;
};
class ACE_8Rnd_12Gauge_Pellets_No4_Buck_Tan : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No4_Buck";
displayName = "12GA 8Rnd #4 Buckshot Tan Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 20.6370;
};
class ACE_8Rnd_12Gauge_Pellets_No000_Buck_Tan : ACE_8Rnd_12Gauge_Pellets_No0_Buck_Tan
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 8Rnd #000 Buckshot Tan Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 19.2104;
};

// Creating FN FAL Magazines with ACE Ammo. Plain Mags already defined in default Config for soft RFB Compat
// 20Rnd
// Desert
class 20Rnd_762x51_slr_desert_lxWS;
class ACE_20Rnd_762x51_M118LR_Mag_FAL_D_F : 20Rnd_762x51_slr_desert_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 20Rnd M118LR FAL Desert Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 17.0824;
};
class ACE_20Rnd_762x51_M993_Mag_FAL_D_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP FAL Desert Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 15.6789;
};
class ACE_20Rnd_762x51_Mk316_Mag_FAL_D_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 FAL Desert Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 16.4195;
};
class ACE_20Rnd_762x51_Mk319_Mag_FAL_D_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 FAL Desert Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 15.1338;
};
class ACE_20Rnd_762x51_SD_Mag_FAL_D_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD FAL Desert Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 17.1074;
};
// Snake
class 20Rnd_762x51_slr_Snake_lxWS;
class ACE_20Rnd_762x51_M118LR_Mag_FAL_S_F : 20Rnd_762x51_slr_Snake_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 20Rnd M118LR FAL Snake Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 17.0824;
};
class ACE_20Rnd_762x51_M993_Mag_FAL_S_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_S_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP FAL Snake Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 15.6789;
};
class ACE_20Rnd_762x51_Mk316_Mag_FAL_S_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_S_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 FAL Snake Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 16.4195;
};
class ACE_20Rnd_762x51_Mk319_Mag_FAL_S_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_S_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 FAL Snake Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 15.1338;
};
class ACE_20Rnd_762x51_SD_Mag_FAL_S_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_S_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD FAL Snake Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 17.1074;
};
// 30Rnd
// Plain
class 30Rnd_762x51_slr_lxWS;
class ACE_30Rnd_762x51_M118LR_Mag_FAL_F : 30Rnd_762x51_slr_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 30Rnd M118LR FAL Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 25.6500;
};
class ACE_30Rnd_762x51_M993_Mag_FAL_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 30Rnd M993 AP FAL Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 23.0425;
};
class ACE_30Rnd_762x51_Mk316_Mag_FAL_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 30Rnd Mk316 Mod 0 FAL Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 24.6557;
};
class ACE_30Rnd_762x51_Mk319_Mag_FAL_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 30Rnd Mk319 Mod 0 FAL Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 22.7271;
};
class ACE_30Rnd_762x51_SD_Mag_FAL_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 30Rnd SD FAL Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 25.6875;
};
// Desert
class 30Rnd_762x51_slr_desert_lxWS;
class ACE_30Rnd_762x51_M118LR_Mag_FAL_D_F : 30Rnd_762x51_slr_desert_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 30Rnd M118LR FAL Desert Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 25.6500;
};
class ACE_30Rnd_762x51_M993_Mag_FAL_D_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 30Rnd M993 AP FAL Desert Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 23.0425;
};
class ACE_30Rnd_762x51_Mk316_Mag_FAL_D_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 30Rnd Mk316 Mod 0 FAL Desert Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 24.6557;
};
class ACE_30Rnd_762x51_Mk319_Mag_FAL_D_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 30Rnd Mk319 Mod 0 FAL Desert Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 22.7271;
};
class ACE_30Rnd_762x51_SD_Mag_FAL_D_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_D_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 30Rnd SD FAL Desert Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 25.6875;
};
// Tan
class 30Rnd_762x51_slr_Tan_lxWS;
class ACE_30Rnd_762x51_M118LR_Mag_FAL_Tan_F : 30Rnd_762x51_slr_Tan_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 30Rnd M118LR FAL Tan Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 25.6500;
};
class ACE_30Rnd_762x51_M993_Mag_FAL_Tan_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_Tan_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 30Rnd M993 AP FAL Tan Mag";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 23.0425;
};
class ACE_30Rnd_762x51_Mk316_Mag_FAL_Tan_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_Tan_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 30Rnd Mk316 Mod 0 FAL Tan Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 24.6557;
};
class ACE_30Rnd_762x51_Mk319_Mag_FAL_Tan_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_Tan_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 30Rnd Mk319 Mod 0 FAL Tan Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 22.7271;
};
class ACE_30Rnd_762x51_SD_Mag_FAL_Tan_F : ACE_30Rnd_762x51_M118LR_Mag_FAL_Tan_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 30Rnd SD FAL Tan Mag";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 25.6875;
};

// Creating SS77 Mk1 100Rnd Pouches with ACE Ammo
class 100Rnd_762x51_S77_lxWS;
class ACE_100Rnd_762x51_M118LR_Mag_S77_F : 100Rnd_762x51_S77_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 50Rnd M118LR SS77 Pouch";
displayNameShort = "M118LR";
initSpeed = 786.384;
lastRoundsTracer = 0;
mass = 40.1450;
picture = "\lxWS\weapons_1_f_lxws\Machineguns\s77\data\ui\m_100Rnd_762x51_S77_Red_lxWS_CA.paa";
tracersEvery = 0;
};
class ACE_100Rnd_762x51_M993_Mag_S77_F : ACE_100Rnd_762x51_M118LR_Mag_S77_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 50Rnd M993 AP SS77 Pouch";
displayNameShort = "M993 AP";
initSpeed = 919.887;
mass = 35.7993;
};
class ACE_100Rnd_762x51_Mk316_Mag_S77_F : ACE_100Rnd_762x51_M118LR_Mag_S77_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 50Rnd Mk316 Mod 0 SS77 Pouch";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790.042;
mass = 38.4879;
};
class ACE_100Rnd_762x51_Mk319_Mag_S77_F : ACE_100Rnd_762x51_M118LR_Mag_S77_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 50Rnd Mk319 Mod 0 SS77 Pouch";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900.075;
mass = 35.2736;
};
class ACE_100Rnd_762x51_SD_Mag_S77_F : ACE_100Rnd_762x51_M118LR_Mag_S77_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 50Rnd SD SS77 Pouch";
displayNameShort = "SD";
initSpeed = 324.917;
mass = 40.2076;
};

// Creating Striped 30Rnd and 60Rnd Magazines with ACE Ammo
// M995
class 30Rnd_556x45_Stanag_green_NT_camo_lxWS;
class ACE_30Rnd_556x45_M995_stripes_Mag_F : 30Rnd_556x45_Stanag_green_NT_camo_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 30Rnd M995 AP Striped Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 13.5804;
};
// Mk262
class ACE_30Rnd_556x45_Mk262_stripes_Mag_F : ACE_30Rnd_556x45_M995_stripes_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 30Rnd Mk262 Mod 1 Striped Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 14.6279;
};
// Mk318
class ACE_30Rnd_556x45_Mk318_stripes_Mag_F : ACE_30Rnd_556x45_M995_stripes_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 30Rnd Mk318 Mod 0 Striped Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 13.9851;
};
// 60Rnd
// M995
class 60Rnd_556x45_Stanag_green_NT_camo_lxWS;
class ACE_60Rnd_556x45_M995_stripes_Mag_F : 60Rnd_556x45_Stanag_green_NT_camo_lxWS
{
ammo = "ACE_556x45_Ball_M995_AP"; 
displayName = "5.56x45 60Rnd M995 AP Striped Mag";
displayNameShort = "M995 AP";
initspeed = 1029.92;
mass = 22.9060;
};
// Mk262
class ACE_60Rnd_556x45_Mk262_stripes_Mag_F : ACE_60Rnd_556x45_M995_stripes_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 60Rnd Mk262 Mod 1 Striped Mag";
displayNameShort = "Mk262 Mod 1";
initSpeed = 862.584;
mass = 25.0010;
};
// Mk318
class ACE_60Rnd_556x45_Mk318_stripes_Mag_F : ACE_60Rnd_556x45_M995_stripes_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 60Rnd Mk318 Mod 0 Striped Mag";
displayNameShort = "Mk318 Mod 0";
initSpeed = 944.88;
mass = 23.7152;
};
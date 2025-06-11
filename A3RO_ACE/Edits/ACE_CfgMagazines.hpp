// Adding ACE Ammo to Magazines of new and existing Weapons for Uniformity

// Creating AK-308 7.62x51 Magazines
class ACE_20Rnd_762x51_AK_M118LR_Mag_F : 20Rnd_762x51_AK_Mag_NT_F
{
ammo = "ACE_762x51_Ball_M118LR";
author = "ACE-Team";
displayName = "7.62x51 20Rnd M118LR AK Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 16.0903;
};
class ACE_20Rnd_762x51_AK_M993_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP AK Mag";
displayNameShort = "M993 AP";
initSpeed = 920;
mass = 14.3520;
};
class ACE_20Rnd_762x51_AK_Mk316_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 AK Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790;
mass = 15.4275;
};
class ACE_20Rnd_762x51_AK_Mk319_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 AK Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900;
mass = 14.1417;
};
class ACE_20Rnd_762x51_AK_SD_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD AK Mag";
displayNameShort = "SD";
initSpeed = 325;
mass = 16.1154;
};

// Creating MG5 7.62x51 Magazines.
class ACE_120Rnd_762x51_M118LR_Mag_F : 150Rnd_93x64_Mag_NT
{
ammo = "ACE_762x51_Ball_M118LR";
author = "ACE-Team";
displayName = "7.62x51 120Rnd M118LR MG5 Box";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 91.6081;
};
class ACE_120Rnd_762x51_M993_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 120Rnd M993 AP MG5 Box";
displayNameShort = "M993 AP";
initSpeed = 920;
mass = 81.1784;
};
class ACE_120Rnd_762x51_Mk316_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 120Rnd Mk316 Mod 0 MG5 Box";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790;
mass = 87.6309;
};
class ACE_120Rnd_762x51_Mk319_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 120Rnd Mk319 Mod 0 MG5 Box";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900;
mass = 79.9167;
};
class ACE_120Rnd_762x51_SD_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 120Rnd SD MG5 Box";
displayNameShort = "SD";
initSpeed = 325;
mass = 91.7584;
};

// Creating MR308 7.62x51 Magazines
class ACE_20Rnd_762x51_M118LR_HK_Mag : 20Rnd_762x51_HK_Mag
{
ammo = "ACE_762x51_Ball_M118LR";
author = "ACE-Team";
displayName = "7.62x51 20Rnd M118LR HK Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 15.7155;
};
class ACE_20Rnd_762x51_M993_AP_HK_Mag : ACE_20Rnd_762x51_M118LR_HK_Mag
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP HK Mag";
displayNameShort = "M993 AP";
initSpeed = 920;
mass = 13.9773;
};
class ACE_20Rnd_762x51_Mk316_Mod_0_HK_Mag : ACE_20Rnd_762x51_M118LR_HK_Mag
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 HK Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790;
mass = 15.0527;
};
class ACE_20Rnd_762x51_Mk319_Mod_0_HK_Mag : ACE_20Rnd_762x51_M118LR_HK_Mag
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 HK Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900;
mass = 13.7670;
};
class ACE_20Rnd_762x51_SD_HK_Mag : ACE_20Rnd_762x51_M118LR_HK_Mag
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD HK Mag";
displayNameShort = "SD";
initSpeed = 325;
mass = 15.7406;
};

// Creating Negev NG-7 7.62x51 Magazines
class ACE_100Rnd_762x51_M118LR_Mag_F : 100Rnd_762x51_NG7_Box_NT
{
ammo = "ACE_762x51_Ball_M118LR";
author = "ACE-Team";
displayName = "7.62x51 100Rnd M118LR NG-7 Box";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 74.0901;
};
class ACE_100Rnd_762x51_M993_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 100Rnd M993 AP NG-7 Box";
displayNameShort = "M993 AP";
initSpeed = 920;
mass = 65.3987;
};
class ACE_100Rnd_762x51_Mk316_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 100Rnd Mk316 Mod 0 NG-7 Box";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790;
mass = 71.3476;
};
class ACE_100Rnd_762x51_Mk319_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 100Rnd Mk319 Mod 0 NG-7 Box";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900;
mass = 64.3472;
};
class ACE_100Rnd_762x51_SD_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 100Rnd SD NG-7 Box";
displayNameShort = "SD";
initSpeed = 325;
mass = 74.2153;
};

// AK-19 Magazines. Adding M995 AP, Mk262 and Mk318 Ammo.
// 30Rnd
// M995
class ACE_30Rnd_556x45_AK_M995_Mag_F : 30Rnd_556x45_AK_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
author = "ACE-Team";
displayName = "5.56x45 30Rnd M995 AP AK Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 11.6624;
};
// Mk262
class ACE_30Rnd_556x45_AK_Mk262_Mag_F : ACE_30Rnd_556x45_AK_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 30Rnd Mk262 Mod 1-C AK Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 12.7099;
};
// Mk318
class ACE_30Rnd_556x45_AK_Mk318_Mag_F : ACE_30Rnd_556x45_AK_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 30Rnd Mk318 Mod 0 AK Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 12.0670;
};
// 90Rnd
// Black
class ACE_90Rnd_556x45_AK_M995_Mag_F : 90Rnd_556x45_AK_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
author = "ACE-Team";
displayName = "5.56x45 90Rnd M995 AP AK Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 45.2146;
};
// Mk262
class ACE_90Rnd_556x45_AK_Mk262_Mag_F : ACE_90Rnd_556x45_AK_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 90Rnd Mk262 Mod 1-C AK Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 48.3571;
};
// Mk318
class ACE_90Rnd_556x45_AK_Mk318_Mag_F : ACE_90Rnd_556x45_AK_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 90Rnd Mk318 Mod 0 AK Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 46.4285;
};
// Green
class ACE_90Rnd_556x45_AK_M995_Green_Mag_F : 90Rnd_556x45_AK_Green_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
author = "ACE-Team";
displayName = "5.56x45 90Rnd M995 AP AK Green Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 45.2146;
};
// Mk262
class ACE_90Rnd_556x45_AK_Mk262_Green_Mag_F : ACE_90Rnd_556x45_AK_M995_Green_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 90Rnd Mk262 Mod 1-C AK Green Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 48.3571;
};
// Mk318
class ACE_90Rnd_556x45_AK_Mk318_Green_Mag_F : ACE_90Rnd_556x45_AK_M995_Green_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 90Rnd Mk318 Mod 0 AK Green Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 46.4285;
};

// Creating Sand 30Rnd Magazine Versions of 5.56 Stanag Magazines
class ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag : 30Rnd_556x45_Stanag_Sand_NT
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 30Rnd M995 AP Sand Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 13.5804;
};
class ACE_30Rnd_556x45_Stanag_Mk262_Sand_Mag : ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 30Rnd Mk262 Mod 1-C Sand Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 14.6279;
};
class ACE_30Rnd_556x45_Stanag_Mk318_Sand_Mag : ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 30Rnd Mk318 Mod 0 Sand Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 13.9851;
};

// Creating 100Rnd Magazine Versions of 5.56 Stanag Magazines
// Black
class ACE_100Rnd_556x45_M995_AP_Drum_Mag : 150Rnd_556x45_Drum_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 100Rnd M995 AP Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 45.0845;
};
class ACE_100Rnd_556x45_Mk262_Drum_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 100Rnd Mk262 Mod 1-C Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 48.5761;
};
class ACE_100Rnd_556x45_Mk318_Drum_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 100Rnd Mk318 Mod 0 Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 46.4333;
};
// Green
class ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag : 150Rnd_556x45_Drum_Green_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 100Rnd M995 AP Green Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 45.0845;
};
class ACE_100Rnd_556x45_Mk262_Drum_Green_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 100Rnd Mk262 Mod 1-C Green Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 48.5761;
};
class ACE_100Rnd_556x45_Mk318_Drum_Green_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 100Rnd Mk318 Mod 0 Green Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 46.4333;
};
// Sand
class ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag : 150Rnd_556x45_Drum_Sand_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 100Rnd M995 AP Sand Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 45.0845;
};
class ACE_100Rnd_556x45_Mk262_Drum_Sand_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 100Rnd Mk262 Mod 1-C Sand Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 48.5761;
};
class ACE_100Rnd_556x45_Mk318_Drum_Sand_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 100Rnd Mk318 Mod 0 Sand Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 46.4333;
};

// Creating 30Rnd PMAG Magazine Versions of 5.56 Stanag Magazines
class ACE_30Rnd_556x45_PMAG_M995_AP_Mag : 30Rnd_65x39_caseless_msbs_mag_NT
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 30Rnd M995 AP PMAG Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 11.2215;
};
class ACE_30Rnd_556x45_PMAG_Mk262_Mag : ACE_30Rnd_556x45_PMAG_M995_AP_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 30Rnd Mk262 Mod 1-C PMAG Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 12.2690;
};
class ACE_30Rnd_556x45_PMAG_Mk318_Mag : ACE_30Rnd_556x45_PMAG_M995_AP_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 30Rnd Mk318 Mod 0 PMAG Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 11.6261;
};

// Creating KBU 10Rnd Magazines of ACE Ammo
class ACE_10Rnd_556x45_KBU_M995_AP_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 10Rnd M995 AP KBU Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 5.6438;
};
class ACE_10Rnd_556x45_KBU_Mk262_Mag_F : ACE_10Rnd_556x45_KBU_M995_AP_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 10Rnd Mk262 Mod 1-C KBU Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 5.9929;
};
class ACE_10Rnd_556x45_KBU_Mk318_Mag_F : ACE_10Rnd_556x45_KBU_M995_AP_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 10Rnd Mk318 Mod 0 KBU Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 5.7787;
};

// Creating 30Rnd KH-2002 Magazines of ACE Ammo
class ACE_30Rnd_556x45_Katiba_M995_Mag_F : 20Rnd_556x45_Katiba_NT_Mag
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 20Rnd M995 AP KH-2002 Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 7.8264;
};
class ACE_30Rnd_556x45_Katiba_Mk262_Mag : ACE_30Rnd_556x45_Katiba_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 20Rnd Mk262 Mod 1-C KH-2002 Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 8.5247;
};
class ACE_30Rnd_556x45_Katiba_Mk318_Mag : ACE_30Rnd_556x45_Katiba_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 20Rnd Mk318 Mod 0 KH-2002 Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 8.0961;
};

// Creating 200Rnd Boxes of ACE Ammo
class ACE_200Rnd_556x45_M995_Box_F : 200Rnd_556x45_Box_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 200Rnd M995 AP Box";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 72.4166;
};
class ACE_200Rnd_556x45_Mk262_Box_F : ACE_200Rnd_556x45_M995_Box_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 200Rnd Mk262 Mod 1-C Box";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 79.3999;
};
class ACE_200Rnd_556x45_Mk318_Box_F : ACE_200Rnd_556x45_M995_Box_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 200Rnd Mk318 Mod 0 Box";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 75.1142;
};

// Creating 30Rnd QBZ Magazines of ACE Ammo
class ACE_30Rnd_556x45_QBZ_M995_Mag_F : 30Rnd_556x45_NT_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 30Rnd M995 AP QBZ Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 11.5963;
};
class ACE_30Rnd_556x45_QBZ_Mk262_Mag_F : ACE_30Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 30Rnd Mk262 Mod 1-C QBZ Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 12.6438;
};
class ACE_30Rnd_556x45_QBZ_Mk318_Mag_F : ACE_30Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 30Rnd Mk318 Mod 0 QBZ Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 12.0009;
};

// Creating 75Rnd QBZ Drum Magazines of ACE Ammo
// Black
class ACE_75Rnd_556x45_QBZ_M995_Mag_F : 75Rnd_556x45_NT_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 75Rnd M995 AP Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 41.8455;
};
class ACE_75Rnd_556x45_QBZ_Mk262_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 75Rnd Mk262 Mod 1-C Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 44.4642;
};
class ACE_75Rnd_556x45_QBZ_Mk318_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 75Rnd Mk318 Mod 0 Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 42.8571;
};
// Hex
class ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F : 75Rnd_556x45_NT_Hex_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 75Rnd M995 AP Hex Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 41.8455;
};
class ACE_75Rnd_556x45_QBZ_Mk262_Hex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 75Rnd Mk262 Mod 1-C Hex Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 44.4642;
};
class ACE_75Rnd_556x45_QBZ_Mk318_Hex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 75Rnd Mk318 Mod 0 Hex Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 42.8571;
};
// Green Hex
class ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F : 75Rnd_556x45_NT_Ghex_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 75Rnd M995 AP Green Hex Mag";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 41.8455;
};
class ACE_75Rnd_556x45_QBZ_Mk262_GHex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 75Rnd Mk262 Mod 1-C Green Hex Mag";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 44.4642;
};
class ACE_75Rnd_556x45_QBZ_Mk318_GHex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 75Rnd Mk318 Mod 0 Green Hex Mag";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 42.8571;
};

// Creating Stoner 96 Boxes of ACE Ammo
class ACE_200Rnd_556x45_M995_Stoner_Box : 200Rnd_65x39_cased_Box_NT
{
ammo = "ACE_556x45_Ball_M995_AP"; 
author = "ACE-Team";
displayName = "5.56x45 100Rnd M995 AP Stoner 96 Box";
displayNameShort = "M995 AP";
initspeed = 1030;
mass = 34.2033;
};
class ACE_200Rnd_556x45_Mk262_Stoner_Box : ACE_200Rnd_556x45_M995_Stoner_Box
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56x45 100Rnd Mk262 Mod 1-C Stoner 96 Box";
displayNameShort = "Mk262";
initSpeed = 862.584;
mass = 33.2857;
};
class ACE_200Rnd_556x45_Mk318_Stoner_Box : ACE_200Rnd_556x45_M995_Stoner_Box
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56x45 100Rnd Mk318 Mod 0 Stoner 96 Box";
displayNameShort = "Mk318";
initSpeed = 944.88;
mass = 34.4092;
};

// Changing Description and Name of ACE Magazines I keep
class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 20<br />Tracers: None<br />Used in: ?";
displayName = ".300 WM 20Rnd Berger Hybrid OTM Mag";
displayNameShort = "BH OTM";
initSpeed = 867.7656;
};
class ACE_10Rnd_762x67_Berger_Hybrid_OTM_Mag : ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Berger Hybrid OTM Mag";
displayNameShort = "BH OTM";
mass = 14.3785;
};
class ACE_20Rnd_762x67_Mk248_Mod_0_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 20<br />Tracers: None<br />Used in: ?";
displayName = ".300 WM 20Rnd Mk248 Mod 0 Mag";
displayNameShort = "Mk248 Mod 0";
initSpeed = 883.92;
};
class ACE_10Rnd_762x67_Mk248_Mod_0_Mag : ACE_20Rnd_762x67_Mk248_Mod_0_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Mk248 Mod 0 Mag";
displayNameShort = "Mk248 Mod 0";
mass = 13.8071;
};
class ACE_20Rnd_762x67_Mk248_Mod_1_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 20<br />Tracers: None<br />Used in: ?";
displayName = ".300 WM 20Rnd Mk248 Mod 1 Mag";
displayNameShort = "Mk248 Mod 1";
initSpeed = 868.68;
};
class ACE_10Rnd_762x67_Mk248_Mod_1_Mag : ACE_20Rnd_762x67_Mk248_Mod_1_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Mk248 Mod 1 Mag";
displayNameShort = "Mk248 Mod 1";
mass = 14.2356;
};
class ACE_10Rnd_338_300gr_HPBT_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Tracers: None<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
displayName = ".338 LM 10Rnd Lapua Scenar OTM Mag";
displayNameShort = "LS OTM";
initSpeed = 819.912;
mass = 14.7779;
};
class ACE_10Rnd_338_API526_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
displayName = ".338 LM 10Rnd API526 Mag";
displayNameShort = "API526";
initSpeed = 894.8928;
mass = 14.1065;
};

// ACE Shotgun Ammo Mags. Changing: Name. Description. Initspeed. Pellet Count
class ACE_2Rnd_12Gauge_Pellets_No0_Buck : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd #0 Buckshot";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 2.0103;
};
class ACE_2Rnd_12Gauge_Pellets_No1_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd #1 Buckshot";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 2.3437;
};
class ACE_2Rnd_12Gauge_Pellets_No4_Bird : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd #4 Birdshot";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 1.5968;
};
class ACE_2Rnd_12Gauge_Pellets_No4_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd #4 Buckshot";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 2.7837;
};
class ACE_6Rnd_12Gauge_Pellets_No0_Buck : 6Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #0 Buckshot Mag";
displayNameShort = "#0 Buck";
initSpeed = 388.62;
mass = 12.0936;
};
class ACE_6Rnd_12Gauge_Pellets_No1_Buck : ACE_6Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #1 Buckshot Mag";
displayNameShort = "#1 Buck";
initSpeed = 403.86;
mass = 13.0938;
};
class ACE_6Rnd_12Gauge_Pellets_No4_Bird : ACE_6Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #4 Birdshot Mag";
displayNameShort = "#4 Bird";
initSpeed = 405.384;
mass = 10.8532;
};
class ACE_6Rnd_12Gauge_Pellets_No4_Buck : ACE_6Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #4 Buckshot Mag";
displayNameShort = "#4 Buck";
initSpeed = 335.28;
mass = 14.4140;
};

// Hiding #2 and #3 Buckshot because I will make 000 instead as that is actually for sale.
class ACE_2Rnd_12Gauge_Pellets_No2_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
displayName = "12GA 2Rnd #2 Buckshot";
displayNameShort = "#2 Buck";
scope = 1;
};
class ACE_6Rnd_12Gauge_Pellets_No2_Buck : ACE_6Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #2 Buckshot Mag";
displayNameShort = "#2 Buck";
scope = 1;
};
class ACE_2Rnd_12Gauge_Pellets_No3_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";   
displayName = "12GA 2Rnd #3 Buckshot";
displayNameShort = "#3 Buck";
scope = 1;
};
class ACE_6Rnd_12Gauge_Pellets_No3_Buck : ACE_6Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Used in: SIX12";
displayName = "12GA 6Rnd #3 Buckshot Mag";
displayNameShort = "#3 Buck";
scope = 1;
};

// Creating ACE Magazines with #000 Buck
class ACE_2Rnd_12Gauge_Pellets_No000_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
ammo = "ACE_12Gauge_Pellets_Submunition_No000_Buck";
displayName = "12GA 2Rnd #000 Buckshot";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 2.4271;
};
class ACE_6Rnd_12Gauge_Pellets_No000_Buck : ACE_6Rnd_12Gauge_Pellets_No0_Buck
{
displayName = "12GA 6Rnd #000 Buckshot Mag";
displayNameShort = "#000 Buck";
initSpeed = 373.38;
mass = 13.3440;
};

class ACE_30Rnd_556x45_Stanag_M995_AP_mag : 30Rnd_556x45_Stanag_NT
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd M995 AP Mag";
displayNameShort = "M995 AP";
mass = 13.5804;
};
class ACE_30Rnd_556x45_Stanag_Mk262_mag : 30Rnd_556x45_Stanag_NT
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Mk262 Mod 1-C Mag";
displayNameShort = "Mk262";
mass = 14.6279;
};
class ACE_30Rnd_556x45_Stanag_Mk318_mag : 30Rnd_556x45_Stanag_NT
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Mk318 Mod 0 Mag";
displayNameShort = "Mk318";
mass = 13.9851;
};
class ACE_10Rnd_762x51_M118LR_Mag : 10Rnd_Mk14_762x51_Mag
{
count = 5;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd M118LR Mag";
displayNameShort = "M118LR";
mass = 5.6264;
};
class ACE_10Rnd_762x51_M993_AP_Mag : 10Rnd_Mk14_762x51_Mag
{
count = 5;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd M993 AP Mag";
displayNameShort = "M993 AP";
mass = 5.2755;
};
class ACE_10Rnd_762x51_Mk316_Mod_0_Mag : 10Rnd_Mk14_762x51_Mag
{
count = 5;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd Mk316 Mod 0 Mag";
displayNameShort = "Mk316 Mod 0";
mass = 5.4607;
};
class ACE_10Rnd_762x51_Mk319_Mod_0_Mag : 10Rnd_Mk14_762x51_Mag
{
count = 5;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd Mk319 Mod 0 Mag";
displayNameShort = "Mk319 Mod 0";
mass = 5.1393;
};
class ACE_10Rnd_762x51_Mag_SD : 10Rnd_Mk14_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd SD Mag";
displayNameShort = "SD";
mass = 5.6327;
};
class ACE_20Rnd_762x51_M118LR_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd M118LR Mag";
displayNameShort = "M118LR";
mass = 17.50132542;
};
class ACE_20Rnd_762x51_M993_AP_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd M993 AP Mag";
displayNameShort = "M993 AP";
mass = 16.0977;
};
class ACE_20Rnd_762x51_Mk316_Mod_0_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Mk316 Mod 0 Mag";
displayNameShort = "Mk316 Mod 0";
mass = 16.8384;
};
class ACE_20Rnd_762x51_Mk319_Mod_0_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Mk319 Mod 0 Mag";
displayNameShort = "Mk319 Mod 0";
mass = 15.5527;
};
class ACE_20Rnd_762x51_Mag_SD : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd SD Mag";
displayNameShort = "SD";
mass = 17.5263;
};

// Creating 20Rnd FN FAL Magazines with ACE Ammo for RFB
class ACE_20Rnd_762x51_M118LR_Mag_FAL_F : 20Rnd_762x51_slr_lxWS
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62x51 20Rnd M118LR FAL Mag";
displayNameShort = "M118LR";
initSpeed = 786.384;
mass = 17.0824;
};
class ACE_20Rnd_762x51_M993_Mag_FAL_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62x51 20Rnd M993 AP FAL Mag";
displayNameShort = "M993 AP";
initSpeed = 920;
mass = 15.6789;
};
class ACE_20Rnd_762x51_Mk316_Mag_FAL_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62x51 20Rnd Mk316 Mod 0 FAL Mag";
displayNameShort = "Mk316 Mod 0";
initSpeed = 790;
mass = 16.4195;
};
class ACE_20Rnd_762x51_Mk319_Mag_FAL_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62x51 20Rnd Mk319 Mod 0 FAL Mag";
displayNameShort = "Mk319 Mod 0";
initSpeed = 900;
mass = 15.1338;
};
class ACE_20Rnd_762x51_SD_Mag_FAL_F : ACE_20Rnd_762x51_M118LR_Mag_FAL_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62x51 20Rnd SD FAL Mag";
displayNameShort = "SD";
initSpeed = 325;
mass = 17.1074;
};

class ACE_7Rnd_408_305gr_Mag : 7Rnd_408_Mag
{
descriptionShort = "Calibre: .408 Cheyenne Tactical<br />Rounds: 7<br />Tracers: None<br />Used in: M200 Intervention® .408";
displayName = ".408 7Rnd 305 Gr Mag";
displayNameShort = "305 Gr";
initSpeed = 1067;
mass = 20.2800;
};

class ACE_10Rnd_580x42_DBP88_Mag : 20Rnd_650x39_Cased_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 10<br />Tracers: None<br />Used in: QBU-88";
displayName = "5.8x42 10Rnd DBP88 Mag";
displayNameShort = "DBP88";
mass = 5.9941;
};

class ACE_5Rnd_127x99_API_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 5Rnd API Mag";
displayNameShort = "API";
picture = "\A3RO_Vanilla\Textures\UI\icon_5Rnd_127x108_NT_Ball_CA.paa";
mass = 27.6575;
};
class ACE_5Rnd_127x99_AMAX_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Tracers: None<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 5Rnd AMAX Mag";
displayNameShort = "AMAX";
mass = 27.9525;
};

// Reducing Magazine Weight to 0 as with the ACE Single-Use System I can put it all in the Launcher.
class CA_LauncherMagazine;
class NLAW_F : CA_LauncherMagazine
{
mass = 0;
scope = 1; // Needn't be available
};

// Hiding ACE Magazine thats not used anywhere (anymore)
class ACE_16Rnd_9x19_mag : 16Rnd_9x21_Mag
{
scope = 1;
};

// Adjusting ACE UGL Grenades
class ACE_HuntIR_M203 : 1Rnd_HE_Grenade_shell
{
author = "ACE-Team";
descriptionShort = "Type: High-altitude Unit Navigated Tactical Imaging Round<br />Rounds: 1<br />Transmission Time: Up to 7 Minutes<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 HUNTIR Grenade";
displayNameShort = "HUNTIR";
initSpeed = 106;
mass = 1.874;
};

class ACE_40mm_Pike : 1Rnd_HE_Grenade_shell
{
descriptionShort = "Type: Precision-Guided Munition<br />Rounds: 1<br />Arming Range: 10 Meters<br />Maximum Range: 2000 Meters<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x43 Pike™ Munition";
displayNameShort = "Pike™";
initSpeed = 60; // Good Question. It IS 3 times as heavy as a regular Grenade. Using a Slope function of the Vel/Mass of M1006 and M441 Grenades, at 1.7lb it is this
mass = 17;
};

// Hiding ACE Flares as ACE Vakues have been applied to Vanilla Ammo
class ACE_40mm_Flare_white : UGL_FlareWhite_F
{
scope = 1;
};
class UGL_FlareGreen_F;
class ACE_40mm_Flare_green : UGL_FlareGreen_F
{
scope = 1;
};
class UGL_FlareRed_F;
class ACE_40mm_Flare_red : UGL_FlareRed_F
{
scope = 1;
};
class ACE_40mm_Flare_ir : UGL_FlareWhite_F
{
scope = 1;
};

// Launcher Magazines
class ace_dragon_super : 1Rnd_GAA_missiles
{
author = "ACE-Team";
descriptionShort = "Wire-Guided HEAT Missile<br />Rounds: 1<br />Used in: M47 Dragon II";
displayName = "M222 HEAT";
displayNameShort = "HEAT Missile";
initSpeed = 75;
mass = 0;
scope = 1;
};

/*class MRAWS_HEAT_F : CA_LauncherMagazine
{
initSpeed = 210; // M3 Manual
};
class MRAWS_HEAT55_F : MRAWS_HEAT_F
{
initSpeed = 254;
};
class MRAWS_HE_F : MRAWS_HEAT_F
{
initSpeed = 240;
};*/

// Changing Ammo in Titan AT back to Titan Missile from Javelin.
class Titan_AT : Titan_AA
{
ammo = "M_Titan_AT";
};
// No SACLOS
class Titan_AP : Titan_AA
{
descriptionShort = "Type: Fire-And-Forget Anti-Personnel Missile<br />Rounds: 1<br />Arming Range: 50 Meters<br />Effective Range: 200 - 1200 Meters<br />Maximum Range: 1500 Meters<br />Used in: Mini-Spike";	
};

// Adjusting Stinger
class ace_missile_manpad_stinger_man : Titan_AA // FIM-92F
{
descriptionShort = "Type: Infrared Homing Anti-Air Missile<br />Rounds: 1<br />Arming Range: 80 Meters<br />Minimum Range: 161 Meters<br />Maximum Range: 4800 Meters<br />Used in: FIM-92 Stinger";
displayName = "FIM-92F";
displaynameshort = "HE-FRAG";
mass = 222.6669;
};

// New UGL Grenades
// 3GL HUNTIR
class 3Rnd_ACE_HuntIR_3GL : ACE_HuntIR_M203
{
count = 3;
descriptionShort = "Type: High-altitude Unit Navigated Tactical Imaging Round<br />Rounds: 3<br />Transmission Time: Up to 7 Minutes<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL HUNTIR Grenade";
mass = 5.622;
picture = "\A3RO_Vanilla\Textures\UI\gear_3GL_HUNTIR_CA.paa";
};
class 2Rnd_ACE_HuntIR_3GL : 3Rnd_ACE_HuntIR_3GL
{
count = 2;
descriptionShort = "Type: High-altitude Unit Navigated Tactical Imaging Round<br />Rounds: 2<br />Transmission Time: Up to 7 Minutes<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL HUNTIR Grenade";
mass = 3.748;
};
class 1Rnd_ACE_HuntIR_3GL : 3Rnd_ACE_HuntIR_3GL
{
count = 1;
descriptionShort = "Type: High-altitude Unit Navigated Tactical Imaging Round<br />Rounds: 1<br />Transmission Time: Up to 7 Minutes<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL HUNTIR Grenade";
mass = 1.874;
};

//class 1Rnd_GP25_VOG25M_Grenade;
/*class 1Rnd_GP25_RLV_SnF_Grenade : 1Rnd_GP25_VOG25M_Grenade
{
ammo = "G_40mm_GP25_RLV_SnF";
descriptionShort = "Type: Flashbang<br />Rounds: 1<br />Arming Range: 10 to 40 Meters<br />Maximum Airtime: 14 to 19 Seconds<br />Used in: GP-25";
displayName = "40x107 RLV S&F Grenade";
displayNameShort = "Flashbang";
mass = 5.99657;
};*/

// Hiding ACE Magazines that no longer apply to any weapon or have been replaced by my own
class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim : 100Rnd_65x39_caseless_mag_Tracer
{
scope = 1;
};
class ACE_200Rnd_65x39_cased_Box_Tracer_Dim : 200Rnd_65x39_cased_Box
{
scope = 1;
};
class ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim : 30Rnd_65x39_caseless_green_mag_Tracer
{
scope = 1;
};
class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim : 30Rnd_65x39_caseless_mag_Tracer
{
scope = 1;
};
class ACE_20Rnd_65_Creedmor_mag : 20Rnd_650x39_Cased_Mag_F
{
scope = 1;
};
class ACE_30Rnd_65_Creedmor_black_mag : 30Rnd_65x39_caseless_black_mag
{
scope = 1;
};
class ACE_30Rnd_65_Creedmor_khaki_mag : 30Rnd_65x39_caseless_khaki_mag
{
scope = 1;
};
class ACE_30Rnd_65_Creedmor_msbs_mag : 30Rnd_65x39_caseless_msbs_mag
{
scope = 1;
};
class ACE_30Rnd_65_Creedmor_mag : 30Rnd_65x39_caseless_mag
{
scope = 1;
};
class ACE_20Rnd_65x47_Scenar_mag : 20Rnd_650x39_Cased_Mag_F
{
scope = 1;
};
class ACE_30Rnd_65x47_Scenar_black_mag : 30Rnd_65x39_caseless_black_mag
{
scope = 1;
};
class ACE_30Rnd_65x47_Scenar_khaki_mag : 30Rnd_65x39_caseless_khaki_mag
{
scope = 1;
};
class ACE_30Rnd_65x47_Scenar_msbs_mag : 30Rnd_65x39_caseless_msbs_mag
{
scope = 1;
};
class ACE_30Rnd_65x47_Scenar_mag : 30Rnd_65x39_caseless_mag
{
scope = 1;
};
class ACE_10Rnd_762x51_Mag_Tracer : 10Rnd_Mk14_762x51_Mag
{
scope = 1;
};
class ACE_10Rnd_762x51_Mag_Tracer_Dim : ACE_10Rnd_762x51_Mag_Tracer
{
scope = 1;
};
class ACE_20Rnd_762x51_Mag_Tracer : 20Rnd_762x51_Mag
{
scope = 1;
};
class ACE_20Rnd_762x51_Mag_Tracer_Dim : ACE_20Rnd_762x51_Mag_Tracer
{
scope = 1;
};
class ACE_10Rnd_762x54_Tracer_mag : 10Rnd_762x54_Mag
{
scope = 1;
};

// Editing CSW Magazines
class ace_csw_50Rnd_127x108_mag : 50Rnd_127x108_Ball
{
displayName = "[CSW] 12.7x108 50Rnd Tracer Every 4 (Green) Belt";
descriptionShort = "Calibre: 12.7x108mm<br />Rounds: 50<br />Tracers: Every 4th Round<br />Used in: Kord 6P50";
displayNameShort = "Tr. 1 In 4 (Green)";
initSpeed = 860;
mass = 171.7401; // 50Rnds + Belt Links
};
class ace_csw_100Rnd_127x99_mag : 100Rnd_127x99_mag
{
displayName = "[CSW] 12.7x99 100Rnd Belt";
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 100<br />Tracers: None<br />Used in: M2/HB/A1";
displayNameShort = "";
mass = 289.1928; // 100Rnds + Belt Links
};
class ace_csw_100Rnd_127x99_mag_green : 100Rnd_127x99_mag_Tracer_Green
{
displayName = "[CSW] 12.7x99 100Rnd Tracer Every 4 (Green) Belt";
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: M2/HB/A1";
displayNameShort = "Tr. 1 In 4 (Green)";
mass = 289.1928;
};
class ace_csw_100Rnd_127x99_mag_red : 100Rnd_127x99_mag_Tracer_Red
{
displayName = "[CSW] 12.7x99 100Rnd Tracer Every 4 (Red) Belt";
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: M2/HB/A1";
displayNameShort = "Tr. 1 In 4 (Red)";
mass = 289.1928;
};
class ace_csw_100Rnd_127x99_mag_yellow : 100Rnd_127x99_mag_Tracer_Yellow
{
displayName = "[CSW] 12.7x99 100Rnd Tracer Every 4 (Yellow) Belt";
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: M2/HB/A1";
displayNameShort = "Tr. 1 In 4 (Yellow)";
mass = 289.1928;
};
// Changing to 25mm as its for the XM307 which uses just that
class ace_csw_20Rnd_20mm_G_belt : 40Rnd_20mm_G_belt
{
descriptionShort = "Calibre: 25x59mm HV<br />Rounds: 40<br />Tracers: None<br />Used in: XM307";
displayName = "[CSW] 25x59 40Rnd XM307 Belt";
displayNameShort = "High Explosive";
mass = 182.3135;
};

class ACE_1Rnd_82mm_Mo_HE_Guided : 8Rnd_82mm_Mo_guided
{
descriptionShort = "Calibre: 82mm<br />Type: GPS Guided High Explosive<br />Used in: Mk6 Mortar";
displayNameShort = "GPS HE";
mass = 102.2; // Based off of 81mm Ammo. M821A1 + +1lb Guidance Equipment idk
};
class ACE_1Rnd_82mm_Mo_HE : 8Rnd_82mm_Mo_LG
{
descriptionShort = "Calibre: 82mm<br />Type: High Explosive<br />Used in: Mk6 Mortar";
displayNameShort = "High Explosive";
mass = 92.2;
};
class ACE_1Rnd_82mm_Mo_Illum : 8Rnd_82mm_Mo_Flare_white
{
descriptionShort = "Calibre: 82mm<br />Type: Illumination<br />Used in: Mk6 Mortar";
displayNameShort = "Illumination";
mass = 101; // M301A3
};
class ACE_1Rnd_82mm_Mo_HE_LaserGuided : 8Rnd_82mm_Mo_LG
{
descriptionShort = "Calibre: 82mm<br />Type: Laser Guided High Explosive<br />Used in: Mk6 Mortar";
displayNameShort = "Laser HE";
mass = 102.2;
};
class ACE_1Rnd_82mm_Mo_Smoke : 8Rnd_82mm_Mo_Smoke_white
{
descriptionShort = "Calibre: 82mm<br />Type: Smoke Screen<br />Used in: Mk6 Mortar";
displayNameShort = "Smoke";
mass = 93.4; // M375A2
};

// Adding Belt Function where missing
class 100Rnd_65x39_caseless_mag;
class 200Rnd_65x39_cased_Box_Red : 100Rnd_65x39_caseless_mag
{
ACE_isBelt = 1;
};
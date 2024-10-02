// Adding ACE Ammo to Magazines of new and existing Weapons for Uniformity

// Creating AK-308 7.62x51 Magazines
class 20Rnd_762x51_Mag;
class ACE_20Rnd_762x51_AK_M118LR_Mag_F : 20Rnd_762x51_Mag
{
ammo = "ACE_762x51_Ball_M118LR";
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Used in: AK-308";
displayName = "7.62 mm 20Rnd M118LR AK Mag";
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
initSpeed = 780;
};
class ACE_20Rnd_762x51_AK_M993_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62 mm 20Rnd M993 AP AK Mag";
initSpeed = 920;
};
class ACE_20Rnd_762x51_AK_Mk316_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62 mm 20Rnd Mk316 Mod 0 AK Mag";
initSpeed = 790;
};
class ACE_20Rnd_762x51_AK_Mk319_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62 mm 20Rnd Mk319 Mod 0 AK Mag";
initSpeed = 900;
};
class ACE_20Rnd_762x51_AK_SD_Mag_F : ACE_20Rnd_762x51_AK_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62 mm 20Rnd SD AK Mag";
initSpeed = 330;
};


// Creating MG5 7.62x51 Magazines.
class 150Rnd_93x64_Mag_NT;
class ACE_120Rnd_762x51_M118LR_Mag_F : 150Rnd_93x64_Mag_NT
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62 mm 120Rnd M118LR MG5 Belt";
initSpeed = 780;
};
class ACE_120Rnd_762x51_M993_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62 mm 120Rnd M993 AP MG5 Belt";
initSpeed = 920;
};
class ACE_120Rnd_762x51_Mk316_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62 mm 120Rnd Mk316 Mod 0 MG5 Belt";
initSpeed = 790;
};
class ACE_120Rnd_762x51_Mk319_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62 mm 120Rnd Mk319 Mod 0 MG5 Belt";
initSpeed = 900;
};
class ACE_120Rnd_762x51_SD_Mag_F : ACE_120Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62 mm 120Rnd SD MG5 Belt";
initSpeed = 330;
};

// Creating Negev NG-7 7.62x51 Magazines
class 150Rnd_762x54_Box_NT;
class ACE_100Rnd_762x51_M118LR_Mag_F : 150Rnd_762x54_Box_NT
{
ammo = "ACE_762x51_Ball_M118LR";
displayName = "7.62 mm 100Rnd M118LR NG-7 Belt";
initSpeed = 780;
};
class ACE_100Rnd_762x51_M993_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_M993_AP";
displayName = "7.62 mm 100Rnd M993 AP NG-7 Belt";
initSpeed = 920;
};
class ACE_100Rnd_762x51_Mk316_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk316_Mod_0";
displayName = "7.62 mm 100Rnd Mk316 Mod 0 NG-7 Belt";
initSpeed = 790;
};
class ACE_100Rnd_762x51_Mk319_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Mk319_Mod_0";
displayName = "7.62 mm 100Rnd Mk319 Mod 0 NG-7 Belt";
initSpeed = 900;
};
class ACE_100Rnd_762x51_SD_Mag_F : ACE_100Rnd_762x51_M118LR_Mag_F
{
ammo = "ACE_762x51_Ball_Subsonic";
displayName = "7.62 mm 100Rnd SD NG-7 Belt";
initSpeed = 330;
};

// AK-19 Magazines. Adding M995 AP, Mk262 and Mk318 Ammo.
// M995
class 30Rnd_556x45_AK_Mag_NT_F;
class ACE_30Rnd_556x45_AK_M995_Mag_F : 30Rnd_556x45_AK_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP"; 
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK-19, WASR-3";
displayName = "5.56 mm 30Rnd M995 AP AK Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\magazine_ak19_co.paa"};
modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
picture = "\A3RO_Vanilla\Textures\icon_30Rnd_556x45_AK_Mag_F_ca";
initSpeed = 875;
};
// Mk262
class ACE_30Rnd_556x45_AK_Mk262_Mag_F : ACE_30Rnd_556x45_AK_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK-19, WASR-3";
displayName = "5.56 mm 30Rnd Mk262 AK Mag";
initSpeed = 832;
};
// Mk318
class ACE_30Rnd_556x45_AK_Mk318_Mag_F : ACE_30Rnd_556x45_AK_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK-19, WASR-3";
displayName = "5.56 mm 30Rnd Mk318 AK Mag";
initSpeed = 923;
};

// Creating Sand 30Rnd Magazine Versions of 5.56 Stanag Magazines
class 30Rnd_556x45_Stanag_Sand_NT;
class ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag : 30Rnd_556x45_Stanag_Sand_NT
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 30Rnd M995 AP Sand Mag";
initSpeed = 875;
};
class ACE_30Rnd_556x45_Stanag_Mk262_Sand_Mag : ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 30Rnd Mk262 Sand Mag";
initSpeed = 832;
};
class ACE_30Rnd_556x45_Stanag_Mk318_Sand_Mag : ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 30Rnd Mk318 Sand Mag";
initSpeed = 923;
};

// Creating 100Rnd Magazine Versions of 5.56 Stanag Magazines
// Black
class 150Rnd_556x45_Drum_Mag_NT_F;
class ACE_100Rnd_556x45_M995_AP_Drum_Mag : 150Rnd_556x45_Drum_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 100Rnd M995 AP Mag";
initSpeed = 875;
};
class ACE_100Rnd_556x45_Mk262_Drum_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 100Rnd Mk262 Mag";
initSpeed = 832;
};
class ACE_100Rnd_556x45_Mk318_Drum_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 100Rnd Mk318 Mag";
initSpeed = 923;
};
// Green
class 150Rnd_556x45_Drum_Green_Mag_NT_F;
class ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag : 150Rnd_556x45_Drum_Green_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 100Rnd M995 AP Green Mag";
initSpeed = 875;
};
class ACE_100Rnd_556x45_Mk262_Drum_Green_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 100Rnd Mk262 Green Mag";
initSpeed = 832;
};
class ACE_100Rnd_556x45_Mk318_Drum_Green_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 100Rnd Mk318 Green Mag";
initSpeed = 923;
};
// Sand
class 150Rnd_556x45_Drum_Sand_Mag_NT_F;
class ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag : 150Rnd_556x45_Drum_Sand_Mag_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 100Rnd M995 AP Sand Mag";
initSpeed = 875;
};
class ACE_100Rnd_556x45_Mk262_Drum_Sand_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 100Rnd Mk262 Sand Mag";
initSpeed = 832;
};
class ACE_100Rnd_556x45_Mk318_Drum_Sand_Mag : ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 100Rnd Mk318 Sand Mag";
initSpeed = 923;
};

// Creating 30Rnd PMAG Magazine Versions of 5.56 Stanag Magazines
class 30Rnd_65x39_caseless_msbs_mag_NT;
class ACE_30Rnd_556x45_PMAG_M995_AP_Mag : 30Rnd_65x39_caseless_msbs_mag_NT
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 30Rnd M995 AP PMAG Mag";
initSpeed = 875;
};
class ACE_30Rnd_556x45_PMAG_Mk262_Mag : ACE_30Rnd_556x45_PMAG_M995_AP_Mag
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 30Rnd Mk262 PMAG Mag";
initSpeed = 832;
};
class ACE_30Rnd_556x45_PMAG_Mk318_Mag : ACE_30Rnd_556x45_PMAG_M995_AP_Mag
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 30Rnd Mk318 PMAG Mag";
initSpeed = 923;
};

// Creating KBU 10Rnd Magazines of ACE Ammo
class 10Rnd_556x45_KBU_NT_Mag_F;
class ACE_10Rnd_556x45_KBU_M995_AP_Mag_F : 10Rnd_556x45_KBU_NT_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 10Rnd M995 AP KBU Mag";
initSpeed = 875;
};
class ACE_10Rnd_556x45_KBU_Mk262_Mag_F : ACE_10Rnd_556x45_KBU_M995_AP_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 10Rnd Mk262 KBU Mag";
initSpeed = 832;
};
class ACE_10Rnd_556x45_KBU_Mk318_Mag_F : ACE_10Rnd_556x45_KBU_M995_AP_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 10Rnd Mk318 KBU Mag";
initSpeed = 923;
};

// Creating 30Rnd KH-2002 Magazines of ACE Ammo
class 30Rnd_65x39_caseless_green_mag_NT;
class ACE_30Rnd_556x45_Katiba_M995_Mag_F : 30Rnd_65x39_caseless_green_mag_NT
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 30Rnd M995 AP KH-2002 Mag";
initSpeed = 875;
};
class ACE_30Rnd_556x45_Katiba_Mk262_Mag : ACE_30Rnd_556x45_Katiba_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 30Rnd Mk262 KH-2002 Mag";
initSpeed = 832;
};
class ACE_30Rnd_556x45_Katiba_Mk318_Mag : ACE_30Rnd_556x45_Katiba_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 30Rnd Mk318 KH-2002 Mag";
initSpeed = 923;
};

// Creating 200Rnd Boxes of ACE Ammo
class 200Rnd_556x45_Box_NT_F;
class ACE_200Rnd_556x45_M995_Box_F : 200Rnd_556x45_Box_NT_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 200Rnd M995 AP Box";
initSpeed = 875;
};
class ACE_200Rnd_556x45_Mk262_Box_F : ACE_200Rnd_556x45_M995_Box_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 200Rnd Mk262 Box";
initSpeed = 832;
};
class ACE_200Rnd_556x45_Mk318_Box_F : ACE_200Rnd_556x45_M995_Box_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 200Rnd Mk318 Box";
initSpeed = 923;
};

// Creating 30Rnd QBZ Magazines of ACE Ammo
class 30Rnd_556x45_NT_QBZ_Mag_F;
class ACE_30Rnd_556x45_QBZ_M995_Mag_F : 30Rnd_556x45_NT_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 30Rnd M995 AP QBZ Mag";
initSpeed = 875;
};
class ACE_30Rnd_556x45_QBZ_Mk262_Mag_F : ACE_30Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 30Rnd Mk262 QBZ Mag";
initSpeed = 832;
};
class ACE_30Rnd_556x45_QBZ_Mk318_Mag_F : ACE_30Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 30Rnd Mk318 QBZ Mag";
initSpeed = 923;
};

// Creating 75Rnd QBZ Drum Magazines of ACE Ammo
// Black
class 75Rnd_556x45_NT_QBZ_Mag_F;
class ACE_75Rnd_556x45_QBZ_M995_Mag_F : 75Rnd_556x45_NT_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 75Rnd M995 AP Mag";
initSpeed = 875;
};
class ACE_75Rnd_556x45_QBZ_Mk262_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 75Rnd Mk262 Mag";
initSpeed = 832;
};
class ACE_75Rnd_556x45_QBZ_Mk318_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 75Rnd Mk318 Mag";
initSpeed = 923;
};
// Hex
class 75Rnd_556x45_NT_Hex_QBZ_Mag_F;
class ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F : 75Rnd_556x45_NT_Hex_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 75Rnd M995 AP Hex Mag";
initSpeed = 875;
};
class ACE_75Rnd_556x45_QBZ_Mk262_Hex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 75Rnd Mk262 Hex Mag";
initSpeed = 832;
};
class ACE_75Rnd_556x45_QBZ_Mk318_Hex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 75Rnd Mk318 Hex Mag";
initSpeed = 923;
};
// Green Hex
class 75Rnd_556x45_NT_Ghex_QBZ_Mag_F;
class ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F : 75Rnd_556x45_NT_Ghex_QBZ_Mag_F
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 75Rnd M995 AP Green Hex Mag";
initSpeed = 875;
};
class ACE_75Rnd_556x45_QBZ_Mk262_GHex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 75Rnd Mk262 Green Hex Mag";
initSpeed = 832;
};
class ACE_75Rnd_556x45_QBZ_Mk318_GHex_Mag_F : ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 75Rnd Mk318 Green Hex Mag";
initSpeed = 923;
};

// Creating Stoner 96 Boxes of ACE Ammo
class 200Rnd_65x39_cased_Box_NT;
class ACE_200Rnd_556x45_M995_Stoner_Box : 200Rnd_65x39_cased_Box_NT
{
ammo = "ACE_556x45_Ball_M995_AP";
displayName = "5.56 mm 200Rnd M995 AP Stoner 96 Box";
initSpeed = 875;
};
class ACE_200Rnd_556x45_Mk262_Stoner_Box : ACE_200Rnd_556x45_M995_Stoner_Box
{
ammo = "ACE_556x45_Ball_Mk262";
displayName = "5.56 mm 200Rnd Mk262 Stoner 96 Box";
initSpeed = 832;
};
class ACE_200Rnd_556x45_Mk318_Stoner_Box : ACE_200Rnd_556x45_M995_Stoner_Box
{
ammo = "ACE_556x45_Ball_Mk318";
displayName = "5.56 mm 200Rnd Mk318 Stoner 96 Box";
initSpeed = 923;
};


// Changing Description and Name of ACE Magazines I keep
class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag;
class ACE_10Rnd_762x67_Berger_Hybrid_OTM_Mag : ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Berger Hybrid OTM Mag";
};
class ACE_20Rnd_762x67_Mk248_Mod_0_Mag;
class ACE_10Rnd_762x67_Mk248_Mod_0_Mag : ACE_20Rnd_762x67_Mk248_Mod_0_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Mk248 Mod 0 Mag";
};
class ACE_20Rnd_762x67_Mk248_Mod_1_Mag;
class ACE_10Rnd_762x67_Mk248_Mod_1_Mag : ACE_20Rnd_762x67_Mk248_Mod_1_Mag
{
descriptionShort = "Calibre: .300 Winchester Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .300 WM";
displayName = ".300 WM 10Rnd Mk248 Mod 1 Mag";
};

class 10Rnd_338_Mag;
class ACE_10Rnd_338_300gr_HPBT_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
displayName = ".338 LM 10Rnd 300gr Lapua Scenar Mag";
};
class ACE_10Rnd_338_API526_Mag : 10Rnd_338_Mag
{
descriptionShort = "Calibre: .338 Lapua Magnum<br />Rounds: 10<br />Used in: ''Bad News'' LVOA® 16'' .338 LM";
displayName = ".338 LM 10Rnd API526 Mag";
};

class 2Rnd_12Gauge_Pellets;
class ACE_2Rnd_12Gauge_Pellets_No0_Buck : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
};
class ACE_2Rnd_12Gauge_Pellets_No1_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
};
class ACE_2Rnd_12Gauge_Pellets_No2_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
};
class ACE_2Rnd_12Gauge_Pellets_No3_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
};
class ACE_2Rnd_12Gauge_Pellets_No4_Bird : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
};
class ACE_2Rnd_12Gauge_Pellets_No4_Buck : ACE_2Rnd_12Gauge_Pellets_No0_Buck
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Used in: 690 Field";
};

class 30Rnd_556x45_Stanag;
class ACE_30Rnd_556x45_Stanag_M995_AP_mag : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56 mm 30Rnd M995 AP Mag";
};
class ACE_30Rnd_556x45_Stanag_Mk262_mag : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56 mm 30Rnd Mk262 Mag";
};
class ACE_30Rnd_556x45_Stanag_Mk318_mag : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Used in: F2000/FS2000, HK416A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56 mm 30Rnd Mk318 Mag";
};

class 10Rnd_Mk14_762x51_Mag;
class ACE_10Rnd_762x51_M118LR_Mag : 10Rnd_Mk14_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 10Rnd M118LR Mag";
};
class ACE_10Rnd_762x51_M993_AP_Mag : 10Rnd_Mk14_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 10Rnd M993 AP Mag";
};
class ACE_10Rnd_762x51_Mk316_Mod_0_Mag : 10Rnd_Mk14_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 10Rnd Mk316 Mod 0 Mag";
};
class ACE_10Rnd_762x51_Mk319_Mod_0_Mag : 10Rnd_Mk14_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 10Rnd Mk319 Mod 0 Mag";
};
class ACE_10Rnd_762x51_Mag_SD : 10Rnd_Mk14_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 10Rnd SD Mag";
};
class ACE_20Rnd_762x51_M118LR_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 20Rnd M118LR Mag";
};
class ACE_20Rnd_762x51_M993_AP_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 20Rnd M993 AP Mag";
};
class ACE_20Rnd_762x51_Mk316_Mod_0_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 20Rnd Mk316 Mod 0 Mag";
};
class ACE_20Rnd_762x51_Mk319_Mod_0_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 20Rnd Mk319 Mod 0 Mag";
};
class ACE_20Rnd_762x51_Mag_SD : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 20Rnd SD Mag";
};

class 7Rnd_408_Mag;
class ACE_7Rnd_408_305gr_Mag : 7Rnd_408_Mag
{
descriptionShort = "Calibre: .408 Cheyenne Tactical<br />Rounds: 7<br />Used in: M200 Intervention® .408";
displayName = ".408 7Rnd 305 Gr Mag";
initSpeed = 1067;
};

class 20Rnd_650x39_Cased_Mag_F;
class ACE_10Rnd_580x42_DBP88_Mag : 20Rnd_650x39_Cased_Mag_F
{
displayName = "5.8 mm 10Rnd DBP88 Mag";
};

class 5Rnd_127x108_Mag;
class ACE_5Rnd_127x99_API_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 mm 5Rnd API Mag";
};
class ACE_5Rnd_127x99_AMAX_Mag : 5Rnd_127x108_Mag
{
descriptionShort = "Calibre: 12.7x99mm NATO<br />Rounds: 5<br />Used in: GM6 Lynx 12.7x99";
displayName = "12.7x99 mm 5Rnd AMAX Mag";
};


// Adjusting Mass of ACE NLAW and Magazine to be in line with new Vanilla NLAW Mass

class CA_LauncherMagazine;
class NLAW_F : CA_LauncherMagazine
{
mass = 80.5778;
};
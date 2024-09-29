// Moving .300 WM Magazines from Vanilla 338 Version to new .300 WM Version
class MAR10_338
{
ace_ballistics[] = {"ACE_10Rnd_338_300gr_HPBT_Mag","ACE_10Rnd_338_API526_Mag"};
};
class CBA_300WM_BadNews
{
ace_ballistics[] = {"ACE_10Rnd_762x67_Mk248_Mod_0_Mag","ACE_10Rnd_762x67_Mk248_Mod_1_Mag","ACE_10Rnd_762x67_Berger_Hybrid_OTM_Mag"};
};

// Removing 6.5x39 Magazine from KH-2002 Magwell. Adding M995 AP, Mk262 and Mk318 30Rnd KH-2002 Mags
class Katiba_65x39
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_Katiba_M995_Mag_F","ACE_30Rnd_556x45_Katiba_Mk262_Mag","ACE_30Rnd_556x45_Katiba_Mk318_Mag"};
ace_ballistics[] = {};
};

// Adding M995 AP, Mk262 and Mk318 AK-19 Magazines
class CBA_556x45_AK
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_AK_M995_Mag_F","ACE_30Rnd_556x45_AK_Mk262_Mag_F","ACE_30Rnd_556x45_AK_Mk318_Mag_F"};
};

// Adding 7.62 NATO Ammo to AK-308 Magazines
class AK308_762x51
{
A3RO_Magazines[] += {"ACE_20Rnd_762x51_AK_M118LR_Mag_F","ACE_20Rnd_762x51_AK_M993_Mag_F","ACE_20Rnd_762x51_AK_Mk316_Mag_F","ACE_20Rnd_762x51_AK_Mk319_Mag_F","ACE_20Rnd_762x51_AK_SD_Mag_F"};
};

// Adding 7.62 NATO Ammo to MG5
class Navid_762x51
{
A3RO_Boxes[] += {"ACE_120Rnd_762x51_M118LR_Mag_F","ACE_120Rnd_762x51_M993_Mag_F","ACE_120Rnd_762x51_Mk316_Mag_F","ACE_120Rnd_762x51_Mk319_Mag_F","ACE_120Rnd_762x51_SD_Mag_F"};	
};

// Adding 7.62 NATO Ammo to Negev NG-7
class Zafir_762x51
{
A3RO_Boxes[] += {"ACE_100Rnd_762x51_M118LR_Mag_F","ACE_100Rnd_762x51_M993_Mag_F","ACE_100Rnd_762x51_Mk316_Mag_F","ACE_100Rnd_762x51_Mk319_Mag_F","ACE_100Rnd_762x51_SD_Mag_F"};	
};

// Adding M995 AP, Mk262 and Mk318 Stanag Magazines to Magwells. Removing ACE Magazine
class STANAG_556x45
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk262_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk318_Sand_Mag"};
ace_ballistics[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
};

class CBA_556x45_STANAG
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk262_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk318_Sand_Mag"};
ace_ballistics[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
};

class STANAG_556x45_Large
{
A3RO_Magazines[] += {"ACE_100Rnd_556x45_M995_AP_Drum_Mag","ACE_100Rnd_556x45_Mk262_Drum_Mag","ACE_100Rnd_556x45_Mk318_Drum_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag","ACE_100Rnd_556x45_Mk262_Drum_Green_Mag","ACE_100Rnd_556x45_Mk318_Drum_Green_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk262_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk318_Drum_Sand_Mag"};
};

class CBA_556x45_STANAG_L
{
A3RO_Magazines[] += {"ACE_100Rnd_556x45_M995_AP_Drum_Mag","ACE_100Rnd_556x45_Mk262_Drum_Mag","ACE_100Rnd_556x45_Mk318_Drum_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag","ACE_100Rnd_556x45_Mk262_Drum_Green_Mag","ACE_100Rnd_556x45_Mk318_Drum_Green_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk262_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk318_Drum_Sand_Mag"};
};

class CBA_556x45_STANAG_XL
{
A3RO_Magazines[] += {"ACE_100Rnd_556x45_M995_AP_Drum_Mag","ACE_100Rnd_556x45_Mk262_Drum_Mag","ACE_100Rnd_556x45_Mk318_Drum_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag","ACE_100Rnd_556x45_Mk262_Drum_Green_Mag","ACE_100Rnd_556x45_Mk318_Drum_Green_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk262_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk318_Drum_Sand_Mag"};
};

// Also adding ACE Magazines as they are not present (Except Dim)
class CBA_556x45_STANAG_2D
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk262_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk318_Sand_Mag"};
ace_ballistics[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk262_Sand_Mag","ACE_30Rnd_556x45_Stanag_Mk318_Sand_Mag"};
};

class CBA_556x45_STANAG_2D_XL
{
A3RO_Magazines[] += {"ACE_100Rnd_556x45_M995_AP_Drum_Mag","ACE_100Rnd_556x45_Mk262_Drum_Mag","ACE_100Rnd_556x45_Mk318_Drum_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Green_Mag","ACE_100Rnd_556x45_Mk262_Drum_Green_Mag","ACE_100Rnd_556x45_Mk318_Drum_Green_Mag","ACE_100Rnd_556x45_M995_AP_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk262_Drum_Sand_Mag","ACE_100Rnd_556x45_Mk318_Drum_Sand_Mag"};
};

// Adding M995 AP, Mk262 and Mk318 PMAGs to PMAG Magwell
class MX_65x39_MSBS
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_PMAG_M995_AP_Mag","ACE_30Rnd_556x45_PMAG_Mk262_Mag","ACE_30Rnd_556x45_PMAG_Mk318_Mag"};
};

// Adding M995 AP, Mk262 and Mk318 10Rnd KBU Mags to Magwell
class KBU97A_556x45
{
A3RO_Magazines[] += {"ACE_10Rnd_556x45_KBU_M995_AP_Mag_F","ACE_10Rnd_556x45_KBU_Mk262_Mag_F","ACE_10Rnd_556x45_KBU_Mk318_Mag_F"};
};

// Removing ACE Tracer Magazines from Magwells (We have tracer at home)
class CBA_762x51_M14
{
ace_ballistics[] = {"ACE_20Rnd_762x51_Mag_SD","ACE_10Rnd_762x51_Mag_SD","ACE_10Rnd_762x51_M118LR_Mag","ACE_10Rnd_762x51_Mk316_Mod_0_Mag","ACE_10Rnd_762x51_Mk319_Mod_0_Mag","ACE_10Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
};

// Adding M995 AP, Mk262 and Mk318 200Rnd Boxes to Magwell
class CBA_556x45_MINIMI
{
A3RO_Boxes[] += {"ACE_200Rnd_556x45_M995_Box_F","ACE_200Rnd_556x45_Mk262_Box_F","ACE_200Rnd_556x45_Mk318_Box_F"};
};
class M249_556x45
{
A3RO_Boxes[] += {"ACE_200Rnd_556x45_M995_Box_F","ACE_200Rnd_556x45_Mk262_Box_F","ACE_200Rnd_556x45_Mk318_Box_F"};
};

// Adding ACE Magazines to Big Magwells
class CBA_762x51_M14_L
{
ace_ballistics[] = {"ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
};
class CBA_762x51_M14_XL
{
ace_ballistics[] = {"ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
};

// Adding ACE Magazine to Magwell.
class CTAR_580x42_DMR
{
ace_ballistics[] = {"ACE_10Rnd_580x42_DBP88_Mag"};
};

// Adding 30Rnd QBZ Variants of 5.56 ACE Magazines
class QBZ97_556x45
{
A3RO_Magazines[] += {"ACE_30Rnd_556x45_QBZ_M995_Mag_F","ACE_30Rnd_556x45_QBZ_Mk262_Mag_F","ACE_30Rnd_556x45_QBZ_Mk318_Mag_F"};
};

// Adding 75Rnd QBZ Variants of 5.56 ACE Magazines
class QBZ97_556x45_Large
{
A3RO_Magazines[] += {"ACE_75Rnd_556x45_QBZ_M995_Mag_F","ACE_75Rnd_556x45_QBZ_Mk262_Mag_F","ACE_75Rnd_556x45_QBZ_Mk318_Mag_F","ACE_75Rnd_556x45_QBZ_M995_Hex_Mag_F","ACE_75Rnd_556x45_QBZ_Mk262_Hex_Mag_F","ACE_75Rnd_556x45_QBZ_Mk318_Hex_Mag_F","ACE_75Rnd_556x45_QBZ_M995_GHex_Mag_F","ACE_75Rnd_556x45_QBZ_Mk262_GHex_Mag_F","ACE_75Rnd_556x45_QBZ_Mk318_GHex_Mag_F"};
};

// Adding new ACE Boxes to Magwells. Removing ACE 6.5 Box from Magwell
class Mk200_65x39
{
A3RO_Boxes[] += {"ACE_200Rnd_556x45_M995_Stoner_Box","ACE_200Rnd_556x45_Mk262_Stoner_Box","ACE_200Rnd_556x45_Mk318_Stoner_Box"};
};
class CBA_65x39_Mk200
{
A3RO_Boxes[] += {"ACE_200Rnd_556x45_M995_Stoner_Box","ACE_200Rnd_556x45_Mk262_Stoner_Box","ACE_200Rnd_556x45_Mk318_Stoner_Box"};
ace_ballistics[] = {};
};

// Removing ACE Magazine from VS-121 Magwell
class CBA_762x54R_SVD
{
ace_ballistics[] = {};
};

// Removing ACE Magazine from ACR Magwell
class MX_65x39
{
ace_ballistics[] = {};
};

// Removing ACE Magazine from ACR Magwell
class MX_65x39_Large
{
ace_ballistics[] = {};
};

// Removing ACE No4 Buckshot from Shotgun Magwells
class CBA_12g_2rnds
{
ace_ballistics[] = {"ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No1_Buck","ACE_2Rnd_12Gauge_Pellets_No2_Buck","ACE_2Rnd_12Gauge_Pellets_No3_Buck","ACE_2Rnd_12Gauge_Pellets_No4_Bird"};
}
class HunterShotgun_01_12GA
{
ace_ballistics[] = {"ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No1_Buck","ACE_2Rnd_12Gauge_Pellets_No2_Buck","ACE_2Rnd_12Gauge_Pellets_No3_Buck","ACE_2Rnd_12Gauge_Pellets_No4_Bird"};
}

// Removing ACE Magatzine from 50BMG Magwwell
class CBA_50BMG_AS50
{
ace_ballistics[] = {"ACE_5Rnd_127x99_API_Mag","ACE_5Rnd_127x99_AMAX_Mag"};
};
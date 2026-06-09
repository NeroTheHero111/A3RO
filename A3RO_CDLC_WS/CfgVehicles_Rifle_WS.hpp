// 3den Editor Items
// Adjusting existing Content: Weapons

// AA-12
class Weapon_sgun_aa40_lxWS: Weapon_Base_F
{
displayName = "AA-12 CQB";
editorSubcategory = "EdSubcat_Shotguns";
};
class Weapon_sgun_aa40_tan_lxWS: Weapon_Base_F
{
displayName = "AA-12 CQB (Sand)";
editorSubcategory = "EdSubcat_Shotguns";
};
class Weapon_sgun_aa40_snake_lxWS: Weapon_Base_F
{
displayName = "AA-12 CQB (Snake)";
editorSubcategory = "EdSubcat_Shotguns";
};

// SA58 OSW 11''
class Weapon_arifle_SLR_Para_lxWS: Weapon_Base_F
{
displayName = "SA58™ OSW 11''";
    class TransportMagazines
	{
		delete _xx_20Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_reload_tracer_red_lxWS";
		};
	};
};
class Weapon_arifle_SLR_Para_snake_lxWS: Weapon_Base_F
{
displayName = "SA58™ OSW 11'' (Snake)";
    class TransportMagazines
	{
		delete _xx_20Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS";
		};
	};
};

// Galil ARM
class Weapon_arifle_Galat_lxWS: Weapon_Base_F
{
displayName = "Galil ARM";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x39_Mag_F;
		class 35Rnd_556x45_Velko_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_reload_tracer_red_lxWS";
		};
	};
};
class Weapon_arifle_Galat_worn_lxWS: Weapon_Base_F
{
displayName = "Galil ARM (Weathered)";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x39_Mag_worn_lxWS;
		class 35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS";
		};
	};
};
// StG 58
class Weapon_arifle_SLR_V_lxWS: Weapon_Base_F
{
displayName = "StG 58";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_reload_tracer_green_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_reload_tracer_green_lxWS";
		};
	};
};
class Weapon_arifle_SLR_D_lxWS: Weapon_Base_F
{
displayName = "StG 58 (Early/Desert)";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_desert_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_desert_reload_tracer_red_lxWS";
		};
	};
};
class Weapon_arifle_SLR_V_camo_lxWS: Weapon_Base_F
{
displayName = "StG 58 (Jungle)";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_desert_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_desert_reload_tracer_red_lxWS";
		};
	};
};
class Weapon_arifle_SLR_lxWS: Weapon_Base_F
{
displayName = "StG 58 (Early)";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_reload_tracer_green_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_reload_tracer_green_lxWS";
		};
	};
};
// SA58 Carbine
class Weapon_arifle_SLR_V_GL_lxWS: Weapon_Base_F
{
displayName = "SA58™ Carbine 16'' TPB (Bipod/GL)";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_reload_tracer_green_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_reload_tracer_green_lxWS";
		};
	};
};
class Weapon_arifle_SLR_GL_lxWS: Weapon_Base_F
{
displayName = "SA58™ Carbine 16'' TPB (Wood/GL)";
    class TransportMagazines
	{
		delete _xx_30Rnd_762x51_slr_lxWS;
		class 20Rnd_762x51_slr_reload_tracer_green_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_slr_reload_tracer_green_lxWS";
		};
	};
};
// Vektor R4A1
class Weapon_arifle_Velko_lxWS: Weapon_Base_F
{
displayName = "Vektor R4A1";
    class TransportMagazines
	{
		delete _xx_50Rnd_556x45_Velko_lxWS;
		class 35Rnd_556x45_Velko_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_reload_tracer_red_lxWS";
		};
	};
};
// Galil SAR
class Weapon_arifle_VelkoR5_lxWS: Weapon_Base_F
{
displayName = "Galil SAR";
    class TransportMagazines
	{
		delete _xx_35Rnd_556x45_Velko_lxWS;
		class 35Rnd_556x45_Velko_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_reload_tracer_red_lxWS";
		};
	};
};
class Weapon_arifle_VelkoR5_snake_lxWS: Weapon_Base_F
{
displayName = "Galil SAR (Snake)";
    class TransportMagazines
	{
		delete _xx_35Rnd_556x45_Velko_snake_lxWS;
		class 35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS";
		};
	};
};
// Galil SAR M203A1
class Weapon_arifle_VelkoR5_GL_lxWS: Weapon_Base_F
{
displayName = "Galil SAR M203A1";
    class TransportMagazines
	{
		delete _xx_35Rnd_556x45_Velko_lxWS;
		class 35Rnd_556x45_Velko_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_reload_tracer_red_lxWS";
		};
	};
};
class Weapon_arifle_VelkoR5_GL_snake_lxWS: Weapon_Base_F
{
displayName = "Galil SAR M203A1 (Snake)";
    class TransportMagazines
	{
		delete _xx_35Rnd_556x45_Velko_snake_lxWS;
		class 35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS";
		};
	};
};
// XMS
class Weapon_arifle_XMS_lxWS: Weapon_Base_F
{
displayName = "XMS";
};
class Weapon_arifle_XMS_Gray_lxWS: Weapon_Base_F
{
displayName = "XMS (Grey)";
};
class Weapon_arifle_XMS_Base_khk_lxWS: Weapon_Base_F
{
displayName = "XMS (Khaki)";
};
class Weapon_arifle_XMS_Sand_lxWS: Weapon_Base_F
{
displayName = "XMS (Sand)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_Sand
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_Sand";
		};
	};
};
class Weapon_arifle_XMS_camo_lxWS: Weapon_Base_F
{
displayName = "XMS (Stripes)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_camo_lxWS
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_camo_lxWS";
		};
	};
};
// XMS GLM
class Weapon_arifle_XMS_GL_lxWS: Weapon_Base_F
{
displayName = "XMS GLM";
};
class Weapon_arifle_XMS_GL_Gray_lxWS: Weapon_Base_F
{
displayName = "XMS GLM (Grey)";
};
class Weapon_arifle_XMS_GL_khk_lxWS: Weapon_Base_F
{
displayName = "XMS GLM (Khaki)";
};
class Weapon_arifle_XMS_GL_Sand_lxWS: Weapon_Base_F
{
displayName = "XMS GLM (Sand)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_Sand
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_Sand";
		};
	};
};
class Weapon_arifle_XMS_GL_camo_lxWS: Weapon_Base_F
{
displayName = "XMS GLM (Stripes)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_camo_lxWS
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_camo_lxWS";
		};
	};
};
// XMS SIX12
class Weapon_arifle_XMS_Shot_lxWS: Weapon_Base_F
{
displayName = "XMS SIX12";
};
class Weapon_arifle_XMS_Shot_Gray_lxWS: Weapon_Base_F
{
displayName = "XMS SIX12 (Grey)";
};
class Weapon_arifle_XMS_Shot_khk_lxWS: Weapon_Base_F
{
displayName = "XMS SIX12 (Khaki)";
};
class Weapon_arifle_XMS_Shot_Sand_lxWS: Weapon_Base_F
{
displayName = "XMS SIX12 (Sand)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_Sand
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_Sand";
		};
	};
};
class Weapon_arifle_XMS_Shot_camo_lxWS: Weapon_Base_F
{
displayName = "XMS SIX12 (Stripes)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_camo_lxWS
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_camo_lxWS";
		};
	};
};

// Creating Items for new Weapons

// AKM Weathered. Changing Magazine
class Weapon_arifle_AKM_Rusty_F: Weapon_Base_F
{
	class TransportMagazines
	{
		delete 30Rnd_762x39_Mag_F;
		class 30Rnd_762x39_Mag_worn_RT_lxWS
		{
		magazine = "30Rnd_762x39_Mag_worn_RT_lxWS";
		count = 1;
		};
	};	
};
// Changing C/G/TAR-21 to (Olive)
class Weapon_arifle_TRG20_F: Weapon_Base_F
{
displayName = "CTAR-21 (Olive)";
};
class Weapon_arifle_TRG21_F : Weapon_Base_F
{
displayName = "TAR-21 (Olive)";
};
class Weapon_arifle_TRG21_GL_F : Weapon_Base_F
{
displayName = "GTAR-21 FN40GL® (Olive)";
};
// C/G/TAR-21 Black
class Weapon_arifle_TRG21_blk_F: Weapon_Base_F
{
displayName = "TAR-21";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 30Rnd_65x39_caseless_msbs_mag
		{
		count = 1;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
	class TransportWeapons
	{
		class arifle_TRG21_blk_F
		{
		count = 1;
		weapon = "arifle_TRG21_blk_F";
		};
	};	
};
class Weapon_arifle_TRG20_blk_F: Weapon_Base_F
{
displayName = "CTAR-21";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 30Rnd_65x39_caseless_msbs_mag
		{
		count = 1;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
	class TransportWeapons
	{
		class arifle_TRG20_blk_F
		{
		count = 1;
		weapon = "arifle_TRG20_blk_F";
		};
	};	
};
class Weapon_arifle_TRG21_blk_GL_F: Weapon_Base_F
{
displayName = "GTAR-21 FN40GL®";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 30Rnd_65x39_caseless_msbs_mag
		{
		count = 1;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
	class TransportWeapons
	{
		class arifle_TRG21_blk_GL_F
		{
		count = 1;
		weapon = "arifle_TRG21_blk_GL_F";
		};
	};	
};
// Galil ARM
class Weapon_arifle_Galat_poly_lxWS: Weapon_Base_F // My Poly
{
displayName = "Galil ARM (Polymer)";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 35Rnd_556x45_Velko_reload_tracer_red_lxWS
		{
		count = 1;
		magazine = "35Rnd_556x45_Velko_reload_tracer_red_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_poly_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_poly_lxWS";
		};
	};	
};
// M323
class Weapon_arifle_Galat_M323_lxWS: Weapon_Base_F
{
displayName = "Galil Model 323";
editorSubcategory = "EdSubcat_Sport_Hunt";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 25Rnd_762x51_Galil_lxWS
		{
		count = 1;
		magazine = "25Rnd_762x51_Galil_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_M323_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_M323_lxWS";
		};
	};	
};
class Weapon_arifle_Galat_M323_Poly_lxWS: Weapon_Base_F
{
displayName = "Galil Model 323 (Polymer)";
editorSubcategory = "EdSubcat_Sport_Hunt";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 25Rnd_762x51_Galil_lxWS
		{
		count = 1;
		magazine = "25Rnd_762x51_Galil_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_M323_Poly_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_M323_Poly_lxWS";
		};
	};	
};
class Weapon_arifle_Galat_M323_Worn_lxWS: Weapon_Base_F
{
displayName = "Galil Model 323 (Weathered)";
editorSubcategory = "EdSubcat_Sport_Hunt";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 25Rnd_762x51_Galil_Worn_lxWS
		{
		count = 1;
		magazine = "25Rnd_762x51_Galil_Worn_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_M323_Worn_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_M323_Worn_lxWS";
		};
	};	
};
// M372
class Weapon_arifle_Galat_M372_lxWS: Weapon_Base_F
{
displayName = "Galil Model 372";
editorSubcategory = "EdSubcat_Sport_Hunt";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 35Rnd_223REM_Velko_lxWS
		{
		count = 1;
		magazine = "35Rnd_223REM_Velko_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_M372_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_M372_lxWS";
		};
	};	
};
class Weapon_arifle_Galat_M372_Poly_lxWS: Weapon_Base_F
{
displayName = "Galil Model 372 (Polymer)";
editorSubcategory = "EdSubcat_Sport_Hunt";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 35Rnd_223REM_Velko_lxWS
		{
		count = 1;
		magazine = "35Rnd_223REM_Velko_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_M372_Poly_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_M372_Poly_lxWS";
		};
	};	
};
class Weapon_arifle_Galat_M372_Worn_lxWS: Weapon_Base_F
{
displayName = "Galil Model 372 (Weathered)";
editorSubcategory = "EdSubcat_Sport_Hunt";
DLC = "ws";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 35Rnd_223REM_Velko_worn_lxWS
		{
		count = 1;
		magazine = "35Rnd_223REM_Velko_worn_lxWS";
		};
	};
	class TransportWeapons
	{
		class arifle_Galat_M372_Worn_lxWS
		{
		count = 1;
		weapon = "arifle_Galat_M372_Worn_lxWS";
		};
	};	
};
// GM6 .50BMG
class Weapon_srifle_GM6_50BMG_Snake_F: Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x99 (Snake)";
DLC = "ws";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 5Rnd_127x99_Mag
		{
		count = 1;
		magazine = "5Rnd_127x99_Mag";
		};
	};
	class TransportWeapons
	{
		class srifle_GM6_50BMG_Snake_F
		{
		count = 1;
		weapon = "srifle_GM6_50BMG_Snake_F";
		};
	};	
};

// Editing AP-5 Bustard. I thought it would use the weird seperate lxWS Magazines but no. Replacing with T4 Mags anyway.
// ION
class ION_UAV_02_lxWS : UAV_02_Base_lxWS
{
displayName = "AP-5 Bustard (Stoner 96)";
lxws_droneWeapon[] = {"LMG_Mk200_F","200Rnd_65x39_cased_Box_T4_Red",""};
};
// NATO
class B_UAV_02_lxWS : UAV_02_Base_lxWS
{
displayName = "AP-5 Bustard (ACR HB)";
lxws_droneWeapon[] = {"Weapon_arifle_MX_SW_Black_F","100Rnd_65x39_T4_black_mag",""};
};
// CSAT
class O_UAV_02_lxWS : UAV_02_Base_lxWS
{
displayName = "AP-5 Bustard (Negev NG-7 SF)";
lxws_droneWeapon[] = {"LMG_Zafir_F","100Rnd_762x51_NG7_Box_GT4",""};
};
// AAF
class I_UAV_02_lxWS : UAV_02_Base_lxWS
{
displayName = "AP-5 Bustard (Stoner 96)";
lxws_droneWeapon[] = {"LMG_Mk200_F","200Rnd_65x39_cased_Box_T4",""};
};
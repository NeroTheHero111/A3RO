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
// GLX160
class Weapon_glaunch_GLX_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone";
};
class Weapon_glaunch_GLX_camo_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Camo)";
};
class Weapon_glaunch_GLX_ghex_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Green Hex)";
};
class Weapon_glaunch_GLX_hex_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Hex)";
};
class Weapon_glaunch_GLX_tan_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Tan)";
};
class Weapon_glaunch_GLX_snake_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Snake)";
};
// RPG-32
class Weapon_launch_RPG32_tan_lxWS: Weapon_Base_F
{
displayName = "RPG-32 (Sand)";
};
// SS77 Mk1
class Weapon_LMG_S77_lxWS: Weapon_Base_F
{
displayName = "SS77 Mk1";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
class Weapon_LMG_S77_AAF_lxWS: Weapon_Base_F
{
displayName = "SS77 Mk1 (Camo)";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
class Weapon_LMG_S77_Desert_lxWS: Weapon_Base_F
{
displayName = "SS77 Mk1 (Desert)";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
class Weapon_LMG_S77_GHex_lxWS: Weapon_Base_F
{
displayName = "SS77 Mk1 (Green Hex)";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
class Weapon_LMG_S77_Hex_lxWS: Weapon_Base_F
{
displayName = "SS77 Mk1 (Hex)";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
// SS77 Compact
class Weapon_LMG_S77_Compact_lxWS: Weapon_Base_F
{
displayName = "SS77 Compact";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
class Weapon_LMG_S77_Compact_Snakeskin_lxWS: Weapon_Base_F
{
displayName = "SS77 Compact (Snake)";
    class TransportMagazines
	{
		delete _xx_100Rnd_762x51_S77_Red_lxWS;
		class 100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
// XMS SW
class Weapon_arifle_XMS_M_lxWS: Weapon_Base_F
{
displayName = "XMS SW";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 60Rnd_556x45_Stanag_T4_lxWS
		{
		count = 1;
		magazine = "60Rnd_556x45_Stanag_T4_lxWS";
		};
	};
};
class Weapon_arifle_XMS_M_Gray_lxWS: Weapon_Base_F
{
displayName = "XMS SW (Grey)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 60Rnd_556x45_Stanag_T4_lxWS
		{
		count = 1;
		magazine = "60Rnd_556x45_Stanag_T4_lxWS";
		};
	};
};
class Weapon_arifle_XMS_M_khk_lxWS: Weapon_Base_F
{
displayName = "XMS SW (Khaki)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 60Rnd_556x45_Stanag_T4_lxWS
		{
		count = 1;
		magazine = "60Rnd_556x45_Stanag_T4_lxWS";
		};
	};
};
class Weapon_arifle_XMS_M_Sand_lxWS: Weapon_Base_F
{
displayName = "XMS SW (Sand)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		class 60Rnd_556x45_Stanag_T4_camo_lxWS
		{
		count = 1;
		magazine = "60Rnd_556x45_Stanag_T4_camo_lxWS";
		};
	};
};
class Weapon_arifle_XMS_M_camo_lxWS: Weapon_Base_F
{
displayName = "XMS SW (Stripes)";
    class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag_camo_lxWS;
		class 60Rnd_556x45_Stanag_T4_camo_lxWS
		{
		count = 1;
		magazine = "60Rnd_556x45_Stanag_T4_camo_lxWS";
		};
	};
};
// GM6 12.7x108
class Weapon_srifle_GM6_snake_lxWS: Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x108 (Snake)";
};
// Mk 14 EBR Mod 0
class Weapon_srifle_EBR_blk_lxWS: Weapon_Base_F
{
displayName = "Mk 14 Mod 0 EBR (Black)";
    class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class 20Rnd_762x51_Mag_blk_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_Mag_blk_lxWS";
		};
	};
};
class Weapon_srifle_EBR_snake_lxWS: Weapon_Base_F
{
displayName = "Mk 14 Mod 0 EBR (Snake)";
    class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class 20Rnd_762x51_Mag_snake_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_Mag_snake_lxWS";
		};
	};
};

// Adjusting existing Content: Attachments

// Railway
class Item_optic_ACO_grn_camo_lxWS: Weapon_Base_F
{
displayName = "Railway Triangle-Dot (4 MOA, Green, Stripes)";
};
class Item_optic_ACO_camo_lxWS: Weapon_Base_F
{
displayName = "Railway Bullseye (2 MOA, Red, Stripes)";
};
// EXPS3
class Item_optic_Holosight_smg_snake_lxWS: Weapon_Base_F
{
displayName = "EXPS3™ Circle-Dot (2 MOA, Snake)";
};
class Item_optic_Holosight_snake_lxWS: Weapon_Base_F
{
displayName = "EXPS3™ CQB (2 MOA, Snake)";
};
// Micro R-1 (High)
class Item_optic_r1_high_arid_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Arid, LEAP/03)";
};
class Item_optic_r1_high_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, LEAP/03)";
};
class Item_optic_r1_high_black_sand_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Black/Sand, LEAP/03)";
};
class Item_optic_r1_high_khaki_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Khaki, LEAP/03)";
};
class Item_optic_r1_high_lush_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Lush, LEAP/03)";
};
class Item_optic_r1_high_sand_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Sand, LEAP/03)";
};
class Item_optic_r1_high_snake_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Snake, LEAP/03)";
};
// Micro R-1 (Low)
class Item_optic_r1_low_arid_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Arid)";
};
class Item_optic_r1_low_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA)";
};
class Item_optic_r1_low_khaki_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Khaki)";
};
class Item_optic_r1_low_lush_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Lush)";
};
class Item_optic_r1_low_sand_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Sand)";
};
class Item_optic_r1_low_snake_lxWS: Weapon_Base_F
{
displayName = "Micro R-1 (4 MOA, Snake)";
};
// SpecterOS
class Item_optic_Arco_hex_lxWS: Weapon_Base_F
{
displayName = "SpecterOS 4x32 (Hex, NV sight II plus)";
};
// XTR II
class Item_optic_DMS_snake_lxWS: Weapon_Base_F
{
displayName = "XTR II™ 1-8x24 (Snake, FastFire 2)";
};
// HAMR
class Item_optic_Hamr_arid_lxWS: Weapon_Base_F
{
displayName = "Mark 4® HAMR® 4x24 (Arid, Deltapoint Pro NV)";
};
class Item_optic_Hamr_lush_lxWS: Weapon_Base_F
{
displayName = "Mark 4® HAMR® 4x24 (Lush, Deltapoint Pro NV)";
};
class Item_optic_Hamr_sand_lxWS: Weapon_Base_F
{
displayName = "Mark 4® HAMR® 4x24 (Sand, Deltapoint Pro NV)";
};
class Item_optic_Hamr_snake_lxWS: Weapon_Base_F
{
displayName = "Mark 4® HAMR® 4x24 (Snake, Deltapoint Pro NV)";
};
// DBAL-A2
class Item_acc_pointer_IR_arid_lxWS: Weapon_Base_F
{
displayName = "DBAL-A2 (IR, Arid)";
};
class Item_acc_pointer_IR_lush_lxWS: Weapon_Base_F
{
displayName = "DBAL-A2 (IR, Lush)";
};
class Item_acc_pointer_IR_sand_lxWS: Weapon_Base_F
{
displayName = "DBAL-A2 (IR, Sand)";
};
class Item_acc_pointer_IR_snake_lxWS: Weapon_Base_F
{
displayName = "DBAL-A2 (IR, Snake)";
};
// M600W
class Item_saber_light_lxWS: Weapon_Base_F
{
displayName = "M600W";
};
class Item_saber_light_arid_lxWS: Weapon_Base_F
{
displayName = "M600W (Arid)";
};
class Item_saber_light_khaki_lxWS: Weapon_Base_F
{
displayName = "M600W (Khaki)";
};
class Item_saber_light_lush_lxWS: Weapon_Base_F
{
displayName = "M600W (Lush)";
};
class Item_saber_light_sand_lxWS: Weapon_Base_F
{
displayName = "M600W (Sand)";
};
class Item_saber_light_snake_lxWS: Weapon_Base_F
{
displayName = "M600W (Snake)";
};
// M600IR
class Item_saber_light_ir_lxWS: Weapon_Base_F
{
displayName = "M600IR";
};
class Item_saber_light_ir_arid_lxWS: Weapon_Base_F
{
displayName = "M600IR (Arid)";
};
class Item_saber_light_ir_khaki_lxWS: Weapon_Base_F
{
displayName = "M600IR (Khaki)";
};
class Item_saber_light_ir_lush_lxWS: Weapon_Base_F
{
displayName = "M600IR (Lush)";
};
class Item_saber_light_ir_sand_lxWS: Weapon_Base_F
{
displayName = "M600IR (Sand)";
};
class Item_saber_light_ir_snake_lxWS: Weapon_Base_F
{
displayName = "M600IR (Snake)";
};
// Salvo 12
class Item_muzzle_snds_12Gauge_lxWS: Weapon_Base_F
{
displayName = "Salvo 12";
};
class Item_muzzle_snds_12Gauge_snake_lxWS: Weapon_Base_F
{
displayName = "Salvo 12 (Snake)";
};
// QDSS NT4
class Item_suppressor_l_camo_lxWS: Weapon_Base_F
{
displayName = "QDSS NT4 (Stripes)";
};
// QDC/CRS-PRT
class Item_suppressor_l_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-PRT";
};
class Item_suppressor_l_arid_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-PRT (Arid)";
};
class Item_suppressor_l_khaki_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-PRT (Khaki)";
};
class Item_suppressor_l_lush_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-PRT (Lush)";
};
class Item_suppressor_l_sand_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-PRT (Sand)";
};
class Item_suppressor_l_snake_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-PRT (Snake)";
};
// Fake QDC
class Item_suppressor_m_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-65-PRT";
};
class Item_suppressor_m_arid_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-65-PRT (Arid)";
};
class Item_suppressor_m_khaki_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-65-PRT (Khaki)";
};
class Item_suppressor_m_lush_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-65-PRT (Lush)";
};
class Item_suppressor_m_sand_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-65-PRT (Sand)";
};
class Item_suppressor_m_snake_lxWS: Weapon_Base_F
{
displayName = "QDC/CRS-65-PRT (Snake)";
};
// PRS-1
class Item_suppressor_h_lxWS: Weapon_Base_F
{
displayName = "PRS-1";
};
class Item_suppressor_h_arid_lxWS: Weapon_Base_F
{
displayName = "PRS-1 (Arid)";
};
class Item_suppressor_h_khaki_lxWS: Weapon_Base_F
{
displayName = "PRS-1 (Khaki)";
};
class Item_suppressor_h_lush_lxWS: Weapon_Base_F
{
displayName = "PRS-1 (Lush)";
};
class Item_suppressor_h_sand_lxWS: Weapon_Base_F
{
displayName = "PRS-1 (Sand)";
};
class Item_suppressor_h_snake_lxWS: Weapon_Base_F
{
displayName = "PRS-1 (Snake)";
};

// Creating Items for new Weapons

// AKM Weathered
class Weapon_arifle_AKM_Rusty_F: Weapon_Base_F
{
displayName = "AKM (Weathered)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AKM_Rusty_F
		{
		weapon = "arifle_AKM_Rusty_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
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
// M1A
class Weapon_srifle_M1A_ACLS_blk_lxWS: Weapon_Base_F
{
displayName = "M1A ACLS (Black)";
DLC = "ws";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 20Rnd_Mk14_308WIN_Mag_blk_lxWS
		{
		count = 1;
		magazine = "20Rnd_Mk14_308WIN_Mag_blk_lxWS";
		};
	};
	class TransportWeapons
	{
		class srifle_M1A_ACLS_blk_lxWS
		{
		count = 1;
		weapon = "srifle_M1A_ACLS_blk_lxWS";
		};
	};	
};
class Weapon_srifle_M1A_ACLS_snake_lxWS: Weapon_Base_F
{
displayName = "M1A ACLS (Snake)";
DLC = "ws";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 20Rnd_Mk14_308WIN_Mag_snake_lxWS
		{
		count = 1;
		magazine = "20Rnd_Mk14_308WIN_Mag_snake_lxWS";
		};
	};
	class TransportWeapons
	{
		class srifle_M1A_ACLS_snake_lxWS
		{
		count = 1;
		weapon = "srifle_M1A_ACLS_snake_lxWS";
		};
	};	
};

class Item_optic_glx_lxws : Item_Base_F
{
displayName = "GLX-160 Ladder Sight";
editorCategory = "EdCat_WeaponAttachments";
editorSubcategory = "EdSubcat_TopSlot_Collimators";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponAccessories";
    class TransportItems
    {
        class optic_glx_lxws
        {
        count = 1;
        name = "optic_glx_lxws";
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

// Backpacks
class Weapon_Bag_Base;
class B_shield_backpack_lxWS : Weapon_Bag_Base
{
mass = 440.9245; // 20000g. Still low
};
class I_shield_backpack_lxWS : B_shield_backpack_lxWS
{
mass = 440.9245;
};
class O_shield_backpack_GHEX_lxWS : I_shield_backpack_lxWS
{
mass = 440.9245;
};
class O_shield_backpack_lxWS : I_shield_backpack_lxWS
{
mass = 440.9245;
};

// Camera
class Item_Camera_lxWS : Item_Base_F
{
displayName = "Deacon D810";
};
class Item_MobilePhone;
class Item_PropCamera_lxWS : Item_MobilePhone
{
displayName = "Deacon D810 (Intel)";
};

// Faction Config Unsorted



// Oppressor
class I_Tura_deserter_lxWS;
class I_Tura_HeavyGunner_lxWS : I_Tura_deserter_lxWS
{
magazines[] = {"100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_YT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class B_Tura_HeavyGunner_lxWS : I_Tura_HeavyGunner_lxWS
{
magazines[] = {"100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_RT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// Opressor
class O_Tura_HeavyGunner_lxWS : I_Tura_HeavyGunner_lxWS
{
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

// NATO Desert Ammobearer Backpack
// class B_AssaultPack_desert_Ammo_lxWS : B_AssaultPack_mcamo_Ammo
// ION Autorifleman
class B_soldier_AR_F;
class B_ION_soldier_AR_lxWS : B_soldier_AR_F
{
magazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// class B_D_soldier_AR_lxWS : B_soldier_AR_F

// NATO Desert Asst. Autorifleman Backpack
//class B_Kitbag_desert_AAR_lxWS : B_Kitbag_rgr_AAR
// UNA Autorifleman
class B_UN_soldier_AR_lxWS : B_soldier_AR_F
{
magazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class B_soldier_M_F;
class B_D_soldier_M_lxWS : B_soldier_M_F
{
magazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class B_recon_M_F;
class B_D_recon_M_lxWS : B_recon_M_F
{
magazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

// INDFOR
// Deserter
class I_SFIA_soldier_lxWS;
class I_SFIA_deserter_lxWS : I_SFIA_soldier_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
};
// Enforcer
class I_C_Soldier_Para_2_F;
class I_SFIA_enforcer_lxWS : I_C_Soldier_Para_2_F
{
magazines[] = {"50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","MiniGrenade","MiniGrenade"};
respawnMagazines[] = {"50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","50Rnd_556x45_Velko_reload_tracer_yellow_lxWS","MiniGrenade","MiniGrenade"};
};
// Hireling
class I_C_Soldier_Bandit_2_F;
class I_SFIA_hireling_lxWS : I_C_Soldier_Bandit_2_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","RPG32_F"};
weapons[] = {"hgun_cpw_ParaB_F","launch_RPG32_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","RPG32_F"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","launch_RPG32_F","Throw","Put"};
};
class B_Kitbag_rgr;
class B_Kitbag_cbr_Hireling_1_lxWS : B_Kitbag_rgr
{
   class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag;
		class _xx_30Rnd_9x19_Mag
		{
		count = 4;
		magazine = "30Rnd_9x19_Mag";
		};
	};
};
// Snatcher
class I_C_Soldier_Bandit_1_F;
class I_SFIA_medic2_lxWS : I_C_Soldier_Bandit_1_F
{
magazines[] = {"35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS"};
respawnMagazines[] = {"35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS"};
};
// Snatcher Backpack
class B_FieldPack_oli;
class B_FieldPack_oli_Medic_1_lxWS : B_FieldPack_oli
{
    class TransportMagazines
	{
		delete _xx_30Rnd_762x39_Mag_F;
		class 35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS
		{
		count = 4;
		magazine = "35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS";
		};
	};
};
// Thug
class I_SFIA_scout_lxWS;
class I_SFIA_thug_lxWS : I_SFIA_scout_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS","30Rnd_762x39_Mag_worn_lxWS"};
respawnMagazines[] = {"35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS","30Rnd_762x39_Mag_worn_lxWS"};
};
// Thug Backpack
class B_FieldPack_khk_Bandit_2_lxWS : B_FieldPack_oli
{
    class TransportMagazines
	{
		delete _xx_30Rnd_762x39_Mag_F;
		class 35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS
		{
		count = 4;
		magazine = "35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS";
		};
	};
};
class I_Tura_soldier_UAV_lxWS : I_Tura_deserter_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","1Rnd_50mm_Smoke_lxWS"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","1Rnd_50mm_Smoke_lxWS"};
};
class I_C_Soldier_Bandit_4_F;
class I_SFIA_watcher_lxWS : I_C_Soldier_Bandit_4_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","MiniGrenade","MiniGrenade"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","MiniGrenade","MiniGrenade"};
};

// OPFOR
// Gendarmerie Crewman. Protector > MP5K-PDW
class O_crew_F;
class O_GEN_crew_lxWS : O_crew_F
{
magazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put"};
};
// 
class O_Tura_deserter_lxWS : I_SFIA_deserter_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
};
class O_Tura_enforcer_lxWS : I_SFIA_enforcer_lxWS
{
magazines[] = {"50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","MiniGrenade"};
respawnMagazines[] = {"50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","MiniGrenade"};
};
//class O_Tura_hireling_lxWS : I_SFIA_hireling_lxWS
// class O_Tura_medic2_lxWS : I_SFIA_medic2_lxWS
// class O_Tura_thug_lxWS : I_SFIA_thug_lxWS
class O_Tura_soldier_UAV_lxWS : O_Tura_deserter_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","1Rnd_50mm_Smoke_lxWS"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","1Rnd_50mm_Smoke_lxWS"};
};
class O_Tura_watcher_lxWS : I_SFIA_watcher_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","MiniGrenade"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","MiniGrenade"};
};
class O_soldier_UAV_F;
class O_soldier_UAV_lxWS : O_soldier_UAV_F
{
magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
};
class O_Soldier_AR_F;
class O_A_Soldier_AR_lxWS : O_Soldier_AR_F
{
magazines[] = {"100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_medic_F;
class O_A_medic_lxWS : O_medic_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_A_crew_lxWS : O_crew_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_GL_F;
class O_A_Soldier_GL_lxWS : O_Soldier_GL_F
{
magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};
};
class O_A_HeavyGunner_lxWS : O_A_Soldier_AR_lxWS
{
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_GT4_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_F;
class O_A_Soldier_lxWS : O_Soldier_F
{
magazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_LAT_F;
class O_A_Soldier_LAT_lxWS : O_Soldier_LAT_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_TL_F;
class O_A_Soldier_TL_lxWS : O_Soldier_TL_F
{
magazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
respawnMagazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
};
class I_Soldier_AAA_F;
class I_SFIA_Soldier_AAA_lxWS : I_Soldier_AAA_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class O_SFIA_Soldier_AAA_lxWS : I_SFIA_Soldier_AAA_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class I_Soldier_AAT_F;
class I_SFIA_Soldier_AAT_lxWS : I_Soldier_AAT_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class O_SFIA_Soldier_AAT_lxWS : I_SFIA_Soldier_AAT_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class I_Soldier_AR_F;
class I_SFIA_Soldier_AR_lxWS : I_Soldier_AR_F
{
magazines[] = {"50Rnd_556x45_Velko_T4_yellow_lxWS","50Rnd_556x45_Velko_T4_yellow_lxWS","50Rnd_556x45_Velko_T4_yellow_lxWS","50Rnd_556x45_Velko_T4_yellow_lxWS","35Rnd_556x45_Velko_T4_yellow_lxWS","35Rnd_556x45_Velko_T4_yellow_lxWS","35Rnd_556x45_Velko_T4_yellow_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"50Rnd_556x45_Velko_T4_yellow_lxWS","50Rnd_556x45_Velko_T4_yellow_lxWS","50Rnd_556x45_Velko_T4_yellow_lxWS","50Rnd_556x45_Velko_T4_yellow_lxWS","35Rnd_556x45_Velko_T4_yellow_lxWS","35Rnd_556x45_Velko_T4_yellow_lxWS","35Rnd_556x45_Velko_T4_yellow_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class O_SFIA_Soldier_AR_lxWS : I_SFIA_Soldier_AR_lxWS
{
magazines[] = {"50Rnd_556x45_Velko_T4_green_lxWS","50Rnd_556x45_Velko_T4_green_lxWS","50Rnd_556x45_Velko_T4_green_lxWS","50Rnd_556x45_Velko_T4_green_lxWS","35Rnd_556x45_Velko_T4_green_lxWS","35Rnd_556x45_Velko_T4_green_lxWS","35Rnd_556x45_Velko_T4_green_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"50Rnd_556x45_Velko_T4_green_lxWS","50Rnd_556x45_Velko_T4_green_lxWS","50Rnd_556x45_Velko_T4_green_lxWS","50Rnd_556x45_Velko_T4_green_lxWS","35Rnd_556x45_Velko_T4_green_lxWS","35Rnd_556x45_Velko_T4_green_lxWS","35Rnd_556x45_Velko_T4_green_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class I_G_medic_F;
class I_SFIA_medic_lxWS : I_G_medic_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
};
class O_SFIA_medic_lxWS : I_SFIA_medic_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
};
class I_G_Soldier_exp_F;
class I_SFIA_exp_lxWS : I_G_Soldier_exp_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
};
class O_SFIA_exp_lxWS : I_SFIA_exp_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
};
class I_Soldier_AA_F;
class I_SFIA_soldier_aa_lxWS : I_Soldier_AA_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class O_SFIA_soldier_aa_lxWS : I_SFIA_soldier_aa_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class I_Soldier_AT_F;
class I_SFIA_soldier_at_lxWS : I_Soldier_AT_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class O_SFIA_soldier_at_lxWS : I_SFIA_soldier_at_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class I_Soldier_repair_F;
class I_SFIA_repair_lxWS : I_Soldier_repair_F
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","35Rnd_556x45_Velko_reload_tracer_yellow_lxWS","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
};
class O_SFIA_repair_lxWS : I_SFIA_repair_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
};
class O_SFIA_soldier_lxWS;
class O_SFIA_soldier_lite_lxWS : O_SFIA_soldier_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
};
class I_pilot_F;
class I_SFIA_pilot_lxWS : I_pilot_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag"};
weapons[] = {"SMG_02_ParaB_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag"};
respawnWeapons[] = {"SMG_02_ParaB_F","Throw","Put"};
};
//class O_SFIA_pilot_lxWS : I_SFIA_pilot_lxWS

// BLUFOR
// class B_GEN_crew_lxWS : O_GEN_crew_lxWS
// ION Heli Pilot. PDW2000 > CPW 9x19
class B_Helipilot_F;
class B_ION_Helipilot_lxWS : B_Helipilot_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
weapons[] = {"hgun_cpw_ParaB_r1_F","Throw","Put"};
respawnWeapons[] = {"hgun_cpw_ParaB_r1_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};
// Deserter
class B_Tura_deserter_lxWS : I_SFIA_deserter_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
};
class B_Tura_enforcer_lxWS : I_SFIA_enforcer_lxWS
{
magazines[] = {"50Rnd_556x45_Velko_T4_red_lxWS","50Rnd_556x45_Velko_T4_red_lxWS","50Rnd_556x45_Velko_T4_red_lxWS","50Rnd_556x45_Velko_T4_red_lxWS","MiniGrenade","MiniGrenade"};
respawnMagazines[] = {"50Rnd_556x45_Velko_T4_red_lxWS","50Rnd_556x45_Velko_T4_red_lxWS","50Rnd_556x45_Velko_T4_red_lxWS","50Rnd_556x45_Velko_T4_red_lxWS","MiniGrenade","MiniGrenade"};
};
// class B_Tura_hireling_lxWS : I_SFIA_hireling_lxWS
//class B_Tura_medic2_lxWS : I_SFIA_medic2_lxWS
// class B_Tura_thug_lxWS : I_SFIA_thug_lxWS
class B_Tura_soldier_UAV_lxWS : B_Tura_deserter_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","1Rnd_50mm_Smoke_lxWS"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","1Rnd_50mm_Smoke_lxWS"};
};
class B_Tura_watcher_lxWS : I_SFIA_watcher_lxWS
{
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","MiniGrenade"};
respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","MiniGrenade"};
};
// SMG/Ammo Replacement
class B_UN_Helipilot_lxWS : B_Helipilot_F
{
magazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};
// class B_D_Pilot_lxWS : B_T_Pilot_F
// B_D_HeliPilot_lxWS : B_Helipilot_F
class B_soldier_UAV_F;
class B_soldier_UAV_lxWS : B_soldier_UAV_F
{
magazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};
// class B_D_soldier_UAV02_lxWS : B_soldier_UAV_lxWS
// class O_GEN_crew_lxWS : O_crew_F
// class O_SFIA_pilot_lxWS : I_SFIA_pilot_lxWS
class I_soldier_UAV_F;
class I_soldier_UAV_lxWS : I_soldier_UAV_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
weapons[] = {"hgun_cpw_ParaB_Holo_F","hgun_ACPC2_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
respawnWeapons[] = {"hgun_cpw_ParaB_Holo_F","hgun_ACPC2_F","Throw","Put"};
};

// Creating ZGL-40 Mk. II
class Weapon_glaunch_ZGL40_lxWS : Weapon_Base_F
{
displayName = "ZGL-40 Mk. II";
editorSubcategory = "EdSubcat_Launchers";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class glaunch_ZGL40_lxWS
		{
		weapon = "glaunch_ZGL40_lxWS";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 1Rnd_ZGL_Grenade_F
		{
		magazine = "1Rnd_ZGL_Grenade_F";
		count = 1;
		};
	};	
};
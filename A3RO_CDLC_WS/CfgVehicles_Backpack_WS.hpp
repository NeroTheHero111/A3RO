// Backpacks
// Shield
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
// AP-5
class B_UAV_02_backpack_lxWS : Weapon_Bag_Base
{
mass = 475.9802;
};
class I_UAV_02_backpack_lxWS : Weapon_Bag_Base
{
mass = 475.9802;
};
class ION_UAV_02_backpack_lxWS : Weapon_Bag_Base
{
mass = 475.9802;
};
class O_UAV_02_backpack_lxWS : Weapon_Bag_Base
{
mass = 475.9802;
};
// IED
class B_G_UAV_02_IED_backpack_lxWS : Weapon_Bag_Base // Like AP-5
{
mass = 475.9802;
};
class B_Tura_UAV_02_IED_backpack_lxWS : Weapon_Bag_Base
{
mass = 475.9802;
};
// AR-2
class ION_UAV_01_backpack_lxWS : Weapon_Bag_Base
{
mass = 209.3437;
};
class CIV_UAV_01_backpack_lxWS : Weapon_Bag_Base
{
mass = 209.3437;
};

// For Factions
// Snatcher Backpack
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
// Thug Backpack
class B_FieldPack_khk_Bandit_2_lxWS : B_FieldPack_khk // Changing inheritance from B_FieldPack_oli
{
_generalMacro = "B_FieldPack_khk_Bandit_2_lxWS";
scope = 1;
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
// Hireling Backpack
class B_Kitbag_cbr_Hireling_1_lxWS : B_Kitbag_cbr // Changing inheritance from B_Kitbag_rgr
{
_generalMacro = "B_Kitbag_cbr_Hireling_1_lxWS";
scope = 1;
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
// CTRG AR Backpack
class B_AssaultPack_cbr_CTRGAR_lxWS : B_AssaultPack_cbr
{
_generalMacro = "B_AssaultPack_cbr_CTRGAR_lxWS";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Red_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Red_Tracer_lxWS";	
		};
		class _xx_100Rnd_762x51_S77_RT4_lxWS
		{
		count = 2;
		magazine = "100Rnd_762x51_S77_RT4_lxWS";	
		};
	};
};
// Tura Heavy Gunner
class B_FieldPack_green_TURAHG_F : B_FieldPack_green_F
{
_generalMacro = "B_FieldPack_green_TURAHG_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Red_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Red_Tracer_lxWS";	
		};
		class _xx_100Rnd_762x51_S77_RT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_RT4_lxWS";	
		};
	};
};
class I_FieldPack_green_TURAHG_F : B_FieldPack_green_F
{
_generalMacro = "B_FieldPack_green_TURAHG_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Yellow_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Yellow_Tracer_lxWS";	
		};
		class _xx_100Rnd_762x51_S77_YT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_YT4_lxWS";	
		};
	};
};
class O_FieldPack_green_TURAHG_F : B_FieldPack_green_F
{
_generalMacro = "O_FieldPack_green_TURAHG_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Green_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Green_Tracer_lxWS";	
		};
		class _xx_100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";	
		};
	};
};
class O_FieldPack_TURAHG_ocamo : B_FieldPack_ocamo
{
_generalMacro = "O_FieldPack_TURAHG_ocamo";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Green_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Green_Tracer_lxWS";
		};
		class _xx_100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
class O_FieldPack_TURAHG_khk : B_FieldPack_khk
{
_generalMacro = "O_FieldPack_TURAHG_khk";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Green_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Green_Tracer_lxWS";
		};
		class _xx_100Rnd_762x51_S77_GT4_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_GT4_lxWS";
		};
	};
};
// UN Heavy Gunner. Because otherwise it will always load the Tracer Belt first...
class B_LegStrapBag_UNHG_coyote_F : B_LegStrapBag_coyote_F
{
_generalMacro = "B_LegStrapBag_UNHG_coyote_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_762x51_S77_Red_Tracer_lxWS
		{
		count = 1;
		magazine = "100Rnd_762x51_S77_Red_Tracer_lxWS";	
		};
		class _xx_100Rnd_762x51_S77_RT4_lxWS
		{
		count = 2;
		magazine = "100Rnd_762x51_S77_RT4_lxWS";
		};
	};
};
class CfgPatches
{
    class A3RO_CDLC_WS
    {
    name = "Arma 3 Realism Overhaul - Creator DLC Compat - Western Sahara";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"data_f_lxWS_Loadorder",
	"cba_main",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail : asdg_SlotInfo
{
	class compatibleItems
	{
	acc_pointer_IR_arid_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_arid_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_L_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_arid_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_arid_lxWS_LO_L_Green = 1;
	acc_pointer_IR_arid_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_arid_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_L_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_arid_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_lush_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_L_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_lush_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_lush_lxWS_LO_L_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_L_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_lush_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_sand_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_L_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_sand_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_sand_lxWS_LO_L_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_L_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_sand_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_snake_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_L_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_snake_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_snake_lxWS_LO_L_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_L_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_snake_lxWS_VIS_L_Green = 1;
	saber_light_ir_lxWS_VIS = 1;
	saber_light_ir_arid_lxWS_VIS = 1;
	saber_light_ir_khaki_lxWS_VIS = 1;
	saber_light_ir_lush_lxWS_VIS = 1;
	saber_light_ir_sand_lxWS_VIS = 1;
	saber_light_ir_snake_lxWS_VIS = 1;
	};
};

// Adding New Attachments from WS Rail Classes to account for edge cases
class PointerSlot;
class PointerSlot_Rail : PointerSlot
{
	class compatibleItems
	{
	acc_pointer_IR_arid_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_arid_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_L_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_arid_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_arid_lxWS_LO_L_Green = 1;
	acc_pointer_IR_arid_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_arid_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_L_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_arid_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_lush_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_L_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_lush_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_lush_lxWS_LO_L_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_L_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_lush_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_sand_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_L_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_sand_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_sand_lxWS_LO_L_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_L_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_sand_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_snake_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_L_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_snake_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_snake_lxWS_LO_L_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_L_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_snake_lxWS_VIS_L_Green = 1;
	saber_light_ir_lxWS_VIS = 1;
	saber_light_ir_arid_lxWS_VIS = 1;
	saber_light_ir_khaki_lxWS_VIS = 1;
	saber_light_ir_lush_lxWS_VIS = 1;
	saber_light_ir_sand_lxWS_VIS = 1;
	saber_light_ir_snake_lxWS_VIS = 1;
	};
};
class PointerSlot_Launcher : PointerSlot
{
	class compatibleItems
	{
	acc_pointer_IR_arid_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_arid_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_L_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_arid_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_arid_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_arid_lxWS_LO_L_Green = 1;
	acc_pointer_IR_arid_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_arid_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_L_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_arid_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_arid_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_lush_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_L_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_lush_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_lush_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_lush_lxWS_LO_L_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_lush_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_L_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_lush_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_lush_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_sand_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_L_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_sand_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_sand_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_sand_lxWS_LO_L_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_sand_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_L_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_sand_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_sand_lxWS_VIS_L_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_IL_Red = 1;
	acc_pointer_IR_snake_lxWS_LO_ILL_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_L_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_IL_Red = 1;
	acc_pointer_IR_snake_lxWS_HI_ILL_Red = 1;
	acc_pointer_IR_snake_lxWS_VIS_L_Red = 1;
	acc_pointer_IR_snake_lxWS_LO_L_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_IL_Green = 1;
	acc_pointer_IR_snake_lxWS_LO_ILL_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_L_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_IL_Green = 1;
	acc_pointer_IR_snake_lxWS_HI_ILL_Green = 1;
	acc_pointer_IR_snake_lxWS_VIS_L_Green = 1;
	saber_light_ir_lxWS_VIS = 1;
	saber_light_ir_arid_lxWS_VIS = 1;
	saber_light_ir_khaki_lxWS_VIS = 1;
	saber_light_ir_lush_lxWS_VIS = 1;
	saber_light_ir_sand_lxWS_VIS = 1;
	saber_light_ir_snake_lxWS_VIS = 1;
	};
};

// Adding new Muzzle Attachments to Slots for Compatibility
class asdg_MuzzleSlot;
class MuzzleSlot;
class asdg_MuzzleSlot_545R : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_snds_545_stripes_F = 1;
	};
};
class MuzzleSlot_545R: MuzzleSlot
{
	class compatibleItems
	{
	muzzle_snds_545_stripes_F = 1;
	};
};

// Adding new Optics to Rails for Compatibility
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
	optic_glx_lxws = 1;
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	optic_glx_lxws = 1;
	};
};

class CfgAmmo
{
#include "\A3RO_CDLC_WS\WS_CfgAmmo.hpp"
};

class CfgMagazines
{
#include "\A3RO_CDLC_WS\WS_CfgMagazines.hpp"
};

class CfgMagazineWells
{
#include "\A3RO_CDLC_WS\WS_CfgMagazineWells.hpp"
};

class CfgVehicles
{
#include "\A3RO_CDLC_WS\WS_CfgVehicles.hpp"
};

class CfgWeapons
{
#include "\A3RO_CDLC_WS\WS_CfgWeapons.hpp"
};
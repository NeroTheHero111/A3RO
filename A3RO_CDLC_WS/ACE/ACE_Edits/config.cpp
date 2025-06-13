class CfgPatches
{
    class A3RO_CDLC_WS_ACE_Edits
    {
    name = "Arma 3 Realism Overhaul - Western Sahara ACE Compat #3";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"data_f_lxWS_Loadorder",
	"cba_main",
	"ace_common",
	"A3RO_CDLC_WS",
	"A3RO_CDLC_WS_WSI",
	"ace_realisticnames",
	"ace_vehicles",
	"ace_compat_ws",
	"ace_compat_ws_realisticnames",
	"ace_compat_ws_vehicles",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

// Adding new Optics to Rails for Compatibility
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
	ACE_optic_Hamr_arid_2D = 1;
	ACE_optic_Hamr_lush_2D = 1;
	ACE_optic_Hamr_sand_2D = 1;
	ACE_optic_Hamr_snake_2D = 1;
	ACE_optic_Arco_Hex_2D = 1;
	/*ACE_optic_Hamr_arid_PIP = 1;
	ACE_optic_Hamr_lush_PIP = 1;
	ACE_optic_Hamr_sand_PIP = 1;
	ACE_optic_Hamr_snake_PIP = 1;
	ACE_optic_Arco_Hex_PIP = 1;*/
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	ACE_optic_Hamr_arid_2D = 1;
	ACE_optic_Hamr_lush_2D = 1;
	ACE_optic_Hamr_sand_2D = 1;
	ACE_optic_Hamr_snake_2D = 1;
	ACE_optic_Arco_Hex_2D = 1;
	/*ACE_optic_Hamr_arid_PIP = 1;
	ACE_optic_Hamr_lush_PIP = 1;
	ACE_optic_Hamr_sand_PIP = 1;
	ACE_optic_Hamr_snake_PIP = 1;
	ACE_optic_Arco_Hex_PIP = 1;*/
	};
};

// Adding new Laser Modules to Slots for Compatibility
class asdg_SlotInfo;
class asdg_FrontSideRail : asdg_SlotInfo
{
	class compatibleItems
	{
	ACE_DBAL_A3_Arid_Red = 1;
	ACE_DBAL_A3_Arid_Red_II = 1;
	ACE_DBAL_A3_Arid_Red_IP = 1;
	ACE_DBAL_A3_Arid_Red_VP = 1;
	ACE_DBAL_A3_Arid_Red_LR = 1;
	ACE_DBAL_A3_Arid_Red_LR_II = 1;
	ACE_DBAL_A3_Arid_Green = 1;
	ACE_DBAL_A3_Arid_Green_II = 1;
	ACE_DBAL_A3_Arid_Green_IP = 1;
	ACE_DBAL_A3_Arid_Green_VP = 1;
	ACE_DBAL_A3_Arid_Green_LR = 1;
	ACE_DBAL_A3_Arid_Green_LR_II = 1;
	ACE_DBAL_A3_Lush_Red = 1;
	ACE_DBAL_A3_Lush_Red_II = 1;
	ACE_DBAL_A3_Lush_Red_IP = 1;
	ACE_DBAL_A3_Lush_Red_VP = 1;
	ACE_DBAL_A3_Lush_Red_LR = 1;
	ACE_DBAL_A3_Lush_Red_LR_II = 1;
	ACE_DBAL_A3_Lush_Green = 1;
	ACE_DBAL_A3_Lush_Green_II = 1;
	ACE_DBAL_A3_Lush_Green_IP = 1;
	ACE_DBAL_A3_Lush_Green_VP = 1;
	ACE_DBAL_A3_Lush_Green_LR = 1;
	ACE_DBAL_A3_Lush_Green_LR_II = 1;
	ACE_DBAL_A3_Sand_Red = 1;
	ACE_DBAL_A3_Sand_Red_II = 1;
	ACE_DBAL_A3_Sand_Red_IP = 1;
	ACE_DBAL_A3_Sand_Red_VP = 1;
	ACE_DBAL_A3_Sand_Red_LR = 1;
	ACE_DBAL_A3_Sand_Red_LR_II = 1;
	ACE_DBAL_A3_Sand_Green = 1;
	ACE_DBAL_A3_Sand_Green_II = 1;
	ACE_DBAL_A3_Sand_Green_IP = 1;
	ACE_DBAL_A3_Sand_Green_VP = 1;
	ACE_DBAL_A3_Sand_Green_LR = 1;
	ACE_DBAL_A3_Sand_Green_LR_II = 1;	
	ACE_DBAL_A3_Snake_Red = 1;
	ACE_DBAL_A3_Snake_Red_II = 1;
	ACE_DBAL_A3_Snake_Red_IP = 1;
	ACE_DBAL_A3_Snake_Red_VP = 1;
	ACE_DBAL_A3_Snake_Red_LR = 1;
	ACE_DBAL_A3_Snake_Red_LR_II = 1;
	ACE_DBAL_A3_Snake_Green = 1;
	ACE_DBAL_A3_Snake_Green_II = 1;
	ACE_DBAL_A3_Snake_Green_IP = 1;
	ACE_DBAL_A3_Snake_Green_VP = 1;
	ACE_DBAL_A3_Snake_Green_LR = 1;
	ACE_DBAL_A3_Snake_Green_LR_II = 1;
	};
};

class asdg_PistolUnderRail;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;

class CfgAmmo
{
class BulletBase;	
#include "ACE_CfgAmmo_WS.hpp"
};

class CfgMagazines
{
#include "ACE_CfgMagazines_WS.hpp"	
};

class CfgMagazineWells
{
#include "ACE_CfgMagazineWells_WS.hpp"	
};

class CfgVehicles
{
class Item_Base_F;
#include "ACE_CfgVehicles_WS.hpp"
};

class CfgWeapons
{
class Rifle_Base_F;
class Rifle_Long_Base_F;
class ACE_optic_Hamr_2D;
//class ACE_optic_Hamr_PIP;
class ACE_optic_Arco_2D;
//class ACE_optic_Arco_PIP;
class acc_pointer_IR;
class ACE_DBAL_A3_Red;
class ACE_DBAL_A3_Red_II;
class ACE_DBAL_A3_Red_IP;
class ACE_DBAL_A3_Red_VP;
class ACE_DBAL_A3_Red_LR;
class ACE_DBAL_A3_Red_LR_II;
class ACE_DBAL_A3_Green;
class ACE_DBAL_A3_Green_II;
class ACE_DBAL_A3_Green_IP;
class ACE_DBAL_A3_Green_VP;
class ACE_DBAL_A3_Green_LR;
class ACE_DBAL_A3_Green_LR_II;
class UGL_F;
#include "ACE_CfgWeapons_WS.hpp"
};
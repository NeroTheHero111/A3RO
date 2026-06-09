class CfgPatches
{
    class A3RO_CDLC_WS_ACE_Edits
    {
    name = "Arma 3 Realism Overhaul - Western Sahara ACE Compat #3 - Edits";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"data_f_lxWS_Loadorder",
	"cba_main",
	"A3RO_CDLC_WS",
	"A3RO_CDLC_WS_WSI",
	"A3RO_CDLC_WS_WSI_2",
	"ace_ballistics",
	"ace_advanced_ballistics",
	"ace_common",
	"ace_disposable",
	"ace_flashsuppressors",	
	"ace_grenades",	
	"ace_huntir",
	"ace_irlight",
	"ace_nightvision",
	"ace_missileguidance",
	"ace_javelin",	
	"ace_metis",
	"ace_optics",
	"ace_scopes",
	"ace_smallarms",
	"ace_realisticnames",
	"ace_realisticweights",
	"ace_csw",
	"ace_dragon",
	"ace_interaction",
	"ace_explosives",
	"ace_flashlights",
	"ace_spike",
	"ace_quickmount",
	"ace_rearm",
	"ace_reload",
	"ace_captives",
	"ace_compat_ws",
	"ace_compat_ws_realisticnames",	
	"ace_compat_ws_vehicles",
	"A3RO_ACE_Edits",
	"A3RO_CDLC_WS_ACE_Overwrite",
	"A3RO_CDLC_WS_ACE_Overwrite_WSI",
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
class asdg_FrontSideRail;
class asdg_PistolUnderRail;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;

class CfgAmmo
{
class BulletBase;	
#include "WS_ACE_CfgAmmo.hpp"
};

class CfgMagazines
{
#include "WS_ACE_CfgMagazines.hpp"	
};

class CfgMagazineWells
{
#include "WS_ACE_CfgMagazineWells.hpp"	
};

class CfgVehicles
{
class Item_Base_F;
#include "WS_ACE_CfgVehicles.hpp"
};

class CfgWeapons
{
class Rifle_Base_F;
class Rifle_Long_Base_F;
class ACE_optic_Hamr_2D;
//class ACE_optic_Hamr_PIP;
class ACE_optic_Arco_2D;
//class ACE_optic_Arco_PIP;
class UGL_F;
#include "WS_ACE_CfgWeapons.hpp"
};
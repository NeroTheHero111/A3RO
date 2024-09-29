class CfgPatches
{
    class A3RO_ACE_Edits
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #3";
    author = "NeroTheHero111";
    url = "";
    version="2.0.0";
	requiredAddons[] = 
	{
	"ace_advanced_ballistics",
	"ace_common",
	"ace_flashlights",
	"ace_ai",
	"ace_flashsuppressors",
	"ace_realisticnames",
	"ace_realisticweights",
	"ace_scopes",
	"ace_smallarms",
	"ace_optics",
	"A3RO_ACE_Overwrite",
	"A3RO_ACE_Overwrite_WSI",
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
	ACE_optic_Arco_arid_2D = 1;
	ACE_optic_Arco_blk_2D = 1;
	ACE_optic_Arco_ghex_2D = 1;
	ACE_optic_Arco_lush_2D = 1;
	ACE_optic_Arco_arid_PIP = 1;
	ACE_optic_Arco_blk_PIP = 1;
	ACE_optic_Arco_ghex_PIP = 1;
	ACE_optic_Arco_lush_PIP = 1;
	ACE_optic_Hamr_khk_2D = 1;
	ACE_optic_Hamr_khk_PIP = 1;
	ACE_optic_LRPS_ghex_2D = 1;
	ACE_optic_LRPS_tna_2D = 1;
	ACE_optic_LRPS_ghex_PIP = 1;
	ACE_optic_LRPS_tna_PIP = 1;
	ACE_optic_SOS_khk_2D = 1;
	ACE_optic_SOS_khk_PIP = 1;
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	ACE_optic_Arco_arid_2D = 1;
	ACE_optic_Arco_blk_2D = 1;
	ACE_optic_Arco_ghex_2D = 1;
	ACE_optic_Arco_lush_2D = 1;
	ACE_optic_Arco_arid_PIP = 1;
	ACE_optic_Arco_blk_PIP = 1;
	ACE_optic_Arco_ghex_PIP = 1;
	ACE_optic_Arco_lush_PIP = 1;
	ACE_optic_Hamr_khk_2D = 1;
	ACE_optic_Hamr_khk_PIP = 1;
	ACE_optic_LRPS_ghex_2D = 1;
	ACE_optic_LRPS_tna_2D = 1;
	ACE_optic_LRPS_ghex_PIP = 1;
	ACE_optic_LRPS_tna_PIP = 1;
	ACE_optic_SOS_khk_2D = 1;
	ACE_optic_SOS_khk_PIP = 1;
	};
};

// Removing ACE Flash Suppressors from Muzzleslots as I already added my own version to compatible Calibres.
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_338 = 0;	
	};
};
class asdg_MuzzleSlot_45ACP : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_01 = 0;
	};
};
class asdg_MuzzleSlot_45ACP_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_01 = 0;
	};
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_L = 0;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_B = 0;
	};
};
class asdg_MuzzleSlot_65 : asdg_MuzzleSlot_762
{
	class compatibleItems
	{
	ACE_muzzle_mzls_H = 0;
	};
};
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_B = 0;
	};
};
class asdg_MuzzleSlot_93x64 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_93mmg = 0;
	};
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_02 = 0;
	};
};
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_02 = 0;
	};
};
class MuzzleSlot;
class MuzzleSlot_556 : MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_L = 0;
	};
};
class MuzzleSlot_65 : MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_H = 0;
	};
};
class MuzzleSlot_65MG : MuzzleSlot_65
{
	class compatibleItems
	{
	ACE_muzzle_mzls_H = 0;
	};
};
class MuzzleSlot_762 : MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_B = 0;
	};
};

class asdg_FrontSideRail;
class asdg_PistolUnderRail;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;

class CfgAmmo
{
class BulletBase;	
#include "ACE_CfgAmmo.hpp"
};

class CfgMagazines
{
#include "ACE_CfgMagazines.hpp"	
};

class CfgMagazineWells
{
#include "ACE_CfgMagazineWells.hpp"	
};

class CfgVehicles
{
class Item_Base_F;
#include "ACE_CfgVehicles.hpp"
};

class CfgWeapons
{
#include "ACE_CfgWeapons.hpp"
};
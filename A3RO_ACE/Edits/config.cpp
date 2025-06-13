class CfgPatches
{
    class A3RO_ACE_Edits
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #3";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"A3RO_Vanilla_WSI",
	"ace_ballistics",
	"ace_advanced_ballistics",
	"ace_common",
	"ace_disposable",
	"ace_flashsuppressors",	
	"ace_grenades",	
	"ace_huntir",
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
	ACE_optic_Hamr_khk_2D = 1;
	ACE_optic_LRPS_ghex_2D = 1;
	ACE_optic_LRPS_tna_2D = 1;
	ACE_optic_SOS_khk_2D = 1;
	/*ACE_optic_Arco_arid_PIP = 1;
	ACE_optic_Arco_blk_PIP = 1;
	ACE_optic_Arco_ghex_PIP = 1;
	ACE_optic_Arco_lush_PIP = 1;
	ACE_optic_Hamr_khk_PIP = 1;
	ACE_optic_LRPS_ghex_PIP = 1;
	ACE_optic_LRPS_tna_PIP = 1;
	ACE_optic_SOS_khk_PIP = 1;*/
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
	ACE_optic_Hamr_khk_2D = 1;
	ACE_optic_LRPS_ghex_2D = 1;
	ACE_optic_LRPS_tna_2D = 1;
	ACE_optic_SOS_khk_2D = 1;
	/*ACE_optic_Arco_arid_PIP = 1;
	ACE_optic_Arco_blk_PIP = 1;
	ACE_optic_Arco_ghex_PIP = 1;
	ACE_optic_Arco_lush_PIP = 1;
	ACE_optic_Hamr_khk_PIP = 1;
	ACE_optic_LRPS_ghex_PIP = 1;
	ACE_optic_LRPS_tna_PIP = 1;
	ACE_optic_SOS_khk_PIP = 1;*/
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
class ace_missileguidance_type_Metis;
class ace_missileguidance_type_Javelin;

class CfgAmmo
{
class BulletBase;
class MissileBase;
class SubmunitionBase;
class RocketBase;
class M_70mm_SAAMI;
class SubmunitionBullet;
class B_762x54_Tracer_Green;
#include "ACE_CfgAmmo.hpp"
};

class CfgMagazines
{
class CA_Magazine;
class 2Rnd_12Gauge_Pellets;
class 5Rnd_127x108_Mag;
class 6Rnd_12Gauge_Pellets;
class 7Rnd_408_Mag;
class 10Rnd_338_Mag;
class 10Rnd_556x45_KBU_NT_Mag_F;
class 10Rnd_Mk14_762x51_Mag;
class 20Rnd_650x39_Cased_Mag_F;
class 20Rnd_762x51_slr_lxWS; // Name is deliberate in order to be overwritten
class 20Rnd_762x51_Mag;
class 20Rnd_762x51_HK_Mag;
class 20Rnd_556x45_Katiba_NT_Mag;
class 20Rnd_762x51_AK_Mag_NT_F;
class 30Rnd_556x45_AK_Mag_NT_F;
class 30Rnd_556x45_NT_QBZ_Mag_F;
class 30Rnd_65x39_caseless_msbs_mag_NT;
class 30Rnd_556x45_Stanag_NT;
class 30Rnd_556x45_Stanag_Sand_NT;
class 75Rnd_556x45_NT_QBZ_Mag_F;
class 75Rnd_556x45_NT_Hex_QBZ_Mag_F;
class 75Rnd_556x45_NT_Ghex_QBZ_Mag_F;
class 90Rnd_556x45_AK_Mag_NT_F;
class 90Rnd_556x45_AK_Green_Mag_NT_F;
class 100Rnd_65x39_caseless_mag_Tracer;
class 100Rnd_762x51_NG7_Box_NT;
class 150Rnd_556x45_Drum_Green_Mag_NT_F;
class 150Rnd_556x45_Drum_Sand_Mag_NT_F;
class 150Rnd_556x45_Drum_Mag_NT_F;
class 150Rnd_93x64_Mag_NT;
class 200Rnd_65x39_cased_Box;
class 200Rnd_65x39_cased_Box_NT;
class 200Rnd_556x45_Box_NT_F;
class 1Rnd_HE_Grenade_shell;
class UGL_FlareWhite_F;
class 1Rnd_GAA_missiles;
class Titan_AA;
class 16Rnd_9x21_Mag;
class 10Rnd_762x54_Mag;
class 30Rnd_65x39_caseless_mag;
class 30Rnd_65x39_caseless_black_mag;
class 30Rnd_65x39_caseless_khaki_mag;
class 30Rnd_65x39_caseless_msbs_mag;
class 30Rnd_65x39_caseless_green_mag_Tracer;
class 30Rnd_65x39_caseless_mag_Tracer;
class 50Rnd_127x108_Ball;
class 100Rnd_127x99_mag;
class 100Rnd_127x99_mag_Tracer_Green;
class 100Rnd_127x99_mag_Tracer_Red;
class 100Rnd_127x99_mag_Tracer_Yellow;
class 40Rnd_20mm_G_belt;
class 8Rnd_82mm_Mo_guided;
class 8Rnd_82mm_Mo_LG;
class 8Rnd_82mm_Mo_Flare_white;
class 8Rnd_82mm_Mo_Smoke_white;
#include "ACE_CfgMagazines.hpp"	
};

class CfgMagazineWells
{
#include "ACE_CfgMagazineWells.hpp"	
};

class CfgVehicles
{
class Item_Base_F;
class Bag_Base;
#include "ACE_CfgVehicles.hpp"
};

class CfgWeapons
{
#include "ACE_CfgWeapons.hpp"
};
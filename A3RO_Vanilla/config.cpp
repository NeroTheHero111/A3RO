class CfgPatches
{
    class A3RO_Vanilla
    {
    name = "Arma 3 Realism Overhaul - Vanilla";
    author = "NeroTheHero111";
    url = "";
    version="2.0.0";
	requiredAddons[] = 
	{
	"cba_main",		
	"A3_Characters_F",
	"A3_Characters_F_Enoch",
	"A3_Characters_F_Exp",
	"A3_Characters_F_Mark",
	"A3_Sounds_F",
	"A3_Sounds_F_Enoch",
	"A3_Sounds_F_Exp",
	"A3_Sounds_F_Mark",
    "A3_Weapons_F",
	"A3_Weapons_F_Acc",
	"A3_Weapons_F_Enoch",
	"A3_Weapons_F_Exp",
	"A3_Weapons_F_Kart",
	"A3_Weapons_F_Mark",
	"A3_Weapons_F_Mod",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 0;
    };
};

// Adding existing and new hidden Muzzle Attachments to Slots for Compatibility
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};

class asdg_MuzzleSlot_45ACP : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	};
};
class asdg_MuzzleSlot_45ACP_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	};
};
class asdg_MuzzleSlot_46 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_M = 1;
	muzzle_snds_m_khk_F = 1;
	muzzle_snds_m_snd_F = 1;
	};
};
class asdg_MuzzleSlot_545R : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_545 = 1;
	muzzle_snds_545_khk_F = 1;
	muzzle_snds_545_snd_F = 1;
	};
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_58 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_65 : asdg_MuzzleSlot_762
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_H_MG = 0;
	muzzle_snds_H_MG_blk_F = 0;
	muzzle_snds_H_MG_khk_F = 0;
	muzzle_snds_H_SW = 0;
	muzzle_snds_B = 1;
	muzzle_snds_B_arid_F = 1;
	muzzle_snds_B_khk_F = 1;
	muzzle_snds_B_lush_F = 1;
	muzzle_snds_B_snd_F = 1;
	};
};
class asdg_MuzzleSlot_762R : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_762R_PK : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_762R_SVD : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_762R_VZ58 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_93x64 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	muzzle_snds_smg_01_F = 1;
	};
};
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	muzzle_snds_smg_01_F = 1;
	};
};

// Adding existing and new hidden Optics to Rails for Compatibility
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
	optic_ico_01_black_f = 1;
	optic_ico_01_camo_f = 1;
	optic_ico_01_f = 1;
	optic_ico_01_sand_f = 1;
	optic_MRD = 1;
	optic_MRD_black = 1;
	optic_Yorris = 1;
	optic_dcl120 = 1;
	optic_srs = 1;
	};
};
class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	optic_ico_01_black_f = 1;
	optic_ico_01_camo_f = 1;
	optic_ico_01_f = 1;
	optic_ico_01_sand_f = 1;
	optic_MRD = 1;
	optic_MRD_black = 1;
	optic_Yorris = 1;
	optic_dcl120 = 1;
	optic_srs = 1;
	};
};

// Adding existing and new hidden Muzzle Attachments to Vanilla Slots for Compatibility
class MuzzleSlot;
class MuzzleSlot_338 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class MuzzleSlot_45ACP : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	};
};
class MuzzleSlot_545R: MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_545 = 1;
	muzzle_snds_545_khk_F = 1;
	muzzle_snds_545_snd_F = 1;
	};
};
class MuzzleSlot_556 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class MuzzleSlot_57 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_58 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_65 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_65MG : MuzzleSlot_65
{
	class compatibleItems : compatibleItems // Inheritance required for ACR HB to display the correct Muzzle Attachments
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_H_MG = 0;
	muzzle_snds_H_MG_blk_F = 0;
	muzzle_snds_H_MG_khk_F = 0;
	muzzle_snds_H_SW = 0;
	};
};

class MuzzleSlot_762 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_762R : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_B = 1; // Added since there are no other viable options in Vanilla
	muzzle_snds_B_arid_F = 1;
	muzzle_snds_B_khk_F = 1;
	muzzle_snds_B_lush_F = 1;
	muzzle_snds_B_snd_F = 1;
	};
};

class MuzzleSlot_93 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};

class MuzzleSlot_9mm : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	muzzle_snds_smg_01_F = 1;
	};
};

// Creating Additional MuzzleSlots
class MuzzleSlot_408 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_408 = 1;
	muzzle_snds_408_tan = 1;
	};	
};
class MuzzleSlot_375 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_375 = 1;
	muzzle_snds_375_tan = 1;
	};	
};

class CfgAmmo
{
#include "\A3RO_Vanilla\Vanilla_CfgAmmo.hpp"
};

class CfgEditorSubcategories
{
	// Adding Shotgun Editor Subcategory
	class EdSubcat_Shotguns
	{
	displayName = "Shotguns";
	};
	// Editing Collimator Editor Subcategory
	class EdSubcat_TopSlot_Collimators
	{
	displayName = "Collimator Sights and Red Dots";
	};
	// Editing Collimator Editor Subcategory
	class EdSubcat_TopSlot_Optics
	{
	displayName = "Scopes";
	};
};

class CfgMagazines
{
#include "\A3RO_Vanilla\Vanilla_CfgMagazines.hpp"
};

class CfgMagazineWells
{
#include "\A3RO_Vanilla\Vanilla_CfgMagazineWells.hpp"
};

class CfgVehicles
{
#include "\A3RO_Vanilla\Vanilla_CfgVehicles.hpp"
};

class CfgWeapons
{
#include "\A3RO_Vanilla\Vanilla_CfgWeapons.hpp"
};

// Replacing ubiquitous Sound Suppressor MG with 
class CfgMissions
{
	class Campaigns
	{	
		class EastWind
		{
			class Campaign
			{
				class MissionDefault;
				class Missions
				{
					class B_m02_1 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class JoinedNP;
								class BIS_autorifleman : JoinedNP
								{
								add[] = {{"item","muzzle_snds_acp"},{"item","muzzle_snds_M"}};
								};
							};
						};
					};
					class B_m02_2 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class Squad;
								class BIS_autorifleman : Squad
								{
								add[] = {{"item","muzzle_snds_acp"},{"item","muzzle_snds_M"}};
								};
							};
						};
					};	
				};
			};
		};
	};
};
class CfgPatches
{
    class A3RO_ACE_Overwrite_WSI
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #2";
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
	"A3RO_Vanilla_WSI",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class asdg_MuzzleSlot_338;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_45ACP_SMG;
class asdg_MuzzleSlot_46;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_762MG;
class asdg_MuzzleSlot_93x64;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_9MM_SMG;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_PistolUnderRail;
class asdg_UnderSlot;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class CowsSlot_MSBS65;
class Mode_Burst;
class Mode_FullAuto;
class Mode_SemiAuto;
class MuzzleSlot_375;
class MuzzleSlot_408;
class MuzzleSlot_57;
class MuzzleSlot_762R;
class RscStructuredText;

class CfgWeapons
{	
#include "\A3RO_Vanilla\WSI\CfgWeapons_WSI.hpp"
};
class CfgPatches
{
    class A3RO_CDLC_WS_ACE_Overwrite_WSI
    {
    name = "Arma 3 Realism Overhaul - Western Sahara ACE Compat #2 - Overwrites";
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
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class asdg_MuzzleSlot_338;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_46;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_93x64;
class asdg_MuzzleSlot_9MM;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_OpticRail1913_short;
class asdg_OpticSideRail_RPG7;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_PistolUnderRail;
class asdg_UnderSlot;
class CowsSlot_Dovetail;
class CowsSlot_MSBS65;
class Mode_Burst;
class Mode_FullAuto;
class Mode_SemiAuto;
class MuzzleSlot_375;
class MuzzleSlot_408;
class MuzzleSlot_57;
class MuzzleSlot_762R;

class CfgWeapons
{	
#include "\A3RO_CDLC_WS\WSI\WS_CfgWeapons_WSI.hpp"
};
class CfgPatches
{
    class A3RO_CDLC_WS_ACE_Overwrite
    {
    name = "Arma 3 Realism Overhaul - Western Sahara ACE Compat #1 - Overwrites";
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
	"A3RO_ACE_Edits" // In order to apply minor tweaks to Weapons already edited by the Vanilla ACE Compat
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
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
class CfgPatches
{
    class A3RO_CDLC_WS_ACE_Overwrite
    {
    name = "Arma 3 Realism Overhaul - Western Sahara ACE Compat #1";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"data_f_lxWS_Loadorder",
	"cba_main",
	"A3RO_CDLC_WS",
	"A3RO_CDLC_WS_WSI",
	"ace_common",
	"ace_compat_ws",
	"ace_realisticnames",
	"ace_compat_ws_realisticnames",	
	"ace_vehicles",
	"ace_compat_ws_vehicles",
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
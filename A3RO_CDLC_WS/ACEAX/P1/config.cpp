class CfgPatches
{
	class A3RO_WS_ACEAX_Compat_P1
	{
    name = "Arma 3 Realism Overhaul - ACE3 Arsenal Extended - Western Sahara CDLC Compat - Part 1";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"aceax_gearinfo",
	"aceax_acebi_compat",
	"A3RO_ACEAX_ACEBI_Edits",
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
	"A3RO_CDLC_WS_ACE_Edits",
	"A3RO_ACEAX_WS_Edits",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};
class XtdGearInfos 
{
    class CfgWeapons 
	{
	#include "XtdGearInfos.hpp"
	};
};
class XtdGearModels 
{
    #include "XtdGearModels_Common.hpp"
    class CfgWeapons 
	{
	#include "XtdGearModels.hpp"
	};
};
class CfgPatches
{
	class A3RO_ACEAX_WS_3PC
	{
    name = "Arma 3 Realism Overhaul - ACE3 Arsenal Extended - Western Sahara CDLC Compat - 3rd Party Compat Compat"; // Yes Really
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"aceax_WS_config_compat", // ACEAX WS Compat Mod. Given I would have to edit most of it anyway as it was either insufficient or didn't match my naming convention, I elected to just make my own Compat (Big Gang Move, I know). However, my Compat only covers A3RO affected Content. This ensures Uniforms etc are still sorted by the 3rd Party Compat.
	"aceax_gearinfo",
	"aceax_acebi_compat",
	"A3RO_ACEAX_ACEBI_Edits",
	"data_f_lxWS_Loadorder",
	"cba_main",
	"ace_common",
	"A3RO_CDLC_WS",
	"A3RO_CDLC_WS_WSI",
	"A3RO_CDLC_WS_WSI_2",
	"ace_realisticnames",
	"ace_vehicles",
	"ace_compat_ws",
	"ace_compat_ws_realisticnames",
	"ace_compat_ws_vehicles",
	"A3RO_CDLC_WS_ACE_Edits",
	"A3RO_ACEAX_WS_Edits",
	"A3RO_WS_ACEAX_Compat_P1",
	"A3RO_WS_ACEAX_Compat_P2",
	"A3RO_WS_ACEAX_Compat_P3",
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
	#include "\A3RO_CDLC_WS\ACEAX\P1\XtdGearInfos.hpp"
	#include "\A3RO_CDLC_WS\ACEAX\P2\XtdGearInfos.hpp"
	#include "\A3RO_CDLC_WS\ACEAX\P3\XtdGearInfos.hpp"
	};
};
class XtdGearModels 
{
    #include "\A3RO_CDLC_WS\ACEAX\P1\XtdGearModels_Common.hpp"
	#include "\A3RO_CDLC_WS\ACEAX\P2\XtdGearModels_Common.hpp"
	#include "\A3RO_CDLC_WS\ACEAX\P3\XtdGearModels_Common.hpp"
    class CfgWeapons 
	{
	#include "\A3RO_CDLC_WS\ACEAX\P1\XtdGearModels.hpp"
	#include "\A3RO_CDLC_WS\ACEAX\P2\XtdGearModels.hpp"
	#include "\A3RO_CDLC_WS\ACEAX\P3\XtdGearModels.hpp"
	};
};
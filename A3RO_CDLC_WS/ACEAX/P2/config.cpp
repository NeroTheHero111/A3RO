class CfgPatches
{
	class A3RO_WS_ACEAX_Compat_P2
	{
    name = "Arma 3 Realism Overhaul - ACE3 Arsenal Extended - Western Sahara CDLC Compat - Part 2";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"aceax_gearinfo",
	"aceax_acebi_compat",
	"A3RO_ACEAX_ACEBI_Edits",
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

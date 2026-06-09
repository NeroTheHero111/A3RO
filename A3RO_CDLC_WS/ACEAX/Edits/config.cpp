class CfgPatches
{
	class A3RO_ACEAX_WS_Edits // ACEAX Edits needs to load before the patches
	{
    name = "Arma 3 Realism Overhaul - ACE3 Arsenal Extended - Western Sahara CDLC Compat - Edits";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
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
	"A3RO_CDLC_WS_WSI_2",
	"ace_realisticnames",
	"ace_vehicles",
	"ace_compat_ws",
	"ace_compat_ws_realisticnames",
	"ace_compat_ws_vehicles",
	"A3RO_CDLC_WS_ACE_Edits",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};
class XtdGearModels
{
	class CamoBase
	{
		class A3RO_FAL_WOOD
		{
			label="Wood";
			image="\A3RO_CDLC_WS\ACEAX\Edits\A3RO_FAL_WOOD.paa";
		};
		class A3RO_FAL_POLYMER
		{
			label="Polymer";
			image="\A3RO_CDLC_WS\ACEAX\Edits\A3RO_FAL_POLYMER.p.paa";
		};
		class A3RO_FAL_DESERT
		{
			label="Desert";
			image="\A3RO_CDLC_WS\ACEAX\Edits\A3RO_FAL_DESERT.paa";
		};
		class A3RO_FAL_JUNGLE
		{
			label="Jungle";
			image="\A3RO_CDLC_WS\ACEAX\Edits\A3RO_FAL_JUNGLE.paa";
		};
		class A3RO_FAL_SNAKESKIN
		{
			label="Snakeskin";
			image="\A3RO_CDLC_WS\ACEAX\Edits\A3RO_FAL_SNAKESKIN.paa";
		};
		class A3RO_XMS_STRIPES
		{
			label="Stripes";
			image="\A3RO_CDLC_WS\ACEAX\Edits\A3RO_XMS_STRIPES.paa";
		};
	};
};
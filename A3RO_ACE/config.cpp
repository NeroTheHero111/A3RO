class CfgPatches
{
    class A3RO_ACE_Overwrite
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #1";
    author = "NeroTheHero111";
    url = "";
    version="1.0";
	requiredAddons[] = 
	{
	"ace_advanced_ballistics",
	"ace_common",
//	"ace_csw",
//	"ace_dagr",
//	"ace_disposable",
//	"ace_dragon",
//	"ace_explosives",
	"ace_flashlights",
	"ace_flashsuppressors",
//	"ace_grenades",
//	"ace_hellfire",
//	"ace_hot",
//	"ace_huntir",
//	"ace_javelin",
//	"ace_maverick",
//	"ace_metis",
	"ace_ai",
//	"ace_nightvision",
//	"ace_overheating",
	"ace_realisticnames",
	"ace_realisticweights",
	"ace_scopes",
	"ace_smallarms",
	"ace_optics",
	"A3RO_Vanilla",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

// Commented dependencies are for planned future edits that might affect said addons

class CfgAmmo
{
#include "\A3RO_Vanilla\Vanilla_CfgAmmo.hpp"
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
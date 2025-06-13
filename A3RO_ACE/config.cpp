class CfgPatches
{
    class A3RO_ACE_Overwrite
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #1";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"A3RO_Vanilla_WSI",
	"ace_ballistics",
	"ace_advanced_ballistics",
	"ace_common",
	"ace_disposable",
	"ace_flashsuppressors",	
	"ace_grenades",	
	"ace_huntir",
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
class CfgPatches
{
    class A3RO_ACE_Overwrite
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #1 - Value Overwrites";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"A3RO_A3_WSI",
	"A3RO_A3_WSI_2",
	"ace_advanced_ballistics",
	"ace_ballistics",
	"ace_captives",
	"ace_csw",
	"ace_common",
	"ace_disposable",
	"ace_dragon",
	"ace_explosives",
	"ace_flashlights",
	"ace_flashsuppressors",
	"ace_grenades",	
	"ace_huntir",
	"ace_interaction",
	"ace_irlight",
	"ace_javelin",
	"ace_laserpointer",
	"ace_metis",
	"ace_milr",
	"ace_missileguidance",
	"ace_nightvision",
	"ace_optics",
	"ace_overpressure",
	"ace_quickmount",
	"ace_realisticnames",
	"ace_realisticweights",
	"ace_rearm",
	"ace_reload",
	"ace_scopes",
	"ace_smallarms",
	"ace_spike",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo
{
#include "\A3RO_A3\A3_CfgAmmo.hpp"
};

class CfgMagazines
{
#include "\A3RO_A3\A3_CfgMagazines.hpp"
};

class CfgMagazineWells
{
#include "\A3RO_A3\A3_CfgMagazineWells.hpp"
};

class CfgVehicles
{
#include "\A3RO_A3\A3_CfgVehicles.hpp"
};

class CfgWeapons
{	
#include "\A3RO_A3\A3_CfgWeapons.hpp"
};
class CfgPatches
{
    class A3RO_ACE_Tracers_Compat
    {
    name = "Arma 3 Realism Overhaul - ACE Tracers Compat";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
    "ace_tracers",
    "A3RO_ACE_Edits",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo
{
#include "\A3RO_ACE\ACE_Tracers\ACE_Tracers_CfgAmmo.hpp"
};
class CfgMagazines
{
#include "\A3RO_ACE\ACE_Tracers\ACE_Tracers_CfgMagazines.hpp"
};
class CfgMagazineWells
{
#include "\A3RO_ACE\ACE_Tracers\ACE_Tracers_CfgMagazineWells.hpp"
};
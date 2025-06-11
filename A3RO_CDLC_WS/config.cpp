class CfgPatches
{
    class A3RO_CDLC_WS
    {
    name = "Arma 3 Realism Overhaul - Creator DLC Compat - Western Sahara";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"Weapons_F_lxWS", // SUPER DUPER IMPORTANT TO LIST THIS BEFORE Weapons_1_F_lxWS FIRST OTHERWISE ARMA SHITS ITSELF
	"Weapons_1_F_lxWS", // Weapons_1_F_lxWS lists Weapons_F_lxWS as a dependeny so requiring both...means I get a circular Addon dependency (0 Addons) (?) I had to track down for 5 FUCKING HOURS WITH 0 CLUES.
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

// Adding new Muzzle Attachments to Slots for Compatibility
class asdg_MuzzleSlot;
class MuzzleSlot;
class asdg_MuzzleSlot_545R : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_snds_545_stripes_F = 1;
	};
};
class MuzzleSlot_545R: MuzzleSlot
{
	class compatibleItems
	{
	muzzle_snds_545_stripes_F = 1;
	};
};

// Adding new Optics to Rails for Compatibility
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
	optic_glx_lxws = 1;
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	optic_glx_lxws = 1;
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
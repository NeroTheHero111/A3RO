class CfgPatches
{
    class A3RO_Real_Engine_Enhanced_Compat
    {
    name = "Arma 3 Realism Overhaul - Real Engine Enhanced Compat";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"ree_core",
	"ree_weapons",
	"A3RO_A3_WSI",
	"A3RO_A3_WSI_2",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};
class CfgAmmo
{
	// class FlareCore;
	class FlareBase; // Letting REE Edit this one
	class F_40mm_White: FlareBase // Revert
	{
		timeToLive = 44+random 1.001;
		brightness = 12;
		intensity = 1.25e+06;
	};
	// class Flare_82mm_AMOS_White: FlareCore
};
class CfgWeapons
{
	class Default;
	class PistolCore : Default
	{
	fireLightDuration=0.003; // From REE
	};
	class RifleCore : Default
	{
	fireLightDuration=0.003;
	};
}; // Loadorder fixes most conflicts (there were only a few)
class CfgPatches
{
    class A3RO_A3_Aegis_Compat
    {
    name = "Arma 3 Realism Overhaul -  Arma 3 Aegis Compat";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"A3_Aegis_Data_F_Aegis_Loadorder",
	"A3RO_Vanilla_WSI",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

// A preliminary patch to ensure A3RO adjustments overwrite Aegis. There will be clashes and missing overwrites. A proper compat will follow.
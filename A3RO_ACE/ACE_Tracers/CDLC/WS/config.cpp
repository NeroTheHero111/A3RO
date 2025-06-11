class CfgPatches
{
    class A3RO_CDLC_WS_ACE_Tracers_Compat
    {
    name = "Arma 3 Realism Overhaul - ACE Tracers Compat";
    author = "NeroTheHero111";
    url = "";
    version="1.1";
	requiredAddons[] = 
	{
	"Vehicles_F_lxWS",
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
class BulletBase;
	class lxws_b_23x152_he : BulletBase
	{
	model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
	};
};
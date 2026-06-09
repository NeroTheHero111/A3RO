class CfgPatches
{
    class A3RO_ACE_Tracers_Compat
    {
    name = "Arma 3 Realism Overhaul - ACE Tracers Compat";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
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
class BulletBase;
class ShellBase;
class SubmunitionBullet;
#include "\A3RO_A3\ACE\ACE_Tracers\ACE_Tracers_CfgAmmo.hpp"
};
class CfgMagazines
{
class 100Rnd_580x42_Mag_F;
class 100Rnd_580x42_Mag_tracer_F;
class 100Rnd_65x39_caseless_mag;
class 100Rnd_65x39_caseless_mag_tracer;
class 130Rnd_338_Mag;
class 150Rnd_556x45_Drum_Mag_F;
class 150Rnd_556x45_Drum_Mag_tracer_F;
class 150Rnd_762x54_Box;
class 150Rnd_762x54_Box_tracer;
class 150Rnd_93x64_Mag;
class 200Rnd_556x45_Box_F;
class 200Rnd_556x45_Box_tracer_F;
class 200Rnd_65x39_cased_Box;
class 200Rnd_65x39_cased_Box_tracer;
class 30Rnd_580x42_Mag_F;
class 30Rnd_580x42_Mag_tracer_F;
class 30Rnd_65x39_caseless_mag;
class 30Rnd_65x39_caseless_mag_tracer;
class 30Rnd_65x39_caseless_green;
class 30Rnd_65x39_caseless_green_mag_Tracer;
class ACE_20Rnd_762x51_Mag_tracer;
#include "\A3RO_A3\ACE\ACE_Tracers\ACE_Tracers_CfgMagazines.hpp"
};
class CfgMagazineWells
{
#include "\A3RO_A3\ACE\ACE_Tracers\ACE_Tracers_CfgMagazineWells.hpp"
};
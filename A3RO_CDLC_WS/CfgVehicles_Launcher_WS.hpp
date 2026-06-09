// GLX160
class Weapon_glaunch_GLX_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone";
};
class Weapon_glaunch_GLX_camo_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Camo)";
};
class Weapon_glaunch_GLX_ghex_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Green Hex)";
};
class Weapon_glaunch_GLX_hex_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Hex)";
};
class Weapon_glaunch_GLX_tan_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Tan)";
};
class Weapon_glaunch_GLX_snake_lxWS: Weapon_Base_F
{
displayName = "GLX160 - standalone (Snake)";
};
// RPG-32
class Weapon_launch_RPG32_tan_lxWS: Launcher_Base_F
{
displayName = "RPG-32 (Sand)";
};
// Creating ZGL-40 Mk. II
class Weapon_glaunch_ZGL40_lxWS : Weapon_Base_F
{
displayName = "ZGL-40 Mk. II";
editorSubcategory = "EdSubcat_Launchers";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class glaunch_ZGL40_lxWS
		{
		weapon = "glaunch_ZGL40_lxWS";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 1Rnd_ZGL_Grenade_F
		{
		magazine = "1Rnd_ZGL_Grenade_F";
		count = 1;
		};
	};	
};
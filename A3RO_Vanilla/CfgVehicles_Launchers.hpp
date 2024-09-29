// 3den Editor Items. Changing Names

// Vorona
class Weapon_launch_O_Vorona_brown_F : Launcher_Base_F
{
displayName = "9K115-2 Metis-M1 (Coyote)";
};
class Weapon_launch_O_Vorona_green_F : Launcher_Base_F
{
displayName = "9K115-2 Metis-M1";
};

// MAAWS Mk4
class Weapon_launch_MRAWS_green_rail_F : Launcher_Base_F
{
displayName = "M3A1 MAAWS";		
};
class Weapon_launch_MRAWS_olive_rail_F : Launcher_Base_F
{
displayName = "M3A1 MAAWS (Olive)";		
};
class Weapon_launch_MRAWS_sand_rail_F : Launcher_Base_F
{
displayName = "M3A1 MAAWS (Sand)";	
};
class Weapon_launch_MRAWS_green_F : Launcher_Base_F
{
displayName = "M3E1 MAAWS";		
};
class Weapon_launch_MRAWS_olive_F : Launcher_Base_F
{
displayName = "M3E1 MAAWS (Olive)";		
};
class Weapon_launch_MRAWS_sand_F : Launcher_Base_F
{
displayName = "M3E1 MAAWS (Sand)";		
};

// PCML
class Weapon_launch_NLAW_F : Launcher_Base_F
{
displayName = "NLAW";	
};

// RPG-42
class Weapon_launch_RPG32_green_F : Launcher_Base_F
{
displayName = "RPG-32";	
};
class Weapon_launch_RPG32_F : Launcher_Base_F
{
displayName = "RPG-32 (Hex)";	
};
class Weapon_launch_RPG32_ghex_F : Launcher_Base_F
{
displayName = "RPG-32 (Green Hex)";	
};

// Creating RPG-32 Camo Pattern
class Weapon_launch_RPG32_camo_F : Launcher_Base_F
{
displayName = "RPG-32 (Camo)";
editorSubcategory = "EdSubcat_Launchers";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsSecondary";
	class TransportWeapons
	{
		class launch_RPG32_camo_F
		{
		weapon = "launch_RPG32_camo_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class RPG32_F
		{
		magazine = "RPG32_F";
		count = 1;
		};
	};	
};

// Titan MPRL
class Weapon_launch_B_Titan_F : Launcher_Base_F
{
displayName = "Titan MPRL";		
};

// Titan MPRL Short
class Weapon_launch_launch_B_Titan_short_F : Launcher_Base_F
{
displayName = "Mini-Spike";		
};
class Weapon_launch_O_Titan_short_F : Weapon_launch_launch_B_Titan_short_F
{
displayName = "Mini-Spike (Coyote)";		
};
class Weapon_launch_O_Titan_short_ghex_F : Launcher_Base_F
{
displayName = "Mini-Spike (Green Hex)";		
};
class Weapon_launch_I_Titan_short_F : Weapon_launch_launch_B_Titan_short_F
{
displayName = "Mini-Spike (Olive)";		
};
class Weapon_launch_B_Titan_short_tna_F : Launcher_Base_F
{
displayName = "Mini-Spike (Tropic)";		
};
// Vorona Base Class. Changing: Name. Description
class launch_Vorona_base_F : Launcher_Base_F
{
descriptionShort = "ATGM Launcher<br />Tube: 130mm";	
displayName = "9K115-2 Metis-M1 Base Class";	
};

// Vorona Patterns. Changing: Name
class launch_O_Vorona_brown_F : launch_Vorona_base_F
{
displayName = "9K115-2 Metis-M1 (Coyote)";	
};
class launch_O_Vorona_green_F : launch_Vorona_base_F
{
displayName = "9K115-2 Metis-M1";	
};

// MAAWS Base Class. Changing: Description
class launch_MRAWS_base_F : Launcher_Base_F
{
descriptionShort = "Rocket Launcher<br />Tube: 84mm";	
displayName = "M3E1 MAAWS Base Class";	
};

// MAAWS Variants. Changing: Name
class launch_MRAWS_olive_F : launch_MRAWS_base_F
{
displayName = "M3E1 MAAWS (Olive)";	
};
class launch_MRAWS_green_F : launch_MRAWS_base_F
{
displayName = "M3E1 MAAWS";	
};
class launch_MRAWS_sand_F : launch_MRAWS_base_F
{
displayName = "M3E1 MAAWS (Sand)";	
};
class launch_MRAWS_olive_rail_F : launch_MRAWS_olive_F
{
displayName = "M3A1 MAAWS (Olive)";	
};
class launch_MRAWS_green_rail_F : launch_MRAWS_olive_rail_F
{
displayName = "M3A1 MAAWS";	
};
class launch_MRAWS_sand_rail_F : launch_MRAWS_olive_rail_F
{
displayName = "M3A1 MAAWS (Sand)";
};

// PCML. Changing: Name. Description
class launch_NLAW_F : Launcher_Base_F
{
displayName = "NLAW";
descriptionShort = "ATGM Launcher<br />Tube: 115mm";	
};

// RPG-42 Patterns. Changing: Name. Description
class launch_RPG32_F : Launcher_Base_F
{
descriptionShort = "Rocket Launcher<br />Tube: 105mm";	
displayName = "RPG-32 (Hex)";
};
class launch_RPG32_ghex_F : launch_RPG32_F
{
displayName = "RPG-32 (Green Hex)";
};
class launch_RPG32_green_F : launch_RPG32_F
{
displayName = "RPG-32";
};

// Unhiding RPG-32 Camo Pattern
class launch_RPG32_camo_F : launch_RPG32_F
{
displayName = "RPG-32 (Camo)";
scope = 2;
};

// RPG-7. Changing: Description
class launch_RPG7_F : Launcher_Base_F
{
descriptionShort = "Rocket Launcher<br />Tube: 40mm";		
};

// Titan MPRL Base Class. Changing Name. Description
class launch_Titan_base : Launcher_Base_F
{
descriptionShort = "Fictional MANPAD<br />Tube: 127mm";	
displayName = "Titan MPRL Base Class";		
};

// Titan MPRL. Changing Name. Description
class launch_B_Titan_F : launch_Titan_base
{
displayName = "Titan MPRL";	
};

// Titan MPRL Compact. Changing: Name. Description
class launch_Titan_short_base : launch_Titan_base
{
descriptionShort = "ATGM Launcher<br />Tube: 127mm";	
displayName = "Mini-Spike Base Class";	
};

// Titan MPRL Compact. Changing: Name. Description
class launch_B_Titan_short_F : launch_Titan_short_base
{
displayName = "Mini-Spike";	
};
class launch_O_Titan_short_F : launch_Titan_short_base
{
displayName = "Mini-Spike (Coyote)";	
};
class launch_O_Titan_short_ghex_F : launch_O_Titan_short_F
{
displayName = "Mini-Spike (Green Hex)";	
};
class launch_I_Titan_short_F : launch_Titan_short_base
{
displayName = "Mini-Spike (Olive)";	
};
class launch_B_Titan_short_tna_F : launch_B_Titan_short_F
{
displayName = "Mini-Spike (Tropic)";	
};
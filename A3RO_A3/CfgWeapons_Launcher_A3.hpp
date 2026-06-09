// Vorona Base Class. Changing: Name. Description. Optic Zoom.
class launch_Vorona_base_F : Launcher_Base_F
{
descriptionShort = "ATGM Launcher<br />Tube: 130mm<br />Magnification: 6x";	
displayName = "9K115-2 Metis-M1 Base Class";
    class OpticsModes
    {
        class StepScope
        {
        discretefov[] = {0.0416667}; // 6x Fixed
        thermalMode[] = {4,5};
        visionMode[] = {"Normal","Ti"};
        thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.5};
        thermalResolution[] = {-1}; // Based off of Sensor, not Display (No Data) 14 MP
        };
    };
};

// Vorona Patterns. Changing: Name.
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
descriptionShort = "Rocket Launcher<br />Tube: 84mm<br />Magnification: 3x";
displayName = "M3E1 MAAWS Base Class";
    class OpticsModes
    {
        class optic
        {
        opticsZoomInit = 0.0833; // 3x Fixed.
        opticsZoomMax = 0.0833;
        opticsZoomMin = 0.0833;
        visionMode[] = {"Normal"};
        };
    };
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
    class OpticsModes
    {
        class optic
        {
        opticsZoomInit = 0.0833; // 3x Fixed Scope.
        opticsZoomMax = 0.0833;
        opticsZoomMin = 0.0833;
        };
    };
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
descriptionShort = "Rocket Launcher<br />Warhead: 150mm<br />Magnification: 2.5x";
maxRange = 800;
    class OpticsModes
    {
        class optic
        {
        opticsZoomInit = 0.1;
        opticsZoomMax = 0.1;
        opticsZoomMin = 0.1;
        visionMode[] = {"Normal"};
        };
    };
};

// RPG-42 Patterns. Changing: Name. Description
class launch_RPG32_F : Launcher_Base_F
{
descriptionShort = "Rocket Launcher<br />Tube: 105mm<br />Magnification: 2x"; // Ingame its actually 2.3 but I cant edit it until I fix the Reticle
displayName = "RPG-32 (Hex)";
    /*class OpticsModes Requires new Reticle
    {
        class optic
        {
        opticsZoomInit = 0.125;
        opticsZoomMax = 0.125;
        opticsZoomMin = 0.125;
        };
    };*/
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
descriptionShort = "Fictional MANPAD<br />Tube: 127mm<br />Magnification: 4x - 9x";
displayName = "Titan MPRL Base Class";
maxRange = 4800;
maxZeroing = 4800;
    class OpticsModes
    {
        class StepScope
        {
        discretefov[] = {0.0625,0.0277};
        nFovLimit = 0.0625;
        opticsZoomInit = 0.0625;
        opticsZoomMax = 0.0277;
        opticsZoomMin = 0.0625;
        thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.5};
        thermalResolution[] = {-1};
        };
    };
};

// Titan MPRL. Changing Name. Description
class launch_B_Titan_F : launch_Titan_base
{
displayName = "Titan MPRL";
};

// Titan MPRL Compact. Changing: Name. Description
class launch_Titan_short_base : launch_Titan_base
{
descriptionShort = "RF Datalink / Fire-And-Forget Launcher<br />Tube: 75mm<br />Magnification: 4x - 9x";	
displayName = "Mini-Spike Base Class";
maxZeroing = 1500;
magazines[] = {"Titan_AP","Titan_AT"};
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
// SS77 Base Class
class LMG_S77_base_lxWS : Rifle_Long_Base_F
{
descriptionShort = "General Purpose Machine Gun<br />Calibre: 7.62x51mm NATO";
displayName = "SA77 Mk1 Base Class";
initSpeed = 840.029;
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
magazineWell[] = {"S77_762x51"};
};

// SS77 Mk1 Patterns
class LMG_S77_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1";
};
class LMG_S77_AAF_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Camo)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
class LMG_S77_Desert_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Desert)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
class LMG_S77_GHex_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Green Hex)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
class LMG_S77_Hex_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Hex)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};

// SS77 Compact Base Class
class LMG_S77_Compact_base_lxWS : LMG_S77_base_lxWS
{
descriptionShort = "General Purpose Machine Gun<br />Calibre: 7.62x51mm NATO";
displayName = "SA77 Compact Base Class";
initSpeed = 816.56; // 20'' Barrel taking values from Stat Sheet
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};

// SS77 Compact Patterns
class LMG_S77_Compact_lxWS : LMG_S77_Compact_base_lxWS
{
displayName = "SS77 Compact";
};
class LMG_S77_Compact_Snakeskin_lxWS : LMG_S77_Compact_base_lxWS
{
displayName = "SS77 Compact (Snake)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
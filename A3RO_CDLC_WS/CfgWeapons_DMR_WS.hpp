// GM6 Lynx. Changing Name.
class srifle_GM6_snake_lxWS : srifle_GM6_F
{
displayName = "GM6 Lynx 12.7x108 (Snake)";
};

// Creating 12.7x99 Snake Lynx
class srifle_GM6_50BMG_Snake_F : srifle_GM6_50BMG_F
{
author = "Rotators Collective";
baseWeapon = "srifle_GM6_50BMG_Snake_F";
displayName = "GM6 Lynx 12.7x99 (Snake)";
DLC = "ws";
hiddenSelections[] = {"camo","mat1","mat2"};
hiddenSelectionsMaterials[] = {"","lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\gm6_snake.rvmat","lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\gm6_plastic_snake.rvmat"};
hiddenSelectionsTextures[] = {"lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\gm6_snake_co.paa"};
picture = "\lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\ui\icon_srifle_GM6_snake_lxWS_ca.paa";
};

// Mk18. Adjusting Black and Snake Patterns
class srifle_EBR_F;
class srifle_EBR_blk_lxWS : srifle_EBR_F
{
displayName = "Mk 14 Mod 0 EBR (Black)";
};
class srifle_EBR_snake_lxWS : srifle_EBR_F
{
displayName = "Mk 14 Mod 0 EBR (Snake)";
};

// Creating M1A Black and Snake
class EBR_base_F;
class srifle_M1A_ACLS_F : EBR_base_F
{
magazineWell[] += {"M14_308WIN_L"};
};
class srifle_M1A_ACLS_blk_lxWS : srifle_M1A_ACLS_F
{
author = "Rotators Collective";
baseWeapon = "srifle_M1A_ACLS_blk_lxWS";
displayName = "M1A ACLS (Black)";
DLC = "ws";
hiddenSelections[] = {"camo1","camo2"};
hiddenSelectionsMaterials[] = {"\lxWS\weapons_f_lxWS\data\M14\M14_EBR01_blk.rvmat","\lxWS\weapons_f_lxWS\data\M14\M14_EBR02_blk.rvmat"};
hiddenSelectionsTextures[] = {"\lxWS\weapons_f_lxWS\data\M14\M14_EBR01_blk_CO.paa","\lxWS\weapons_f_lxWS\data\M14\M14_EBR02_blk_CO.paa"};
magazines[] = {"20Rnd_Mk14_308WIN_Mag_blk_lxWS"};
picture = "\lxWS\weapons_f_lxWS\data\M14\UI\gear_EBR_blk_X_CA.paa";
};
class srifle_M1A_ACLS_snake_lxWS : srifle_M1A_ACLS_F
{
author = "Rotators Collective";
baseWeapon = "srifle_M1A_ACLS_snake_lxWS";
displayName = "M1A ACLS (Snake)";
DLC = "ws";
hiddenSelections[] = {"camo1","camo2"};
hiddenSelectionsMaterials[] = {"\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR01_snake.rvmat","\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR02_snake.rvmat"};
hiddenSelectionsTextures[] = {"\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR01_snake_CO.paa","\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR02_snake_CO.paa"};
magazines[] = {"20Rnd_Mk14_308WIN_Mag_snake_lxWS"};
picture = "\lxWS\weapons_1_f_lxws\LongRangeRifles\EBR\data\ui\gear_EBR_snake_X_CA.paa";
};
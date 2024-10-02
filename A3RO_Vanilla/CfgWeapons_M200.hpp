// M320 Base Class. Changing: Name. Description
class LRR_base_F : Rifle_Long_Base_F
{
displayName = "M200 Intervention® Base Class";
descriptionShort = "Sniper Rifle<br />Calibre: .408 Cheyenne Tactical";
initSpeed = 832.104;
magazines[] = {"7Rnd_408_Mag",};
magazineWell[] = {"CBA_408CT_Inter","M320_408"};
};

// M320. Changing: Description. Adding Magwell
class srifle_LRR_F : LRR_base_F
{
descriptionShort = "Sniper Rifle<br />Calibre: .408 Cheyenne Tactical";		
displayName = "M200 Intervention® .408";
magazineWell[] = {"CBA_408CT_Inter","M320_408"};
};
class srifle_LRR_camo_F : srifle_LRR_F
{
displayName = "M200 Intervention® .408 (Camo)";
hiddenSelections[] = {"camo"};
hiddenSelectionsMaterials[] = {"\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor.rvmat"};
hiddenSelectionsTextures[] = {"\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor_co.paa"};
picture = "\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\data\UI\gear_M320_LRR_X_CA.paa";
};
class srifle_LRR_tna_F : srifle_LRR_camo_F
{
displayName = "M200 Intervention® .408 (Tropic)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\srifle_LRR_tna_F_co.paa"};
picture = "\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\UI\icon_srifle_LRR_tna_F_X_CA.paa";
};

// Creating M200 .375 Chey Tac Patterns
class srifle_LRR_375_F : srifle_LRR_F
{
_generalMacro = "srifle_LRR_375_F";
baseWeapon = "srifle_LRR_375_F";
descriptionShort = "Sniper Rifle<br />Calibre: .375 Cheyenne Tactical";
displayName = "M200 Intervention® .375";
initSpeed = 938.784;
magazines[] = {"7Rnd_375_Mag"};
magazineWell[] = {"M320_375"};
scope = 2;
};
class srifle_LRR_375_camo_F : srifle_LRR_375_F
{
_generalMacro = "srifle_LRR_375_camo_F";
baseWeapon = "srifle_LRR_375_camo_F";
displayName = "M200 Intervention® .375 (Camo)";
hiddenSelections[] = {"camo"};
hiddenSelectionsMaterials[] = {"\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor.rvmat"};
hiddenSelectionsTextures[] = {"\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor_co.paa"};
picture = "\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\data\UI\gear_M320_LRR_X_CA.paa";
};
class srifle_LRR_375_tna_F : srifle_LRR_375_camo_F
{
_generalMacro = "srifle_LRR_375_tna_F";
baseWeapon = "srifle_LRR_375_tna_F";
displayName = "M200 Intervention® .375 (Tropic)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\srifle_LRR_tna_F_co.paa"};
picture = "\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\UI\icon_srifle_LRR_tna_F_X_CA.paa";
};
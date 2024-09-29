// GM6 Lynx 127x108 Base Class. Changing: Name. Description.
class GM6_base_F : Rifle_Long_Base_F
{
descriptionShort = "Sniper Rifle<br />Calibre: 12.7x108mm";	
displayName = "GM6 Lynx 12.7x108 Base Class";
initSpeed = 780;
magazines[] = {"5Rnd_127x108_Mag"};
magazineWell[] = {"GM6_127x108"};
};

// GM6 Lynx. Changing: Name. Description. Adding GM6 12.7x108 Magwell. Adjusted Mass for Uniformity with 12.7x99 mm Variant.
class srifle_GM6_F : GM6_base_F
{
descriptionShort = "Sniper Rifle<br />Calibre: 12.7x108mm";
displayName = "GM6 Lynx 12.7x108";
magazineWell[] = {"GM6_127x108"};
};
class srifle_GM6_ghex_F : srifle_GM6_F
{
displayName = "GM6 Lynx 12.7x108 (Green Hex)";	
};
class srifle_GM6_camo_F : srifle_GM6_F
{
displayName = "GM6 Lynx 12.7x108 (Hex)";	
};

// Creating GM6 Lynx 12.7x99 Base Class. Removing wrongly inherited Side Accessories. 
class GM6_50BMG_base_F : GM6_base_F
{
aimTransitionSpeed = 0.5;
descriptionShort = "Sniper Rifle<br />Calibre: 12.7x99mm NATO";
displayName = "GM6 Lynx 12.7x99 Base Class";
dexterity = 1;
hasBipod = 1; 
inertia = 1.2;
initSpeed = 780;
magazines[] = {"5Rnd_127x99_Mag"};
magazineWell[] = {"GM6_127x99","CBA_50BMG_AS50"};
model = "\A3\Weapons_F\LongRangeRifles\GM6\GM6_F.p3d"; 
};

// Creating GM6 Lynx 12.7x99 Variants
class srifle_GM6_50BMG_F : GM6_50BMG_base_F
{
_generalMacro = "srifle_GM6_50BMG_F";
baseWeapon = "srifle_GM6_50BMG_F"; 
descriptionShort = "Sniper Rifle<br />Calibre: 12.7x99mm NATO";
displayName = "GM6 Lynx 12.7x99";
picture = "\A3\Weapons_F\LongRangeRifles\GM6\Data\UI\gear_gm6_X_CA.paa";
scope = 2;
UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa"; 
};
class srifle_GM6_50BMG_ghex_F : srifle_GM6_50BMG_F
{
_generalMacro = "srifle_GM6_50BMG_ghex_F";
baseWeapon = "srifle_GM6_50BMG_ghex_F";
displayName = "GM6 Lynx 12.7x99 (Green Hex)";
hiddenSelections[] = {"mat1","mat2"};
hiddenSelectionsMaterials[] = {"\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F.rvmat","\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_plastic.rvmat"};
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa"};
picture = "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\UI\icon_srifle_GM6_ghex_F_X_CA.paa";
};
class srifle_GM6_50BMG_hex_F : srifle_GM6_50BMG_F
{
_generalMacro = "srifle_GM6_50BMG_hex_F";
baseWeapon = "srifle_GM6_50BMG_hex_F";
displayName = "GM6 Lynx 12.7x99 (Hex)";	
hiddenSelections[] = {"camo","mat1","mat2"};
hiddenSelectionsMaterials[] = {"","a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat.rvmat","a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"};
hiddenSelectionsTextures[] = {"\a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat_co.paa"};
picture = "\A3\Weapons_F_Bootcamp\LongRangeRifles\GM6_camo\data\UI\gear_gm6_X_CA.paa";
};
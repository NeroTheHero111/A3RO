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
initSpeed = 832.104;
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
initSpeed = 877.824;
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

// GM6 Lynx 127x108 Base Class. Changing: Name. Description.
class GM6_base_F : Rifle_Long_Base_F
{
descriptionShort = "Sniper Rifle<br />Calibre: 12.7x108mm";	
displayName = "GM6 Lynx 12.7x108 Base Class";
initSpeed = 779.984;
magazines[] = {"5Rnd_127x108_Mag"};
magazineWell[] = {"GM6_127x108"};
};

// GM6 Lynx. Changing: Name. Description. Adding GM6 12.7x108 Magwell. Adjusted Mass for Uniformity with 12.7x99  Variant.
class srifle_GM6_F : GM6_base_F
{
descriptionShort = "Sniper Rifle<br />Calibre: 12.7x108mm";
displayName = "GM6 Lynx 12.7x108";
magazineWell[] = {"GM6_127x108"};
initSpeed = 779.984;
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
initSpeed = 807.111;
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

// ASP-1 Kir Base Class. Changing: Name. Description.
class DMR_04_base_F : Rifle_Long_Base_F
{
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 12.7x55mm";
displayName = "ASP-1 Kir Base Class";
initSpeed = 299.924;
};

// ASP-1. Changing: Name. Description. Since this weapon does not exist, no changes to the actual Calibre have been made
class srifle_DMR_04_F: DMR_04_base_F 
{
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 12.7x55mm";
displayName = "ASP-1 Kir";
initSpeed = 299.924;
};
class srifle_DMR_04_Tan_F : srifle_DMR_04_F
{
displayName = "ASP-1 Kir (Tan)";
};

// CMR-76 Base Class. Changing: Name. Description. Muzze Slot Items. Added new MagazineWell.
class DMR_07_base_F : Rifle_Long_Base_F
{
displayName = "QBU-88 Base Class";
descriptionShort = "Marksman Rifle<br />Calibre: 5.8x42mm";
initSpeed = 894.893;
magazines[] = {"20Rnd_650x39_Cased_Mag_F"};
magazineWell[] = {"CTAR_580x42_DMR"};
};

// CMR-76. Changing: Name.
class srifle_DMR_07_blk_F : DMR_07_base_F
{
displayName = "QBU-88";
};
class srifle_DMR_07_ghex_F : DMR_07_base_F
{
displayName = "QBU-88 (Green Hex)";
};
class srifle_DMR_07_hex_F : DMR_07_base_F
{
displayName = "QBU-88 (Hex)";
};

// Removing Flashlight from Sister Class as the PointerSlot has been disabled
class srifle_DMR_07_blk_F_arco_flash_F : srifle_DMR_07_blk_F
{
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "";	
		slot = "PointerSlot";	
		};
	};
};

// Cyrus Base Class. Changing: Name. Description. Removed FullAuto.
class DMR_05_base_F : Rifle_Long_Base_F
{
descriptionShort = "Marksman Rifle<br />Calibre: 9.3x64mm Brenneke";
displayName = "SVDK Magpul Base Class";
initSpeed = 779.984;
};

// Cyrus. Changing: Name. Materials and Texture to reflect its Firemodes
class srifle_DMR_05_blk_F : DMR_05_base_F
{
displayName = "SVDK Magpul";
descriptionShort = "Marksman Rifle<br />Calibre: 9.3x64mm Brenneke";
hiddenSelectionsMaterials[] = {"A3RO_A3\Textures\DMR_05_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\DMR_05_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_CO.paa"};
initSpeed = 779.984;
};
class srifle_DMR_05_hex_F : srifle_DMR_05_blk_F
{
displayName = "SVDK Magpul (Hex)";
hiddenSelectionsMaterials[] = {"A3RO_A3\Textures\DMR_05_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\DMR_05_01_csat_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_csat_CO.paa"};
};
class srifle_DMR_05_tan_f : srifle_DMR_05_blk_F
{
displayName = "SVDK Magpul (Tan)";	
hiddenSelectionsMaterials[] = {"A3RO_A3\Textures\DMR_05_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\DMR_05_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_tan_CO.paa"};
};

// MAR-10 Base Clas. Changing: Name. Description.
class DMR_02_base_F : Rifle_Long_Base_F
{
displayName = "Bad News LVOA® 16'' .338 LM Base Class";
descriptionShort = "Marksman Rifle<br />Calibre: .338 Lapua Magnum";
initSpeed = 767.182; // Calculated for 16'' Barrel.
};

// MAR-10. Changing: Name
class srifle_DMR_02_F : DMR_02_base_F
{
descriptionShort = "Marksman Rifle<br />Calibre: .338 Lapua Magnum";
displayName = "''Bad News'' LVOA® 16'' .338 LM";
initSpeed = 767.182;
magazineWell[] = {"CBA_338LM_AI","MAR10_338"};
};
class srifle_DMR_02_camo_F : srifle_DMR_02_F
{
displayName = "''Bad News'' LVOA® 16'' .338 LM (Camo)";
};
class srifle_DMR_02_sniper_F : srifle_DMR_02_F
{
displayName = "''Bad News'' LVOA® 16'' .338 LM (Sand)";
};

// Creating ULR .300 WM  Base Class
class DMR_02_300WM_base_F : DMR_02_base_F
{
_generalMacro = "DMR_02_300WM_base_F";
aimTransitionSpeed = 0.7;
dexterity = 1.68;
displayName = "Bad News LVOA® 16'' .300 WM  Base Class";
descriptionShort = "Marksman Rifle<br />Calibre: .300 Winchester Magnum";
inertia = 0.9;
initSpeed = 809.854;
magazines[] = {"10Rnd_300WM_Ball"};
magazineWell[] = {"CBA_300WM_BadNews"};
model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F.p3d";
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA.paa";
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa"; 
};

// ULR .300 WM 
class srifle_DMR_300WM_02_F : DMR_02_300WM_base_F
{
_generalMacro = "srifle_DMR_300WM_02_F";	
baseWeapon = "srifle_DMR_300WM_02_F";
displayName = "''Bad News'' LVOA® 16'' .300 WM";
scope = 2;
};
class srifle_DMR_300WM_02_camo_F : srifle_DMR_300WM_02_F
{
_generalMacro = "srifle_DMR_300WM_02_camo_F";	
baseWeapon = "srifle_DMR_300WM_02_camo_F";	
displayName = "''Bad News'' LVOA® 16'' .300 WM  (Camo)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_dazzle_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_dazzle_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_camo_X_CA.paa";
scope = 2;
};
class srifle_DMR_300WM_02_sniper_F : srifle_DMR_300WM_02_F
{
_generalMacro = "srifle_DMR_300WM_02_sniper_F";	
baseWeapon = "srifle_DMR_300WM_02_sniper_F";	
displayName = "''Bad News'' LVOA® 16'' .300 WM  (Sand)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_sniper_X_CA.paa";
scope = 2;
};

// Creating ZRG-20 Mk. I
class DMR_02_Railgun_base_F : Rifle_Long_Base_F
{
_generalMacro = "DMR_02_Railgun_base_F";
aiDispersionCoefX = 2;
aiDispersionCoefY = 3;
aimTransitionSpeed = 0.7;
author = "Bohemia Interactive";
bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
caseless[] = {"",1,1,1};
cursor = "EmptyCursor";
cursoraim = "coil";
descriptionShort = "Fictional Railgun Prototype<br />Calibre: 20x82mm Slug";
dexterity = 1.68;
displayName = "ZRG-20 Mk. I Base Class";
distanceZoomMax = 500;
distanceZoomMin = 500;
DLC = "Mark";
drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",0.251189,1,20}; 
handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"}; 
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\DMR_02_01_railgun_CO.paa","\A3RO_A3\Textures\DMR_02_02_railgun_CO.paa"};
inertia = 0.9;
initSpeed = 2058.01;
magazines[] = {"5Rnd_20mm_RailGun_Mag"};
magazineWell[] = {"ZRG_20MM"}; // For some Reason I can equip MX Magazines if this is not defined.
overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page06_ca.paa"; 
recoil = "recoil_gm6";
reloadAction = "GestureReloadDMR02";
reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_reload",1,1,10}; 
soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083}; 
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa"; 
};

class srifle_DMR_02_Railgun_F : DMR_02_Railgun_base_F
{
_generalMacro = "srifle_DMR_02_Railgun_F";
baseWeapon = "srifle_DMR_02_Railgun_F";
displayName = "ZRG-20 Mk. I";
model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F.p3d";
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA.paa";
scope = 2;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_railgun_03_f";
		slot = "MuzzleSlot";
		};
	};
};

// Rahim Base Class. Changing: Name. Description.
class DMR_01_base_F : Rifle_Long_Base_F
{
descriptionShort = "Prototype Marksman Rifle <br/>Calibre: 7.62x54mmR";
displayName = "VS-121 Base Class";
initSpeed = 829.971;
};

// Rahim. Changing: Name.
class srifle_DMR_01_F : DMR_01_base_F
{
descriptionShort = "Prototype Marksman Rifle <br/>Calibre: 7.62x54mmR";
displayName = "VS-121";
initSpeed = 829.971;
};
// Changing Suppressor
class srifle_DMR_01_DMS_snds_F : srifle_DMR_01_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_vs121_F";
		slot = "MuzzleSlot";
		};
	};
};
class srifle_DMR_01_DMS_snds_BI_F : srifle_DMR_01_DMS_snds_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_vs121_F";
		slot = "MuzzleSlot";
		};
	};
};

// Mk-I Base Class. Changing Name. Description. Magwell. Fixing Mode Order
class DMR_03_base_F : Rifle_Long_Base_F
{
displayName = "MK-I EMR Base Class";
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 7.62x51mm NATO";	
initSpeed = 916.229;
magazineWell[] = {"CBA_762x51_MkI_EMR"};
};
// Mk-I EMR. Changing: Name. Magwell
class srifle_DMR_03_F : DMR_03_base_F
{
displayName = "MK-I EMR";
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 7.62x51mm NATO";
initSpeed = 916.229;
magazineWell[] = {"CBA_762x51_MkI_EMR"};
scope = 1;
};
class srifle_DMR_03_multicam_F : srifle_DMR_03_F
{
displayName = "MK-I EMR (Camo)";
scope = 1;
};
class srifle_DMR_03_khaki_F : srifle_DMR_03_F
{
displayName = "MK-I EMR (Khaki)";
scope = 1;
};
class srifle_DMR_03_tan_F : srifle_DMR_03_F
{
displayName = "MK-I EMR (Sand)";
scope = 1;
};
class srifle_DMR_03_woodland_F : srifle_DMR_03_F
{
displayName = "MK-I EMR (Woodland)";
scope = 1;
};

// Creating SIG 556 DMR Base Class
class DMR_SIG556_base_F : DMR_03_base_F
{
_generalMacro = "DMR_SIG556_base_F";
aimTransitionSpeed = 0.7;
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
dexterity = 1.68;
displayName = "SIG 556 DMR 18'' Base Class";
inertia = 0.8;
initSpeed = 916.229;
magazines[] = {"20Rnd_223REM_Mag_NT_F"};
magazineWell[] = {"SIG556_223R"};
model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\DMR_03_F.p3d";
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa"; 
};

// Creating SIG 556 DMR .308 Winchester Patterns.
class srifle_DMR_SIG556_F : DMR_SIG556_base_F
{
_generalMacro = "srifle_DMR_SIG556_F";
baseWeapon = "srifle_DMR_SIG556_F";
displayName = "SIG 556 DMR 18''";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\DMR_03_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\DMR_03_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_X_CA.paa";
scope = 2;
};
class srifle_DMR_SIG556_multicam_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_multicam_F";
baseWeapon = "srifle_DMR_SIG556_multicam_F";	
displayName = "SIG 556 DMR 18'' (Camo)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\DMR_03_01_multicam_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_multicam_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_multicam_X_CA.paa";
};
class srifle_DMR_SIG556_khaki_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_khaki_F";
baseWeapon = "srifle_DMR_SIG556_khaki_F";	
displayName = "SIG 556 DMR 18'' (Khaki)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\DMR_03_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\DMR_03_01_khaki_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_khaki_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_khaki_X_CA.paa";
};
class srifle_DMR_SIG556_tan_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_tan_F";
baseWeapon = "srifle_DMR_SIG556_tan_F";	
displayName = "SIG 556 DMR 18'' (Sand)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\DMR_03_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_tan_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_tan_X_CA.paa";
};
class srifle_DMR_SIG556_woodland_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_woodland_F";
baseWeapon = "srifle_DMR_SIG556_woodland_F";	
displayName = "SIG 556 DMR 18'' (Woodland)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\DMR_03_01_woodland_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_woodland_X_CA.paa";
};

// Creating SIG 556 DMR Subclasses with Attachments for Unit Replacement
class srifle_DMR_SIG556_tan_AMS_LP_F : srifle_DMR_SIG556_tan_F
{
_generalMacro = "srifle_DMR_SIG556_tan_AMS_LP_F";
scope = 1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";	
		};
		class LinkedItemsOptic
		{
		item = "optic_AMS_snd";
		slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
		item = "bipod_01_F_snd";
		slot = "UnderBarrelSlot";
		};
	};
};
class srifle_DMR_SIG556_AMS_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_AMS_F";
scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		item = "optic_AMS";
		slot = "CowsSlot";
		};
	};
};

// Creating KBU-97A Base
class DMR_KBU97A_base_F : DMR_07_base_F
{
_generalMacro = "DMR_KBU97A_base_F";
descriptionShort = "Marksman Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KBU-97A Base Class";
initSpeed = 987.248;
magazines[] = {"10Rnd_556x45_KBU_NT_Mag_F"};
magazineWell[] = {"KBU97A_556x45","KBU97A_223REM"};
};
class srifle_DMR_KBU97A_blk_F : DMR_KBU97A_base_F
{
_generalMacro = "srifle_DMR_QBU97A_blk_F";
baseWeapon = "srifle_DMR_QBU97A_blk_F";
displayName = "KBU-97A";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"}; 
picture = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\UI\icon_srifle_DMR_07_blk_F_X_CA.paa";
scope = 2;
};
class srifle_DMR_KBU97A_ghex_F : DMR_KBU97A_base_F
{
_generalMacro = "srifle_DMR_QBU97A_ghex_F";
baseWeapon = "srifle_DMR_QBU97A_ghex_F";	
displayName = "KBU-97A (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_ghex_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\UI\icon_srifle_DMR_07_ghex_F_X_CA.paa";
scope = 2;
};
class srifle_DMR_KBU97A_hex_F : DMR_KBU97A_base_F
{
_generalMacro = "srifle_DMR_QBU97A_hex_F";
baseWeapon = "srifle_DMR_QBU97A_hex_F";	
displayName = "KBU-97A (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_hex_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\UI\icon_srifle_DMR_07_hex_F_X_CA.paa";
scope = 2;
};

// Mk18 EBR Base. Changing: Name. Description. Adding Magwells. Fixing Mode Order
class EBR_base_F : Rifle_Long_Base_F
{
descriptionShort = "Battle Rifle<br />Calibre: 7.62x51mm NATO";
displayName = "Mk 14 Mod 0 EBR Base Class";
initSpeed = 790.956;
magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
};

// Mk18 EBR. Changing: Name. Description
class srifle_EBR_F : EBR_base_F
{
displayName = "Mk 14 Mod 0 EBR";
descriptionShort = "Battle Rifle<br />Calibre: 7.62x51mm NATO";
initSpeed = 790.956;
};

// Mk 14 Base Classes. Adding Magwells. Removing Full Auto. Changing: Name. Description
class DMR_06_base_F : Rifle_Long_Base_F
{
descriptionShort = "Sniper Rifle<br />Calibre: 7.62x51mm NATO";
displayName = "M21 SWS Base Class";
initSpeed = 828.447;
magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
};
class DMR_06_hunter_base_F : DMR_06_base_F
{
magazines[] = {"20Rnd_762x51_Mag"};
};

// Mk 14. Changing: Name.
class srifle_DMR_06_hunter_F : DMR_06_hunter_base_F
{
displayName = "M21 SWS";
};
class srifle_DMR_06_camo_F : DMR_06_base_F
{
displayName = "M25 SWS (Camo)";
};
class srifle_DMR_06_olive_F : srifle_DMR_06_camo_F
{
displayName = "M25 SWS";
};

// SDAR Base Class. Changing: Name. Description
class SDAR_base_F : Rifle_Base_F
{
descriptionShort = "Fictional Underwater Rifle<br />Calibre: 5.56x45mm UW";
displayName="SDAR Base Class";
};
// SDAR. Changing: Name. Description
class arifle_SDAR_F : SDAR_base_F
{
descriptionShort = "Fictional Underwater Rifle<br />Calibre: 5.56x45mm UW";
displayName="SDAR";
scope = 1;
};

// Creating RFB
class arifle_RFB_F : arifle_SDAR_F
{
_generalMacro = "arifle_RFB_F";	
baseWeapon = "arifle_RFB_F";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
displayName="RFB";
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\rfb_co","A3\Weapons_F\Rifles\SDAR\data\rfb_uw_co"};
initSpeed = 819.912;
magazines[] = {"20Rnd_762x51_slr_lxWS"}; // RFB Uses Fal Mags = Not compatible with existing Magazine Classes. However, creating new FAL Mags would cause duplicates when WS is loaded
magazineWell[] = {"CBA_762x51_FAL"}; // UNLESS you're a genius like me and just use the exact same classname so they get overwritten when the DLC is loaded.
scope = 2;
};

// SPAR-17 Base Class. Changing: Name. Description. Removing Full Auto
class arifle_SPAR_03_base_F : Rifle_Base_F
{
_generalMacro = "arifle_SPAR_03_base_F";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
displayName = "MR308 A3-28 20'' Base Class";
magazines[] = {"20Rnd_308WIN_HK_Mag"};
magazineWell[] = {"MR308_308WIN","CBA_762x51_HK417"};
initSpeed = 817.474;
};

// SPAR-17 Patterns. Changing: Name.
class arifle_SPAR_03_blk_F : arifle_SPAR_03_base_F
{
_generalMacro = "arifle_SPAR_03_blk_F";
baseWeapon = "arifle_SPAR_03_blk_F";
displayName = "MR308 A3-28 20''";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa","\A3RO_A3\Textures\arifle_SPAR_03_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa"};
}; 
class arifle_SPAR_03_khk_F : arifle_SPAR_03_base_F
{
_generalMacro = "arifle_SPAR_03_khk_F";
baseWeapon = "arifle_SPAR_03_khk_F";
displayName = "MR308 A3-28 20'' (Khaki)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_co.paa","\A3RO_A3\Textures\arifle_SPAR_03_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa"};
};
class arifle_SPAR_03_snd_F : arifle_SPAR_03_base_F
{
_generalMacro = "arifle_SPAR_03_snd_F";
baseWeapon = "arifle_SPAR_03_snd_F";
displayName = "MR308 A3-28 20'' (Sand)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_co.paa","\A3RO_A3\Textures\arifle_SPAR_03_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa"};
};

// Creating Mk 14 Mod 0 EBR Subclass with Attachments for Unit Replacement
class srifle_EBR_DMS_LP_BI_F : srifle_EBR_F
{
_generalMacro = "srifle_EBR_DMS_LP_BI_F";
scope = 1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";	
		};
		class LinkedItemsOptic
		{
		item = "optic_DMS";
		slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
		item = "bipod_01_F_blk";
		slot = "UnderBarrelSlot";
		};
	};
};

// Creating M1A ALCS
class srifle_M1A_ACLS_F : EBR_base_F
{
_generalMacro = "srifle_M1A_ACLS_F";
aimTransitionSpeed = 0.8;
baseWeapon = "srifle_M1A_ACLS_F";
dexterity = 1.3;
displayName = "M1A ACLS";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
hiddenSelectionsTextures[] = {"\a3\weapons_f\longrangerifles\ebr\data\m14_ebr01_co.paa","\a3\weapons_f\longrangerifles\ebr\data\m14_ebr02_co.paa"};
inertia = 0.7;
initSpeed = 834.848;
magazines[] = {"20Rnd_308WIN_Mag"};
magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL","M14_308WIN_S","M14_308WIN_L"};
model = "\A3\weapons_F\LongRangeRifles\EBR\EBR_F.p3d";
picture = "\A3\weapons_F\LongRangeRifles\EBR\Data\UI\gear_EBR_X_CA.paa";
scope = 2;
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
};

// Changing Supressor to Sand like all other Patrol Units
class B_Patrol_Soldier_Marksman_weapon_F : srifle_EBR_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_B_snd_F";
		slot = "MuzzleSlot";
		};
	};
};
// Creating M200 w/ Suppressor
class srifle_LRR_camo_LRPS_snds_F : srifle_LRR_camo_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		item = "optic_LRPS";
		slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_408";
		slot = "MuzzleSlot";
		};
	};
};
class srifle_LRR_tna_LRPS_snds_F : srifle_LRR_tna_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		item = "optic_LRPS_tna_F";
		slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_408";
		slot = "MuzzleSlot";
		};
	};
};
// Changing Suppressor on QBU-88
class srifle_DMR_07_blk_DMS_Snds_F : srifle_DMR_07_blk_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_58_blk_F";
		slot = "MuzzleSlot";
		};
	};
};
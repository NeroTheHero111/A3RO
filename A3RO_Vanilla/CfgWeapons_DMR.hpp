// ASP-1 Kir Base Class. Changing: Name. Description.
class DMR_04_base_F : Rifle_Long_Base_F
{
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 12.7x55mm";
displayName = "ASP-1 Kir Base Class";
initSpeed = 300;
};

// ASP-1. Changing: Name. Description. Since this weapon does not exist, no changes to the actual Calibre have been made
class srifle_DMR_04_F: DMR_04_base_F 
{
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 12.7x55mm";
displayName = "ASP-1 Kir";
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
initSpeed = 950;
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
initSpeed = 780;
};

// Cyrus. Changing: Name. Materials and Texture to reflect its Firemodes
class srifle_DMR_05_blk_F : DMR_05_base_F
{
displayName = "SVDK Magpul";
descriptionShort = "Marksman Rifle<br />Calibre: 9.3x64mm Brenneke";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\DMR_05_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\DMR_05_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_CO.paa"};
};
class srifle_DMR_05_hex_F : srifle_DMR_05_blk_F
{
displayName = "SVDK Magpul (Hex)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\DMR_05_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\DMR_05_01_csat_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_csat_CO.paa"};
};
class srifle_DMR_05_tan_f : srifle_DMR_05_blk_F
{
displayName = "SVDK Magpul (Tan)";	
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\DMR_05_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\DMR_05_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_tan_CO.paa"};
};

// MAR-10 Base Clas. Changing: Name. Description.
class DMR_02_base_F : Rifle_Long_Base_F
{
displayName = "Bad News LVOA® 16'' .338 LM Base Class";
descriptionShort = "Marksman Rifle<br />Calibre: .338 Lapua Magnum";
initSpeed = 765.6576;
};

// MAR-10. Changing: Name
class srifle_DMR_02_F : DMR_02_base_F
{
descriptionShort = "Marksman Rifle<br />Calibre: .338 Lapua Magnum";
displayName = "''Bad News'' LVOA® 16'' .338 LM";
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

// Creating ULR .300 WM Base Class
class DMR_02_300WM_base_F : DMR_02_base_F
{
_generalMacro = "DMR_02_300WM_base_F";
aimTransitionSpeed = 0.7;
dexterity = 1.68;
displayName = "Bad News LVOA® 16'' .300 WM Base Class";
descriptionShort = "Marksman Rifle<br />Calibre: .300 Winchester Magnum";
inertia = 0.9;
initSpeed = 784.86;
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
displayName = "''Bad News'' LVOA® 16'' .300 WM (Camo)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_dazzle_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_dazzle_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_camo_X_CA.paa";
scope = 2;
};
class srifle_DMR_300WM_02_sniper_F : srifle_DMR_300WM_02_F
{
_generalMacro = "srifle_DMR_300WM_02_sniper_F";	
baseWeapon = "srifle_DMR_300WM_02_sniper_F";	
displayName = "''Bad News'' LVOA® 16'' .300 WM (Sand)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_sniper_X_CA.paa";
scope = 2;
};

// Creating XRG-20 Mk. II
class DMR_02_Railgun_base_F : DMR_02_base_F
{
	class EventHandlers
	{
	fired = "_this execVM '\A3RO_Vanilla\A3RO_Railgun.sqf'";	
	};
_generalMacro = "DMR_02_Railgun_base_F";
caseless[] = {"",1,1,1};
cursor = "EmptyCursor";
cursoraim = "coil";
descriptionShort = "Fictional Railgun Prototype<br />Calibre: 20x82mm Slug";
displayName = "XRG-20 Mk. II Base Class";
dispersion = 29;
initSpeed = 2058;
magazines[] = {"5Rnd_20mm_RailGun_Mag"};
magazineWell[] = {"XRG_20MM"}; // For some Reason I can equip MX Magazines if this is not defined.
recoil = "recoil_gm6";
};

class srifle_DMR_02_Railgun_F : DMR_02_Railgun_base_F
{
_generalMacro = "srifle_DMR_02_Railgun_F";
baseWeapon = "srifle_DMR_02_Railgun_F";
displayName = "XRG-20 Mk. II";
model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F.p3d";
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA.paa";
scope = 2;
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa"; 
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
initSpeed = 830;
};

// Rahim. Changing: Name.
class srifle_DMR_01_F : DMR_01_base_F
{
descriptionShort = "Prototype Marksman Rifle <br/>Calibre: 7.62x54mmR";
displayName = "VS-121";
};

// Mk-I Base Class. Changing Name. Description. Magwell. Fixing Mode Order
class DMR_03_base_F : Rifle_Long_Base_F
{
displayName = "MK-I EMR Base Class";
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 7.62x51mm NATO";	
magazineWell[] = {"CBA_762x51_MkI_EMR"};
};
// Mk-I EMR. Changing: Name. Magwell
class srifle_DMR_03_F : DMR_03_base_F
{
displayName = "MK-I EMR";
descriptionShort = "Fictional Marksman Rifle<br />Calibre: 7.62x51mm NATO";
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
displayName = "SIG 556 DMR 21'' Base Class";
inertia = 0.8;
initSpeed = 916.2288;
magazines[] = {"20Rnd_223Rem_Mag_NT_F"};
magazineWell[] = {"SIG556_223R"};
model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\DMR_03_F.p3d";
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa"; 
};

// Creating SIG 556 DMR .308 Winchester Patterns.
class srifle_DMR_SIG556_F : DMR_SIG556_base_F
{
_generalMacro = "srifle_DMR_SIG556_F";
baseWeapon = "srifle_DMR_SIG556_F";
displayName = "SIG 556 DMR 21''";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\DMR_03_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\DMR_03_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_X_CA.paa";
scope = 2;
};
class srifle_DMR_SIG556_multicam_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_multicam_F";
baseWeapon = "srifle_DMR_SIG556_multicam_F";	
displayName = "SIG 556 DMR 21'' (Camo)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\DMR_03_01_multicam_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_multicam_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_multicam_X_CA.paa";
};
class srifle_DMR_SIG556_khaki_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_khaki_F";
baseWeapon = "srifle_DMR_SIG556_khaki_F";	
displayName = "SIG 556 DMR 21'' (Khaki)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\DMR_03_01.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\DMR_03_01_khaki_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_khaki_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_khaki_X_CA.paa";
};
class srifle_DMR_SIG556_tan_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_tan_F";
baseWeapon = "srifle_DMR_SIG556_tan_F";	
displayName = "SIG 556 DMR 21'' (Sand)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\DMR_03_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_tan_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_tan_X_CA.paa";
};
class srifle_DMR_SIG556_woodland_F : srifle_DMR_SIG556_F
{
_generalMacro = "srifle_DMR_SIG556_woodland_F";
baseWeapon = "srifle_DMR_SIG556_woodland_F";	
displayName = "SIG 556 DMR 21'' (Woodland)";
hiddenSelections[] = {"Camo1","Camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\DMR_03_01_woodland_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland_CO.paa"};
picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_woodland_X_CA.paa";
};

// Creating SIG 556 DMR Subclass with Attachments for Unit Replacement
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

// Creating KBU-97A Base
class DMR_KBU97A_base_F : DMR_07_base_F
{
_generalMacro = "DMR_KBU97A_base_F";
descriptionShort = "Marksman Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KBU-97A Base Class";
initSpeed = 1044.245;
magazines[] = {"10Rnd_556x45_KBU_NT_Mag_F"};
magazineWell[] = {"KBU97A_556x45","KBU97A_223Rem"};
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
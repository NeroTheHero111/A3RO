// Kozlice Base Class. Changing: Name. Adding CBA Magwell. Adding Description. InitSpeed to Typicalspeed
class sgun_HunterShotgun_01_base_F : Rifle_Long_Base_F
{
descriptionShort = "Over-Under Shotgun<br />Gauge: 12";
displayName = "690 Field Base Class";
initSpeed = -1;
magazines[] = {"2Rnd_12Gauge_Pellets"};
	magazineWell[] = {"HunterShotgun_01_12GA","CBA_12g_2rnds","CBA_12g_1rnd"};
};

// Kozlice. Changing: Name.
class sgun_HunterShotgun_01_F : sgun_HunterShotgun_01_base_F
{
displayName = "690 Field 28''";	
};

// Kozlice Sawed-Off Base Class. Changing: Name. Initspeed Halved
class sgun_HunterShotgun_01_sawedoff_base_F : sgun_HunterShotgun_01_base_F
{
displayName = "690 Field (Sawed-Off) Base Class";
initSpeed = -0.9303; // New and improved Calculations. Wowzers!
};

// Kozlice Sawed-Off. Changing: Name
class sgun_HunterShotgun_01_sawedoff_F : sgun_HunterShotgun_01_sawedoff_base_F
{
displayName = "690 Field (Sawed-Off)";	
};

// Base Classes. Changing: Name. Description
class arifle_AK12_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 7.62x39mm";
displayName = "AK-15 Base Class";
initSpeed = 717.804;
};
class arifle_AK12_GL_base_F : arifle_AK12_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 7.62x39mm<br />Underbarrel Grenade Launcher<br />Calibre: 40mmCL";	
displayName = "AK-15 GP-25 Base Class";
};
class arifle_AK12U_base_F : arifle_AK12_base_F
{
displayName = "AK-15C Base Class";
initSpeed = 665.074;
};

// Vanilla AK-12. Changing: Name (TLDR AK-15 = 7.62, AK-12 = 5.45)
class arifle_AK12_F : arifle_AK12_base_F
{
displayName = "AK-15";
};
class arifle_AK12_arid_F : arifle_AK12_base_F
{
displayName = "AK-15 (Arid)";
};
class arifle_AK12_lush_F : arifle_AK12_base_F
{
displayName = "AK-15 (Lush)";
};

// Vanilla AK-12 GP-25. Changing: Name
class arifle_AK12_GL_F : arifle_AK12_GL_base_F
{
displayName = "AK-15 GP-25";	
};
class arifle_AK12_GL_arid_F : arifle_AK12_GL_base_F
{
displayName = "AK-15 GP-25 (Arid)";		
};
class arifle_AK12_GL_lush_F : arifle_AK12_GL_base_F
{
displayName = "AK-15 GP-25 (Lush)";	
};

// Vanilla AKU-12. Changing: Name
class arifle_AK12U_F : arifle_AK12U_base_F
{
displayName = "AK-15C";
};
class arifle_AK12U_arid_F : arifle_AK12U_base_F
{
displayName = "AK-15C (Arid)";
};
class arifle_AK12U_lush_F : arifle_AK12U_base_F
{
displayName = "AK-15C (Lush)";
};

// AKM Base Class. Changing: Name
class arifle_AKM_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 7.62x39mm";
displayName = "AKM Base Class";	
initSpeed = 717.804;
magazines[] = {"30Rnd_762x39_Mag_F"};
};

// AKM. Changing: Name
class arifle_AKM_F : arifle_AKM_base_F
{
displayName = "AKM";
class FullAuto;
class Single;
};

// Creating Rusty AKM
class arifle_AKM_Rusty_F : arifle_AKM_F
{
baseWeapon = "arifle_AKM_Rusty_F";
displayName = "AKM (Weathered)";
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\akm_rust_co.paa","A3RO_A3\Textures\akm_wood_worn_co.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
	class FullAuto : FullAuto // 5.5 from 4.5 MOA
	{
	dispersion = 0.001599884;
	};
	class FullAuto_medium : FullAuto
	{
	dispersion = 0.001599884;
	};
	class Single : Single
	{
	dispersion = 0.001599884;
	};
};

// AKS Base Class. Changing: Name
class arifle_AKS_base_F : Rifle_Base_F
{
displayName = "AKS-74U Base Class";	
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm";
initSpeed = 734.873;
magazines[] = {"30Rnd_545x39_Mag_F"};
};

// AKS-74U. Changing: Name
class arifle_AKS_F : arifle_AKS_base_F
{
displayName = "AKS-74U";		
};

// RPK-12 Base Class. Changing: Name. Description
class arifle_RPK12_base_F : arifle_AK12_base_F
{
descriptionShort = "Fictional Light Machine Gun<br />Calibre: 7.62x39mm";
displayName = "RPK-12 Base Class";
};

// RPK-12 Patterns. Changing: Name. Description. Hiding from Arsenal. Calibre not Changing on this Class to maximize Compatibility for Modded Factions that I cannot take into account.
class arifle_RPK12_F : arifle_RPK12_base_F
{
displayName = "[ A3RO INCOMPATIBLE ] RPK-12";
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Fictional Light Machine Gun<br />Calibre: 7.62x39mm";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class arifle_RPK12_arid_F : arifle_RPK12_base_F
{
displayName = "[ A3RO INCOMPATIBLE ] RPK-12 (Arid)";
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Light Machine Gun<br />Calibre: 7.62x39mm";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};	
class arifle_RPK12_lush_F : arifle_RPK12_base_F
{
displayName = "[ A3RO INCOMPATIBLE ] RPK-12 (Lush)";
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Light Machine Gun<br />Calibre: 7.62x39mm";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};	

// Creating A3RO AK-12 Base Class
class arifle_AK12_545_base_F : arifle_AK12_base_F
{
_generalMacro = "arifle_AK12_545_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm";
displayName = "AK-12 Base Class";
initSpeed = 900.075;
magazines[] = {"30Rnd_545x39_Mag_Green_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
};

// Creating A3RO AK-12 GP-25 Base Class
class arifle_AK12_GL_545_base_F : arifle_AK12_GL_base_F
{
_generalMacro = "arifle_AK12_GL_545_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm<br />Underbarrel Grenade Launcher<br />Calibre: 40mmCL";
displayName = "AK-12 GP-25 Base Class";
initSpeed = 900.075;
magazines[] = {"30Rnd_545x39_Mag_Green_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";	
};	

// Creating A3RO AK-12C Base Class
class arifle_AK12U_545_base_F : arifle_AK12U_base_F
{
_generalMacro = "arifle_AK12U_545_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm";
displayName = "AK-12C Base Class";
DLC = "Enoch";
initSpeed = 850.088; // Given that AK-12 has 900 (above average Vel. for that Barrel Length), I will apply a higher Value here too.
magazines[] = {"30Rnd_545x39_Mag_Green_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";	
};

// Creating RPK-16 Base Class. Removing 2Rnd Burst
class arifle_RPK16_base_F : arifle_RPK12_base_F
{
_generalMacro = "arifle_RPK16_base_F";
descriptionShort = "Light Machine Gun<br />Calibre: 5.45x39mm";
displayName = "RPK-16 Base Class";
initSpeed = 958.901;
magazines[] = {"95Rnd_545x39_RPK16_Mag_T4_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
};

// A3RO AK-12 Patterns
class arifle_AK12_545_F : arifle_AK12_545_base_F
{
_generalMacro = "arifle_AK12_545_F";
baseWeapon = "arifle_AK12_545_F";
displayName = "AK-12";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
scope = 2;		
};
class arifle_AK12_545_arid_F : arifle_AK12_545_base_F
{
_generalMacro = "arifle_AK12_545_arid_F";	
baseWeapon = "arifle_AK12_545_arid_F";
displayName = "AK-12 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK12_545_lush_F : arifle_AK12_545_base_F
{
_generalMacro = "arifle_AK12_545_lush_F";	
baseWeapon = "arifle_AK12_545_lush_F";
displayName = "AK-12 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// A3RO AK-12 GP-25 Patterns
class arifle_AK12_GL_545_F : arifle_AK12_GL_545_base_F
{
_generalMacro = "arifle_AK12_545_GL_F";
baseWeapon = "arifle_AK12_545_GL_F";
displayName = "AK-12 GP-25";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
scope = 2;		
};
class arifle_AK12_GL_545_arid_F : arifle_AK12_GL_545_base_F
{
_generalMacro = "arifle_AK12_545_GL_arid_F";	
baseWeapon = "arifle_AK12_545_GL_arid_F";
displayName = "AK-12 GP-25 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK12_GL_545_lush_F : arifle_AK12_GL_545_base_F
{
_generalMacro = "arifle_AK12_545_GL_lush_F";	
baseWeapon = "arifle_AK12_545_GL_lush_F";
displayName = "AK-12 GP-25 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
scope = 2;
};

// A3RO AK-12C Patterns
class arifle_AK12U_545_F : arifle_AK12U_545_base_F
{
_generalMacro = "arifle_AK12U_545_F";
baseWeapon = "arifle_AK12U_545_F";
displayName = "AK-12C";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";
scope = 2;		
};
class arifle_AK12U_545_arid_F : arifle_AK12U_545_base_F
{
_generalMacro = "arifle_AK12U_545_arid_F";	
baseWeapon = "arifle_AK12U_545_arid_F";
displayName = "AK-12C (Arid)";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK12U_545_lush_F : arifle_AK12U_545_base_F
{
_generalMacro = "arifle_AK12U_545_lush_F";	
baseWeapon = "arifle_AK12U_545_lush_F";
displayName = "AK-12C (Lush)";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_lush_F_CA.paa";
scope = 2;
};

// RPK-16 Patterns
class arifle_RPK16_F : arifle_RPK16_base_F
{
_generalMacro = "arifle_RPK16_F";
baseWeapon = "arifle_RPK16_F";
displayName = "RPK-16";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"A3RO_A3\Textures\AK12_F_1_308.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\AK12_ak12_1_308_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_F_CA.paa";
scope = 2;		
};
class arifle_RPK16_arid_F : arifle_RPK16_base_F
{
_generalMacro = "arifle_RPK16_arid_F";
baseWeapon = "arifle_RPK16_arid_F";
displayName = "RPK-16 (Arid)";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"A3RO_A3\Textures\AK12_F_1_308_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\AK12_ak12_1_308_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
magazines[] = {"95Rnd_545x39_RPK16_Arid_Mag_T4_F"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_arid_F_CA.paa";
scope = 2;		
};
class arifle_RPK16_lush_F : arifle_RPK16_base_F
{
_generalMacro = "arifle_RPK16_lush_F";
baseWeapon = "arifle_RPK16_lush_F";
displayName = "RPK-16 (Lush)";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"A3RO_A3\Textures\AK12_F_1_308_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\AK12_ak12_1_308_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
magazines[] = {"95Rnd_545x39_RPK16_Lush_Mag_T4_F"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_lush_F_CA.paa";
scope = 2;		
};

// Creating RPK-16 Subclass with Attachments for Unit Replacement
class arifle_RPK16_lush_arco_pointer_F : arifle_RPK16_lush_F
{
_generalMacro = "arifle_RPK16_lush_arco_pointer_F";
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
		item = "optic_Arco_lush_F";
		slot = "CowsSlot";	
		};
	};
};
class arifle_RPK16_lush_arco_snds_pointer_F : arifle_RPK16_lush_F
{
_generalMacro = "arifle_RPK16_lush_arco_snds_pointer_F";
scope = 1;	
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";	
		};
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_545_khk_F";
		slot = "MuzzleSlot";				
		};
		class LinkedItemsOptic
		{
		item = "optic_Arco_lush_F";
		slot = "CowsSlot";	
		};
	};		
};
class arifle_RPK16_lush_holo_snds_pointer_F : arifle_RPK16_lush_F
{
_generalMacro = "arifle_RPK16_lush_holo_snds_pointer_F";
scope = 1;		
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";	
		};
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_545_khk_F";
		slot = "MuzzleSlot";				
		};
		class LinkedItemsOptic
		{
		item = "optic_Holosight_lush_F";
		slot = "CowsSlot";
		};
	};			
};

// Creating AK-19 Base Class
class arifle_AK19_base_F : arifle_AK12_base_F
{
_generalMacro = "arifle_AK19_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "AK-19 Base Class";
initSpeed = 910.133;
magazines[] = {"30Rnd_556x45_AK_Mag_RT_F"};
magazineWell[] = {"CBA_556x45_AK","TR3_223REM"};
};

// AK-19 Patterns
class arifle_AK19_F : arifle_AK19_base_F
{
_generalMacro = "arifle_AK19_F";
baseWeapon = "arifle_AK19_F";
displayName = "AK-19";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
scope = 2;		
};
class arifle_AK19_arid_F : arifle_AK19_base_F
{
_generalMacro = "arifle_AK19_arid_F";	
baseWeapon = "arifle_AK19_arid_F";
displayName = "AK-19 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK19_lush_F : arifle_AK19_base_F
{
_generalMacro = "arifle_AK19_lush_F";	
baseWeapon = "arifle_AK19_lush_F";
displayName = "AK-19 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// Creating AK-19 GP-25 Base Class
class arifle_AK19_GL_base_F : arifle_AK12_GL_base_F
{
_generalMacro = "arifle_AK19_GL_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40mmCL";
displayName = "AK-19 GP-25 Base Class";
initSpeed = 910.133;
magazines[] = {"30Rnd_556x45_AK_Mag_RT_F"};
magazineWell[] = {"CBA_556x45_AK","TR3_223REM"};
};

// AK-19 GP-25 Patterns
class arifle_AK19_GL_F : arifle_AK19_GL_base_F
{
_generalMacro = "arifle_AK19_GL_F";
baseWeapon = "arifle_AK19_GL_F";
displayName = "AK-19 GP-25";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
scope = 2;		
};
class arifle_AK19_GL_arid_F : arifle_AK19_GL_base_F
{
_generalMacro = "arifle_AK19_GL_arid_F";	
baseWeapon = "arifle_AK19_GL_arid_F";
displayName = "AK-19 GP-25 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK19_GL_lush_F : arifle_AK19_GL_base_F
{
_generalMacro = "arifle_AK19_GL_lush_F";	
baseWeapon = "arifle_AK19_GL_lush_F";
displayName = "AK-19 GP-25 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_lush_F_CA.paa";
scope = 2;
};

// Creating AK-308 Base Class
class arifle_AK308_base_F : arifle_AK12_base_F
{
_generalMacro = "arifle_AK308_base_F";
descriptionShort = "Battle Rifle<br />Calibre: 7.62x51mm NATO";
displayName = "AK-308 Base Class";
initSpeed = 759.867;
magazines[] = {"20Rnd_762x51_AK_Mag_RT_F"};
magazineWell[] = {"AK308_762x51","AK308_308WIN"};
};

// AK-308 Patterns
class arifle_AK308_F : arifle_AK308_base_F
{
_generalMacro = "arifle_AK308_F";
baseWeapon = "arifle_AK308_F";
displayName = "AK-308";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_308.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_308_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
scope = 2;		
};
class arifle_AK308_arid_F : arifle_AK308_base_F
{
_generalMacro = "arifle_AK308_arid_F";	
baseWeapon = "arifle_AK308_arid_F";
displayName = "AK-308 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_308_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_308_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK308_lush_F : arifle_AK308_base_F
{
_generalMacro = "arifle_AK308_lush_F";	
baseWeapon = "arifle_AK308_lush_F";
displayName = "AK-308 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_308_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_308_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// Creating TR3 Base Class
class arifle_TR3_base_F : arifle_AK19_base_F
{
_generalMacro = "arifle_TR3_base_F";
descriptionShort = "Sporting Rifle<br />Calibre: 5.45x39 / .223 Remington / 7.62x39";
displayName = "TR3 Base Class";
initSpeed = 910.133;
magazines[] = {""};
magazineWell[] = {""};
};

// TR3 5.45x39 Patterns
class arifle_TR3_545_F : arifle_TR3_base_F
{
_generalMacro = "arifle_TR3_545_F";
baseWeapon = "arifle_TR3_545_F";
descriptionShort = "Sporting Rifle<br />Calibre: 5.45x39mm";
displayName = "TR3 5.45x39";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
initSpeed = 900.075;
magazines[] = {"30Rnd_545x39_Mag_NT_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
scope = 2;		
};
class arifle_TR3_545_arid_F : arifle_TR3_545_F
{
_generalMacro = "arifle_TR3_545_arid_F";	
baseWeapon = "arifle_TR3_545_arid_F";
displayName = "TR3 5.45x39 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_TR3_545_lush_F : arifle_TR3_545_F
{
_generalMacro = "arifle_TR3_545_lush_F";	
baseWeapon = "arifle_TR3_545_lush_F";
displayName = "TR3 5.45x39 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// TR3 .223 Remington Patterns
class arifle_TR3_223REM_F : arifle_TR3_base_F
{
_generalMacro = "arifle_TR3_223REM_F";
baseWeapon = "arifle_TR3_223REM_F";
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "TR3 .223";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
magazines[] = {"30Rnd_223REM_AK_Mag_NT_F"};
magazineWell[] = {"TR3_223REM"};
scope = 2;	
};
class arifle_TR3_223REM_arid_F : arifle_TR3_223REM_F
{
_generalMacro = "arifle_TR3_223REM_arid_F";	
baseWeapon = "arifle_TR3_223REM_arid_F";
displayName = "TR3 .223 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_TR3_223REM_lush_F : arifle_TR3_223REM_F
{
_generalMacro = "arifle_TR3_223REM_lush_F";	
baseWeapon = "arifle_TR3_223REM_lush_F";
displayName = "TR3 .223 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// TR3 7.62x39 Patterns
class arifle_TR3_762_F : arifle_TR3_base_F
{
_generalMacro = "arifle_TR3_762_F";
baseWeapon = "arifle_TR3_762_F";
descriptionShort = "Sporting Rifle<br />Calibre: 7.62x39mm";
displayName = "TR3 7.62x39";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
initSpeed = 717.804;
magazines[] = {"30Rnd_762x39_AK12_NT_Mag_F"};
magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
scope = 2;	
};
class arifle_TR3_762_arid_F : arifle_TR3_762_F
{
_generalMacro = "arifle_TR3_762_arid_F";	
baseWeapon = "arifle_TR3_762_arid_F";
displayName = "TR3 7.62x39 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
magazines[] = {"30Rnd_762x39_AK12_NT_Arid_Mag_F"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_TR3_762_lush_F : arifle_TR3_762_F
{
_generalMacro = "arifle_TR3_762_lush_F";	
baseWeapon = "arifle_TR3_762_lush_F";
displayName = "TR3 7.62x39 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\AK12_F_1_TR3_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\AK12_ak12_1_TR3_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
magazines[] = {"30Rnd_762x39_AK12_NT_Lush_Mag_F"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// Creating AKSU-K
class arifle_AKS_Semi_F : arifle_AKS_F
{
_generalMacro = "arifle_AKS_Semi_F";	
baseWeapon = "arifle_AKS_Semi_F";
descriptionShort = "Sports Carbine<br />Calibre: 5.45x39mm";
displayName = "AKSU-K";
magazines[] = {"30Rnd_545x39_Mag_NT_F"};
};

// WASR Base Class
class arifle_WASR_base_F : arifle_AKM_base_F
{
displayName = "WASR Base Class";
hiddenSelectionsTextures[] = {"A3\Weapons_F_Exp\Rifles\AKM\Data\akm_co.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_wood_co.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
magazines[] = {""};
magazineWell[] = {""};
picture = "\A3\Weapons_F_Exp\Rifles\AKM\Data\UI\arifle_AKM_F_X_CA.paa";
};

// Creating WASR-2
class arifle_WASR_545_F : arifle_WASR_base_F
{
_generalMacro = "arifle_WASR_545_F";
baseWeapon = "arifle_WASR_545_F";
descriptionShort = "Sporting Rifle<br />Calibre: 5.45x39mm";
displayName = "WASR-2";
initSpeed = 900.075;
magazines[] = {"30Rnd_545x39_Mag_NT_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
scope = 2;
};

// Creating WASR-3
class arifle_WASR_556_F : arifle_WASR_base_F
{
_generalMacro = "arifle_WASR_556_F";
baseWeapon = "arifle_WASR_556_F";
descriptionShort = "Sporting Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "WASR-3";
initSpeed = 910.133;
magazines[] = {"30Rnd_556x45_AK_Mag_NT_F"};
magazineWell[] = {"CBA_556x45_AK","TR3_223REM"};
scope = 2;	
};

// Creating WASR-10
class arifle_WASR_762_F : arifle_WASR_base_F
{
_generalMacro = "arifle_WASR_762_F";
baseWeapon = "arifle_WASR_762_F";
descriptionShort = "Sporting Rifle<br />Calibre: 7.62x39mm";
displayName = "WASR-10";
magazines[] = {"30Rnd_762x39_NT_Mag_F"};
magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
scope = 2;	
};

// CAR-95 Base Class. Changing: Name. Description. Fixing Mode Order
class arifle_CTAR_base_F : Rifle_Base_F
{
initSpeed = 930.25;
descriptionShort = "Assault Rifle<br />Calibre: 5.8x42mm";
displayName = "QBZ-95-1 Base Class";
magazines[] = {"30Rnd_580x42_Mag_F"};
};

// CAR-95. Changing: Name.
class arifle_CTAR_blk_F : arifle_CTAR_base_F
{
displayName = "QBZ-95-1 FTU™";
}
class arifle_CTAR_ghex_F : arifle_CTAR_base_F
{
displayName = "QBZ-95-1 FTU™ (Green Hex)";
}
class arifle_CTAR_hex_F : arifle_CTAR_base_F
{
displayName = "QBZ-95-1 FTU™ (Hex)";
}

// CAR-95-1 Base Class. Changing: Changing: Name. Description
class arifle_CTARS_base_F : Rifle_Base_F
{
descriptionShort = "Light Machine Gun<br />Calibre: 5.8x42mm";
displayName = "QJB-95-1 FTU™ LSW Base Class";	
initSpeed = 969.874;
magazines[] = {"100Rnd_580x42_T4_Mag_F"};
};

// CAR-95-1. Changing: Name.
class arifle_CTARS_blk_F : arifle_CTARS_base_F
{
displayName = "QJB-95-1 FTU™ LSW";
};
class arifle_CTARS_ghex_F : arifle_CTARS_base_F
{
displayName = "QJB-95-1 FTU™ LSW (Green Hex)";
magazines[] = {"100Rnd_580x42_ghex_T4_Mag_F"};
};
class arifle_CTARS_hex_F : arifle_CTARS_base_F
{
displayName = "QJB-95-1 FTU™ LSW (Hex)";	
magazines[] = {"100Rnd_580x42_hex_T4_Mag_F"};
};

// CAR-95 GL Base Class. Changing: Name. Description. Grenade Launcher Name
class arifle_CTAR_GL_base_F : arifle_CTAR_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.8x42mm<br />Underbarrel Grenade Launcher<br />Calibre: 35mmCL";
displayName = "QBZ-95-1 FTU™ QLG-10A Base Class";
};

// CAR-95 GL. Changing: Name. Description.
class arifle_CTAR_GL_blk_F : arifle_CTAR_GL_base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A";
};
class arifle_CTAR_GL_ghex_F : arifle_CTAR_GL_base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A (Green Hex)";	
};
class arifle_CTAR_GL_hex_F : arifle_CTAR_GL_base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A (Hex)";
};

// Creating QBZ-97 Base Class
class arifle_QBZ97_base_F : arifle_CTAR_base_F
{
_generalMacro = "arifle_QBZ97_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "QBZ-97 FTU™ Base Class";
initSpeed = 930.86;
magazines[] = {"30Rnd_556x45_RT_QBZ_Mag_F"};
magazineWell[] = {"QBZ97_556x45","QBZ97_556x45_Large","T97_223R","T97_223R_Large"};	
};

// QBZ-97 Patterns
class arifle_QBZ97_blk_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_QBZ97_blk_F";
baseWeapon = "arifle_QBZ97_blk_F";
displayName = "QBZ-97 FTU™";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_ghex_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_QBZ97_ghex_F";
baseWeapon = "arifle_QBZ97_ghex_F";	
displayName = "QBZ-97 FTU™ (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_hex_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_QBZ97_hex_F";
baseWeapon = "arifle_QBZ97_hex_F";	
displayName = "QBZ-97 FTU™ (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_hex_F_X_CA.paa";
scope = 2;
};

// Creating QBZ-97 QLG-10A Base Class
class arifle_QBZ97_GL_base_F : arifle_CTAR_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 35mmCL";
displayName = "QBZ-97 FTU™ QLG-10A Base Class";
initSpeed = 930.86;
magazines[] = {"30Rnd_556x45_RT_QBZ_Mag_F"};
magazineWell[] = {"QBZ97_556x45","QBZ97_556x45_Large","T97_223R","T97_223R_Large"};	
};

// QBZ-97 QLG-10A Patterns
class arifle_QBZ97_GL_blk_F : arifle_QBZ97_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_blk_F";
baseWeapon = "arifle_QBZ97_GL_blk_F";
displayName = "QBZ-97 FTU™ QLG-10A";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_blk_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_GL_ghex_F : arifle_QBZ97_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_ghex_F";
baseWeapon = "arifle_QBZ97_GL_ghex_F";	
displayName = "QBZ-97 FTU™ QLG-10A (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_ghex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_GL_hex_F : arifle_QBZ97_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_hex_F";
baseWeapon = "arifle_QBZ97_GL_hex_F";	
displayName = "QBZ-97 FTU™ QLG-10A (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_bhex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_hex_F_X_CA.paa";
scope = 2;
};

// Creating QJB-97 Base Class
class arifle_QJB97_base_F : arifle_CTARS_base_F
{
_generalMacro = "arifle_QJB97_base_F";
descriptionShort = "Light Machine Gun<br />Calibre: 5.56x45mm NATO";
displayName = "QJB-97 LSW Base Class";
initSpeed = 969.264;
magazines[] = {"75Rnd_556x45_T4_QBZ_Mag_F"};
magazineWell[] = {"QBZ97_556x45","QBZ97_556x45_Large","T97_223R","T97_223R_Large"};	
};

// QJB-97 Patterns
class arifle_QJB97_blk_F : arifle_QJB97_base_F
{
_generalMacro = "arifle_QJB97_blk_F";
baseWeapon = "arifle_QJB97_blk_F";
displayName = "QJB-97 FTU™ LSW";
hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\rifles\ctar\data\ctar_f_1_co.paa","\a3\weapons_f_exp\rifles\ctars\data\ctars_f_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA.paa";
scope = 2;
};
class arifle_QJB97_ghex_F : arifle_QJB97_base_F
{
_generalMacro = "arifle_QJB97_ghex_F";
baseWeapon = "arifle_QJB97_ghex_F";	
displayName = "QJB-97 FTU™ LSW (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"};
magazines[] = {"75Rnd_556x45_T4_Ghex_QBZ_Mag_F"};
picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_QJB97_hex_F : arifle_QJB97_base_F
{
_generalMacro = "arifle_QJB97_hex_F";
baseWeapon = "arifle_QJB97_hex_F";	
displayName = "QJB-97 FTU™ LSW (Hex)";
magazines[] = {"75Rnd_556x45_T4_Hex_QBZ_Mag_F"};
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_hex_F_X_CA.paa";
scope = 2;
};

// Creating T97NSR-A Base Class
class arifle_T97NSRA_base_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_T97NSRA_base_F";
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "T97NSR-A Base Class";
magazines[] = {"30Rnd_223REM_NT_QBZ_Mag_F"};
magazineWell[] = {"T97_223R","T97_223R_Large"};
};

// T97NSR-A Patterns
class arifle_T97NSRA_blk_F : arifle_T97NSRA_base_F
{
_generalMacro = "arifle_T97NSRA_blk_F";
baseWeapon = "arifle_T97NSRA_blk_F";
displayName = "T97NSR-A";
hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\rifles\ctar\data\ctar_f_1_co.paa","\a3\weapons_f_exp\rifles\ctars\data\ctars_f_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
scope = 2;
};
class arifle_T97NSRA_ghex_F : arifle_T97NSRA_base_F
{
_generalMacro = "arifle_T97NSRA_ghex_F";
baseWeapon = "arifle_T97NSRA_ghex_F";	
displayName = "T97NSR-A (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_T97NSRA_hex_F : arifle_T97NSRA_base_F
{
_generalMacro = "arifle_T97NSRA_hex_F";
baseWeapon = "arifle_T97NSRA_hex_F";	
displayName = "T97NSR-A (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_hex_F_X_CA.paa";
scope = 2;
};

// Katiba Base Class. Enabling Bullet Casings for the Weapon. Adding 3 Round Burst. Fixing Mode Order. Changing Calibre to 5.56. Changing Texture to reflect Firemodes.
class arifle_Katiba_Base_F : Rifle_Base_F
{
caseless[] = {"",0,0,0};
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KH-2002 Base Class";
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\Khaybar_01.rvmat","A3\Weapons_F\Rifles\Khaybar\data\Khaybar_02.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\Khaybar_01_CO.paa","A3\Weapons_F\Rifles\Khaybar\data\Khaybar_02_CO.paa"};
magazines[] = {"30Rnd_65x39_caseless_green"};
magazineWell[] = {"Katiba_65x39","KH2002_223REM"};
};

// Katiba Variants. Changing: Name. Description. Grenade Launcher Name
class arifle_Katiba_F : arifle_Katiba_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KH-2002";
initSpeed = 943.966;
};
class arifle_Katiba_C_F : arifle_Katiba_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KH-2002 Carbine";
initSpeed = 930.24;
};
class arifle_Katiba_GL_F : arifle_Katiba_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.45x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "KH-2002 ML40 mk1";
initSpeed = 943.966;
};

// Type 115 Base Class. Changing: Description. Adding Magazinewell to Integrated .50BW. Fixing Mode Order
class arifle_ARX_base_F : Rifle_Base_F
{	
descriptionShort = "Fictional Assault Rifle<br />Calibre: 5.56x45mm NATO / .50 Beowulf";
initSpeed = 943.966;
magazines[] = {"30Rnd_65x39_caseless_green"};
magazineWell[] = {"Katiba_65x39","KH2002_223REM"};
class Secondary;
};

// Type 115 Patterns. Changing: Name. Underbarrel Name
class arifle_ARX_blk_F : arifle_ARX_base_F
{
displayName = "Type 115";
	class Secondary : Secondary
	{
	displayName = "Integrated .50 BW";
	};
};
class arifle_ARX_ghex_F : arifle_ARX_base_F
{
displayName = "Type 115 (Green Hex)";
	class Secondary : Secondary
	{
	displayName = "Integrated .50 BW";
	};
};
class arifle_ARX_hex_F : arifle_ARX_base_F
{
displayName = "Type 115 (Hex)";
	class Secondary : Secondary
	{
	displayName = "Integrated .50 BW";
	};
};

// Adding hidden Compact NVG Black Reskin
class O_NVGoggles_hex_F : NVGoggles
{
	class ItemInfo;
}
class O_NVGoggles_blk_F : O_NVGoggles_hex_F
{
_generalMacro = "O_NVGoggles_blk_F";
displayName = "Compact NVG (Black)";
model = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
picture = "\a3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_blk_F_ca.paa";
	class ItemInfo : ItemInfo
	{
	modelOff = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_off_F.p3d";
	uniformModel = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
	};
};

// MX Base Class. Changing: Description. Enabling Bullet Casings for the Weapon. Adjusting RoF for MX and MX 3GL. Fixing Mode Order
class arifle_MX_Base_F : Rifle_Base_F
{
displayName = "ACR Carbine Base Class";
caseless[] = {"",0,0,0};
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
initSpeed = 822.96;
};

// MX. Changing: Name
class arifle_MX_F : arifle_MX_Base_F
{	
displayName = "ACR Carbine (Sand)";
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
initSpeed = 822.96;
};
class arifle_MX_Black_F : arifle_MX_F
{
displayName = "ACR Carbine";
magazines[] = {"30Rnd_65x39_caseless_black_mag"};
};
class arifle_MX_khk_F : arifle_MX_Black_F
{
displayName = "ACR Carbine (Khaki)";
magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
};

// MX 3GL. Changing: Name
class arifle_MX_GL_F : arifle_MX_Base_F
{		
displayName = "ACR Carbine 3GL (Sand)";
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
initSpeed = 822.96;
};
class arifle_MX_GL_Black_F : arifle_MX_GL_F
{
displayName = "ACR Carbine 3GL";
magazines[] = {"30Rnd_65x39_caseless_black_mag"};
};
class arifle_MX_GL_khk_F : arifle_MX_GL_Black_F
{
displayName = "ACR Carbine 3GL (Khaki)";
magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
};

// MX SW. Changing: Name. Fixing Mode Order
class arifle_MX_SW_F : arifle_MX_Base_F
{		
displayName = "ACR HB (Sand)";
descriptionShort = "Light Machine Gun<br />Calibre: 6.5x39mm";
initSpeed = 835.152;
magazines[] = {"100Rnd_65x39_T4_mag"};
};
class arifle_MX_SW_Black_F : arifle_MX_SW_F
{		
displayName = "ACR HB";
magazines[] = {"100Rnd_65x39_T4_black_mag"};
};
class arifle_MX_SW_khk_F : arifle_MX_SW_Black_F
{		
displayName = "ACR HB (Khaki)";
magazines[] = {"100Rnd_65x39_T4_khaki_mag"};
};

// MXM. Changing: Name. Magazines Fix on Sand for ACE
class arifle_MXM_F : arifle_MX_Base_F
{		
displayName = "ACR SPR (Sand)";
descriptionShort = "Marksman Rifle<br />Calibre: 6.5x39mm";
initSpeed = 841.553;
magazines[] = {"30Rnd_65x39_NT_mag"};
};
class arifle_MXM_Black_F : arifle_MXM_F
{	
displayName = "ACR SPR";
magazines[] = {"30Rnd_65x39_NT_black_mag"};
};
class arifle_MXM_khk_F : arifle_MXM_Black_F
{		
displayName = "ACR SPR (Khaki)";
magazines[] = {"30Rnd_65x39_NT_khaki_mag"};
};

// MXC. Changing: Name
class arifle_MXC_F : arifle_MX_Base_F
{		
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
displayName = "ACR Entry Carbine (Sand)";
initSpeed = 796.748;
};
class arifle_MXC_Black_F : arifle_MXC_F
{		
displayName = "ACR Entry Carbine";
magazines[] = {"30Rnd_65x39_caseless_black_mag"};
};
class arifle_MXC_khk_F : arifle_MXC_Black_F
{		
displayName = "ACR Entry Carbine (Khaki)";
magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
};

// Creating ACR with MOS scope for Unit Replacement
class arifle_MXM_MOS_LP_BI_F : arifle_MXM_F
{
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
		item = "optic_SOS";
		slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
		item = "bipod_01_F_snd";
		slot = "UnderBarrelSlot";		
		};
	};	
};

// Mk20 Base Class. Changing: Name. Description. Magwells. Fixing Mode Order
class mk20_base_F : Rifle_Base_F
{
descriptionShort = "Assault rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "FS2000 Base Class";
initSpeed = 895.198;
magazines[] = {"30Rnd_556x45_Stanag"};
magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","MR223_223R"};
};

// Mk20. Changing: Name. Description. Removing Full Auto. Replacing Texture to reflect Firemodes
class arifle_Mk20_F : mk20_base_F
{
descriptionShort = "Sporting Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "FS2000 Tactical TR (Camo)";
hiddenSelections[] = {"camo","camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_A3\Textures\mk20.rvmat","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\mk20_INDP_Semi_CO.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
initSpeed = 916.534;
magazines[] = {"30Rnd_556x45_Stanag_NT"};
};
class arifle_Mk20_plain_F : arifle_Mk20_F
{
displayName = "FS2000 Tactical TR";
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\mk20_Semi_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
};

// Mk20 EGLM. Changing: Name. Description. Grenade Launcher Name
class arifle_Mk20_GL_F : mk20_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "F2000 Tactical GL1 (Camo)";
initSpeed = 895.198;
};
class arifle_Mk20_GL_plain_F : arifle_Mk20_GL_F
{
displayName = "F2000 Tactical GL1";
};

// Mk20C
class arifle_Mk20C_F : mk20_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "F2000 Tactical TR (Camo)";
initSpeed = 895.198;
};
class arifle_Mk20C_plain_F : arifle_Mk20C_F
{
displayName = "F2000 Tactical TR";
};

// Creating CSAT Patterns
class arifle_Mk20C_CSAT_F : arifle_Mk20C_F
{
_generalMacro = "arifle_Mk20C_CSAT_F";
baseWeapon = "arifle_Mk20C_CSAT_F";
displayName = "F2000 Tactical TR (CSAT)";	
hiddenSelections[] = {"camo","camo2"};
hiddenSelectionsTextures[] = {"A3\Weapons_F_Beta\Rifles\MK20\Data\TEST_mk20_camoOPFOR_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
picture = "\A3RO_A3\Textures\UI\gear_mk20_c_CSAT_CA.paa";
};
class arifle_Mk20_GL_CSAT_F : arifle_Mk20_GL_F
{
_generalMacro = "arifle_Mk20_GL_CSAT_F";
baseWeapon = "arifle_Mk20_GL_CSAT_F";
displayName = "F2000 Tactical GL1 (CSAT)";	
hiddenSelectionsTextures[] = {"A3\Weapons_F_Beta\Rifles\MK20\Data\TEST_mk20_camoOPFOR_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
picture = "\A3RO_A3\Textures\UI\gear_mk20_gl_CSAT_CA.paa";
};
class arifle_Mk20_CSAT_F : arifle_Mk20_F
{
_generalMacro = "arifle_Mk20_CSAT_F";
baseWeapon = "arifle_Mk20_CSAT_F";
displayName = "FS2000 Tactical TR (CSAT)";	
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\TEST_mk20_camoOPFOR_Semi_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
picture = "\A3RO_A3\Textures\UI\gear_mk20_CSAT_CA.paa";
};

// Creating Mk20C Subclass with Attachments for Unit Replacement
class arifle_Mk20C_pointer_F : arifle_Mk20C_F
{
scope = 1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";
		};
	};	
};
class arifle_Mk20C_MRCO_pointer_F : arifle_Mk20C_F
{
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
		item = "optic_MRCO";
		slot = "CowsSlot";
		};
	};
};
class arifle_Mk20C_MRCO_F : arifle_Mk20C_F
{
scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		item = "optic_MRCO";
		slot = "CowsSlot";
		};
	};
};

// Promet Base Class. Adding 3 Round Burst. Fixing Mode Order. Adding Description. Changing Calibre and Muzzle Devices to 5.56
class arifle_MSBS65_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "MSBS Grot B16 Base Class";
initSpeed = 890.016;
magazineWell[] = {"MX_65x39_MSBS","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","STANAG_556x45","PMAG_223REM","MR223_223R"};
};

// Promet GL Base Class. Changing: Description. Grenade Launcher Name
class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "MSBS Grot B16 GP Base Class";
};

// Promet MR Base Class. Changing: Name. Preventing ACE from adding Magazines.
class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F
{
displayName = "MSBS Grot B26 Base Class";
initSpeed = 999.744;
magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
};

// Promet UBS Base Class. Changing: Name. Description.
class arifle_MSBS65_UBS_base_F : arifle_MSBS65_base_F
{
displayName = "MSBS Grot B16 SIX12 Base Class";	
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Shotgun<br />Gauge: 12";
	class UBS_F : Rifle_Base_F
	{
	initSpeed = -0.9078; // This apparently doesn't work?
	};
};

// Promet. Changing: Name. Changing Materials and Texture to reflect its Firemodes. Also for all other Variants
class arifle_MSBS65_F : arifle_MSBS65_base_F
{
displayName = "MSBS Grot B16 (Khaki)";
};
class arifle_MSBS65_black_F : arifle_MSBS65_base_black_F
{
displayName = "MSBS Grot B16";
};
class arifle_MSBS65_camo_F : arifle_MSBS65_base_camo_F
{
displayName = "MSBS Grot B16 (Camo)";
};
class arifle_MSBS65_sand_F : arifle_MSBS65_base_sand_F
{
displayName = "MSBS Grot B16 (Sand)";
};

// Promet GL. Changing: Name
class arifle_MSBS65_GL_F : arifle_MSBS65_GL_base_F
{
displayName = "MSBS Grot B16 GP (Khaki)";
};
class arifle_MSBS65_GL_black_F : arifle_MSBS65_GL_base_black_F
{
displayName = "MSBS Grot B16 GP";
};
class arifle_MSBS65_GL_camo_F : arifle_MSBS65_GL_base_camo_F
{
displayName = "MSBS Grot B16 GP (Camo)";
};
class arifle_MSBS65_GL_sand_F : arifle_MSBS65_GL_base_sand_F
{
displayName = "MSBS Grot B16 GP (Sand)";
};

// Promet MR. Changing: Name
class arifle_MSBS65_Mark_F : arifle_MSBS65_Mark_base_F
{
displayName = "MSBS Grot B26 (Khaki)";
};
class arifle_MSBS65_Mark_black_F : arifle_MSBS65_Mark_base_black_F
{
displayName = "MSBS Grot B26";
};
class arifle_MSBS65_Mark_camo_F : arifle_MSBS65_Mark_base_camo_F
{
displayName = "MSBS Grot B26 (Camo)";
};
class arifle_MSBS65_Mark_sand_F : arifle_MSBS65_Mark_base_sand_F
{
displayName = "MSBS Grot B26 (Sand)";
};

// Promet SG. Changing: Name. Underbarrel Shotgun Name
class arifle_MSBS65_UBS_F : arifle_MSBS65_UBS_base_F
{
displayName = "MSBS Grot B16 SIX12 (Khaki)";
};
class arifle_MSBS65_UBS_black_F : arifle_MSBS65_UBS_base_black_F
{
displayName = "MSBS Grot B16 SIX12";
};
class arifle_MSBS65_UBS_camo_F : arifle_MSBS65_UBS_base_camo_F
{
displayName = "MSBS Grot B16 SIX12 (Camo)";
};
class arifle_MSBS65_UBS_sand_F : arifle_MSBS65_UBS_base_sand_F
{
displayName = "MSBS Grot B16 SIX12 (Sand)";
};

// SPAR-16 Base Class. Changing: Name. Description. Fixing Mode Order. Adding .223 Remington Magwell
class arifle_SPAR_01_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "HK416 A5 11'' Base Class";
initSpeed = 790.042;
magazines[] = {"30Rnd_556x45_Stanag_red"};
magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","MR223_223R","MR223_223R_Large"};
};

// SPAR-16 Patterns. Changing: Name
class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F
{
displayName = "HK416 A5 11''";
};
class arifle_SPAR_01_khk_F : arifle_SPAR_01_base_F
{
displayName = "HK416 A5 11'' (Khaki)";
};
class arifle_SPAR_01_snd_F : arifle_SPAR_01_base_F
{
displayName = "HK416 A5 11'' (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand_red"};
};

// SPAR-16 GL Base Class. Changing: Name. Description
class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "HK416 A5 11'' GLM Base Class";
magazines[] = {"30Rnd_556x45_Stanag_red"};
};

// SPAR-16 GL Patterns. Changing: Name
class arifle_SPAR_01_GL_blk_F : arifle_SPAR_01_GL_base_F
{
displayName = "HK416 A5 11'' GLM";
};
class arifle_SPAR_01_GL_khk_F : arifle_SPAR_01_GL_base_F
{
displayName = "HK416 A5 11'' GLM (Khaki)";
};
class arifle_SPAR_01_GL_snd_F : arifle_SPAR_01_GL_base_F
{
displayName = "HK416 A5 11'' GLM (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand_red"};
};

// SPAR-16S Base Class. Changing: Description. Use 30Rnd Magazines by default
class arifle_SPAR_02_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "HK416 A5 14.5'' Base Class";
initSpeed = 851.916;
magazines[] = {"30Rnd_556x45_Stanag_red"};
magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","MR223_223R","MR223_223R_Large"};
};

// SPAR-16S Patterns. Changing: Name. Fixed Sand Mag. Removed Linked Bipod.
class arifle_SPAR_02_blk_F : arifle_SPAR_02_base_F
{
displayName = "HK416 A5 14.5''";
	class LinkedItems
	{
	delete LinkedItemsUnder;
	};
};
class arifle_SPAR_02_khk_F : arifle_SPAR_02_base_F
{
displayName = "HK416 A5 14.5'' (Khaki)";
	class LinkedItems
	{
	delete LinkedItemsUnder;
	};
};
class arifle_SPAR_02_snd_F : arifle_SPAR_02_base_F
{
displayName = "HK416 A5 14.5'' (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand_red"};
	class LinkedItems
	{
	delete LinkedItemsUnder;
	};
};

// Tavor Base Class. Changing: Name. Description.
class Tavor_base_F : Rifle_Base_F
{
descriptionShort = "Assault rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "TAR-21 Base Class";
initSpeed = 919.887;
magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223REM","MR223_223R"};
};

// Tavor Variants. Changing: Name. Description. Grenade Launcher Name.
class arifle_TRG20_F : Tavor_base_F
{
descriptionShort = "Assault Rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "CTAR-21";
initSpeed = 890.016;
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223REM","MR223_223R"};
};
class arifle_TRG21_F : Tavor_base_F
{
descriptionShort = "Assault Rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "TAR-21";
initSpeed = 919.887;
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223REM","MR223_223R"};
};
class arifle_TRG21_GL_F : arifle_TRG21_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "GTAR-21 FN40GL®";
initSpeed = 919.887;
};

// Creating MR223 A3 11'' Base Class
class arifle_MR223_01_base_F : arifle_SPAR_01_base_F
{
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "MR223 A3 11'' Base Class";
initSpeed = 786.08;
magazines[] = {"30Rnd_223REM_Mag_NT_F"};
magazineWell[] = {"MR223_223R","MR223_223R_Large"};
};

// Creating MR223 A3 11'' Patterns
class arifle_MR223_01_blk_F : arifle_MR223_01_base_F
{
_generalMacro = "arifle_MR223_01_blk_F";	
baseWeapon = "arifle_MR223_01_blk_F"; 
displayName = "MR223 11''";
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\arifle_SPAR_01_blk_F_01_Semi_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_01_khk_F : arifle_MR223_01_base_F
{
_generalMacro = "arifle_MR223_01_khk_F";	
baseWeapon = "arifle_MR223_01_khk_F"; 	
displayName = "MR223 11'' (Khaki)";
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\arifle_SPAR_01_khk_F_01_Semi_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_01_snd_F : arifle_MR223_01_base_F
{
_generalMacro = "arifle_MR223_01_snd_F";	
baseWeapon = "arifle_MR223_01_snd_F"; 	
displayName = "MR223 11'' (Sand)";
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\arifle_SPAR_01_snd_F_01_Semi_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
magazines[] = {"30Rnd_223REM_Mag_Sand_NT_F"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
scope = 2;
};

// Creating MR223 A3 14.5'' Base Class
class arifle_MR223_02_base_F : arifle_SPAR_02_base_F
{
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "MR223 A3 14'' Base Class";
initSpeed = 872.033;
magazines[] = {"30Rnd_223REM_Mag_NT_F"};
magazineWell[] = {"MR223_223R","MR223_223R_Large"};
};

// Creating MR223 A3 14.5'' Patterns
class arifle_MR223_02_blk_F : arifle_MR223_02_base_F
{
_generalMacro = "arifle_MR223_02_blk_F";	
baseWeapon = "arifle_MR223_02_blk_F"; 
displayName = "MR223 14.5''";
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_blk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_02_khk_F : arifle_MR223_02_base_F
{
_generalMacro = "arifle_MR223_02_khk_F";	
baseWeapon = "arifle_MR223_02_khk_F"; 	
displayName = "MR223 14.5'' (Khaki)";
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_khk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_02_snd_F : arifle_MR223_02_base_F
{
_generalMacro = "arifle_MR223_02_snd_F";	
baseWeapon = "arifle_MR223_02_snd_F"; 	
displayName = "MR223 14.5'' (Sand)";
hiddenSelectionsTextures[] = {"\A3RO_A3\Textures\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
magazines[] = {"30Rnd_223REM_Mag_Sand_NT_F"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_snd_F_X_CA.paa";
scope = 2;
};

// Creating Spotter Rifle w/ Suppressor
class arifle_MX_Hamr_pointer_snds_F : arifle_MX_F
{
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";
		};
		class LinkedItemsOptic
		{
		item = "optic_Hamr";
		slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_H";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_MX_khk_Hamr_Pointer_snds_F : arifle_MX_khk_F
{
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";
		};
		class LinkedItemsOptic
		{
		item = "optic_Hamr_khk_F";
		slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_H_khk_F";
		slot = "MuzzleSlot";
		};
	};
};

// Changing Suppressor on Type 115
class arifle_ARX_ghex_ARCO_Pointer_Snds_F : arifle_ARX_ghex_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_smokey_ghex_F";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F : arifle_ARX_ghex_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_smokey_ghex_F";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_ARX_ghex_ACO_Pointer_Snds_F : arifle_ARX_ghex_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_smokey_ghex_F";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_ARX_hex_ARCO_Pointer_Snds_F : arifle_ARX_hex_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_smokey_hex_F";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F : arifle_ARX_hex_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_smokey_hex_F";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_ARX_hex_ACO_Pointer_Snds_F : arifle_ARX_hex_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_smokey_hex_F";
		slot = "MuzzleSlot";
		};
	};
};

// Changing Suppressor on KH2002
class arifle_Katiba_ACO_pointer_snds_F : arifle_Katiba_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_M";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_Katiba_GL_ACO_pointer_snds_F : arifle_Katiba_GL_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_M";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_Katiba_C_ACO_pointer_snds_F : arifle_Katiba_C_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_M";
		slot = "MuzzleSlot";
		};
	};
};
class arifle_Katiba_ARCO_pointer_snds_F : arifle_Katiba_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_M";
		slot = "MuzzleSlot";
		};
	};
};
// Misc Attachment Fix
class arifle_MSBS65_UBS_snds_ico_pointer_F : arifle_MSBS65_UBS_F
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		item = "muzzle_snds_M";
		slot = "MuzzleSlot";
		};
	};
};
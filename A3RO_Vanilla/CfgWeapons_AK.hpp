// Base Classes. Changing: Name. Description
class arifle_AK12_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 7.62x39mm";
displayName = "AK-15 Base Class";
initSpeed = 715;
};
class arifle_AK12_GL_base_F : arifle_AK12_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 7.62x39mm<br />Underbarrel Grenade Launcher<br />Calibre: 40mmCL";	
displayName = "AK-15 GP-25 Base Class";
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40mmCL";
	discreteDistanceInitIndex = 0; 
	displayName = "GP-25";
	};
};
class arifle_AK12U_base_F : arifle_AK12_base_F
{
displayName = "AK-15K Base Class";
initSpeed = 670;
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
displayName = "AK-15K";
};
class arifle_AK12U_arid_F : arifle_AK12U_base_F
{
displayName = "AK-15K (Arid)";
};
class arifle_AK12U_lush_F : arifle_AK12U_base_F
{
displayName = "AK-15K (Lush)";
};

// AKM Base Class. Changing: Name
class arifle_AKM_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 7.62x39mm";
displayName = "AKM Base Class";	
initSpeed = 715;
magazines[] = {"30Rnd_762x39_Mag_F"};
};

// AKM. Changing: Name
class arifle_AKM_F : arifle_AKM_base_F
{
displayName = "AKM";
};

// AKS Base Class. Changing: Name
class arifle_AKS_base_F : Rifle_Base_F
{
displayName = "AKS-74U Base Class";	
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm";
initSpeed = 735;
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
displayName = "RPK-12";
descriptionShort = "Fictional Light Machine Gun<br />Calibre: 7.62x39mm";
scope = 1;
};
class arifle_RPK12_arid_F : arifle_RPK12_base_F
{
displayName = "RPK-12 (Arid)";
descriptionShort = "Light Machine Gun<br />Calibre: 7.62x39mm";
scope = 1;
};	
class arifle_RPK12_lush_F : arifle_RPK12_base_F
{
displayName = "RPK-12 (Lush)";
descriptionShort = "Light Machine Gun<br />Calibre: 7.62x39mm";
scope = 1;
};	

// Creating A3RO AK-12 Base Class
class arifle_AK12_545_base_F : arifle_AK12_base_F
{
_generalMacro = "arifle_AK12_545_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm";
displayName = "AK-12 Base Class";
initSpeed = 890;
magazines[] = {"30Rnd_545x39_Mag_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
};

// Creating A3RO AK-12 GP-25 Base Class
class arifle_AK12_GL_545_base_F : arifle_AK12_GL_base_F
{
_generalMacro = "arifle_AK12_GL_545_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm<br />Underbarrel Grenade Launcher<br />Calibre: 40mmCL";
displayName = "AK-12 GP-25 Base Class";
initSpeed = 890;
magazines[] = {"30Rnd_545x39_Mag_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";	
};	

// Creating A3RO AK-12K Base Class
class arifle_AK12U_545_base_F : arifle_AK12U_base_F
{
_generalMacro = "arifle_AK12U_545_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x39mm";
displayName = "AK-12K Base Class";
DLC = "Enoch";
initSpeed = 840;
magazines[] = {"30Rnd_545x39_Mag_F"};
magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12U_F_CA.paa";	
};

// Creating RPK-16 Base Class. Removing 2Rnd Burst
class arifle_RPK16_base_F : arifle_RPK12_base_F
{
_generalMacro = "arifle_RPK16_base_F";
descriptionShort = "Light Machine Gun<br />Calibre: 5.45x39mm";
displayName = "RPK-16 Base Class";
initSpeed = 894.9152;
magazines[] = {"95rnd_545x39_RPK16_Mag_T4_F"};
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

// A3RO AK-12K Patterns
class arifle_AK12U_545_F : arifle_AK12U_545_base_F
{
_generalMacro = "arifle_AK12U_545_F";
baseWeapon = "arifle_AK12U_545_F";
displayName = "AK-12K";
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
displayName = "AK-12K (Arid)";
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
displayName = "AK-12K (Lush)";
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
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\AK12_F_1_308.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\AK12_ak12_1_308_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_F_CA.paa";
scope = 2;		
};
class arifle_RPK16_arid_F : arifle_RPK16_base_F
{
_generalMacro = "arifle_RPK16_arid_F";
baseWeapon = "arifle_RPK16_arid_F";
displayName = "RPK-16 (Arid)";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\AK12_F_1_308_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\AK12_ak12_1_308_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
magazines[] = {"95rnd_545x39_RPK16_Arid_Mag_T4_F"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_arid_F_CA.paa";
scope = 2;		
};
class arifle_RPK16_lush_F : arifle_RPK16_base_F
{
_generalMacro = "arifle_RPK16_lush_F";
baseWeapon = "arifle_RPK16_lush_F";
displayName = "RPK-16 (Lush)";
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\AK12_F_1_308_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\AK12_ak12_1_308_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
magazines[] = {"95rnd_545x39_RPK16_Lush_Mag_T4_F"};
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
initSpeed = 910;
magazines[] = {"30Rnd_556x45_AK_Mag_RT_F"};
magazineWell[] = {"CBA_556x45_AK","TR3_223Rem"};
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
initSpeed = 910;
magazines[] = {"30Rnd_556x45_AK_Mag_RT_F"};
magazineWell[] = {"CBA_556x45_AK","TR3_223Rem"};
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
descriptionShort = "Assault Rifle<br />Calibre: 7.62x51mm NATO";
displayName = "AK-308 Base Class";
initSpeed = 780.5928;
magazines[] = {"20Rnd_762x51_AK_Mag_NT_F"};
magazineWell[] = {"AK308_762x51","AK308_308WIN"};
};

// AK-308 Patterns
class arifle_AK308_F : arifle_AK308_base_F
{
_generalMacro = "arifle_AK308_F";
baseWeapon = "arifle_AK308_F";
displayName = "AK-308";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_308.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_308_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
scope = 2;		
};
class arifle_AK308_arid_F : arifle_AK308_base_F
{
_generalMacro = "arifle_AK308_arid_F";	
baseWeapon = "arifle_AK308_arid_F";
displayName = "AK-308 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_308_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_308_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_AK308_lush_F : arifle_AK308_base_F
{
_generalMacro = "arifle_AK308_lush_F";	
baseWeapon = "arifle_AK308_lush_F";
displayName = "AK-308 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_308_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_308_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// Creating TR3 Base Class
class arifle_TR3_base_F : arifle_AK308_F
{
_generalMacro = "arifle_TR3_base_F";
descriptionShort = "Sporting Rifle<br />Calibre: 5.45x39 / .223 Remington / 7.62x39";
displayName = "TR3 Base Class";
initSpeed = 960.4248;
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
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
initSpeed = 890;
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
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_TR3_545_lush_F : arifle_TR3_545_F
{
_generalMacro = "arifle_TR3_545_lush_F";	
baseWeapon = "arifle_TR3_545_lush_F";
displayName = "TR3 5.45x39 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_lush_F_CA.paa";
scope = 2;
};

// TR3 .223 Remington Patterns
class arifle_TR3_223Rem_F : arifle_TR3_base_F
{
_generalMacro = "arifle_TR3_223Rem_F";
baseWeapon = "arifle_TR3_223Rem_F";
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "TR3 .223";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
magazines[] = {"30Rnd_223Rem_AK_Mag_NT_F"};
magazineWell[] = {"TR3_223Rem"};
scope = 2;	
};
class arifle_TR3_223Rem_arid_F : arifle_TR3_223Rem_F
{
_generalMacro = "arifle_TR3_223Rem_arid_F";	
baseWeapon = "arifle_TR3_223Rem_arid_F";
displayName = "TR3 .223 (Arid)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_TR3_223Rem_lush_F : arifle_TR3_223Rem_F
{
_generalMacro = "arifle_TR3_223Rem_lush_F";	
baseWeapon = "arifle_TR3_223Rem_lush_F";
displayName = "TR3 .223 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
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
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3.rvmat","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
initSpeed = 715;
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
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
magazines[] = {"30rnd_762x39_AK12_NT_Arid_Mag_F"};
picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_AK12_arid_F_CA.paa";
scope = 2;	
};
class arifle_TR3_762_lush_F : arifle_TR3_762_F
{
_generalMacro = "arifle_TR3_762_lush_F";	
baseWeapon = "arifle_TR3_762_lush_F";
displayName = "TR3 7.62x39 (Lush)";	
DLC = "Enoch";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\AK12_F_1_TR3_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\AK12_ak12_1_TR3_khaki_CO.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
magazines[] = {"30rnd_762x39_AK12_NT_Lush_Mag_F"};
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
initSpeed = 890;
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
initSpeed = 910;
magazines[] = {"30Rnd_556x45_AK_Mag_NT_F"};
magazineWell[] = {"CBA_556x45_AK","TR3_223Rem"};
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
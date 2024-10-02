// Mk20 Base Class. Changing: Name. Description. Magwells. Fixing Mode Order
class mk20_base_F : Rifle_Base_F
{
descriptionShort = "Assault rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "FS2000 Base Class";
initSpeed = 910;
magazines[] = {"30Rnd_556x45_Stanag"};
magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","MR223_223R"};
};

// Mk20. Changing: Name. Description. Removing Full Auto. Replacing Texture to reflect Firemodes
class arifle_Mk20_F : mk20_base_F
{
descriptionShort = "Sporting Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "FS2000 Tactical TR (Camo)";
hiddenSelections[] = {"camo","camo2"};
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\mk20.rvmat","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\mk20_INDP_Semi_CO.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
initSpeed = 910;
magazines[] = {"30Rnd_556x45_Stanag_NT"};
};
class arifle_Mk20_plain_F : arifle_Mk20_F
{
displayName = "FS2000 Tactical TR";
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\mk20_Semi_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
};

// Mk20 EGLM. Changing: Name. Description. Grenade Launcher Name
class arifle_Mk20_GL_F : mk20_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "F2000 Tactical GL1 (Camo)";
initSpeed = 900;
	class EGLM : UGL_F // For some reason I have to redeclare the entire class for the Launcher to work properly if all I want to do is change the name.
	{
	cameraDir = "OP_look";
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistance[] = {50,75,100,150,200,250,300,350,400};
	discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
	discreteDistanceInitIndex = 0;
	displayName = "GL1";
	reloadAction = "GestureReloadMk20UGL";
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
	useExternalOptic = 0;
	useModelOptics = 0;
	};
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
initSpeed = 900;
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
picture = "\a3\Weapons_F_Beta\Rifles\MK20\Data\UI\gear_mk20_c_CA.paa";
};
class arifle_Mk20_GL_CSAT_F : arifle_Mk20_GL_F
{
_generalMacro = "arifle_Mk20_GL_CSAT_F";
baseWeapon = "arifle_Mk20_GL_CSAT_F";
displayName = "F2000 Tactical GL1 (CSAT)";	
hiddenSelectionsTextures[] = {"A3\Weapons_F_Beta\Rifles\MK20\Data\TEST_mk20_camoOPFOR_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
picture = "\A3\Weapons_F_Beta\Rifles\MK20\Data\UI\gear_mk20_gl_X_CA.paa";
};
class arifle_Mk20_CSAT_F : arifle_Mk20_F
{
_generalMacro = "arifle_Mk20_CSAT_F";
baseWeapon = "arifle_Mk20_CSAT_F";
displayName = "FS2000 Tactical TR (CSAT)";	
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\TEST_mk20_camoOPFOR_Semi_co.paa","A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
picture = "\A3\Weapons_F_Beta\Rifles\MK20\Data\UI\gear_mk20_CA.paa";
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
initSpeed = 890;
magazineWell[] = {"MX_65x39_MSBS","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","STANAG_556x45","PMAG_223Rem","MR223_223R"};
};

// Promet GL Base Class. Changing: Description. Grenade Launcher Name
class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "MSBS Grot B16 GP Base Class";
	class UGL : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "GP";	
	};
};

// Promet MR Base Class. Changing: Name. Preventing ACE from adding Magazines.
class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F
{
displayName = "MSBS Grot B26 Base Class";
magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
};

// Promet UBS Base Class. Changing: Name. Description.
class arifle_MSBS65_UBS_base_F : arifle_MSBS65_base_F
{
displayName = "MSBS Grot B16 SIX12 Base Class";	
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Shotgun<br />Calibre: 12 Gauge";
	class UBS_F : Rifle_Base_F
	{
	descriptionShort = "Underbarrel Shotgun<br />Gauge: 12";
	displayName = "SIX12";	
	};
};

class arifle_MSBS65_base_black_F;
class arifle_MSBS65_GL_base_black_F;
class arifle_MSBS65_Mark_base_black_F;
class arifle_MSBS65_UBS_base_black_F;
class arifle_MSBS65_base_camo_F;
class arifle_MSBS65_GL_base_camo_F;
class arifle_MSBS65_Mark_base_camo_F;
class arifle_MSBS65_UBS_base_camo_F;
class arifle_MSBS65_base_sand_F;
class arifle_MSBS65_GL_base_sand_F;
class arifle_MSBS65_Mark_base_sand_F;
class arifle_MSBS65_UBS_base_sand_F;

// Promet. Changing: Name. Changing Materials and Texture to reflect its Firemodes. Also for all other Variants
class arifle_MSBS65_F : arifle_MSBS65_base_F
{
displayName = "MSBS Grot B16 (Khaki)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
};
class arifle_MSBS65_black_F : arifle_MSBS65_base_black_F
{
displayName = "MSBS Grot B16";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
};
class arifle_MSBS65_camo_F : arifle_MSBS65_base_camo_F
{
displayName = "MSBS Grot B16 (Camo)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
};
class arifle_MSBS65_sand_F : arifle_MSBS65_base_sand_F
{
displayName = "MSBS Grot B16 (Sand)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
};

// Promet GL. Changing: Name
class arifle_MSBS65_GL_F : arifle_MSBS65_GL_base_F
{
displayName = "MSBS Grot B16 GP (Khaki)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
};
class arifle_MSBS65_GL_black_F : arifle_MSBS65_GL_base_black_F
{
displayName = "MSBS Grot B16 GP";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
};
class arifle_MSBS65_GL_camo_F : arifle_MSBS65_GL_base_camo_F
{
displayName = "MSBS Grot B16 GP (Camo)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
};
class arifle_MSBS65_GL_sand_F : arifle_MSBS65_GL_base_sand_F
{
displayName = "MSBS Grot B16 GP (Sand)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
};

// Promet MR. Changing: Name
class arifle_MSBS65_Mark_F : arifle_MSBS65_Mark_base_F
{
displayName = "MSBS Grot B26 (Khaki)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
};
class arifle_MSBS65_Mark_black_F : arifle_MSBS65_Mark_base_black_F
{
displayName = "MSBS Grot B26";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
};
class arifle_MSBS65_Mark_camo_F : arifle_MSBS65_Mark_base_camo_F
{
displayName = "MSBS Grot B26 (Camo)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
};
class arifle_MSBS65_Mark_sand_F : arifle_MSBS65_Mark_base_sand_F
{
displayName = "MSBS Grot B26 (Sand)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
};

// Promet SG. Changing: Name. Underbarrel Shotgun Name
class arifle_MSBS65_UBS_F : arifle_MSBS65_UBS_base_F
{
displayName = "MSBS Grot B16 SIX12 (Khaki)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
};
class arifle_MSBS65_UBS_black_F : arifle_MSBS65_UBS_base_black_F
{
displayName = "MSBS Grot B16 SIX12";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
};
class arifle_MSBS65_UBS_camo_F : arifle_MSBS65_UBS_base_camo_F
{
displayName = "MSBS Grot B16 SIX12 (Camo)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
};
class arifle_MSBS65_UBS_sand_F : arifle_MSBS65_UBS_base_sand_F
{
displayName = "MSBS Grot B16 SIX12 (Sand)";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\MSBS_01.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02.rvmat","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\MSBS_01_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","A3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
};

// SPAR-16 Base Class. Changing: Name. Description. Fixing Mode Order. Adding .223 Remington Magwell
class arifle_SPAR_01_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "HK416A5 11'' Base Class";
initSpeed = 790;	
magazines[] = {"30Rnd_556x45_Stanag_red"};
magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","MR223_223R","MR223_223R_Large"};
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "GLM";	
	};
};

// SPAR-16 Patterns. Changing: Name
class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F
{
displayName = "HK416A5 11''";
};
class arifle_SPAR_01_khk_F : arifle_SPAR_01_base_F
{
displayName = "HK416A5 11'' (Khaki)";
};
class arifle_SPAR_01_snd_F : arifle_SPAR_01_base_F
{
displayName = "HK416A5 11'' (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand_red"};
};

// SPAR-16 GL Base Class. Changing: Name. Description
class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "HK416A5 11'' GLM Base Class";
magazines[] = {"30Rnd_556x45_Stanag_red"};
};

// SPAR-16 GL Patterns. Changing: Name
class arifle_SPAR_01_GL_blk_F : arifle_SPAR_01_GL_base_F
{
displayName = "HK416A5 11'' GLM";
};
class arifle_SPAR_01_GL_khk_F : arifle_SPAR_01_GL_base_F
{
displayName = "HK416A5 11'' GLM (Khaki)";
};
class arifle_SPAR_01_GL_snd_F : arifle_SPAR_01_GL_base_F
{
displayName = "HK416A5 11'' GLM (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand_red"};
};

// SPAR-16S Base Class. Changing: Description. Use 30Rnd Magazines by default
class arifle_SPAR_02_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "HK416A5 14.5'' Base Class";
initSpeed = 852;
magazines[] = {"30Rnd_556x45_Stanag_red"};
magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","MR223_223R","MR223_223R_Large"};
};

// SPAR-16S Patterns. Changing: Name. Fixed Sand Mag. Removed Linked Bipod.
class arifle_SPAR_02_blk_F : arifle_SPAR_02_base_F
{
displayName = "HK416A5 14.5''";
	class LinkedItems
	{
	delete LinkedItemsUnder;
	};
};
class arifle_SPAR_02_khk_F : arifle_SPAR_02_base_F
{
displayName = "HK416A5 14.5'' (Khaki)";
	class LinkedItems
	{
	delete LinkedItemsUnder;
	};
};
class arifle_SPAR_02_snd_F : arifle_SPAR_02_base_F
{
displayName = "HK416A5 14.5'' (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand_red"};
	class LinkedItems
	{
	delete LinkedItemsUnder;
	};
};

// Tavor Base Class. Changing: Name. Description. Fixing Mode Order
class Tavor_base_F : Rifle_Base_F
{
descriptionShort = "Assault rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "TAR-21 Base Class";
initSpeed = 910;
magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223Rem","MR223_223R"};
	class EGLM : UGL_F
	{
	cameraDir = "OP_look";	
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistance[] = {50,75,100,150,200,250,300,350,400};
	discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
	discreteDistanceInitIndex = 0; 
	displayName = "MK 13 EGLM";
	reloadAction = "GestureReloadTrgUGL";
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.794328,1,10};
	useExternalOptic = 0;
	useModelOptics = 0;
	};
};

// Tavor Variants. Changing: Name. Description. Grenade Launcher Name.
class arifle_TRG20_F : Tavor_base_F
{
descriptionShort = "Assault Rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "CTAR-21";
initSpeed = 890;
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223Rem","MR223_223R"};
};
class arifle_TRG21_F : Tavor_base_F
{
descriptionShort = "Assault Rifle<br/>Calibre: 5.56x45mm NATO";
displayName = "TAR-21";
initSpeed = 910;
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D"};
};
class arifle_TRG21_GL_F : arifle_TRG21_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "GTAR-21 MK 13 EGLM";
initSpeed = 910;
};

// Creating MR223 A3 11'' Base Class
class arifle_MR223_01_base_F : arifle_SPAR_01_base_F
{
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "MR223 A3 11'' Base Class";
initSpeed = 845;
magazines[] = {"30Rnd_223Rem_Mag_NT_F"};
magazineWell[] = {"MR223_223R","MR223_223R_Large"};
};

// Creating MR223 A3 11'' Patterns
class arifle_MR223_01_blk_F : arifle_MR223_01_base_F
{
_generalMacro = "arifle_MR223_01_blk_F";	
baseWeapon = "arifle_MR223_01_blk_F"; 
displayName = "MR223 11''";
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\arifle_SPAR_01_blk_F_01_Semi_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_01_khk_F : arifle_MR223_01_base_F
{
_generalMacro = "arifle_MR223_01_khk_F";	
baseWeapon = "arifle_MR223_01_khk_F"; 	
displayName = "MR223 11'' (Khaki)";
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\arifle_SPAR_01_khk_F_01_Semi_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_01_snd_F : arifle_MR223_01_base_F
{
_generalMacro = "arifle_MR223_01_snd_F";	
baseWeapon = "arifle_MR223_01_snd_F"; 	
displayName = "MR223 11'' (Sand)";
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\arifle_SPAR_01_snd_F_01_Semi_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
magazines[] = {"30Rnd_223Rem_Mag_Sand_NT_F"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
scope = 2;
};

// Creating MR223 A3 14.5'' Base Class
class arifle_MR223_02_base_F : arifle_SPAR_02_base_F
{
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "MR223 A3 14'' Base Class";
initSpeed = 890;
magazines[] = {"30Rnd_223Rem_Mag_NT_F"};
magazineWell[] = {"MR223_223R","MR223_223R_Large"};
};

// Creating MR223 A3 14.5'' Patterns
class arifle_MR223_02_blk_F : arifle_MR223_02_base_F
{
_generalMacro = "arifle_MR223_02_blk_F";	
baseWeapon = "arifle_MR223_02_blk_F"; 
displayName = "MR223 14.5''";
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_blk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_02_khk_F : arifle_MR223_02_base_F
{
_generalMacro = "arifle_MR223_02_khk_F";	
baseWeapon = "arifle_MR223_02_khk_F"; 	
displayName = "MR223 14.5'' (Khaki)";
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_khk_F_X_CA.paa";
scope = 2;
};
class arifle_MR223_02_snd_F : arifle_MR223_02_base_F
{
_generalMacro = "arifle_MR223_02_snd_F";	
baseWeapon = "arifle_MR223_02_snd_F"; 	
displayName = "MR223 14.5'' (Sand)";
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
magazines[] = {"30Rnd_223Rem_Mag_Sand_NT_F"};
picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_snd_F_X_CA.paa";
scope = 2;
};

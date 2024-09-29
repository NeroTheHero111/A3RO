// LIM-85 Base Class. Changing: Name. Description. Adding back Vanilla M249 Magwell. Removing Fast FullAuto
class LMG_03_base_F : Rifle_Long_Base_F
{
descriptionShort = "Light Machine Gun<br />Calibre: 5.56x45mm NATO";
displayName = "M249 Para Base Class";
initSpeed = 915;
magazines[] = {"200Rnd_556x45_Box_T4_F"};
magazineWell[] = {"CBA_556x45_MINIMI","M249_556x45","M249_223Rem"};
};

// LIM-85. Changing: Name.
class LMG_03_F : LMG_03_base_F
{
displayName = "M249 PARA";
};

// Creating M249S Para
class LMG_03_Semi_F : LMG_03_F
{
_generalMacro = "LMG_03_Semi_F";
baseWeapon = "LMG_03_Semi_F";
displayName = "M249S® PARA";
descriptionShort = "Semi-Automatic Light Machine Gun<br />Calibre: 5.56x45mm NATO";
magazines[] = {"200Rnd_556x45_Box_NT_F"};
};

// Mk200. Changing: Name. Description. Removing Semi Auto. Adding .223 Remington Belts
class LMG_Mk200_F : Rifle_Long_Base_F
{
descriptionShort = "Light Machine Gun<br />Calibre: 5.56x45mm NATO";
displayName = "Stoner 96 (Sand)";
initSpeed = 846.7199;
magazines[] = {"200Rnd_65x39_cased_Box_T4"};
magazineWell[] = {"Mk200_65x39","CBA_65x39_Mk200","Stoner_223Rem"};
};
class LMG_Mk200_black_F : LMG_Mk200_F
{
displayName = "Stoner 96";	
};

// Navid Base Class. Changing: Name. Description. Magwell. Replacing Burst. Adding Gas Settings
class MMG_01_base_F : Rifle_Long_Base_F
{
descriptionShort = "General-Purpose Machine Gun<br />Calibre: 7.62x51mm NATO";	
displayName = "MG5 A2 Base Class";
initSpeed = 810;
magazines[] = {"150Rnd_93x64_Mag_T4"};
magazineWell[] = {"Navid_762x51"};
};

// Navid. Changing: Name.
class MMG_01_hex_F : MMG_01_base_F
{
displayName = "MG5 A2 (Hex)";
};
class MMG_01_tan_F : MMG_01_hex_F
{
displayName = "MG5 A2";	
};

// SPMG Base Class. Changing: Name. Description.
class MMG_02_base_F : Rifle_Long_Base_F
{
descriptionShort = "General-Purpose Machine Gun<br />Calibre: .338 Norma Magnum";
displayName = "RM338 Base Class";	
initSpeed = 823;
magazines[] = {"130Rnd_338_Mag_T4"};
};
// SPMG. Changing: Name.
class MMG_02_camo_F : MMG_02_base_F
{
displayName = "RM338 (MTP)";	
};
class MMG_02_sand_F : MMG_02_camo_F
{
displayName = "RM338 (Sand)";	
};
class MMG_02_black_F : MMG_02_camo_F
{
displayName = "RM338";	
};

// Zafir. Changing: Name. Description. Magwell. Adding Gas Position and Semi Auto Mode
class LMG_Zafir_F : Rifle_Long_Base_F
{
descriptionShort = "Light Machine Gun<br />Calibre: 7.62x51mm NATO";
displayName = "Negev NG-7 SF";
initSpeed = 810;
magazines[] = {"150Rnd_762x54_Box_T4"};
magazineWell[] = {"Zafir_762x51"};
};

// Creating RM338 Subclass with Attachments for Unit Replacement
class MMG_02_sand_MOS_LP_F : MMG_02_sand_F
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

//Creating MG5 Subclass with Attachments for Unit Replacement
class MMG_01_hex_MOS_LP_F : MMG_01_hex_F
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
		item = "bipod_02_F_hex";
		slot = "UnderBarrelSlot";		
		};
	};	
};
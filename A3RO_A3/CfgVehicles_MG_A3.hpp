// LIM-85. Changing: Name
class Weapon_LMG_03_F : Weapon_Base_F
{
displayName = "M249 PARA";
	class TransportMagazines
	{
		delete 200Rnd_556x45_Box_F;
		class 200Rnd_556x45_Box_T4_F
		{
		count = 1;	
		magazine = "200Rnd_556x45_Box_T4_F";
		};
	};	
};

// Creating M249S
class Weapon_LMG_03_Semi_F: Weapon_Base_F
{
displayName = "M249S® PARA";
editorSubcategory = "EdSubcat_MachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class LMG_03_Semi_F
		{
		weapon = "LMG_03_Semi_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 200Rnd_556x45_Box_NT_F
		{
		count = 1;	
		magazine = "200Rnd_556x45_Box_NT_F";
		};
	};	
};

// Mk200. Changing: Name
class Weapon_LMG_Mk200_F : Weapon_Base_F
{
displayName = "Stoner 96 (Sand)";
	class TransportMagazines
	{
		delete 200Rnd_65x39_cased_Box;
		class 200Rnd_65x39_cased_Box_T4
		{
		count = 1;	
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};	
};
class Weapon_LMG_Mk200_black_F : Weapon_Base_F
{
displayName = "Stoner 96";
	class TransportMagazines
	{
		delete 200Rnd_65x39_cased_Box_Red;
		class 200Rnd_65x39_cased_Box_T4
		{
		count = 1;	
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};	
};

// Navid. Changing: Name.
class Weapon_MMG_01_hex_F : Weapon_Base_F
{
displayName = "MG5 A2 (Hex)";
	class TransportMagazines
	{
		delete 150Rnd_93x64_Mag;
		class 150Rnd_93x64_Mag_T4
		{
		count = 1;	
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};	
};
class Weapon_MMG_01_tan_F : Weapon_Base_F
{
displayName = "MG5 A2";
	class TransportMagazines
	{
		delete 150Rnd_93x64_Mag;
		class 150Rnd_93x64_Mag_T4
		{
		count = 1;	
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};	
};

// SPMG. Changing: Name. 
class Weapon_MMG_02_camo_F : Weapon_Base_F
{
displayName = "RM338 (MTP)";
};
class Weapon_MMG_02_black_F : Weapon_Base_F
{
displayName = "RM338";
};
class Weapon_MMG_02_sand_F : Weapon_Base_F
{
displayName = "RM338 (Sand)";
};

// Zafir. Changing: Name
class Weapon_LMG_Zafir_F : Weapon_Base_F
{
displayName = "Negev NG-7 SF";
	class TransportMagazines
	{
		delete 150Rnd_762x54_Box;
		class 100Rnd_762x51_NG7_Box_GT4
		{
		count = 1;	
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
	};	
};
// 3den Editor Items

// ADR-97. Changing: Name.
class Weapon_SMG_03_black: Weapon_Base_F
{
displayName = "PS90 USG";
};
class Weapon_SMG_03_camo: Weapon_Base_F
{
displayName = "PS90 USG (Camo)";
};
class Weapon_SMG_03_hex: Weapon_Base_F
{
displayName = "PS90 USG (Hex)";
};
class Weapon_SMG_03_khaki: Weapon_Base_F
{
displayName = "PS90 USG (Khaki)";
};

// ADR-97 TR. Changing: Name
class Weapon_SMG_03_TR_black: Weapon_Base_F
{
displayName = "PS90 TR";
};
class Weapon_SMG_03_TR_camo: Weapon_Base_F
{
displayName = "PS90 TR (Camo)";
};
class Weapon_SMG_03_TR_hex: Weapon_Base_F
{
displayName = "PS90 TR (Hex)";
};
class Weapon_SMG_03_TR_khaki: Weapon_Base_F
{
displayName = "PS90 TR (Khaki)";
};	

// ADR-97C. Changing: Name.
class Weapon_SMG_03C_black: Weapon_Base_F
{
displayName = "P90 USG";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};
class Weapon_SMG_03C_camo: Weapon_Base_F
{
displayName = "P90 USG (Camo)";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};
class Weapon_SMG_03C_hex: Weapon_Base_F
{
displayName = "P90 USG (Hex)";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};
class Weapon_SMG_03C_khaki: Weapon_Base_F
{
displayName = "P90 USG (Khaki)";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};

// ADR-97C TR. Changing: Name
class Weapon_SMG_03C_TR_black: Weapon_Base_F
{
displayName = "P90 TR";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};
class Weapon_SMG_03C_TR_camo: Weapon_Base_F
{
displayName = "P90 TR (Camo)";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};
class Weapon_SMG_03C_TR_hex: Weapon_Base_F
{
displayName = "P90 TR (Hex)";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};
class Weapon_SMG_03C_TR_khaki: Weapon_Base_F
{
displayName = "P90 TR (Khaki)";
	class TransportMagazines
	{
		delete 50Rnd_570x28_SMG_03;
		class 50Rnd_570x28_SMG_03_RT
		{
		magazine = "50Rnd_570x28_SMG_03_RT";
		count = 1;
		};
	};	
};	

// CPW 9x19
class Weapon_hgun_PDW2000_F : Weapon_Base_F
{
displayName = "CPW 9x19";
	class TransportWeapons
	{
		delete hgun_PDW2000_F;
		class hgun_cpw_ParaB_F
		{
		weapon = "hgun_cpw_ParaB_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 30Rnd_9x21_Yellow_Mag;
		class 30Rnd_9x19_RT_Green_Mag
		{
		magazine = "30Rnd_9x19_RT_Green_Mag";
		count = 1;
		};
	};	
};

// Creating CPW FN 5.7x28mm NATO
class Weapon_hgun_cpw_FN_F : Weapon_Base_F
{
displayName = "CPW 5.7x28";
editorSubcategory = "EdSubcat_SubMachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class hgun_cpw_FN_F
		{
		weapon = "hgun_cpw_FN_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_570x28_RT_Red_Mag
		{
		magazine = "30Rnd_570x28_RT_Red_Mag";
		count = 1;
		};
	};	
};

// Creating CPW 4.6x30mm
class Weapon_hgun_cpw_HK_F : Weapon_Base_F
{
displayName = "CPW 4.6x30";
editorSubcategory = "EdSubcat_SubMachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class hgun_cpw_HK_F
		{
		weapon = "hgun_cpw_HK_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_460x30_RT_Yellow_Mag
		{
		magazine = "30Rnd_460x30_RT_Yellow_Mag";
		count = 1;
		};
	};	
};

// MP5K-PDW
class Weapon_SMG_05_F : Weapon_Base_F
{
displayName = "MP5K-PDW";
	class TransportWeapons
	{
		delete SMG_05_F;
		class SMG_05_ParaB_F
		{
		weapon = "SMG_05_ParaB_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 30Rnd_9x21_Mag_SMG_02;
		class 30Rnd_9x19_SMG_RT_Red_Mag
		{
		magazine = "30Rnd_9x19_SMG_RT_Red_Mag";
		count = 1;
		};
	};	
};

// Creating SP5K-PDW
class Weapon_SMG_05_ParaB_Semi_F : Weapon_Base_F
{
displayName = "SP5K-PDW";
editorSubcategory = "EdSubcat_SubMachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class SMG_05_ParaB_Semi_F
		{
		weapon = "SMG_05_ParaB_Semi_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_9x19_SMG_Mag
		{
		magazine = "30Rnd_9x19_SMG_Mag";
		count = 1;
		};
	};	
};

// Scorpion EVO 3 A1
class Weapon_SMG_02_F : Weapon_Base_F
{
displayName = "Scorpion EVO 3 A1";
	class TransportWeapons
	{
		delete SMG_02_F;
		class SMG_02_ParaB_F
		{
		weapon = "SMG_02_ParaB_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 30Rnd_9x21_Green_Mag;
		class 30Rnd_9x19_SMG_RT_Green_Mag
		{
		magazine = "30Rnd_9x19_SMG_RT_Green_Mag";
		count = 1;
		};
	};	
};

// Creating Scorpion EVO 3 S1
class Weapon_SMG_02_ParaB_Semi_F : Weapon_Base_F
{
displayName = "Scorpion EVO 3 S1";
editorSubcategory = "EdSubcat_SubMachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class SMG_02_ParaB_Semi_F
		{
		weapon = "SMG_02_ParaB_Semi_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_9x19_SMG_Mag
		{
		magazine = "30Rnd_9x19_SMG_Mag";
		count = 1;
		};
	};	
};

// Vermin SMG. Changing: Name
class Weapon_SMG_01_F : Weapon_Base_F
{
displayName = "Vector SMG Gen I .45";		
};

// Creating Vector SMG 9x19
class Weapon_SMG_01_9x19_F : Weapon_Base_F
{
displayName = "Vector SMG Gen I 9x19";
editorSubcategory = "EdSubcat_SubMachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class SMG_01_9x19_F
		{
		weapon = "SMG_01_9x19_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 40Rnd_9x19_Vector_RT_Red_Mag
		{
		magazine = "40Rnd_9x19_Vector_RT_Red_Mag";
		count = 1;
		};
	};	
};
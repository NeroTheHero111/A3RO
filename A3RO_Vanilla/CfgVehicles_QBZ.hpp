// 3den Editor Items

// CAR-95. Changing: Name
class Weapon_arifle_CTAR_blk_F : Weapon_Base_F
{
displayName = "QBZ-95-1 FTU™";
};
class Weapon_arifle_CTAR_ghex_F : Weapon_Base_F
{
displayName = "QBZ-95-1 FTU™ (Green Hex)";
};
class Weapon_arifle_CTAR_hex_F : Weapon_Base_F
{
displayName = "QBZ-95-1 FTU™ (Hex)";
};

// CAR-95 GL. Changing: Name
class Weapon_arifle_CTAR_GL_blk_F : Weapon_Base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A";
};
class Weapon_arifle_CTAR_GL_ghex_F : Weapon_Base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A (Green Hex)";
};
class Weapon_arifle_CTAR_GL_hex_F : Weapon_Base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A (Hex)";
};

// CAR-95-1. Changing: Name. Subcategory
class Weapon_arifle_CTARS_blk_F : Weapon_Base_F
{
displayName = "QJB-95-1 FTU™ LSW";	
editorSubcategory = "EdSubcat_MachineGuns";
	class TransportMagazines
	{
		delete 100Rnd_580x42_Mag_F;
		class 100Rnd_580x42_T4_Mag_F
		{
		magazine = "100Rnd_580x42_T4_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_CTARS_ghex_F : Weapon_Base_F
{
displayName = "QJB-95-1 FTU™ LSW (Green Hex)";	
editorSubcategory = "EdSubcat_MachineGuns";
	class TransportMagazines
	{
		delete 100Rnd_580x42_ghex_Mag_F;
		class 100Rnd_580x42_ghex_T4_Mag_F
		{
		magazine = "100Rnd_580x42_ghex_T4_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_CTARS_hex_F : Weapon_Base_F
{
displayName = "QJB-95-1 FTU™ LSW (Hex)";	
editorSubcategory = "EdSubcat_MachineGuns";
	class TransportMagazines
	{
		delete 100Rnd_580x42_hex_Mag_F;
		class 100Rnd_580x42_hex_T4_Mag_F
		{
		magazine = "100Rnd_580x42_hex_T4_Mag_F";
		count = 1;
		};
	};	
};

// Creating QBZ-97 Patterns
class Weapon_arifle_QBZ97_blk_F : Weapon_Base_F
{
displayName = "QBZ-97 FTU™";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QBZ97_blk_F
		{
		weapon = "arifle_QBZ97_blk_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_RT_QBZ_Mag_F
		{
		magazine = "30Rnd_556x45_RT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_QBZ97_ghex_F : Weapon_Base_F
{
displayName = "QBZ-97 FTU™ (Green Hex)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QBZ97_ghex_F
		{
		weapon = "arifle_QBZ97_ghex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_RT_QBZ_Mag_F
		{
		magazine = "30Rnd_556x45_RT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_QBZ97_hex_F : Weapon_Base_F
{
displayName = "QBZ-97 FTU™ (Hex)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QBZ97_hex_F
		{
		weapon = "arifle_QBZ97_hex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_RT_QBZ_Mag_F
		{
		magazine = "30Rnd_556x45_RT_QBZ_Mag_F";
		count = 1;
		};
	};	
};

// Creating QBZ-97 QLG-10A Patterns
class Weapon_arifle_QBZ97_GL_blk_F : Weapon_Base_F
{
displayName = "QBZ-97 FTU™ QLG-10A";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QBZ97_GL_blk_F
		{
		weapon = "arifle_QBZ97_GL_blk_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_RT_QBZ_Mag_F
		{
		magazine = "30Rnd_556x45_RT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_QBZ97_GL_ghex_F : Weapon_Base_F
{
displayName = "QBZ-97 FTU™ QLG-10A (Green Hex)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QBZ97_GL_ghex_F
		{
		weapon = "arifle_QBZ97_GL_ghex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_RT_QBZ_Mag_F
		{
		magazine = "30Rnd_556x45_RT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_QBZ97_GL_hex_F : Weapon_Base_F
{
displayName = "QBZ-97 FTU™ QLG-10A (Hex)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QBZ97_GL_hex_F
		{
		weapon = "arifle_QBZ97_GL_hex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_RT_QBZ_Mag_F
		{
		magazine = "30Rnd_556x45_RT_QBZ_Mag_F";
		count = 1;
		};
	};	
};

// Creating QJB-97 Patterns
class Weapon_arifle_QJB97_blk_F : Weapon_Base_F
{
displayName = "QJB-97 FTU™ LSW";
editorSubcategory = "EdSubcat_MachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QJB97_blk_F
		{
		weapon = "arifle_QJB97_blk_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 75Rnd_556x45_T4_QBZ_Mag_F
		{
		magazine = "75Rnd_556x45_T4_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_QJB97_ghex_F : Weapon_Base_F
{
displayName = "QJB-97 FTU™ LSW (Green Hex)";
editorSubcategory = "EdSubcat_MachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QJB97_ghex_F
		{
		weapon = "arifle_QJB97_ghex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 75Rnd_556x45_T4_Ghex_QBZ_Mag_F
		{
		magazine = "75Rnd_556x45_T4_Ghex_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_QJB97_hex_F : Weapon_Base_F
{
displayName = "QJB-97 FTU™ LSW (Hex)";
editorSubcategory = "EdSubcat_MachineGuns";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_QJB97_hex_F
		{
		weapon = "arifle_QJB97_hex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 75Rnd_556x45_T4_Hex_QBZ_Mag_F
		{
		magazine = "75Rnd_556x45_T4_Hex_QBZ_Mag_F";
		count = 1;
		};
	};	
};

// Creating T97NSR-A Patterns
class Weapon_arifle_T97NSRA_blk_F : Weapon_Base_F
{
displayName = "T97NSR-A";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_T97NSRA_blk_F
		{
		weapon = "arifle_T97NSRA_blk_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223Rem_NT_QBZ_Mag_F
		{
		magazine = "30Rnd_223Rem_NT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_T97NSRA_ghex_F : Weapon_Base_F
{
displayName = "T97NSR-A (Green Hex)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_T97NSRA_ghex_F
		{
		weapon = "arifle_T97NSRA_ghex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223Rem_NT_QBZ_Mag_F
		{
		magazine = "30Rnd_223Rem_NT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_T97NSRA_hex_F : Weapon_Base_F
{
displayName = "T97NSR-A (Hex)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_T97NSRA_hex_F
		{
		weapon = "arifle_T97NSRA_hex_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223Rem_NT_QBZ_Mag_F
		{
		magazine = "30Rnd_223Rem_NT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
// 3den Editor Items

// Vanilla AK-12. Changing: Name.
class Weapon_arifle_AK12_F: Weapon_Base_F
{
displayName = "AK-15";
};
class Weapon_arifle_AK12_arid_f: Weapon_Base_F
{
displayName = "AK-15 (Arid)";
};
class Weapon_arifle_AK12_lush_f: Weapon_Base_F
{
displayName = "AK-15 (Lush)";
};

// Vanilla AK-12 GL. Changing: Name
class Weapon_arifle_AK12_GL_F: Weapon_Base_F
{
displayName = "AK-15 GP-25";
};
class Weapon_arifle_AK12_GL_arid_f: Weapon_Base_F
{
displayName = "AK-15 GP-25 (Arid)";
};
class Weapon_arifle_AK12_GL_lush_f: Weapon_Base_F
{
displayName = "AK-15 GP-25 (Lush)";
};

// Vanilla AKU-12. Changing: Name
class Weapon_arifle_AK12U_F: Weapon_Base_F
{
displayName = "AK-15K";
};
class Weapon_arifle_AK12U_arid_F: Weapon_Base_F
{
displayName = "AK-15K (Arid)";
};
class Weapon_arifle_AK12U_lush_F: Weapon_Base_F
{
displayName = "AK-15K (Lush)";
};

// AKM. Changing: Name
class Weapon_arifle_AKM_F : Weapon_Base_F
{
displayName = "AKM";	
};

// AKS-74U. Changing: Name
class Weapon_arifle_AKS_F : Weapon_Base_F
{
displayName = "AKS-74U";	
};

// RPK-12. Changing: Name. Subcategory. Hiding
class Weapon_arifle_RPK12_F: Weapon_Base_F
{
displayName = "RPK-16";
editorSubcategory = "EdSubcat_MachineGuns";
	class TransportWeapons
	{
		delete arifle_RPK12_F;
		class arifle_RPK16_F
		{
		weapon = "arifle_RPK16_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 75rnd_762x39_AK12_Mag_F;
		class 95rnd_545x39_RPK16_Mag_T4_F
		{
		magazine = "95rnd_545x39_RPK16_Mag_T4_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_RPK12_arid_f: Weapon_Base_F
{
displayName = "RPK-16 (Arid)";
editorSubcategory = "EdSubcat_MachineGuns";
	class TransportWeapons
	{
		delete arifle_RPK12_arid_f;
		class arifle_RPK16_arid_f
		{
		weapon = "arifle_RPK16_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 75rnd_762x39_AK12_arid_Mag_F;
		class 95rnd_545x39_RPK16_Arid_Mag_T4_F
		{
		magazine = "95rnd_545x39_RPK16_Arid_Mag_T4_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_RPK12_lush_f: Weapon_Base_F
{
displayName = "RPK-16 (Lush)";
editorSubcategory = "EdSubcat_MachineGuns";
	class TransportWeapons
	{
		delete arifle_RPK12_lush_f;
		class arifle_RPK16_lush_f
		{
		weapon = "arifle_RPK16_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 75rnd_762x39_AK12_lush_Mag_F;
		class 95rnd_545x39_RPK16_Lush_Mag_T4_F
		{
		magazine = "95rnd_545x39_RPK16_Lush_Mag_T4_F";
		count = 1;
		};
	};	
};

// Creating AK-12 Items
class Weapon_arifle_AK12_545_F: Weapon_Base_F
{
displayName = "AK-12";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK12_545_F
		{
		weapon = "arifle_AK12_545_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK12_545_arid_f: Weapon_Base_F
{
displayName = "AK-12 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK12_545_arid_f
		{
		weapon = "arifle_AK12_545_arid_f";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};		
};
class Weapon_arifle_AK12_545_lush_f: Weapon_Base_F
{
displayName = "AK-12 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK12_545_lush_f
		{
		weapon = "arifle_AK12_545_lush_f";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};		
};

// Creating A3RO AK-12 GP-25 Items
class Weapon_arifle_AK12_GL_545_F: Weapon_Base_F
{
displayName = "AK-12 GP-25";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK12_GL_545_F
		{
		weapon = "arifle_AK12_GL_545_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};
};
class Weapon_arifle_AK12_GL_545_arid_F: Weapon_Base_F
{
displayName = "AK-12 GP-25 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK12_GL_545_arid_F
		{
		weapon = "arifle_AK12_GL_545_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK12_GL_545_lush_F: Weapon_Base_F
{
displayName = "AK-12 GP-25 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK12_GL_545_lush_F
		{
		weapon = "arifle_AK12_GL_545_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};
};

// Creating A3RO AK-12K Items
class Weapon_arifle_AK12U_545_F: Weapon_Base_F
{
displayName = "AK-12K";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK12U_545_F
		{
		weapon = "arifle_AK12U_545_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK12U_545_arid_F: Weapon_Base_F
{
displayName = "AK-12K (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK12U_545_arid_F
		{
		weapon = "arifle_AK12U_545_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK12U_545_lush_F: Weapon_Base_F
{
displayName = "AK-12K (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK12U_545_lush_F
		{
		weapon = "arifle_AK12U_545_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_Green_F
		{
		magazine = "30Rnd_545x39_Mag_Green_F";
		count = 1;
		};
	};
};

// Creating AK-19 Items
class Weapon_arifle_AK19_F : Weapon_Base_F
{
displayName = "AK-19";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK19_F
		{
		weapon = "arifle_AK19_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_RT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_RT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK19_arid_f : Weapon_Base_F
{
displayName = "AK-19 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK19_arid_f
		{
		weapon = "arifle_AK19_arid_f";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_RT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_RT_F";
		count = 1;
		};
	};		
};
class Weapon_arifle_AK19_lush_F : Weapon_Base_F
{
displayName = "AK-19 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK19_lush_F
		{
		weapon = "arifle_AK19_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_RT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_RT_F";
		count = 1;
		};
	};		
};

// Creating A3RO AK-12 GP-25 Items
class Weapon_arifle_AK19_GL_F : Weapon_Base_F
{
displayName = "AK-19 GP-25";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK19_GL_F
		{
		weapon = "arifle_AK19_GL_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_RT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_RT_F";
		count = 1;
		};
	};
};
class Weapon_arifle_AK19_GL_arid_F: Weapon_Base_F
{
displayName = "AK-19 GP-25 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK19_GL_arid_F
		{
		weapon = "arifle_AK19_GL_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_RT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_RT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK19_GL_lush_FF: Weapon_Base_F
{
displayName = "AK-19 GP-25 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";	
	class TransportWeapons
	{
		class arifle_AK19_GL_lush_F
		{
		weapon = "arifle_AK19_GL_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_RT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_RT_F";
		count = 1;
		};
	};
};

// Creating TR3 .223 Items
class Weapon_arifle_TR3_223Rem_F : Weapon_Base_F
{
displayName = "TR3 .223";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_223Rem_F
		{
		weapon = "arifle_TR3_223Rem_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223Rem_AK_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_AK_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_223Rem_arid_F : Weapon_Base_F
{
displayName = "TR3 .223 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_223Rem_arid_F
		{
		weapon = "arifle_TR3_223Rem_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223Rem_AK_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_AK_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_223Rem_lush_F : Weapon_Base_F
{
displayName = "TR3 .223 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_223Rem_lush_F
		{
		weapon = "arifle_TR3_223Rem_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223Rem_AK_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_AK_Mag_NT_F";
		count = 1;
		};
	};
};

// Creating TR3 5.45x39 Items
class Weapon_arifle_TR3_545_F : Weapon_Base_F
{
displayName = "TR3 5.45x39";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_545_F
		{
		weapon = "arifle_TR3_545_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_NT_F
		{
		magazine = "30Rnd_545x39_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_545_arid_F : Weapon_Base_F
{
displayName = "TR3 5.45x39 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_545_arid_F
		{
		weapon = "arifle_TR3_545_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_NT_F
		{
		magazine = "30Rnd_545x39_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_545_lush_F : Weapon_Base_F
{
displayName = "TR3 5.45x39 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_545_lush_F
		{
		weapon = "arifle_TR3_545_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_NT_F
		{
		magazine = "30Rnd_545x39_Mag_NT_F";
		count = 1;
		};
	};	
};

// Creating TR3 7.62x39 Items
class Weapon_arifle_TR3_762_F : Weapon_Base_F
{
displayName = "TR3 7.62x39";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_762_F
		{
		weapon = "arifle_TR3_762_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_762x39_AK12_NT_Mag_F
		{
		magazine = "30Rnd_762x39_AK12_NT_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_762_arid_F : Weapon_Base_F
{
displayName = "TR3 7.62x39 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_762_arid_F
		{
		weapon = "arifle_TR3_762_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30rnd_762x39_AK12_NT_Arid_Mag_F
		{
		magazine = "30rnd_762x39_AK12_NT_Arid_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_762_lush_F : Weapon_Base_F
{
displayName = "TR3 7.62x39 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_762_lush_F
		{
		weapon = "arifle_TR3_762_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30rnd_762x39_AK12_NT_Lush_Mag_F
		{
		magazine = "30rnd_762x39_AK12_NT_Lush_Mag_F";
		count = 1;
		};
	};	
};

// Creating AK-308
class Weapon_arifle_AK308_F : Weapon_Base_F
{
displayName = "AK-308";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK308_F
		{
		weapon = "arifle_AK308_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 20Rnd_762x51_AK_Mag_NT_F
		{
		magazine = "20Rnd_762x51_AK_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK308_arid_F : Weapon_Base_F
{
displayName = "AK-308 (Arid)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK308_arid_F
		{
		weapon = "arifle_AK308_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 20Rnd_762x51_AK_Mag_RT_F
		{
		magazine = "20Rnd_762x51_AK_Mag_RT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_AK308_lush_F : Weapon_Base_F
{
displayName = "AK-308 (Lush)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AK308_lush_F
		{
		weapon = "arifle_AK308_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 20Rnd_762x51_AK_Mag_RT_F
		{
		magazine = "20Rnd_762x51_AK_Mag_RT_F";
		count = 1;
		};
	};	
};

// Creating AKSU-K
class Weapon_arifle_AKS_Semi_F : Weapon_Base_F
{
displayName = "AKSU-K";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AKS_Semi_F
		{
		weapon = "arifle_AKS_Semi_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_NT_F
		{
		magazine = "30Rnd_545x39_Mag_NT_F";
		count = 1;
		};
	};	
};

// WASR-2
class Weapon_arifle_WASR_545_F : Weapon_Base_F
{
displayName = "WASR-2";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_WASR_545_F
		{
		weapon = "arifle_WASR_545_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_545x39_Mag_NT_F
		{
		magazine = "30Rnd_545x39_Mag_NT_F";
		count = 1;
		};
	};	
};

// WASR-3
class Weapon_arifle_WASR_556_F : Weapon_Base_F
{
displayName = "WASR-3";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_WASR_556_F
		{
		weapon = "arifle_WASR_556_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_556x45_AK_Mag_NT_F
		{
		magazine = "30Rnd_556x45_AK_Mag_NT_F";
		count = 1;
		};
	};	
};

// WASR-10
class Weapon_arifle_WASR_762_F : Weapon_Base_F
{
displayName = "WASR-10";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_WASR_762_F
		{
		weapon = "arifle_WASR_762_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_762x39_NT_Mag_F
		{
		magazine = "30Rnd_762x39_NT_Mag_F";
		count = 1;
		};
	};	
};
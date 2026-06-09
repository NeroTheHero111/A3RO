// 3den Editor Items

// Kozlice. Changing: Name. Subcategory
class Weapon_sgun_HunterShotgun_01_F : Weapon_Base_F
{
displayName = "690 Field 28''";	
editorSubcategory = "EdSubcat_Shotguns";
};
class Weapon_sgun_HunterShotgun_01_sawedoff_F : Weapon_Base_F
{
displayName = "690 Field (Sawed-Off)";
editorSubcategory = "EdSubcat_Shotguns";
};

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
displayName = "AK-15C";
};
class Weapon_arifle_AK12U_arid_F: Weapon_Base_F
{
displayName = "AK-15C (Arid)";
};
class Weapon_arifle_AK12U_lush_F: Weapon_Base_F
{
displayName = "AK-15C (Lush)";
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
		class 95Rnd_545x39_RPK16_Mag_T4_F
		{
		magazine = "95Rnd_545x39_RPK16_Mag_T4_F";
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
		class 95Rnd_545x39_RPK16_Arid_Mag_T4_F
		{
		magazine = "95Rnd_545x39_RPK16_Arid_Mag_T4_F";
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
		class 95Rnd_545x39_RPK16_Lush_Mag_T4_F
		{
		magazine = "95Rnd_545x39_RPK16_Lush_Mag_T4_F";
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

// Creating A3RO AK-12C Items
class Weapon_arifle_AK12U_545_F: Weapon_Base_F
{
displayName = "AK-12C";
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
displayName = "AK-12C (Arid)";
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
displayName = "AK-12C (Lush)";
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
class Weapon_arifle_TR3_223REM_F : Weapon_Base_F
{
displayName = "TR3 .223";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_223REM_F
		{
		weapon = "arifle_TR3_223REM_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223REM_AK_Mag_NT_F
		{
		magazine = "30Rnd_223REM_AK_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_223REM_arid_F : Weapon_Base_F
{
displayName = "TR3 .223 (Arid)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_223REM_arid_F
		{
		weapon = "arifle_TR3_223REM_arid_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223REM_AK_Mag_NT_F
		{
		magazine = "30Rnd_223REM_AK_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_223REM_lush_F : Weapon_Base_F
{
displayName = "TR3 .223 (Lush)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_TR3_223REM_lush_F
		{
		weapon = "arifle_TR3_223REM_lush_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_223REM_AK_Mag_NT_F
		{
		magazine = "30Rnd_223REM_AK_Mag_NT_F";
		count = 1;
		};
	};
};

// Creating TR3 5.45x39 Items
class Weapon_arifle_TR3_545_F : Weapon_Base_F
{
displayName = "TR3 5.45x39";
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
		class 30Rnd_762x39_AK12_NT_Arid_Mag_F
		{
		magazine = "30Rnd_762x39_AK12_NT_Arid_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_TR3_762_lush_F : Weapon_Base_F
{
displayName = "TR3 7.62x39 (Lush)";
editorSubcategory = "EdSubcat_Sport_Hunt";
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
		class 30Rnd_762x39_AK12_NT_Lush_Mag_F
		{
		magazine = "30Rnd_762x39_AK12_NT_Lush_Mag_F";
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
		class 20Rnd_762x51_AK_Mag_RT_F
		{
		magazine = "20Rnd_762x51_AK_Mag_RT_F";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
editorSubcategory = "EdSubcat_Sport_Hunt";
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

// Creating AKM Weathered
class Weapon_arifle_AKM_Rusty_F: Weapon_Base_F
{
displayName = "AKM (Weathered)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_AKM_Rusty_F
		{
		weapon = "arifle_AKM_Rusty_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 30Rnd_762x39_Mag_F
		{
		magazine = "30Rnd_762x39_Mag_F";
		count = 1;
		};
	};	
};

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
editorSubcategory = "EdSubcat_Sport_Hunt";
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
		class 30Rnd_223REM_NT_QBZ_Mag_F
		{
		magazine = "30Rnd_223REM_NT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_T97NSRA_ghex_F : Weapon_Base_F
{
displayName = "T97NSR-A (Green Hex)";
editorSubcategory = "EdSubcat_Sport_Hunt";
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
		class 30Rnd_223REM_NT_QBZ_Mag_F
		{
		magazine = "30Rnd_223REM_NT_QBZ_Mag_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_T97NSRA_hex_F : Weapon_Base_F
{
displayName = "T97NSR-A (Hex)";
editorSubcategory = "EdSubcat_Sport_Hunt";
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
		class 30Rnd_223REM_NT_QBZ_Mag_F
		{
		magazine = "30Rnd_223REM_NT_QBZ_Mag_F";
		count = 1;
		};
	};	
};

// 3den Editor Items

// Katiba Patterns. Changing: Name
class Weapon_arifle_Katiba_F : Weapon_Base_F
{
displayName = "KH-2002";	
};
class Weapon_arifle_Katiba_C_F : Weapon_Base_F
{
displayName = "KH-2002 Carbine";	
};
class Weapon_arifle_Katiba_GL_F : Weapon_Base_F
{
displayName = "KH-2002 ML40 mk1";
};

// Type 115 Patterns. Changing: Name
class Weapon_arifle_ARX_blk_F : Weapon_Base_F
{
displayName = "Type 115";
};
class Weapon_arifle_ARX_ghex_F : Weapon_Base_F
{
displayName = "Type 115 (Green Hex)";
};
class Weapon_arifle_ARX_hex_F : Weapon_Base_F
{
displayName = "Type 115 (Hex)";
};

// Creating hidden Compact NVG (Black) Reskin Item
class Item_O_NVGoggles_blk_F : Item_Base_F
{
displayName = "Compact NVG (Black)";
model = "\A3\Weapons_F\DummyNVG.p3d";
scope = 2;
scopeCurator = 2;
vehicleClass = "Items";
	class TransportItems
	{
		class O_NVGoggles_blk_F
		{
		name = "O_NVGoggles_blk_F";
		count = 1;
		};
	};
};

// 3den Editor Items

// MX. Changing: Name.
class Weapon_arifle_MX_F: Weapon_Base_F
{
displayName = "ACR Carbine (Sand)";
};
class Weapon_arifle_MX_Black_F: Weapon_Base_F
{
displayName = "ACR Carbine";
};	
class Weapon_arifle_MX_khk_F: Weapon_Base_F
{
displayName = "ACR Carbine (Khaki)";
};

// MX 3GL. Changing: Name.
class Weapon_arifle_MX_GL_F: Weapon_Base_F
{
displayName = "ACR Carbine 3GL (Sand)";
};		
class Weapon_arifle_MX_GL_Black_F: Weapon_Base_F
{
displayName = "ACR Carbine 3GL";
};
class Weapon_arifle_MX_GL_khk_F: Weapon_Base_F
{
displayName = "ACR Carbine 3GL (Khaki)";
};

// MX SW. Changing: Name
class Weapon_arifle_MX_SW_F: Weapon_Base_F
{
displayName = "ACR HB (Sand)";
	class TransportMagazines
	{
        delete 100Rnd_65x39_caseless_mag_Tracer;
		class 100Rnd_65x39_T4_mag
		{
		magazine = "100Rnd_65x39_T4_mag";
		count = 1;
		};
	};	
};		
class Weapon_arifle_MX_SW_Black_F: Weapon_Base_F
{
displayName = "ACR HB";
	class TransportMagazines
	{
        delete 100Rnd_65x39_caseless_black_mag_tracer;
		class 100Rnd_65x39_T4_black_mag
		{
		magazine = "100Rnd_65x39_T4_black_mag";
		count = 1;
		};
	};	
};
class Weapon_arifle_MX_SW_khk_F: Weapon_Base_F
{
displayName = "ACR HB (Khaki)";
	class TransportMagazines
	{
        delete 100Rnd_65x39_caseless_khaki_mag_tracer;
		class 100Rnd_65x39_T4_khaki_mag
		{
		magazine = "100Rnd_65x39_T4_khaki_mag";
		count = 1;
		};
	};	
};	

// MXM. Changing: Name. Subcategory.
class Weapon_arifle_MXM_F: Weapon_Base_F
{
displayName = "ACR SPR (Sand)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
        delete 30Rnd_65x39_caseless_mag;
		class 30Rnd_65x39_NT_mag
		{
		magazine = "30Rnd_65x39_NT_mag";
		count = 1;
		};
	};	
};	
class Weapon_arifle_MXM_Black_F: Weapon_Base_F
{
displayName = "ACR SPR";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
        delete 30Rnd_65x39_caseless_black_mag;
		class 30Rnd_65x39_NT_black_mag
		{
		magazine = "30Rnd_65x39_NT_black_mag";
		count = 1;
		};
	};	
};	
class Weapon_arifle_MXM_khk_F: Weapon_Base_F
{
displayName = "ACR SPR (Khaki)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
        delete 30Rnd_65x39_caseless_khaki_mag;
		class 30Rnd_65x39_NT_khaki_mag
		{
		magazine = "30Rnd_65x39_NT_khaki_mag";
		count = 1;
		};
	};	
};

// MXC. Changing: Name
class Weapon_arifle_MXC_F: Weapon_Base_F
{
displayName = "ACR Entry Carbine (Sand)";
};
class Weapon_arifle_MXC_Black_F: Weapon_Base_F
{
displayName = "ACR Entry Carbine";
};		
class Weapon_arifle_MXC_khk_F: Weapon_Base_F
{
displayName = "ACR Entry Carbine (Khaki)";
};

// 3den Editor Items

// Mk20. Changing: Name, Category
class Weapon_arifle_Mk20_plain_F : Weapon_Base_F
{
displayName = "FS2000 Tactical TR";
editorSubcategory = "EdSubcat_Sport_Hunt";
};
class Weapon_arifle_Mk20_F : Weapon_Base_F
{
displayName = "FS2000 Tactical TR (Camo)";
editorSubcategory = "EdSubcat_Sport_Hunt";
};
class Weapon_arifle_Mk20_GL_plain_F : Weapon_Base_F
{
displayName = "F2000 Tactical GL1";
};
class Weapon_arifle_Mk20_GL_F : Weapon_Base_F
{
displayName = "F2000 Tactical GL1 (Camo)";
};
class Weapon_arifle_Mk20C_plain_F : Weapon_Base_F
{
displayName = "F2000 Tactical TR";
};
class Weapon_arifle_Mk20C_F : Weapon_Base_F
{
displayName = "F2000 Tactical TR (Camo)";
};

// Promet. Changing: Name
class Weapon_arifle_MSBS65_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 (Khaki)";
};
class Weapon_arifle_MSBS65_black_F : Weapon_Base_F
{
displayName = "MSBS Grot B16";
};
class Weapon_arifle_MSBS65_camo_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 (Camo)";
};
class Weapon_arifle_MSBS65_sand_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 (Sand)";
};

// Promet GL. Changing: Name
class Weapon_arifle_MSBS65_GL_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 GP (Khaki)";
};
class Weapon_arifle_MSBS65_GL_black_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 GP";
};
class Weapon_arifle_MSBS65_GL_camo_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 GP (Camo)";
};
class Weapon_arifle_MSBS65_GL_sand_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 GP (Sand)";
};

// Promet MR. Changing: Name
class Weapon_arifle_MSBS65_Mark_F : Weapon_Base_F
{
displayName = "MSBS Grot B26 (Khaki)";
};
class Weapon_arifle_MSBS65_Mark_black_F : Weapon_Base_F
{
displayName = "MSBS Grot B26";
};
class Weapon_arifle_MSBS65_Mark_camo_F : Weapon_Base_F
{
displayName = "MSBS Grot B26 (Camo)";
};
class Weapon_arifle_MSBS65_Mark_sand_F : Weapon_Base_F
{
displayName = "MSBS Grot B26 (Sand)";
};

// Promet SG. Changing: Name
class Weapon_arifle_MSBS65_UBS_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 SIX12 (Khaki)";
};
class Weapon_arifle_MSBS65_UBS_black_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 SIX12";
};
class Weapon_arifle_MSBS65_UBS_camo_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 SIX12 (Camo)";
};
class Weapon_arifle_MSBS65_UBS_sand_F : Weapon_Base_F
{
displayName = "MSBS Grot B16 SIX12 (Sand)";
};

// SPAR-16. Changing: Name
class Weapon_arifle_SPAR_01_blk_F : Weapon_Base_F
{
displayName = "HK416 A5 11''";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_red";
		};
	};
};
class Weapon_arifle_SPAR_01_khk_F : Weapon_Base_F
{
displayName = "HK416 A5 11'' (Khaki)";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_red";
		};
	};
};
class Weapon_arifle_SPAR_01_snd_F : Weapon_Base_F
{
displayName = "HK416 A5 11'' (Sand)";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag_Sand;
		class 30Rnd_556x45_Stanag_Sand_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_Sand_red";
		};
	};
};

// SPAR-16 GL. Changing: Name
class Weapon_arifle_SPAR_01_GL_blk_F : Weapon_Base_F
{
displayName = "HK416 A5 11'' GLM";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_red";
		};
	};
};
class Weapon_arifle_SPAR_01_GL_khk_F : Weapon_Base_F
{
displayName = "HK416 A5 11'' GLM (Khaki)";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_556x45_Stanag_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_red";
		};
	};
};
class Weapon_arifle_SPAR_01_GL_snd_F : Weapon_Base_F
{
displayName = "HK416 A5 11'' GLM (Sand)";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag_Sand;
		class 30Rnd_556x45_Stanag_Sand_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_Sand_red";
		};
	};
};

// SPAR-16S. Changing: Name. Magazines to 30Rnd.
class Weapon_arifle_SPAR_02_blk_F : Weapon_Base_F
{
displayName = "HK416 A5 14.5''";
	class TransportMagazines
	{
		delete 150Rnd_556x45_Drum_Mag_F;
		class 30Rnd_556x45_Stanag_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_red";
		};
	};
};
class Weapon_arifle_SPAR_02_khk_F : Weapon_Base_F
{
displayName = "HK416 A5 14.5'' (Khaki)";
	class TransportMagazines
	{
		delete 150Rnd_556x45_Drum_Green_Mag_F;
		class 30Rnd_556x45_Stanag_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_red";
		};
	};
};
class Weapon_arifle_SPAR_02_snd_F : Weapon_Base_F
{
displayName = "HK416 A5 14.5'' (Sand)";
	class TransportMagazines
	{
		delete 150Rnd_556x45_Drum_Sand_Mag_F;
		class 30Rnd_556x45_Stanag_Sand_red
		{
		count = 1;
		magazine = "30Rnd_556x45_Stanag_Sand_red";
		};
	};
};

// TRG-21 Variants. Changing: Name
class Weapon_arifle_TRG20_F : Weapon_Base_F
{
displayName = "CTAR-21";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_65x39_caseless_msbs_mag
		{
		count = 1;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
};
class Weapon_arifle_TRG21_F : Weapon_Base_F
{
displayName = "TAR-21";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_65x39_caseless_msbs_mag
		{
		count = 1;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
};
class Weapon_arifle_TRG21_GL_F : Weapon_Base_F
{
displayName = "GTAR-21 FN40GL®";
	class TransportMagazines
	{
		delete 30Rnd_556x45_Stanag;
		class 30Rnd_65x39_caseless_msbs_mag
		{
		count = 1;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
};

// Creating MR223 11'' Patterns
class Weapon_arifle_MR223_01_blk_F : Weapon_Base_F
{
displayName = "MR223 11''";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223REM_Mag_NT_F
		{
		magazine = "30Rnd_223REM_Mag_NT_F";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_MR223_01_blk_F
		{
		weapon = "arifle_MR223_01_blk_F";
		count = 1;
		};
	};
};
class Weapon_arifle_MR223_01_khk_F : Weapon_Base_F
{
displayName = "MR223 11'' (Khaki)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223REM_Mag_NT_F
		{
		magazine = "30Rnd_223REM_Mag_NT_F";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_MR223_01_khk_F
		{
		weapon = "arifle_MR223_01_khk_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_MR223_01_snd_F : Weapon_Base_F
{
displayName = "MR223 11'' (Sand)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223REM_Mag_Sand_NT_F
		{
		magazine = "30Rnd_223REM_Mag_Sand_NT_F";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_MR223_01_snd_F
		{
		weapon = "arifle_MR223_01_snd_F";
		count = 1;
		};
	};
};

// Creating MR223 14.5'' Patterns
class Weapon_arifle_MR223_02_blk_F : Weapon_Base_F
{
displayName = "MR223 14.5''";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223REM_Mag_NT_F
		{
		magazine = "30Rnd_223REM_Mag_NT_F";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_MR223_02_blk_F
		{
		weapon = "arifle_MR223_02_blk_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_MR223_02_khk_F : Weapon_Base_F
{
displayName = "MR223 14.5'' (Khaki)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223REM_Mag_NT_F
		{
		magazine = "30Rnd_223REM_Mag_NT_F";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_MR223_02_khk_F
		{
		weapon = "arifle_MR223_02_khk_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_MR223_02_snd_F : Weapon_Base_F
{
displayName = "MR223 14.5'' (Sand)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223REM_Mag_Sand_NT_F
		{
		magazine = "30Rnd_223REM_Mag_Sand_NT_F";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_MR223_02_snd_F
		{
		weapon = "arifle_MR223_02_snd_F";
		count = 1;
		};
	};	
};

// Creating F/S2000 CSAT Reskin Items
class Weapon_arifle_Mk20C_CSAT_F : Weapon_Base_F
{
displayName = "F2000 Tactical TR (CSAT)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_556x45_Stanag_NT
		{
		magazine = "30Rnd_556x45_Stanag_NT";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_Mk20C_CSAT_F
		{
		weapon = "arifle_Mk20C_CSAT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_Mk20_GL_CSAT_F : Weapon_Base_F
{
displayName = "F2000 Tactical GL1 (CSAT)";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_556x45_Stanag
		{
		magazine = "30Rnd_556x45_Stanag";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_Mk20_GL_CSAT_F
		{
		weapon = "arifle_Mk20_GL_CSAT_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_Mk20_CSAT_F : Weapon_Base_F
{
displayName = "FS2000 Tactical TR (CSAT)";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_556x45_Stanag_NT
		{
		magazine = "30Rnd_556x45_Stanag_NT";
		count = 1;
		};
	};	
	class TransportWeapons
	{
		class arifle_Mk20_CSAT_F
		{
		weapon = "arifle_Mk20_CSAT_F";
		count = 1;
		};
	};	
};
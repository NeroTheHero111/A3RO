//3den Editor Items

// Mk18 ABR. Changing: Name.
class Weapon_srifle_EBR_F : Weapon_Base_F
{
displayName = "Mk 14 Mod 0 EBR";
};

// Mk-I EMR. Changing: Name. Editor Category. Replacing Weapon and Magazine
class Weapon_srifle_DMR_03_F : Weapon_Base_F
{
displayName = "SIG 556 DMR 21''";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportWeapons
	{
		delete srifle_DMR_03_F;
		class srifle_DMR_SIG556_F
		{
		weapon = "srifle_DMR_SIG556_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_223Rem_Mag_NT_F
		{
		magazine = "20Rnd_223Rem_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_srifle_DMR_03_multicam_F : Weapon_Base_F
{
displayName = "SIG 556 DMR 21'' (Camo)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportWeapons
	{
		delete srifle_DMR_03_multicam_F;
		class srifle_DMR_SIG556_multicam_F
		{
		weapon = "srifle_DMR_SIG556_multicam_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_223Rem_Mag_NT_F
		{
		magazine = "20Rnd_223Rem_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_srifle_DMR_03_khaki_F : Weapon_Base_F
{
displayName = "SIG 556 DMR 21'' (Khaki)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportWeapons
	{
		delete srifle_DMR_03_khaki_F;
		class srifle_DMR_SIG556_khaki_F
		{
		weapon = "srifle_DMR_SIG556_khaki_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_223Rem_Mag_NT_F
		{
		magazine = "20Rnd_223Rem_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_srifle_DMR_03_tan_F : Weapon_Base_F
{
displayName = "SIG 556 DMR 21'' (Sand)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportWeapons
	{
		delete srifle_DMR_03_tan_F;
		class srifle_DMR_SIG556_tan_F
		{
		weapon = "srifle_DMR_SIG556_tan_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_223Rem_Mag_NT_F
		{
		magazine = "20Rnd_223Rem_Mag_NT_F";
		count = 1;
		};
	};	
};
class Weapon_srifle_DMR_03_woodland_F : Weapon_Base_F
{
displayName = "SIG 556 DMR 21'' (Woodland)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportWeapons
	{
		delete srifle_DMR_03_woodland_F;
		class srifle_DMR_SIG556_woodland_F
		{
		weapon = "srifle_DMR_SIG556_woodland_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_223Rem_Mag_NT_F
		{
		magazine = "20Rnd_223Rem_Mag_NT_F";
		count = 1;
		};
	};	
};

// Mk 14. Changing: Name.
class Weapon_srifle_DMR_06_camo_F : Weapon_Base_F
{
displayName = "M25 SWS (Camo)";
};
class Weapon_srifle_DMR_06_hunter_F : Weapon_Base_F
{
displayName = "M21 SWS";
	class TransportMagazines
	{
		delete 10Rnd_Mk14_762x51_Mag;
		class 20Rnd_762x51_Mag
		{
		magazine = "20Rnd_762x51_Mag";
		count = 1;
		};
	};	
};
class Weapon_srifle_DMR_06_olive_F : Weapon_Base_F
{
displayName = "M25 SWS";
};

// Creating M1A ACLS Item
class Weapon_srifle_M1A_ACLS_F : Weapon_Base_F
{
displayName = "M1A ACLS";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class srifle_M1A_ACLS_F
		{
		weapon = "srifle_M1A_ACLS_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 20Rnd_308WIN_Mag
		{
		magazine = "20Rnd_308WIN_Mag";
		count = 1;
		};
	};	
};

// SDAR. Changing: Name. Hiding
class Weapon_arifle_SDAR_F : Weapon_Base_F
{
displayName = "SDAR";
scope = 1;
scopeCurator = 1;
};

// Creating RFB Items
class Weapon_arifle_RFB_F: Weapon_Base_F
{
displayName = "RFB";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportWeapons
	{
		class arifle_RFB_F
		{
		weapon = "arifle_RFB_F";
		count = 1;
		};
	};
	class TransportMagazines
	{
		class 20Rnd_308WIN_Mag
		{
		magazine = "20Rnd_308WIN_Mag";
		count = 1;
		};
	};	
};

// SPAR-17. Changing: Name. Subcategory. Magazine.
class Weapon_arifle_SPAR_03_blk_F: Weapon_Base_F
{
displayName = "MR308 A3-28 20''";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_308WIN_Mag
		{
		magazine = "20Rnd_308WIN_Mag";
		count = 1;
		};
	};	
};
class Weapon_arifle_SPAR_03_khk_F: Weapon_Base_F
{
displayName = "MR308 A3-28 20'' (Khaki)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_308WIN_Mag
		{
		magazine = "20Rnd_308WIN_Mag";
		count = 1;
		};
	};	
};
class Weapon_arifle_SPAR_03_snd_F: Weapon_Base_F
{
displayName = "MR308 A3-28 20'' (Sand)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
		delete 20Rnd_762x51_Mag;
		class 20Rnd_308WIN_Mag
		{
		magazine = "20Rnd_308WIN_Mag";
		count = 1;
		};
	};	
};

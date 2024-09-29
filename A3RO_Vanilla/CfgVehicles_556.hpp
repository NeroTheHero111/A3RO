// 3den Editor Items

// Mk20. Changing: Name
class Weapon_arifle_Mk20_plain_F : Weapon_Base_F
{
displayName = "FS2000 Tactical TR";
};
class Weapon_arifle_Mk20_F : Weapon_Base_F
{
displayName = "FS2000 Tactical TR (Camo)";
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
displayName = "HK416A5 11''";
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
displayName = "HK416A5 11'' (Khaki)";
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
displayName = "HK416A5 11'' (Sand)";
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
displayName = "HK416A5 11'' GLM";
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
displayName = "HK416A5 11'' GLM (Khaki)";
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
displayName = "HK416A5 11'' GLM (Sand)";
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
displayName = "HK416A5 14.5''";
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
displayName = "HK416A5 14.5'' (Khaki)";
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
displayName = "HK416A5 14.5'' (Sand)";
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
displayName = "GTAR-21 EGLM";
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
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223Rem_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_Mag_NT_F";
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
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223Rem_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_Mag_NT_F";
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
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223Rem_Mag_Sand_NT_F
		{
		magazine = "30Rnd_223Rem_Mag_Sand_NT_F";
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
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223Rem_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_Mag_NT_F";
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
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223Rem_Mag_NT_F
		{
		magazine = "30Rnd_223Rem_Mag_NT_F";
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
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
	class TransportMagazines
	{
		class 30Rnd_223Rem_Mag_Sand_NT_F
		{
		magazine = "30Rnd_223Rem_Mag_Sand_NT_F";
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

// Creating F/S2000 Opfor Reskin Items
class Weapon_arifle_Mk20C_OPFOR_F : Weapon_Base_F
{
displayName = "F2000 Tactical TR (Opfor)";
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
		class arifle_Mk20C_OPFOR_F
		{
		weapon = "arifle_Mk20C_OPFOR_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_Mk20_GL_OPFOR_F : Weapon_Base_F
{
displayName = "F2000 Tactical GL1 (Opfor)";
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
		class arifle_Mk20_GL_OPFOR_F
		{
		weapon = "arifle_Mk20_GL_OPFOR_F";
		count = 1;
		};
	};	
};
class Weapon_arifle_Mk20_OPFOR_F : Weapon_Base_F
{
displayName = "FS2000 Tactical TR (Opfor)";
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
		class arifle_Mk20_OPFOR_F
		{
		weapon = "arifle_Mk20_OPFOR_F";
		count = 1;
		};
	};	
};
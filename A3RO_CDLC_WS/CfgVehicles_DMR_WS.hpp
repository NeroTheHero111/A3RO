// GM6 12.7x108
class Weapon_srifle_GM6_snake_lxWS: Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x108 (Snake)";
};
// Mk 14 EBR Mod 0
class Weapon_srifle_EBR_blk_lxWS: Weapon_Base_F
{
displayName = "Mk 14 Mod 0 EBR (Black)";
    class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class 20Rnd_762x51_Mag_blk_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_Mag_blk_lxWS";
		};
	};
};
class Weapon_srifle_EBR_snake_lxWS: Weapon_Base_F
{
displayName = "Mk 14 Mod 0 EBR (Snake)";
    class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class 20Rnd_762x51_Mag_snake_lxWS
		{
		count = 1;
		magazine = "20Rnd_762x51_Mag_snake_lxWS";
		};
	};
};
// M1A
class Weapon_srifle_M1A_ACLS_blk_lxWS: Weapon_Base_F
{
displayName = "M1A ACLS (Black)";
DLC = "ws";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 20Rnd_Mk14_308WIN_Mag_blk_lxWS
		{
		count = 1;
		magazine = "20Rnd_Mk14_308WIN_Mag_blk_lxWS";
		};
	};
	class TransportWeapons
	{
		class srifle_M1A_ACLS_blk_lxWS
		{
		count = 1;
		weapon = "srifle_M1A_ACLS_blk_lxWS";
		};
	};	
};
class Weapon_srifle_M1A_ACLS_snake_lxWS: Weapon_Base_F
{
displayName = "M1A ACLS (Snake)";
DLC = "ws";
editorSubcategory = "EdSubcat_Sport_Hunt";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
    class TransportMagazines
	{
		class 20Rnd_Mk14_308WIN_Mag_snake_lxWS
		{
		count = 1;
		magazine = "20Rnd_Mk14_308WIN_Mag_snake_lxWS";
		};
	};
	class TransportWeapons
	{
		class srifle_M1A_ACLS_snake_lxWS
		{
		count = 1;
		weapon = "srifle_M1A_ACLS_snake_lxWS";
		};
	};	
};
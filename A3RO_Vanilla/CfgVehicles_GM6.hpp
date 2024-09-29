// 3den Editor Items

// GM6 Lynx. Changing: Name.
class Weapon_srifle_GM6_F : Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x108";
};
class Weapon_srifle_GM6_camo_F : Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x108 (Hex)";
};
class Weapon_srifle_GM6_ghex_F : Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x108 (Green Hex)";	
};

// Creating GM6 Lynx 12.7x99 Items
class Weapon_srifle_GM6_50BMG_F : Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x99";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_GM6_50BMG_F
			{
			weapon = "srifle_GM6_50BMG_F";
			count = 1;
			};
		};
		class TransportMagazines
		{
			class 5Rnd_127x99_Mag
			{
			magazine = "5Rnd_127x99_Mag";
			count = 1;
			};
		};	
};
class Weapon_srifle_GM6_50BMG_ghex_F : Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x99 (Green Hex)";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_GM6_50BMG_ghex_F
			{
			weapon = "srifle_GM6_50BMG_ghex_F";
			count = 1;
			};
		};
		class TransportMagazines
		{
			class 5Rnd_127x99_Mag
			{
			magazine = "5Rnd_127x99_Mag";
			count = 1;
			};
		};	
};
class Weapon_srifle_GM6_50BMG_hex_F : Weapon_Base_F
{
displayName = "GM6 Lynx 12.7x99 (Hex)";
editorSubcategory = "EdSubcat_SniperRifles";
scope = 2;
scopeCurator = 2;
vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_GM6_50BMG_hex_F
			{
			weapon = "srifle_GM6_50BMG_hex_F";
			count = 1;
			};
		};
		class TransportMagazines
		{
			class 5Rnd_127x99_Mag
			{
			magazine = "5Rnd_127x99_Mag";
			count = 1;
			};
		};	
};
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

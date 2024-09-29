// Mk18 EBR Base. Changing: Name. Description. Adding Magwells. Fixing Mode Order
class EBR_base_F : Rifle_Long_Base_F
{
descriptionShort = "Marksman Rifle<br />Calibre: 7.62x51mm NATO";
displayName = "Mk 14 Mod 0 EBR Base Class";
initSpeed = 790.956;
magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
};

// Mk18 EBR. Changing: Name. Description
class srifle_EBR_F : EBR_base_F
{
displayName = "Mk 14 Mod 0 EBR";
descriptionShort = "Marksman Rifle<br />Calibre: 7.62x51mm NATO";
initSpeed = 790.956;
};

// Mk 14 Base Classes. Adding Magwells. Removing Full Auto. Changing: Name. Description
class DMR_06_base_F : Rifle_Long_Base_F
{
descriptionShort = "Marksman Rifle<br />Calibre: 7.62x51mm NATO";
displayName = "M21 SWS Base Class";
initSpeed = 853;
magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
};
class DMR_06_hunter_base_F : DMR_06_base_F
{
magazines[] = {"20Rnd_762x51_Mag"};
};

// Mk 14. Changing: Name.
class srifle_DMR_06_hunter_F : DMR_06_hunter_base_F
{
displayName = "M21 SWS";
};
class srifle_DMR_06_camo_F : DMR_06_base_F
{
displayName = "M25 SWS (Camo)";
};
class srifle_DMR_06_olive_F : srifle_DMR_06_camo_F
{
displayName = "M25 SWS";
};

// SDAR Base Class. Changing: Name. Description
class SDAR_base_F : Rifle_Base_F
{
descriptionShort = "Fictional Underwater Rifle<br />Calibre: 5.56x45mm UW";
displayName="SDAR Base Class";
};
// SDAR. Changing: Name. Description
class arifle_SDAR_F : SDAR_base_F
{
descriptionShort = "Fictional Underwater Rifle<br />Calibre: 5.56x45mm UW";
displayName="SDAR";
scope = 1;
};

// Creating RFB
class arifle_RFB_F : arifle_SDAR_F
{
_generalMacro = "arifle_RFB_F";	
baseWeapon = "arifle_RFB_F";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
displayName="RFB";
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\rfb_co","A3\Weapons_F\Rifles\SDAR\data\rfb_uw_co"};
initSpeed = 819.912;
magazines[] = {"20Rnd_308WIN_Mag"};
magazineWell[] = {"MR308_308WIN","CBA_762x51_MkI_EMR","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
scope = 2;
};

// SPAR-17 Base Class. Changing: Name. Description. Removing Full Auto
class arifle_SPAR_03_base_F : Rifle_Base_F
{
_generalMacro = "arifle_SPAR_03_base_F";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
displayName = "MR308 A3-28 20'' Base Class";
magazines[] = {"20Rnd_308WIN_Mag"};
magazineWell[] = {"MR308_308WIN","CBA_762x51_MkI_EMR","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
initSpeed = 750;
};

// SPAR-17 Patterns. Changing: Name. Hiding from Arsenal. Calibre not Changing on this Class to maximize Compatibility for Modded Factions that I cannot take into account.
class arifle_SPAR_03_blk_F : arifle_SPAR_03_base_F
{
_generalMacro = "arifle_SPAR_03_blk_F";
baseWeapon = "arifle_SPAR_03_blk_F";
displayName = "MR308 A3-28 20''";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa","\A3RO_Vanilla\Textures\arifle_SPAR_03_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa"};
}; 
class arifle_SPAR_03_khk_F : arifle_SPAR_03_base_F
{
_generalMacro = "arifle_SPAR_03_khk_F";
baseWeapon = "arifle_SPAR_03_khk_F";
displayName = "MR308 A3-28 20'' (Khaki)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_co.paa","\A3RO_Vanilla\Textures\arifle_SPAR_03_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa"};
};
class arifle_SPAR_03_snd_F : arifle_SPAR_03_base_F
{
_generalMacro = "arifle_SPAR_03_snd_F";
baseWeapon = "arifle_SPAR_03_snd_F";
displayName = "MR308 A3-28 20'' (Sand)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_co.paa","\A3RO_Vanilla\Textures\arifle_SPAR_03_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa"};
};

// Creating Mk 14 Mod 0 EBR Subclass with Attachments for Unit Replacement
class srifle_EBR_DMS_LP_BI_F : srifle_EBR_F
{
_generalMacro = "srifle_EBR_DMS_LP_BI_F";
scope = 1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";	
		};
		class LinkedItemsOptic
		{
		item = "optic_DMS";
		slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
		item = "bipod_01_F_blk";
		slot = "UnderBarrelSlot";
		};
	};
};

// Creating M1A ALCS
class srifle_M1A_ACLS_F : srifle_EBR_F
{
_generalMacro = "srifle_M1A_ACLS_F";	
baseWeapon = "srifle_M1A_ACLS_F";
displayName = "M1A ACLS";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
initSpeed = 834.8472;
magazines[] = {"20Rnd_308WIN_Mag"};
magazineWell[] = {"MR308_308WIN","CBA_762x51_MkI_EMR","M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL","M14_308WIN_S"};
};
// ADR-97 TR Base Class. Changing: Name. Description
class SMG_03_TR_BASE : Rifle_Base_F
{
displayName = "PS90 TR Base Class";
descriptionShort = "Personal Defense Weapon<br />Calibre: FN 5.7x28mm NATO";
initSpeed = 777;
magazines[] = {"50Rnd_570x28_SMG_03"};
};

// ADR-97C Base Class. Changing: Name.
class SMG_03C_BASE : SMG_03_TR_BASE
{	
displayName = "P90 Base Class";	
initSpeed = 715;
magazines[] = {"50Rnd_570x28_SMG_03_RT"};
};

// Creating new ADR-97 TR Base Class without Full Auto Mode. (The only way to get rid of the FullAuto Subclass would be to Inherit from Rifle_Base_F and copy paste the entire Class structure except FullAuto. Womp Womp)
class SMG_03_TR_BASE_SEMI : SMG_03_TR_BASE
{
displayName = "PS90 Base Class";	
};

// ADR-97. Changing: Name
class SMG_03_black : SMG_03_TR_BASE_SEMI
{
displayName = "PS90 USG";
};
class SMG_03_camo : SMG_03_black
{
displayName = "PS90 USG (Camo)";	
};
class SMG_03_hex : SMG_03_black
{
displayName = "PS90 USG (Hex)";	
};
class SMG_03_khaki : SMG_03_black
{
displayName = "PS90 USG (Khaki)";	
};

// ADR-97 TR. Changing: Name
class SMG_03_TR_black : SMG_03_TR_BASE_SEMI
{
displayName = "PS90 TR";	
};
class SMG_03_TR_camo : SMG_03_TR_black
{
displayName = "PS90 TR (Camo)";		
};
class SMG_03_TR_hex : SMG_03_TR_black
{
displayName = "PS90 TR (Hex)";		
};
class SMG_03_TR_khaki : SMG_03_TR_black
{
displayName = "PS90 TR (Khaki)";
};

// ADR-97C. Changing: Name
class SMG_03C_black : SMG_03C_BASE
{
displayName = "P90 USG";
};
class SMG_03C_camo : SMG_03C_black
{
displayName = "P90 USG (Camo)";	
};
class SMG_03C_hex : SMG_03C_black
{
displayName = "P90 USG (Hex)";	
};
class SMG_03C_khaki : SMG_03C_black
{
displayName = "P90 USG (Khaki)";	
};

// ADR-97 TR. Changing: Name
class SMG_03C_TR_black : SMG_03C_BASE
{
displayName = "P90 TR";	
};
class SMG_03C_TR_camo : SMG_03C_TR_black
{
displayName = "P90 TR (Camo)";		
};
class SMG_03C_TR_hex : SMG_03C_TR_black
{
displayName = "P90 TR (Hex)";		
};
class SMG_03C_TR_khaki : SMG_03C_TR_black
{
displayName = "P90 TR (Khaki)";		
};

// PDW20000 Base Class. Removing Burst.
class pdw2000_base_F : Rifle_Short_Base_F
{
descriptionShort = "Fictional Submachine Gun<br/>Calibre: 9x21mm";
displayName = "PDW2000 Base Class";
};

// Hiding 9x21 PDW2000
class hgun_PDW2000_F : pdw2000_base_F
{
displayName = "PDW2000";
scope = 1;
};

// Creating CPW Base Class
class cpw_pdw_base_F : pdw2000_base_F
{
_generalMacro = "cpw_pdw_base_F";
aimTransitionSpeed = 1.5;
descriptionShort = "Submachine Gun<br/>Calibre: 9x19mm Parabellum";
dexterity = 1.8;
displayName = "CPW Base Class";
inertia = 0.2;
initSpeed = 358.9281;
magazines[] = {""};
magazineWell[] = {""};
model = "\A3\Weapons_F_gamma\Smgs\pdw2000\pdw2000_F.p3d";
picture = "\A3\Weapons_F_gamma\Smgs\pdw2000\data\UI\gear_pdw2X_X_CA.paa";
UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa"; 
};

// Creating CPW 9x19
class hgun_cpw_ParaB_F : cpw_pdw_base_F
{
_generalMacro = "hgun_cpw_ParaB_F";
baseWeapon = "hgun_cpw_ParaB_F";
displayName = "CPW 9x19";
magazines[] = {"30Rnd_9x19_RT_Green_Mag"};
magazineWell[] = {"CPW_9x19"};
scope = 2;
};

// Creating CPW 5.7x28
class hgun_cpw_FN_F : cpw_pdw_base_F
{
_generalMacro = "hgun_cpw_FN_F";
baseWeapon = "hgun_cpw_FN_F";	
descriptionShort = "Personal Defense Weapon<br/>Calibre: FN 5.7x28mm NATO";
displayName = "CPW 5.7x28";
initSpeed = 713.5675;
magazines[] = {"30Rnd_570x28_RT_Red_Mag"};
magazineWell[] = {"CPW_570x28"};
scope = 2;
};

// Creating CPW 4.6x30mm
class hgun_cpw_HK_F : cpw_pdw_base_F
{
_generalMacro = "hgun_cpw_HK_F";
baseWeapon = "hgun_cpw_HK_F";		
descriptionShort = "Personal Defense Weapon<br/>Calibre: 4.6x30mm";
displayName = "CPW 4.6x30";
initSpeed = 681.2844;
magazines[] = {"30Rnd_460x30_RT_Yellow_Mag"};
magazineWell[] = {"CPW_460x30"};
scope = 2;
};

// Creating CPW Subclasse with Optic for Unit Replacement
class hgun_cpw_ParaB_Holo_F : hgun_cpw_ParaB_F
{
_generalMacro = "hgun_cpw_ParaB_Holo_F";
scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		item = "optic_Holosight_smg_blk_F";
		slot = "CowsSlot";
		};
	};
};

// Protector Base Class. Changing: Name. Description. Fixing Mode Order
class SMG_05_base_F : Rifle_Short_Base_F
{
descriptionShort = "Fictional Submachine Gun<br />Calibre: 9x21mm";	
displayName = "Protector Base Class";
};

// Hiding Protector
class SMG_05_F : SMG_05_base_F
{
displayName = "Protector";
scope = 1;
};

// Creating MP5K-PDW
class SMG_05_ParaB_F : SMG_05_base_F
{
_generalMacro = "SMG_05_ParaB_F";
baseWeapon = "SMG_05_ParaB_F";			
descriptionShort = "Submachine Gun<br />Calibre: 9x19mm Parabellum";
displayName = "MP5K-PDW";
initSpeed = 375;
magazines[] = {"30Rnd_9x19_SMG_RT_Red_Mag"};
magazineWell[] = {"CBA_9x19_MP5","SMG_9x19"};
scope = 2;
};

// Creating SP5K-PDW. Changing Materials and Texture to reflect its Firemodes. Removing FullAuto
class SMG_05_ParaB_Semi_F : SMG_05_ParaB_F
{
_generalMacro = "SMG_05_ParaB_Semi_F";
baseWeapon = "SMG_05_ParaB_Semi_F";	
displayName = "SP5K-PDW";
hiddenSelectionsMaterials[] = {"A3RO_Vanilla\Textures\SMG_05_Semi_F.rvmat","\A3\Weapons_F_Exp\SMGs\SMG_05\Data\SMG_05_F_acc.rvmat"};
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\SMG_05_Semi_F_co.paa","\A3\Weapons_F_Exp\SMGs\SMG_05\Data\SMG_05_F_acc_CO.paa"};
magazines[] = {"30Rnd_9x19_SMG_Mag"};
};

// Sting Base Class. Fixing Mode Order
class SMG_02_base_F : Rifle_Short_Base_F
{
descriptionShort = "Fictional Submachine Gun<br />Calibre: 9x21mm";	
displayName = "Sting Base Class";
};

// Hiding Sting
class SMG_02_F : SMG_02_base_F
{
scope = 1;
};
// Creating Scorpion EVO 3 A1
class SMG_02_ParaB_F : SMG_02_F
{
_generalMacro = "SMG_02_ParaB_F";
baseWeapon = "SMG_02_ParaB_F";			
descriptionShort = "Submachine Gun<br />Calibre: 9x19mm Parabellum";
displayName = "Scorpion EVO 3 A1";
initSpeed = 370;
magazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag"};
magazineWell[] = {"CBA_9x19_ScorpionEvo3","SMG_9x19"};
scope = 2;
};

// Creating Scorpion EVO 3 S1. Changing Materials and Texture to reflect its Firemodes. Removing FullAuto and Burst
class SMG_02_ParaB_Semi_F : SMG_02_ParaB_F
{
_generalMacro = "SMG_02_ParaB_F";	
baseWeapon = "SMG_02_ParaB_Semi_F";
displayName = "Scorpion EVO 3 S1";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\smg_02_semi.rvmat","\A3\Weapons_F_Beta\SMGs\SMG_02\Data\smg_02_ammo.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\smg_02_Semi_CO.paa","\A3\Weapons_F_Beta\SMGs\SMG_02\Data\smg_02_ammo_CA"};
magazines[] = {"30Rnd_9x19_SMG_Mag"};
};

// Creating Scorpion Subclass with Optic for Unit Replacement
class SMG_02_ParaB_ACO_F : SMG_02_ParaB_F
{
_generalMacro = "SMG_02_ParaB_ACO_F";
scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		item = "optic_Aco_smg";
		slot = "CowsSlot";
		};
	};
};

// Vermin Base Class. Changing: Name. Description. Fixing Mode Order
class SMG_01_Base : Rifle_Short_Base_F
{
descriptionShort = "Submachine Gun<br />Calibre: .45 ACP";
displayName = "Vector SMG Gen I Base Class";	
initSpeed = 400.9949;
magazines[] = {"30Rnd_45ACP_Mag_SMG_01"};
};

// Vermin. Changing: Name.
class SMG_01_F : SMG_01_Base
{
descriptionShort = "Submachine Gun<br />Calibre: .45 ACP";	
displayName = "Vector SMG Gen I .45";	
};

// Creating Vector SMG Gen I 9x19
class SMG_01_9x19_F : SMG_01_F
{
_generalMacro = "SMG_01_9x19_F";
baseWeapon = "SMG_01_9x19_F";			
descriptionShort = "Submachine Gun<br />Calibre: 9x19mm Parabellum";
displayName = "Vector SMG Gen I 9x19";
initSpeed = 373.8372;
magazines[] = {"40Rnd_9x19_Vector_RT_Red_Mag"};
magazineWell[] = {"Vermin_9x19"};
scope = 2;
};
// CAR-95 Base Class. Changing: Name. Description. Fixing Mode Order
class arifle_CTAR_base_F : Rifle_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.8x42mm";
displayName = "QBZ-95-1 Base Class";
magazines[] = {"30Rnd_580x42_Mag_F"};
};

// CAR-95. Changing: Name.
class arifle_CTAR_blk_F : arifle_CTAR_base_F
{
displayName = "QBZ-95-1 FTU™";
}
class arifle_CTAR_ghex_F : arifle_CTAR_base_F
{
displayName = "QBZ-95-1 FTU™ (Green Hex)";
}
class arifle_CTAR_hex_F : arifle_CTAR_base_F
{
displayName = "QBZ-95-1 FTU™ (Hex)";
}

// CAR-95-1 Base Class. Changing: Changing: Name. Description
class arifle_CTARS_base_F : Rifle_Base_F
{
descriptionShort = "Light Machine Gun<br />Calibre: 5.8x42mm";
displayName = "QJB-95-1 FTU™ LSW Base Class";	
initSpeed = 970;
magazines[] = {"100Rnd_580x42_T4_Mag_F"};
};

// CAR-95-1. Changing: Name.
class arifle_CTARS_blk_F : arifle_CTARS_base_F
{
displayName = "QJB-95-1 FTU™ LSW";
};
class arifle_CTARS_ghex_F : arifle_CTARS_base_F
{
displayName = "QJB-95-1 FTU™ LSW (Green Hex)";
magazines[] = {"100Rnd_580x42_ghex_T4_Mag_F"};
};
class arifle_CTARS_hex_F : arifle_CTARS_base_F
{
displayName = "QJB-95-1 FTU™ LSW (Hex)";	
magazines[] = {"100Rnd_580x42_hex_T4_Mag_F"};
};

// CAR-95 GL Base Class. Changing: Name. Description. Grenade Launcher Name
class arifle_CTAR_GL_base_F : arifle_CTAR_base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.8x42mm<br />Underbarrel Grenade Launcher<br />Calibre: 35mmCL Type 10";
displayName = "QBZ-95-1 FTU™ QLG-10A Base Class";	
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 35mmCL Type 10";
	discreteDistanceInitIndex = 0; 		
	displayName = "QLG-10A";
	};
};

// CAR-95 GL. Changing: Name. Description.
class arifle_CTAR_GL_blk_F : arifle_CTAR_GL_base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A";
};
class arifle_CTAR_GL_ghex_F : arifle_CTAR_GL_base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A (Green Hex)";	
};
class arifle_CTAR_GL_hex_F : arifle_CTAR_GL_base_F
{
displayName = "QBZ-95-1 FTU™ QLG-10A (Hex)";
};

// Creating QBZ-97 Base Class
class arifle_QBZ97_base_F : arifle_CTAR_base_F
{
_generalMacro = "arifle_QBZ97_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "QBZ-97 FTU™ Base Class";
initSpeed = 942.0506;
magazines[] = {"30Rnd_556x45_RT_QBZ_Mag_F"};
magazineWell[] = {"QBZ97_556x45","QBZ97_556x45_Large","T97_223R","T97_223R_Large"};	
};

// QBZ-97 Patterns
class arifle_QBZ97_blk_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_QBZ97_blk_F";
baseWeapon = "arifle_QBZ97_blk_F";
displayName = "QBZ-97 FTU™";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_ghex_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_QBZ97_ghex_F";
baseWeapon = "arifle_QBZ97_ghex_F";	
displayName = "QBZ-97 FTU™ (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_hex_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_QBZ97_hex_F";
baseWeapon = "arifle_QBZ97_hex_F";	
displayName = "QBZ-97 FTU™ (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_hex_F_X_CA.paa";
scope = 2;
};

// Creating QBZ-97 QLG-10A Base Class
class arifle_QBZ97_GL_base_F : arifle_CTAR_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_base_F";
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 35mmCL Type 10";
displayName = "QBZ-97 FTU™ QLG-10A Base Class";
magazines[] = {"30Rnd_556x45_RT_QBZ_Mag_F"};
magazineWell[] = {"QBZ97_556x45","QBZ97_556x45_Large","T97_223R","T97_223R_Large"};	
};

// QBZ-97 QLG-10A Patterns
class arifle_QBZ97_GL_blk_F : arifle_QBZ97_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_blk_F";
baseWeapon = "arifle_QBZ97_GL_blk_F";
displayName = "QBZ-97 FTU™ QLG-10A";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_blk_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_GL_ghex_F : arifle_QBZ97_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_ghex_F";
baseWeapon = "arifle_QBZ97_GL_ghex_F";	
displayName = "QBZ-97 FTU™ QLG-10A (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_ghex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_QBZ97_GL_hex_F : arifle_QBZ97_GL_base_F
{
_generalMacro = "arifle_QBZ97_GL_hex_F";
baseWeapon = "arifle_QBZ97_GL_hex_F";	
displayName = "QBZ-97 FTU™ QLG-10A (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_bhex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_hex_F_X_CA.paa";
scope = 2;
};

// Creating QJB-97 Base Class
class arifle_QJB97_base_F : arifle_CTARS_base_F
{
_generalMacro = "arifle_QJB97_base_F";
descriptionShort = "Light Machine Gun<br />Calibre: 5.56x45mm NATO";
displayName = "QJB-97 LSW Base Class";
initSpeed = 992.03478;
magazines[] = {"75Rnd_556x45_T4_QBZ_Mag_F"};
magazineWell[] = {"QBZ97_556x45","QBZ97_556x45_Large","T97_223R","T97_223R_Large"};	
};

// QJB-97 Patterns
class arifle_QJB97_blk_F : arifle_QJB97_base_F
{
_generalMacro = "arifle_QJB97_blk_F";
baseWeapon = "arifle_QJB97_blk_F";
displayName = "QJB-97 FTU™ LSW";
hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\rifles\ctar\data\ctar_f_1_co.paa","\a3\weapons_f_exp\rifles\ctars\data\ctars_f_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA.paa";
scope = 2;
};
class arifle_QJB97_ghex_F : arifle_QJB97_base_F
{
_generalMacro = "arifle_QJB97_ghex_F";
baseWeapon = "arifle_QJB97_ghex_F";	
displayName = "QJB-97 FTU™ LSW (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"};
magazines[] = {"75Rnd_556x45_T4_Ghex_QBZ_Mag_F"};
picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_QJB97_hex_F : arifle_QJB97_base_F
{
_generalMacro = "arifle_QJB97_hex_F";
baseWeapon = "arifle_QJB97_hex_F";	
displayName = "QJB-97 FTU™ LSW (Hex)";
magazines[] = {"75Rnd_556x45_T4_Hex_QBZ_Mag_F"};
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_hex_F_X_CA.paa";
scope = 2;
};

// Creating T97NSR-A Base Class
class arifle_T97NSRA_base_F : arifle_QBZ97_base_F
{
_generalMacro = "arifle_T97NSRA_base_F";
descriptionShort = "Sporting Rifle<br />Calibre: .223 Remington";
displayName = "T97NSR-A Base Class";
initSpeed = 988.3506;
magazines[] = {"30Rnd_223Rem_NT_QBZ_Mag_F"};
magazineWell[] = {"T97_223R","T97_223R_Large"};
};

// T97NSR-A Patterns
class arifle_T97NSRA_blk_F : arifle_T97NSRA_base_F
{
_generalMacro = "arifle_T97NSRA_blk_F";
baseWeapon = "arifle_T97NSRA_blk_F";
displayName = "T97NSR-A";
hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\rifles\ctar\data\ctar_f_1_co.paa","\a3\weapons_f_exp\rifles\ctars\data\ctars_f_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
scope = 2;
};
class arifle_T97NSRA_ghex_F : arifle_T97NSRA_base_F
{
_generalMacro = "arifle_T97NSRA_ghex_F";
baseWeapon = "arifle_T97NSRA_ghex_F";	
displayName = "T97NSR-A (Green Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_ghex_F_X_CA.paa";
scope = 2;
};
class arifle_T97NSRA_hex_F : arifle_T97NSRA_base_F
{
_generalMacro = "arifle_T97NSRA_hex_F";
baseWeapon = "arifle_T97NSRA_hex_F";	
displayName = "T97NSR-A (Hex)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"};
picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_hex_F_X_CA.paa";
scope = 2;
};
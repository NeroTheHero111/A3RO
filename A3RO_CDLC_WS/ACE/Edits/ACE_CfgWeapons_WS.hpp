// Adjusting Barrel Twist & Length. Unifying Dispersion and Firerate for ACE Firemodes
// Galil ARM 7.62x51
class arifle_Galat_base_lxWS : Rifle_Base_F
{
ACE_barrelLength = 460;
};

// GLX160 - standalone
class glaunch_GLX_base_lxWS : Rifle_Base_F
{
ACE_barrelLength = 280;
ACE_barrelTwist = 1200;
// No Height Above Bore or Base Angle Data
};

// AA-12 CQB
class sgun_aa40_base_lxWS : Rifle_Base_F
{
ACE_barrelLength = 330;
ace_overheating_closedBolt = 0;
};

// StG 58
class DMR_06_base_F;
class arifle_SLR_lxWS : DMR_06_base_F
{
// Length perfect
ACE_barrelTwist = 304.8;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;	
	};
};
class arifle_SLR_V_lxWS : arifle_SLR_lxWS
{
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
};

// SA58 Carbine 16'' TPB. Its called 16'', but in the Description of the Jungle Warrior Carbine it states 16.25''
class arifle_SLR_GL_lxWS : arifle_SLR_lxWS
{
ACE_barrelLength = 412.7;
ACE_barrelTwist = 254;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
};
class arifle_SLR_V_GL_lxWS : arifle_SLR_V_lxWS
{
ACE_barrelLength = 412.7;
ACE_barrelTwist = 254;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;	
	};
};

// SA58 OSW 11''
class arifle_SLR_Para_lxWS : arifle_SLR_V_lxWS
{
ACE_barrelLength = 279.4;
ACE_barrelTwist = 254;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	showToPlayer = 0;
	};
};

// Vektor Base Class
class arifle_Velko_base_lxWS : arifle_Galat_base_lxWS
{
// Length Perfect
ACE_barrelTwist = 305;
	class GL203_lxWS : UGL_F
	{
	ACE_barrelLength = 228.6;
	ACE_barrelTwist = 1200;
	};
};

// SS77 Mk1
class LMG_S77_base_lxWS : Rifle_Long_Base_F
{
ACE_barrelLength = 585;
// Barrel Twist OK
};
class LMG_S77_Compact_base_lxWS : LMG_S77_base_lxWS
{
ACE_barrelLength = 508; // This is sadly just a guess, but a very close one!
// Barrel Twist OK
};

// XMS
class arifle_SPAR_01_base_F;
class arifle_XMS_Base_lxWS : arifle_SPAR_01_base_F
{
ACE_barrelLength = 457.2;
ACE_barrelTwist = 177.8;
};
class arifle_XMS_GL_lxWS : arifle_XMS_Base_lxWS
{
	class UGL_lxWS : UGL_F
	{
	ACE_barrelLength = 279.4;
	ACE_barrelTwist = 1200;
	};
};
class arifle_XMS_M_lxWS : arifle_XMS_Base_lxWS
{
ACE_barrelLength = 508;
};

// Western Sahara Optics. Adding ACE 2D and PIP Variants
// Mark 4
class ACE_optic_Hamr_arid_2D : ACE_optic_Hamr_2D
{
_generalMacro = "ACE_optic_Hamr_arid_2D";	
displayName = "Mark 4® HAMR® 4x24 (2D, Arid, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_arid_ca.paa";
};
/*
class ACE_optic_Hamr_arid_PIP : ACE_optic_Hamr_PIP
{
_generalMacro = "ACE_optic_Hamr_arid_PIP";	
displayName = "Mark 4® HAMR® 4x24 (PIP, Arid, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_arid_ca.paa";
};
*/
class ACE_optic_Hamr_lush_2D : ACE_optic_Hamr_2D
{
_generalMacro = "ACE_optic_Hamr_lush_2D";	
displayName = "Mark 4® HAMR® 4x24 (2D, Lush, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_lush_ca.paa";
};
/*
class ACE_optic_Hamr_lush_PIP : ACE_optic_Hamr_PIP
{
_generalMacro = "ACE_optic_Hamr_lush_PIP";	
displayName = "Mark 4® HAMR® 4x24 (PIP, Lush, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_lush_ca.paa";
};
*/
class ACE_optic_Hamr_sand_2D : ACE_optic_Hamr_2D
{
_generalMacro = "ACE_optic_Hamr_sand_2D";	
displayName = "Mark 4® HAMR® 4x24 (2D, Sand, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_sand_ca.paa";
};
/*
class ACE_optic_Hamr_sand_PIP : ACE_optic_Hamr_PIP
{
_generalMacro = "ACE_optic_Hamr_sand_PIP";	
displayName = "Mark 4® HAMR® 4x24 (PIP, Sand, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_sand_ca.paa";
};
*/
class ACE_optic_Hamr_snake_2D : ACE_optic_Hamr_2D
{
_generalMacro = "ACE_optic_Hamr_snake_2D";	
displayName = "Mark 4® HAMR® 4x24 (2D, Snake, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_snake_ca.paa";
};
/*
class ACE_optic_Hamr_snake_PIP : ACE_optic_Hamr_PIP
{
_generalMacro = "ACE_optic_Hamr_snake_PIP";	
displayName = "Mark 4® HAMR® 4x24 (PIP, Snake, Deltapoint Pro NV)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_hamr_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Hamr_snake_ca.paa";
};
*/
// SpecterOS
class ACE_optic_Arco_Hex_2D : ACE_optic_Arco_2D
{
_generalMacro = "ACE_optic_Arco_Hex_2D";	
displayName = "SpecterOS 4x32 (2D, Hex, NV sight II plus)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_arco_hex_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Arco_hex_ca.paa";
};
/*
class ACE_optic_Arco_Hex_PIP : ACE_optic_Arco_PIP
{
_generalMacro = "ACE_optic_Arco_Hex_PIP";	
displayName = "SpecterOS 4x32 (PIP, Hex, NV sight II plus)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\acco_arco_hex_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_optic_Arco_hex_ca.paa";
};
*/

// Hiding Vanilla Laser Modules
class acc_pointer_IR_arid_lxWS : acc_pointer_IR
{
scope = 1;
scopeCurator = 1;
};
class acc_pointer_IR_lush_lxWS : acc_pointer_IR
{
scope = 1;
scopeCurator = 1;
};
class acc_pointer_IR_sand_lxWS : acc_pointer_IR
{
scope = 1;
scopeCurator = 1;
};
class acc_pointer_IR_snake_lxWS : acc_pointer_IR
{
scope = 1;
scopeCurator = 1;
};

// New Laser Modules
// Arid
// Red
class ACE_DBAL_A3_Arid_Red : ACE_DBAL_A3_Red
{
baseWeapon = "ACE_DBAL_A3_Arid_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Red_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Red_LR_II";
}
class ACE_DBAL_A3_Arid_Red_II : ACE_DBAL_A3_Red_II
{
baseWeapon = "ACE_DBAL_A3_Arid_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Red_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Red";
};
class ACE_DBAL_A3_Arid_Red_IP : ACE_DBAL_A3_Red_IP
{
baseWeapon = "ACE_DBAL_A3_Arid_Red";
displayName = "DBAL-A2 Red (IR Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Red_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Red_II";
};
class ACE_DBAL_A3_Arid_Red_VP : ACE_DBAL_A3_Red_VP
{
baseWeapon = "ACE_DBAL_A3_Arid_Red";
displayName = "DBAL-A2 Red (Visible Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Red_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Red_IP";
};
class ACE_DBAL_A3_Arid_Red_LR : ACE_DBAL_A3_Red_LR
{
baseWeapon = "ACE_DBAL_A3_Arid_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Red_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Red_VP";
};
class ACE_DBAL_A3_Arid_Red_LR_II : ACE_DBAL_A3_Red_LR_II
{
baseWeapon = "ACE_DBAL_A3_Arid_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Red";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Red_LR";
};
// Green
class ACE_DBAL_A3_Arid_Green : ACE_DBAL_A3_Green
{
baseWeapon = "ACE_DBAL_A3_Arid_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Green_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Green_LR_II";
}
class ACE_DBAL_A3_Arid_Green_II : ACE_DBAL_A3_Green_II
{
baseWeapon = "ACE_DBAL_A3_Arid_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Green_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Green";
};
class ACE_DBAL_A3_Arid_Green_IP : ACE_DBAL_A3_Green_IP
{
baseWeapon = "ACE_DBAL_A3_Arid_Green";
displayName = "DBAL-A2 Green (IR Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Green_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Green_II";
};
class ACE_DBAL_A3_Arid_Green_VP : ACE_DBAL_A3_Green_VP
{
baseWeapon = "ACE_DBAL_A3_Arid_Green";
displayName = "DBAL-A2 Green (Visible Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Green_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Green_IP";
};
class ACE_DBAL_A3_Arid_Green_LR : ACE_DBAL_A3_Green_LR
{
baseWeapon = "ACE_DBAL_A3_Arid_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Green_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Green_VP";
};
class ACE_DBAL_A3_Arid_Green_LR_II : ACE_DBAL_A3_Green_LR_II
{
baseWeapon = "ACE_DBAL_A3_Arid_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Arid_Green";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Arid_Green_LR";
};

// Lush
// Red
class ACE_DBAL_A3_Lush_Red : ACE_DBAL_A3_Red
{
baseWeapon = "ACE_DBAL_A3_Lush_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Red_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Red_LR_II";
}
class ACE_DBAL_A3_Lush_Red_II : ACE_DBAL_A3_Red_II
{
baseWeapon = "ACE_DBAL_A3_Lush_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Red_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Red";
};
class ACE_DBAL_A3_Lush_Red_IP : ACE_DBAL_A3_Red_IP
{
baseWeapon = "ACE_DBAL_A3_Lush_Red";
displayName = "DBAL-A2 Red (IR Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Red_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Red_II";
};
class ACE_DBAL_A3_Lush_Red_VP : ACE_DBAL_A3_Red_VP
{
baseWeapon = "ACE_DBAL_A3_Lush_Red";
displayName = "DBAL-A2 Red (Visible Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Red_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Red_IP";
};
class ACE_DBAL_A3_Lush_Red_LR : ACE_DBAL_A3_Red_LR
{
baseWeapon = "ACE_DBAL_A3_Lush_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Red_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Red_VP";
};
class ACE_DBAL_A3_Lush_Red_LR_II : ACE_DBAL_A3_Red_LR_II
{
baseWeapon = "ACE_DBAL_A3_Lush_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Red";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Red_LR";
};
// Green
class ACE_DBAL_A3_Lush_Green : ACE_DBAL_A3_Green
{
baseWeapon = "ACE_DBAL_A3_Lush_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Green_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Green_LR_II";
}
class ACE_DBAL_A3_Lush_Green_II : ACE_DBAL_A3_Green_II
{
baseWeapon = "ACE_DBAL_A3_Lush_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Green_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Green";
};
class ACE_DBAL_A3_Lush_Green_IP : ACE_DBAL_A3_Green_IP
{
baseWeapon = "ACE_DBAL_A3_Lush_Green";
displayName = "DBAL-A2 Green (IR Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Green_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Green_II";
};
class ACE_DBAL_A3_Lush_Green_VP : ACE_DBAL_A3_Green_VP
{
baseWeapon = "ACE_DBAL_A3_Lush_Green";
displayName = "DBAL-A2 Green (Visible Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Green_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Green_IP";
};
class ACE_DBAL_A3_Lush_Green_LR : ACE_DBAL_A3_Green_LR
{
baseWeapon = "ACE_DBAL_A3_Lush_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Green_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Green_VP";
};
class ACE_DBAL_A3_Lush_Green_LR_II : ACE_DBAL_A3_Green_LR_II
{
baseWeapon = "ACE_DBAL_A3_Lush_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Lush_Green";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Lush_Green_LR";
};

// Sand
// Red
class ACE_DBAL_A3_Sand_Red : ACE_DBAL_A3_Red
{
baseWeapon = "ACE_DBAL_A3_Sand_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Red_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Red_LR_II";
}
class ACE_DBAL_A3_Sand_Red_II : ACE_DBAL_A3_Red_II
{
baseWeapon = "ACE_DBAL_A3_Sand_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Red_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Red";
};
class ACE_DBAL_A3_Sand_Red_IP : ACE_DBAL_A3_Red_IP
{
baseWeapon = "ACE_DBAL_A3_Sand_Red";
displayName = "DBAL-A2 Red (IR Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Red_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Red_II";
};
class ACE_DBAL_A3_Sand_Red_VP : ACE_DBAL_A3_Red_VP
{
baseWeapon = "ACE_DBAL_A3_Sand_Red";
displayName = "DBAL-A2 Red (Visible Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Red_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Red_IP";
};
class ACE_DBAL_A3_Sand_Red_LR : ACE_DBAL_A3_Red_LR
{
baseWeapon = "ACE_DBAL_A3_Sand_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Red_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Red_VP";
};
class ACE_DBAL_A3_Sand_Red_LR_II : ACE_DBAL_A3_Red_LR_II
{
baseWeapon = "ACE_DBAL_A3_Sand_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Red";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Red_LR";
};
// Green
class ACE_DBAL_A3_Sand_Green : ACE_DBAL_A3_Green
{
baseWeapon = "ACE_DBAL_A3_Sand_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Green_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Green_LR_II";
}
class ACE_DBAL_A3_Sand_Green_II : ACE_DBAL_A3_Green_II
{
baseWeapon = "ACE_DBAL_A3_Sand_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Green_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Green";
};
class ACE_DBAL_A3_Sand_Green_IP : ACE_DBAL_A3_Green_IP
{
baseWeapon = "ACE_DBAL_A3_Sand_Green";
displayName = "DBAL-A2 Green (IR Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Green_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Green_II";
};
class ACE_DBAL_A3_Sand_Green_VP : ACE_DBAL_A3_Green_VP
{
baseWeapon = "ACE_DBAL_A3_Sand_Green";
displayName = "DBAL-A2 Green (Visible Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Green_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Green_IP";
};
class ACE_DBAL_A3_Sand_Green_LR : ACE_DBAL_A3_Green_LR
{
baseWeapon = "ACE_DBAL_A3_Sand_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Green_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Green_VP";
};
class ACE_DBAL_A3_Sand_Green_LR_II : ACE_DBAL_A3_Green_LR_II
{
baseWeapon = "ACE_DBAL_A3_Sand_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Sand_Green";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Sand_Green_LR";
};

// Snake
// Red
class ACE_DBAL_A3_Snake_Red : ACE_DBAL_A3_Red
{
baseWeapon = "ACE_DBAL_A3_Snake_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Red_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Red_LR_II";
}
class ACE_DBAL_A3_Snake_Red_II : ACE_DBAL_A3_Red_II
{
baseWeapon = "ACE_DBAL_A3_Snake_Red";
displayName = "DBAL-A2 Red (LO IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Red_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Red";
};
class ACE_DBAL_A3_Snake_Red_IP : ACE_DBAL_A3_Red_IP
{
baseWeapon = "ACE_DBAL_A3_Snake_Red";
displayName = "DBAL-A2 Red (IR Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Red_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Red_II";
};
class ACE_DBAL_A3_Snake_Red_VP : ACE_DBAL_A3_Red_VP
{
baseWeapon = "ACE_DBAL_A3_Snake_Red";
displayName = "DBAL-A2 Red (Visible Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Red_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Red_IP";
};
class ACE_DBAL_A3_Snake_Red_LR : ACE_DBAL_A3_Red_LR
{
baseWeapon = "ACE_DBAL_A3_Snake_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Red_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Red_VP";
};
class ACE_DBAL_A3_Snake_Red_LR_II : ACE_DBAL_A3_Red_LR_II
{
baseWeapon = "ACE_DBAL_A3_Snake_Red";
displayName = "DBAL-A2 Red (HI IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Red";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Red_LR";
};
// Green
class ACE_DBAL_A3_Snake_Green : ACE_DBAL_A3_Green
{
baseWeapon = "ACE_DBAL_A3_Snake_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Green_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Green_LR_II";
}
class ACE_DBAL_A3_Snake_Green_II : ACE_DBAL_A3_Green_II
{
baseWeapon = "ACE_DBAL_A3_Snake_Green";
displayName = "DBAL-A2 Green (LO IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Green_IP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Green";
};
class ACE_DBAL_A3_Snake_Green_IP : ACE_DBAL_A3_Green_IP
{
baseWeapon = "ACE_DBAL_A3_Snake_Green";
displayName = "DBAL-A2 Green (IR Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Green_VP";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Green_II";
};
class ACE_DBAL_A3_Snake_Green_VP : ACE_DBAL_A3_Green_VP
{
baseWeapon = "ACE_DBAL_A3_Snake_Green";
displayName = "DBAL-A2 Green (Visible Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Green_LR";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Green_IP";
};
class ACE_DBAL_A3_Snake_Green_LR : ACE_DBAL_A3_Green_LR
{
baseWeapon = "ACE_DBAL_A3_Snake_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Green_LR_II";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Green_VP";
};
class ACE_DBAL_A3_Snake_Green_LR_II : ACE_DBAL_A3_Green_LR_II
{
baseWeapon = "ACE_DBAL_A3_Snake_Green";
displayName = "DBAL-A2 Green (HI IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemNextClass = "ACE_DBAL_A3_Snake_Green";
MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Snake_Green_LR";
};
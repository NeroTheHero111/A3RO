// ACE Optics. Changing: Name, Description, Mass and Magnification (Mostly Inherited already)
class ItemCore;
class optic_Arco : ItemCore
{
	class ItemInfo : InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class ARCO2collimator;
			class ARCO2scope;
		};
	};
};
class ACE_optic_Arco_2D : optic_Arco
{
displayName = "SpecterOS 4x32 (2D, Tan, NV sight II plus)";
	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class ARCO2collimator : ARCO2collimator
			{
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			};
			class ARCO2scope : ARCO2scope
			{
			distanceZoomMax = 300;
			distanceZoomMin = 300;
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			};
		};
	};
};
class ACE_optic_Arco_PIP : ACE_optic_Arco_2D
{
displayName = "SpecterOS 4x32 (PIP, Tan, NV sight II plus)";	
};

// Creating 2D and PIP ARCO Patterns
class ACE_optic_Arco_arid_2D : ACE_optic_Arco_2D
{
_generalMacro = "ACE_optic_Arco_arid_2D";	
displayName = "SpecterOS 4x32 (2D, Arid, NV sight II plus)";
DLC = "Enoch";
model = "\A3\Weapons_F\Acc\acco_arco_arid_F.p3d";
picture = "\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_Arco_arid_F_ca.paa";
};
class ACE_optic_Arco_blk_2D : ACE_optic_Arco_2D
{
_generalMacro = "ACE_optic_Arco_blk_2D";		
displayName = "SpecterOS 4x32 (2D, Black, NV sight II plus)";
model = "\A3\Weapons_F\Acc\acco_arco_blk_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_blk_F_ca.paa";
};
class ACE_optic_Arco_ghex_2D : ACE_optic_Arco_2D
{
_generalMacro = "ACE_optic_Arco_ghex_2D";		
displayName = "SpecterOS 4x32 (2D, Green Hex, NV sight II plus)";
model = "\A3\Weapons_F\Acc\acco_arco_ghex_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_ghex_F_ca.paa";
};
class ACE_optic_Arco_lush_2D : ACE_optic_Arco_2D
{
_generalMacro = "ACE_optic_Arco_lush_2D";		
displayName = "SpecterOS 4x32 (2D, Lush, NV sight II plus)";
model = "\A3\Weapons_F\Acc\acco_arco_lush_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_ghex_F_ca.paa";
};
class ACE_optic_Arco_arid_PIP : ACE_optic_Arco_PIP
{
_generalMacro = "ACE_optic_Arco_arid_PIP";	
displayName = "SpecterOS 4x32 (PIP, Arid, NV sight II plus)";
DLC = "Enoch";
model = "\A3\Weapons_F\Acc\acco_arco_arid_F.p3d";
picture = "\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_Arco_arid_F_ca.paa";
};
class ACE_optic_Arco_blk_PIP : ACE_optic_Arco_PIP
{
_generalMacro = "ACE_optic_Arco_blk_PIP";		
displayName = "SpecterOS 4x32 (PIP, Black, NV sight II plus)";
model = "\A3\Weapons_F\Acc\acco_arco_blk_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_blk_F_ca.paa";
};
class ACE_optic_Arco_ghex_PIP : ACE_optic_Arco_PIP
{
_generalMacro = "ACE_optic_Arco_ghex_PIP";		
displayName = "SpecterOS 4x32 (PIP, Green Hex, NV sight II plus)";
model = "\A3\Weapons_F\Acc\acco_arco_ghex_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_ghex_F_ca.paa";
};
class ACE_optic_Arco_lush_PIP : ACE_optic_Arco_PIP
{
_generalMacro = "ACE_optic_Arco_lush_PIP";		
displayName = "SpecterOS 4x32 (PIP, Lush, NV sight II plus)";
model = "\A3\Weapons_F\Acc\acco_arco_lush_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_ghex_F_ca.paa";
};

class optic_Hamr : ItemCore
{
	class ItemInfo : InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{		
			class Hamr2Collimator;
			class Hamr2Scope;
		};
	};	
};
class ACE_optic_Hamr_2D : optic_Hamr
{
displayName = "Mark 4® HAMR® 4x24 (2D, Deltapoint Pro NV)";
	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{		
			class Hamr2Collimator : Hamr2Collimator
			{
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			};
			class Hamr2Scope : Hamr2Scope
			{
			distanceZoomMax = 300;
			distanceZoomMin = 300;
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			visionMode[] = {"Normal"}; // Removing integrated NVG
			};
		};
	};	
};
class ACE_optic_Hamr_PIP : ACE_optic_Hamr_2D
{ 
displayName = "Mark 4® HAMR® 4x24 (PIP, Deltapoint Pro NV)";	
};

// Creating 2D and PIP Khaki Pattern
class ACE_optic_Hamr_khk_2D : ACE_optic_Hamr_2D
{
_generalMacro = "ACE_optic_Hamr_khk_2D";	
displayName = "Mark 4® HAMR® 4x24 (2D, Khaki, Deltapoint Pro NV)";
model = "\A3\Weapons_F\Acc\acco_hamr_khk_f.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Hamr_khk_F_ca.paa";		
};
class ACE_optic_Hamr_khk_PIP : ACE_optic_Hamr_PIP
{
_generalMacro = "ACE_optic_Hamr_khk_PIP";	
displayName = "Mark 4® HAMR® 4x24 (PIP, Khaki, Deltapoint Pro NV)";
model = "\A3\Weapons_F\Acc\acco_hamr_khk_f.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Hamr_khk_F_ca.paa";		
};

class optic_LRPS : ItemCore
{
	class ItemInfo : InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class Snip;
		};
	};	
};
class ACE_optic_LRPS_2D : optic_LRPS
{
displayName = "NXS 5.5-22x56 (2D)";	
	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Snip : Snip
			{
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			discreteFov[] = {0.045454,0.0113636};
			opticsZoomInit = 0.045454;
			opticsZoomMax = 0.045454;
			opticsZoomMin = 0.0113636;
			};
		};
	};	
};
class ACE_optic_LRPS_PIP : ACE_optic_LRPS_2D
{
displayName = "NXS 5.5-22x56 (PIP)";	
};

// Creating 2D and PIP LRPS Patterns
class ACE_optic_LRPS_ghex_2D : ACE_optic_LRPS_2D
{
_generalMacro = "ACE_optic_LRPS_ghex_2D";	
displayName = "NXS 5.5-22x56 (2D, Green Hex)";
model = "\A3\Weapons_F\Acc\acco_sniper02_ghex_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_ghex_F_ca.paa";
};
class ACE_optic_LRPS_tna_2D : ACE_optic_LRPS_2D
{
_generalMacro = "ACE_optic_LRPS_tna_2D";	
displayName = "NXS 5.5-22x56 (2D, Jungle)";	
model = "\A3\Weapons_F\Acc\acco_sniper02_tna_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_tna_F_ca.paa";	
};
class ACE_optic_LRPS_ghex_PIP : ACE_optic_LRPS_PIP
{
_generalMacro = "ACE_optic_LRPS_ghex_PIP";	
displayName = "NXS 5.5-22x56 (PIP, Green Hex)";		
model = "\A3\Weapons_F\Acc\acco_sniper02_ghex_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_ghex_F_ca.paa";
};
class ACE_optic_LRPS_tna_PIP : ACE_optic_LRPS_PIP
{
_generalMacro = "ACE_optic_LRPS_tna_PIP";	
displayName = "NXS 5.5-22x56 (PIP, Jungle)";	
model = "\A3\Weapons_F\Acc\acco_sniper02_tna_F.p3d";	
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_tna_F_ca.paa";
};

class optic_MRCO : ItemCore
{
	class ItemInfo : InventoryOpticsItem_Base_F
	{	
		class OpticsModes
		{
			class MRCOscope;
		};
	};	
};
class ACE_optic_MRCO_2D : optic_MRCO
{
displayName = "Pitbull 2 QR-TS 1/4x32 (2D)";	
	class ItemInfo : ItemInfo
	{		
		class OpticsModes : OpticsModes
		{
			class MRCOscope : MRCOscope
			{
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			};
		};
	};	
};

// Re-Enabling PIP Variant
class ACE_optic_MRCO_PIP : ACE_optic_MRCO_2D
{
displayName = "Pitbull 2 QR-TS 1/4x32 (PIP)";
scope = 2;
	class ItemInfo : ItemInfo
	{		
		class OpticsModes : OpticsModes
		{
			class MRCOscope : MRCOscope
			{
			modelOptics[] = {"\z\ace\addons\optics\models\ace_optics_pip.p3d","\z\ace\addons\optics\models\ace_optics_pip.p3d"};
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			};
		};
	};	
};

class optic_SOS : ItemCore
{
	class ItemInfo : InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class Snip;
		};
	};
};
class ACE_optic_SOS_2D : optic_SOS
{
displayName = "MOS 2,5-5x32 (2D)";
	class ItemInfo : ItemInfo
	{	
		class OpticsModes : OpticsModes
		{
			class Snip : Snip
			{
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			discretefov[] = {0.10,0.05};
			opticsZoomInit = 0.10;
			opticsZoomMax = 0.10;
			opticsZoomMin = 0.05;
			};
		};
	};
};
class ACE_optic_SOS_PIP : ACE_optic_SOS_2D
{
displayName = "MOS 2,5-5x32 (PIP)";
};

// Creating 2D and PIP Khaki Pattern
class ACE_optic_SOS_khk_2D : ACE_optic_SOS_2D
{
_generalMacro = "ACE_optic_SOS_khk_2D";
displayName = "MOS 2,5-5x32 (2D, Khaki)";
model = "\A3\Weapons_F\Acc\acco_sniper_khk_F.p3d";	
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_SOS_khk_F_ca.paa";
};
class ACE_optic_SOS_khk_PIP : ACE_optic_SOS_PIP
{
_generalMacro = "ACE_optic_SOS_khk_PIP";
displayName = "MOS 2,5-5x32 (PIP, Khaki)";
model = "\A3\Weapons_F\Acc\acco_sniper_khk_F.p3d";	
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_SOS_khk_F_ca.paa";
};

class optic_dcl120 : ItemCore
{
ACE_ScopeHeightAboveRail = 9.25480;
};
class optic_srs : ItemCore
{
ACE_ScopeHeightAboveRail = 4.19600;
};

// Rail Attachments. Changing: Name. Description. Hiding Vanilla Variants as they are superceeded by identical looking better Modules
class acc_pointer_IR : ItemCore
{
scope = 1;	
};
class ACE_acc_pointer_red;
class ACE_acc_pointer_green : ACE_acc_pointer_red
{
scope = 1;	
};
class ACE_DBAL_A3_Red : acc_pointer_IR
{
descriptionShort = "IR Illuminator / IR Laser / Visible Laser Module";
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser)";
scope = 2;	
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
	};
}
class ACE_DBAL_A3_Red_II : ACE_DBAL_A3_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator)";
};
class ACE_DBAL_A3_Red_IP : ACE_DBAL_A3_Red
{
displayName = "DBAL-A2 Red (LO IR Laser)";
};
class ACE_DBAL_A3_Red_LR : ACE_DBAL_A3_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser)";	
};
class ACE_DBAL_A3_Red_LR_II : ACE_DBAL_A3_Red_II
{
displayName = "DBAL-A2 Red (HI IR Illuminator)";
};
class ACE_DBAL_A3_Red_LR_IP : ACE_DBAL_A3_Red_IP
{
displayName = "DBAL-A2 Red (HI IR Laser)";
};
class ACE_DBAL_A3_Red_VP : ACE_DBAL_A3_Red
{
displayName = "DBAL-A2 Red (LO Visible Laser)";
};
class ACE_DBAL_A3_Red_LR_VP : ACE_DBAL_A3_Red_VP
{
displayName = "DBAL-A2 Red (HI Visible Laser)";
};
class ACE_DBAL_A3_Green : ACE_DBAL_A3_Red
{
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser)";
}
class ACE_DBAL_A3_Green_II : ACE_DBAL_A3_Red_II
{
displayName = "DBAL-A2 Green (LO IR Illuminator)";
};
class ACE_DBAL_A3_Green_IP : ACE_DBAL_A3_Red_IP
{
displayName = "DBAL-A2 Green (LO IR Laser)";
};
class ACE_DBAL_A3_Green_LR : ACE_DBAL_A3_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser)";	
};
class ACE_DBAL_A3_Green_LR_II : ACE_DBAL_A3_Green_II
{
displayName = "DBAL-A2 Green (HI IR Illuminator)";
};
class ACE_DBAL_A3_Green_LR_IP : ACE_DBAL_A3_Green_IP
{
displayName = "DBAL-A2 Green (HI IR Laser)";
};
class ACE_DBAL_A3_Green_VP : ACE_DBAL_A3_Red_VP
{
displayName = "DBAL-A2 Green (LO Visible Laser)";
};
class ACE_DBAL_A3_Green_LR_VP : ACE_DBAL_A3_Green_VP
{
displayName = "DBAL-A2 Green (HI Visible Laser)";
};
class acc_flashlight;
class ACE_SPIR : acc_flashlight
{
descriptionShort = "IR Illuminator";
displayName = "SPIR (LO Wide Beam)";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.06;	
	};	
};
class ACE_SPIR_LR : ACE_SPIR
{
displayName = "SPIR (HI Wide Beam)";
};
class ACE_SPIR_LR_Medium : ACE_SPIR_LR
{
displayName = "SPIR (HI Medium Beam)";
};
class ACE_SPIR_LR_Narrow : ACE_SPIR_LR
{
displayName = "SPIR (HI Narrow Beam)";
};
class ACE_SPIR_Medium : ACE_SPIR
{
displayName = "SPIR (LO Medium Beam)";
};
class ACE_SPIR_Narrow : ACE_SPIR
{
displayName = "SPIR (LO Narrow Beam)";
};

class Rifle_Base_F;
class Rifle_Long_Base_F;
class Rifle_Short_Base_F;
class Pistol_Base_F;

// Adjusting Barrel Twist & Length. Unifying Dispersion and Firerate for ACE Firemodes

// Bad News .338 LM
class DMR_02_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 406.4f;
ACE_barrelTwist = 254;
ACE_IronSightBaseAngle = 0.01547;
ACE_RailHeightAboveBore = 3.43913;
};
class srifle_DMR_02_F : DMR_02_base_F
{
ACE_barrelLength = 406.4;
};

// 690 Field
class sgun_HunterShotgun_01_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 711.2;
ACE_barrelTwist = 0;
ACE_IronSightBaseAngle = 0;
ACE_RailHeightAboveBore = 1;
};
class sgun_HunterShotgun_01_sawedoff_base_F : sgun_HunterShotgun_01_base_F
{
ACE_barrelLength = 355.6;
};

// ACR
class arifle_MX_Base_F : Rifle_Base_F
{
ACE_barrelTwist = 228.6;
ACE_barrelLength = 368.3;
ACE_IronSightBaseAngle = -0.005157;
ACE_RailHeightAboveBore = 2.80201;
};
// MX, MXM Already set up correct. MXC Barrel Twist. MX SW is a personal Nitpick
class arifle_MXC_F : arifle_MX_Base_F
{
ACE_barrelTwist = 228.6;
};
class arifle_MX_SW_F : arifle_MX_Base_F
{
ACE_barrelLength = 419.1;
};
// Dispersion and Firerate
class arifle_MXM_F : arifle_MX_Base_F
{
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	dispersion = 0.00073;	
	reloadTime = 0.08571;
	};
};

// AK-15
class arifle_AK12_base_F : Rifle_Base_F
{
ACE_barrelTwist = 265;
};
class arifle_AK12_GL_base_F;
class arifle_AK12U_base_F;

// AK-12
class arifle_AK12_545_base_F : arifle_AK12_base_F
{
ACE_barrelTwist = 195;
};
class arifle_AK12_GL_545_base_F : arifle_AK12_GL_base_F
{
ACE_barrelTwist = 195;
};
class arifle_AK12U_545_base_F : arifle_AK12U_base_F
{
ACE_barrelTwist = 195;
};

// AK-19
class arifle_AK19_base_F : arifle_AK12_base_F
{
ACE_barrelTwist = 178;
};
class arifle_AK19_GL_base_F : arifle_AK12_GL_base_F
{
ACE_barrelTwist = 178;
};

// AK-308
class arifle_AK308_base_F : arifle_AK12_base_F
{
ACE_barrelTwist = 305;
};

// AKM is Perfect

// AKS-74U
class arifle_AKS_base_F : Rifle_Base_F
{
ACE_barrelLength = 212;	
ACE_barrelTwist = 152.4;
};

// ASP Seems okay. Fictional anyhow.

// CPW
class pdw2000_base_F;
class cpw_pdw_base_F : pdw2000_base_F
{
ACE_barrelLength = 180.34;
ACE_barrelTwist = 250;
};

// Tavor Base
class Tavor_base_F : Rifle_Base_F
{
ACE_barrelLength = 457;
ACE_barrelTwist = 177.8;
ACE_IronSightBaseAngle = 0.002292;
ACE_RailHeightAboveBore = 4.30954;
};

// CTAR-21
// Barrel Lenghth, Dispersion and Rate of Fire
class arifle_TRG20_F : Tavor_base_F
{
ACE_barrelLength = 380;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	reloadTime = 0.07272;
	};
};

// FS2000
class mk20_base_F : Rifle_Base_F
{
ACE_barrelLength = 443;
ACE_barrelTwist = 177.8;
ACE_IronSightBaseAngle = 0.006303;
ACE_RailHeightAboveBore = 4.57255;
};
// Barrel Lenghth, Dispersion and Rate of Fire
class arifle_Mk20_F : mk20_base_F
{
ACE_barrelLength = 443;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	autoFire = 0;
	burst = 1;
	reloadTime = 0.1;
	};
};
// F2000
class arifle_Mk20C_F : mk20_base_F
{
ACE_barrelLength = 400;
};
class arifle_Mk20_GL_F : mk20_base_F
{
ACE_barrelLength = 400;
};

// GM6 
class GM6_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 730;
ACE_barrelTwist = 381;
ACE_IronSightBaseAngle = 0.001146;
ACE_RailHeightAboveBore = 4.75572;
};

// GTAR-21
class arifle_TRG21_GL_F : Tavor_base_F
{
ACE_barrelLength = 457;
};

// Hk416A5 11'' and GLM Version
class arifle_SPAR_01_base_F : Rifle_Base_F
{
ACE_barrelLength = 279.4;
ACE_barrelTwist = 177.8;
};

// Hk416 14.5''
class arifle_SPAR_02_base_F : Rifle_Base_F
{
ACE_barrelLength = 368.3;
};

// KH-2002. Also adding back ACE Burst mode.
class arifle_Katiba_Base_F : Rifle_Base_F
{
ACE_barrelLength = 730;
ACE_barrelTwist = 304.8;
ACE_IronSightBaseAngle = 0.011459;
ACE_RailHeightAboveBore = 5.75468;
modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","ACE_Burst_far"};	
};
class arifle_Katiba_F : arifle_Katiba_Base_F
{
ACE_barrelLength = 730;
ACE_barrelTwist = 304.8;
};
class arifle_Katiba_GL_F : arifle_Katiba_Base_F
{
ACE_barrelLength = 730;
ACE_barrelTwist = 304.8;
};
class arifle_Katiba_C_F : arifle_Katiba_Base_F
{
ACE_barrelLength = 680;
ACE_barrelTwist = 304.8;
};

// Mk 14 Mod 0 EBR and M1A
class EBR_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 457.2;
ACE_barrelTwist = 279.4;
ACE_IronSightBaseAngle = 0.007448;
ACE_RailHeightAboveBore = 1.98812;
};
class srifle_EBR_F : EBR_base_F
{
ACE_barrelTwist = 279.4;
};


// M200 Cheytac. 408 and 375
class LRR_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 736.6;
ACE_barrelTwist = 254;
ACE_IronSightBaseAngle = 0.004011;
ACE_RailHeightAboveBore = 3.20864;
};
class srifle_LRR_F : LRR_base_F
{
ACE_barrelLength = 736.6;
ACE_barrelTwist = 254;
};
class srifle_LRR_375_F : srifle_LRR_F
{
ACE_barrelTwist = 241.3;
};

// M21 and M25 are perfect

// M249 and M249S
class LMG_03_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 347.98;
};

// MG5. Adding Back ACE Burst
class MMG_01_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 550;
ACE_barrelTwist = 304.8;
ACE_IronSightBaseAngle = -0.003438;
ACE_RailHeightAboveBore = 4.73961;
modes[] = {"FullAutoFast","Burst","manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};	
};
class MMG_01_hex_F : MMG_01_base_F
{
ACE_barrelTwist = 304.8;
};

// MP5K and SP5K
class SMG_05_base_F;
class SMG_05_ParaB_F : SMG_05_base_F
{
ACE_barrelLength = 140;
};

// MR308
class arifle_SPAR_03_base_F;
class arifle_MR308_base_F : arifle_SPAR_03_base_F
{
ACE_barrelTwist = 304.8;
};

// MSBS Grot B16. Base, GL and UBS. Can't find a different Twist rate for the B26
class arifle_MSBS65_base_F : Rifle_Base_F
{
ACE_barrelTwist = 177.8;	
};
class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F
{
ACE_barrelLength = 660.4;
};

// Negev NG-7. Adding Back ACE Mode
class LMG_Zafir_F : Rifle_Long_Base_F
{
ACE_barrelLength = 420;
modes[] = {"FullAuto","FullAutoFast","Single","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
};

// P90 and PS90
class SMG_03_TR_BASE : Rifle_Base_F
{
ACE_barrelLength = 406.4;
};
class SMG_03C_BASE : SMG_03_TR_BASE
{
ACE_barrelLength = 264.16;
};

// QBU-88 and KBU-97 are perfect
// QBZ-95 aswell

// QBZ-97
class arifle_CTAR_base_F;
class arifle_QBZ97_base_F : arifle_CTAR_base_F
{
ACE_barrelTwist = 304.8;
};

// QJB-95-1 is perfect

// QJB-97
class arifle_CTARS_base_F;
class arifle_QJB97_base_F : arifle_CTARS_base_F
{
ACE_barrelTwist = 304.8;
};

// RFB
class arifle_SDAR_F;
class arifle_RFB_F : arifle_SDAR_F
{
ACE_barrelLength = 469.9;
};

// RM338
class MMG_02_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 609.6;
ACE_barrelTwist = 238.76;
ACE_IronSightBaseAngle = 0.010886;
ACE_RailHeightAboveBore = 5.01913;
};
class MMG_02_camo_F : MMG_02_base_F
{
ACE_barrelTwist = 238.76;
};

// RPK-16
class arifle_RPK12_base_F;
class arifle_RPK16_base_F : arifle_RPK12_base_F
{
ACE_barrelLength = 550;
ACE_barrelTwist = 200;
};

// Scorpion EVO 3 A1 and S1
class SMG_02_F;
class SMG_02_ParaB_F : SMG_02_F
{
ACE_barrelLength = 196;
ACE_barrelTwist = 254;
};

// SIG 556 DMR. Adding back ACE Burst
class DMR_03_base_F;
class DMR_SIG556_base_F : DMR_03_base_F
{
ACE_barrelLength = 457.2;
ACE_barrelTwist = 203.2;
ACE_IronSightBaseAngle = 0.00573;
ACE_RailHeightAboveBore = 4.0795;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	autoFire = 0;
	burst = 1;
	reloadTime = 0.1;
	};
};

// Stoner 96
class LMG_Mk200_F : Rifle_Long_Base_F
{
ACE_barrelLength = 320;
};

// SVDK
class DMR_05_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 620;
ACE_barrelTwist = 365;
ACE_IronSightBaseAngle = 0.012605;
ACE_RailHeightAboveBore = 3.91334;
};
class srifle_DMR_05_blk_F : DMR_05_base_F
{
ACE_barrelTwist = 365;
};

// TAR-21
class arifle_TRG21_F : Tavor_base_F
{
ACE_barrelLength = 457;
};

// Vector SMG
class SMG_01_Base : Rifle_Short_Base_F
{
ACE_barrelLength = 139.7;
ACE_barrelTwist = 254;
};
class SMG_01_F : SMG_01_Base
{
ACE_barrelTwist = 254;
};

// TR3
class arifle_TR3_base_F;
class arifle_TR3_545_F : arifle_TR3_base_F
{
ACE_barrelTwist = 195;
};
class arifle_TR3_762_F : arifle_TR3_base_F
{
ACE_barrelTwist = 265;
};

// VS-121
class DMR_01_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 620;
ACE_barrelTwist = 240;
ACE_IronSightBaseAngle = 0.00573;
ACE_RailHeightAboveBore = 2.83284;
};
class srifle_DMR_01_F : DMR_01_base_F
{
ACE_barrelLength = 620;
ACE_barrelTwist = 240;
};

// WASR-2 and 3
class arifle_WASR_base_F;
class arifle_WASR_545_F : arifle_WASR_base_F
{
ACE_barrelTwist = 195;
};
class arifle_WASR_556_F : arifle_WASR_base_F
{
ACE_barrelTwist = 178;
};

// XRG-20
class DMR_02_Railgun_base_F : DMR_02_base_F
{
ACE_barrelLength = 508;	
}

// Custom TLE/RL II is perfect (.45 and 10mm)

// Flare Pistol
class hgun_Pistol_Signal_F : Pistol_Base_F
{
ACE_barrelLength = 76.2;
ACE_barrelTwist = 304.8;
};

// FNX-45
class hgun_Pistol_heavy_01_F : Pistol_Base_F
{
ACE_barrelLength = 134.62;
ACE_barrelTwist = 304.8;
};

// MP-443
class hgun_Rook40_F : Pistol_Base_F
{
ACE_barrelLength = 112.5;
};

// P99
class hgun_P07_F : Pistol_Base_F
{
ACE_barrelLength = 102;
};
class hgun_P99_40SW_F : hgun_P07_F
{
ACE_barrelLength = 106;
};

// PM and IJ-70
class hgun_Pistol_01_F : Pistol_Base_F
{
ACE_barrelTwist = 260;
};

// Rhino 60DS Variants
class hgun_Pistol_heavy_02_F : Pistol_Base_F
{
ACE_barrelLength = 152.4;
ACE_barrelTwist = 482.6;
};

// Judge Magnum
class hgun_Pistol_Judge_F : hgun_Pistol_heavy_02_F
{
ACE_barrelLength = 76.2;
ACE_barrelTwist = 304.8;
};
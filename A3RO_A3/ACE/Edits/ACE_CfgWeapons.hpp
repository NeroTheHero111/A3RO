// ACE Optics. Changing: Name. Description. Mass. Magnification (Mostly Inherited already)
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
// Hiding PIP Scopes as ACE Seems to have removed support for them.
/*
class ACE_optic_Arco_PIP : ACE_optic_Arco_2D
{
displayName = "SpecterOS 4x32 (PIP, Tan, NV sight II plus)";
scope = 2;
};
*/

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
/*
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
*/
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
/*
class ACE_optic_Hamr_PIP : ACE_optic_Hamr_2D
{ 
displayName = "Mark 4® HAMR® 4x24 (PIP, Deltapoint Pro NV)";	
};
*/
// Creating 2D and PIP Khaki Pattern
class ACE_optic_Hamr_khk_2D : ACE_optic_Hamr_2D
{
_generalMacro = "ACE_optic_Hamr_khk_2D";	
displayName = "Mark 4® HAMR® 4x24 (2D, Khaki, Deltapoint Pro NV)";
model = "\A3\Weapons_F\Acc\acco_hamr_khk_f.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Hamr_khk_F_ca.paa";		
};
/*
class ACE_optic_Hamr_khk_PIP : ACE_optic_Hamr_PIP
{
_generalMacro = "ACE_optic_Hamr_khk_PIP";	
displayName = "Mark 4® HAMR® 4x24 (PIP, Khaki, Deltapoint Pro NV)";
model = "\A3\Weapons_F\Acc\acco_hamr_khk_f.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Hamr_khk_F_ca.paa";		
};
*/
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
/*
class ACE_optic_LRPS_PIP : ACE_optic_LRPS_2D
{
displayName = "NXS 5.5-22x56 (PIP)";	
};
*/
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
/*
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
*/
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
/*
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
*/
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
/*
class ACE_optic_SOS_PIP : ACE_optic_SOS_2D
{
displayName = "MOS 2,5-5x32 (PIP)";
};
*/
// Creating 2D and PIP Khaki Pattern
class ACE_optic_SOS_khk_2D : ACE_optic_SOS_2D
{
_generalMacro = "ACE_optic_SOS_khk_2D";
displayName = "MOS 2,5-5x32 (2D, Khaki)";
model = "\A3\Weapons_F\Acc\acco_sniper_khk_F.p3d";	
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_SOS_khk_F_ca.paa";
};
/*
class ACE_optic_SOS_khk_PIP : ACE_optic_SOS_PIP
{
_generalMacro = "ACE_optic_SOS_khk_PIP";
displayName = "MOS 2,5-5x32 (PIP, Khaki)";
model = "\A3\Weapons_F\Acc\acco_sniper_khk_F.p3d";	
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_SOS_khk_F_ca.paa";
};
*/
class optic_dcl120 : ItemCore
{
ACE_ScopeHeightAboveRail = 9.25480;
};
class optic_srs : ItemCore
{
ACE_ScopeHeightAboveRail = 4.19600;
};

// Rail Attachments. Changing: Name. Description.
// MILR
class ace_milr_base : ItemCore
{
descriptionShort = "Miniature Intelligent Laser Rangefinder<br />Targeting laser and NIR illuminator with disturbed pointer function";
displayName = "MILR®";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614; // Well, this will be fun...
	};
};
class ace_milr_000 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_002 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_004 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_006 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_008 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_010 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_012 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_014 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_016 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_018 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_020 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_022 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_024 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_026 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_028 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_030 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_032 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_034 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_036 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_038 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_040 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_042 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_044 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_046 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_048 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_050 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_052 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_054 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_056 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_058 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_060 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_062 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_064 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_066 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_068 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_070 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_072 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_074 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_076 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_078 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_080 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_082 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_084 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_086 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_088 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_090 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_092 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_094 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_096 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_098 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_100 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_110 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_120 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_130 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_140 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_150 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_160 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_170 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_180 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_190 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_200 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_210 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_220 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_230 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_240 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_250 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_260 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_270 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_280 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_290 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
class ace_milr_300 : ace_milr_base
{
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 7.6614;
	};
};
// SPIR
class ACE_SPIR : acc_flashlight
{
descriptionShort = "300 / 600 mW IR Illuminator";
displayName = "SPIR (LO Wide Beam)";
MRT_SwitchItemHintText = "LO Wide Beam";
MRT_SwitchItemNextClass = "ACE_SPIR_Medium";
MRT_SwitchItemPrevClass = "ACE_SPIR_LR_Narrow";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.0625;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {300,300,300}; // For IR, basing this off of mW Value
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 450;
		flareSize = 1.45;
		innerAngle = 32;
		intensity = 32; // Its just TOO DAMN INTENSE
		irLight = 1;
		outerAngle = 64;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 450; // Datasheet. 900m at 600mW. Half
			hardLimitStart = 375;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class ACE_SPIR_Medium : ACE_SPIR
{
displayName = "SPIR (LO Medium Beam)";
MRT_SwitchItemHintText = "LO Medium Beam";
MRT_SwitchItemNextClass = "ACE_SPIR_Narrow";
MRT_SwitchItemPrevClass = "ACE_SPIR";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.0625;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {300,300,300};
		coneFadeCoef = 24;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 450;
		flareSize = 1.4;
		innerAngle = 21.3333;
		intensity = 48;
		irLight = 1;
		outerAngle = 53.44;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 450;
			hardLimitStart = 375;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class ACE_SPIR_Narrow : ACE_SPIR
{
displayName = "SPIR (LO Narrow Beam)";
MRT_SwitchItemHintText = "LO Narrow Beam";
MRT_SwitchItemNextClass = "ACE_SPIR_LR";
MRT_SwitchItemPrevClass = "ACE_SPIR_Medium";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.0625;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {300,300,300};
		coneFadeCoef = 32;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 450;
		flareSize = 1.35;
		innerAngle = 10.56;
		intensity = 64;
		irLight = 1;
		outerAngle = 42.88;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 450;
			hardLimitStart = 375;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class ACE_SPIR_LR : ACE_SPIR
{
displayName = "SPIR (HI Wide Beam)";
MRT_SwitchItemHintText = "HI Wide Beam";
MRT_SwitchItemNextClass = "ACE_SPIR_LR_Medium";
MRT_SwitchItemPrevClass = "ACE_SPIR_Narrow";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.0625;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {600,600,600};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 900;
		flareSize = 1.6;
		innerAngle = 32;
		intensity = 32;
		irLight = 1;
		outerAngle = 64;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 900; // Datasheet. 900m at 600mW
			hardLimitStart = 750;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class ACE_SPIR_LR_Medium : ACE_SPIR_LR
{
displayName = "SPIR (HI Medium Beam)";
MRT_SwitchItemHintText = "HI Medium Beam";
MRT_SwitchItemNextClass = "ACE_SPIR_LR_Narrow";
MRT_SwitchItemPrevClass = "ACE_SPIR_LR";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.0625;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {600,600,600};
		coneFadeCoef = 24;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 900;
		flareSize = 1.55;
		innerAngle = 21.3333;
		intensity = 48;
		irLight = 1;
		outerAngle = 53.44;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 900;
			hardLimitStart = 750;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class ACE_SPIR_LR_Narrow : ACE_SPIR_LR
{
displayName = "SPIR (HI Narrow Beam)";
MRT_SwitchItemHintText = "HI Narrow Beam";
MRT_SwitchItemNextClass = "ACE_SPIR";
MRT_SwitchItemPrevClass = "ACE_SPIR_LR_Medium";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 4.0625;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {600,600,600};
		coneFadeCoef = 32;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 900;
		flareSize = 1.5;
		innerAngle = 10.56;
		intensity = 64;
		irLight = 1;
		outerAngle = 42.88;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 900;
			hardLimitStart = 750;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};

// Marking ACE DBAL-A3 Implementation as incompatible as I have made my own (Biased xd rawr)
class ACE_DBAL_A3_Red : acc_pointer_IR
{
displayName = "[ A3RO INCOMPATIBLE ] DBAL-A2 Red (LO IR Illuminator/Laser)";
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] IR Illuminator / IR Laser / VIS Laser Module";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_DBAL_A3_Green : ACE_DBAL_A3_Red
{
displayName = "[ A3RO INCOMPATIBLE ] DBAL-A2 Green (LO IR Illuminator/Laser)";
scope = 1;
};
class ACE_acc_pointer_red : acc_pointer_IR
{
displayName = "[ A3RO INCOMPATIBLE ] DBAL-A2 Red (VIS Laser)";
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] IR Illuminator / IR Laser / VIS Laser Module";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_acc_pointer_green : ACE_acc_pointer_red
{
displayName = "[ A3RO INCOMPATIBLE ] DBAL-A2 Green (VIS Laser)";
scope = 1;
};

descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Calibre: 7.62x54mmR<br />Rounds: 10<br />Tracers: None<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 7.62x54R 10Rnd 7N14 Mag";

// Muzzle Devices
class ACE_muzzle_mzls_H : ItemCore
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Flash Hider";
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (6.5 mm)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_muzzle_mzls_338 : ACE_muzzle_mzls_H
{
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (.338)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_muzzle_mzls_93mmg : ACE_muzzle_mzls_H
{
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (9.3 mm)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_muzzle_mzls_B : ACE_muzzle_mzls_H
{
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (7.62 mm)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_muzzle_mzls_L : ACE_muzzle_mzls_H
{
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (5.56 mm)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_muzzle_mzls_smg_01 : ACE_muzzle_mzls_H
{
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (.45 ACP)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class ACE_muzzle_mzls_smg_02 : ACE_muzzle_mzls_H
{
displayName = "[ A3RO INCOMPATIBLE ] Flash Suppressor (9 mm)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};

// Items
class ACE_Altimeter : ItemWatch
{
descriptionShort = "Watch with altimeter, barometer and compass";
displayName = "X-Lander";
	class ItemInfo
	{
	mass = 1.433;
	};
};
class ACE_RangeTable_82mm : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.1023;
	};
};
class ACE_artilleryTable : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.1023;
	};
};
class ACE_ATragMX : ACE_ItemCore
{
descriptionShort = "Rugged PDA with ATragMX Ballistics Calculator";
displayName = "Recon® X-Series";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 10.8026;
	};
};
class ACE_Cellphone : ACE_ItemCore
{
ace_explosives_range = 5000;
descriptionShort = "GSM cell phone<br />Used to remotely trigger explosives and catch up with friends<br />Maximum Detonation Range: 5 Kilometers";
displayName = "3210";
	class ItemInfo : ACE_ExplosiveItem
	{
	mass = 3.329;
	};
};
class ACE_Chemlight_Shield : ACE_ItemCore
{
descriptionShort = "Controls light level<br />Insert ChemLight to assemble reading light";
displayName = "Combat Light Shield (Empty)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.6746;
	};
};
class ACE_Chemlight_Shield_Green : ACE_ItemCore
{
descriptionShort = "Controls light level<br />Green reading light";
displayName = "Combat Light Shield (Green)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.1155; // Shield + ChemLight, duh
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_green_ca.paa";
		ACE_Flashlight_Colour = "green";
		ACE_Flashlight_Size = 1.25;
		ACE_Flashlight_Sound = 0;
		};
	};
};
class ACE_Chemlight_Shield_Blue : ACE_Chemlight_Shield_Green
{
descriptionShort = "Controls light level<br />Blue reading light";
displayName = "Combat Light Shield (Blue)";
};
class ACE_Chemlight_Shield_Orange : ACE_Chemlight_Shield_Green
{
ACE_Chemlight = "Chemlight_orange";
descriptionShort = "Controls light level<br />Orange reading light";
displayName = "Combat Light Shield (Orange)";
};
class ACE_Chemlight_Shield_Red : ACE_Chemlight_Shield_Green
{
descriptionShort = "Controls light level<br />Red reading light";
displayName = "Combat Light Shield (Red)";
};
class ACE_Chemlight_Shield_White : ACE_Chemlight_Shield_Green
{
ACE_Chemlight = "Chemlight_white";
descriptionShort = "Controls light level<br />White reading light";
displayName = "Combat Light Shield (White)";
};
class ACE_Chemlight_Shield_Yellow : ACE_Chemlight_Shield_Green
{
descriptionShort = "Controls light level<br />Yellow reading light";
displayName = "Combat Light Shield (Yellow)";
};
class ACE_DAGR : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 10.0089;
	};
};
class ACE_DeadManSwitch : ACE_ItemCore
{
descriptionShort = "Used to trigger explosives when released";
displayName = "Pressure Release Detonator";
	class ItemInfo : ACE_ExplosiveItem
	{
	mass = 11.25;
	};
};
class ACE_DefusalKit : ACE_ItemCore
{
descriptionShort = "Multi-Tool<br />Allows defusal of explosives";
displayName = "Rebar®";
	class ItemInfo : ACE_ExplosiveItem
	{
	mass = 4.1874;
	};
};
class ACE_EntrenchingTool : ACE_ItemCore
{
descriptionShort = "Serrated Entrenching Spade";
displayName = "E-Tool";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 23.3125;
	};
};
class ACE_Fortify : ACE_ItemCore
{
descriptionShort = "Used to assemble fortifications";
displayName = "Framing Hammer";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 12.2046;
	};
};
class ACE_Flashlight_MX991 : ACE_ItemCore
{
descriptionShort = "Flashlight with red filter<br />Used to illuminate the map";
displayName = "MX-991/U";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 10.3837;
		class Flashlight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_red_ca.paa";
		ACE_Flashlight_Colour = "Red";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		};
	};
};
class ACE_HuntIR_monitor : ACE_ItemCore
{
descriptionShort = "Rugged PDA used to monitor HUNTIR Stream";
displayName = "Duo-Touch II";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 43;
	};
};
class ACE_Kestrel4500 : ACE_ItemCore
{
descriptionShort = "Pocket Weather Tracker";
displayName = "K4500NV";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.2487;
	};
};
class ACE_Flashlight_KSF1 : ACE_ItemCore
{
descriptionShort = "Flashlight with red filter<br />Used to illuminate the map";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.866;
		class Flashlight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_yellow_ca.paa";
		ACE_Flashlight_Colour = "Incandescent";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		};
	};
};
class ACE_Clacker : ACE_ItemCore
{
ace_explosives_range = 250; // Technically Wired to the M18A1, 30m or so. Just bring a BIG Coil
descriptionShort = "Wired Firing Device<br />Used to remotely trigger explosives<br />Maximum Detonation Distance: 250 Meters";
displayName = "M57";
	class ItemInfo : ACE_ExplosiveItem
	{
	mass = 7.5;
	};
};
class ACE_M26_Clacker : ACE_Clacker
{
ace_explosives_range = 15000;
descriptionShort = "Remote Activation Munition System Firing Device<br />Used to remotely trigger explosives<br />Maximum Detonation Distance: 15 Kilometers";
displayName = "MK26";
	class ItemInfo : ACE_ExplosiveItem
	{
	mass = 26.4554;
	};
};
class ACE_Flashlight_XL50 : ACE_ItemCore
{
descriptionShort = "Flashlight<br />Used to illuminate the map";
displayName = "XL50®";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.2928;
		class Flashlight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		};
	};
};
class ACE_MapTools : ACE_ItemCore
{
descriptionShort = "Used to measure distances and angles on a map";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.1023;
	};
};
class ACE_microDAGR : ACE_ItemCore
{
descriptionShort = "Defense Advanced GPS Receiver in a smaller form-factor";
displayName = "MicroDAGR";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 5.0045;
	};
};
class ACE_PlottingBoard : ACE_ItemCore
{
descriptionShort = "Used as a backup method of directing short-range indirect fire";
displayName = "M16 Plotting Board";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 38.125;
	};
};
class ACE_RangeCard : ACE_ItemCore
{
descriptionShort = "Ballistics Table for the current weapon, listing MRAD adjustments to counter Bullet Drop";
displayName = "Ballistics Table";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.1023;
	};
};
class ACE_SpottingScope : ACE_ItemCore
{
descriptionShort = "Straight View Spotting Scope<br />Magnification: 15x - 45x";
displayName = "Spacemaster 15-45x60";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 26.8744;
	};
};
class ACE_Tripod : ACE_ItemCore
{
descriptionShort = "Adjustable Tripod Shooting Stick";
displayName = "Trigger Sticks® Gen3 Tripod";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 30.8647;
	};
};
class ACE_wirecutter : ACE_ItemCore
{
descriptionShort = "Used to cut bolts, fences, and wires in accordance with local laws";
displayName = "Bolt Cutter";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 31.5261;
	};
};
// Field Rations
class ACE_Banana : ACE_ItemCore
{
acex_field_rations_hungerSatiated = 3.02;
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 3.7478;
	};
};
class ACE_Can_Spirit : ACE_ItemCore
{
displayName = "Spirit (250ml)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 6.0627;
	};
};
class ACE_Can_Franta : ACE_Can_Spirit
{
displayName = "Franta (250ml)";
};
class ACE_Can_RedGull : ACE_Can_Spirit
{
displayName = "Red Gull (250ml)";
};
class ACE_Canteen : ACE_ItemCore
{
displayName = "Canteen (1000ml, Full)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 24.3831;
	};
};
class ACE_Canteen_Half : ACE_Canteen
{
displayName = "Canteen (1000ml, Half)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 13.36;
	};
};
class ACE_Canteen_Empty : ACE_Canteen
{
displayName = "Canteen (1000ml, Empty)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.3369;
	};
};
class ACE_MRE_LambCurry : ACE_ItemCore
{
acex_field_rations_hungerSatiated = 26;
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 15;
	};
};
/*class ACE_MRE_BeefStew : ACE_MRE_LambCurry
class ACE_MRE_ChickenTikkaMasala : ACE_MRE_LambCurry
class ACE_MRE_MeatballsPasta : ACE_MRE_LambCurry
class ACE_MRE_ChickenHerbDumplings : ACE_MRE_MeatballsPasta
class ACE_MRE_CreamTomatoSoup : ACE_MRE_LambCurry
class ACE_MRE_CreamChickenSoup : ACE_MRE_CreamTomatoSoup
class ACE_MRE_SteakVegetables : ACE_MRE_LambCurry*/
class ACE_Humanitarian_Ration : ACE_MRE_LambCurry
{
acex_field_rations_hungerSatiated = 44;
displayName = "Humanitarian Daily Ration";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 25;
	};
};
class ACE_Sunflower_Seeds : ACE_ItemCore
{
acex_field_rations_hungerSatiated = 28.5;
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 5.5116;
	};
};
class ACE_WaterBottle : ACE_ItemCore
{
acex_field_rations_thirstQuenched = 5;
displayName = "Water Bottle (500ml, Full)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 11.5963;
	};
};
class ACE_WaterBottle_Half : ACE_WaterBottle
{
displayName = "Water Bottle (500ml, Half)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 6.0848;
	};
};
class ACE_WaterBottle_Empty : ACE_WaterBottle
{
displayName = "Water Bottle (500ml, Empty)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.5732;
	};
};
// Medical Items (I am going to get lynched for editing these)
class ACE_adenosine : ACE_ItemCore
{
displayName = "Adenosine Autoinjector (6mg)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.16845;
	};
};
class ACE_epinephrine : ACE_ItemCore
{
displayName = "Epinephrine Autoinjector (0.3mg)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.16845;
	};
};
class ACE_morphine : ACE_ItemCore
{
displayName = "Morphine Autoinjector (20mg)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.16845;
	};
};
class ACE_personalAidKit : ACE_ItemCore
{
displayName = "IFAK";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 15;
	};
};
class ACE_surgicalKit : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 6.875;
	};
};
class ACE_suture : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.1102;
	};
};
class ACE_fieldDressing : ACE_ItemCore
{
displayName = "First Field Dressing (FFD)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.0141;
	};
};
class ACE_elasticBandage : ACE_ItemCore
{
displayName = "Emergency Bandage";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.3669;
	};
};
class ACE_packingBandage : ACE_ItemCore
{
displayName = "Emergency Trauma Dressing (ETD)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.625;
	};
};
class ACE_quikclot : ACE_ItemCore
{
displayName = "QuikClot Combat Gauze®";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.5;
	};
};
class ACE_splint : ACE_ItemCore
{
displayName = "SAM® Splint II";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.8125;
	};
};
class ACE_tourniquet : ACE_ItemCore
{
displayName = "Combat Application Tourniquet® (C-A-T®)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.6875;
	};
};
class ACE_bloodIV : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 24.17369;
	};
};
class ACE_bloodIV_500 : ACE_bloodIV
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 12.0868;
	};
};
class ACE_bloodIV_250 : ACE_bloodIV
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 6.0434;
	};
};
class ACE_plasmaIV : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 23.4572;
	};
};
class ACE_plasmaIV_500 : ACE_plasmaIV
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 11.7286;
	};
};
class ACE_plasmaIV_250 : ACE_plasmaIV
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 5.8643;
	};
};
class ACE_salineIV : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 48.7222;
	};
};
class ACE_salineIV_500 : ACE_salineIV
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 24.3611;
	};
};
class ACE_salineIV_250 : ACE_salineIV
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 12.1805;
	};
};
class ACE_bodyBag : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 15;
	};	
};
//ACE_bodyBag_blue : ACE_bodyBag
//ACE_bodyBag_white : ACE_bodyBag
// Misc Items
class ACE_SpraypaintBlack : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 5.2911;
	};
};
/*class ACE_SpraypaintBlue : ACE_SpraypaintBlack
class ACE_SpraypaintGreen : ACE_SpraypaintBlack
class ACE_SpraypaintRed : ACE_SpraypaintBlack
class ACE_SpraypaintYellow : ACE_SpraypaintBlack*/
class ACE_SpraypaintWhite : ACE_SpraypaintBlack {};
class ACE_ChalkWhite : ACE_SpraypaintWhite
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.0944;
	};
};
/*class ACE_ChalkBlack : ACE_ChalkWhite
class ACE_ChalkBlue : ACE_ChalkWhite
class ACE_ChalkGreen : ACE_ChalkWhite
class ACE_ChalkRed : ACE_ChalkWhite
class ACE_ChalkYellow : ACE_ChalkWhite*/
class ace_flags_white : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 2.7558;
	};	
};
/*class ace_flags_black : ace_flags_white
class ace_flags_blue : ace_flags_white
class ace_flags_green : ace_flags_white
class ace_flags_orange : ace_flags_white
class ace_flags_purple : ace_flags_white
class ace_flags_red : ace_flags_white
class ace_flags_yellow : ace_flags_white*/
class ace_marker_flags_white : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.1896;
	};	
};
/*class ace_marker_flags_black : ace_marker_flags_white
class ace_marker_flags_blue : ace_marker_flags_white
class ace_marker_flags_green : ace_marker_flags_white
class ace_marker_flags_orange : ace_marker_flags_white
class ace_marker_flags_purple : ace_marker_flags_white
class ace_marker_flags_red : ace_marker_flags_white
class ace_marker_flags_yellow : ace_marker_flags_white*/
class ACE_rope12 : ACE_ropeBase
{
displayName = "Rope (12.2m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 28.2412;
	};	
};
class ACE_rope15 : ACE_ropeBase
{
displayName = "Rope (15.2m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 35.1858;
	};	
};
class ACE_rope18 : ACE_ropeBase
{
displayName = "Rope (18.3m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 42.3618;
	};	
};
class ACE_rope27 : ACE_ropeBase
{
displayName = "Rope (27.4m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 63.427;
	};	
};
class ACE_rope3 : ACE_ropeBase
{
displayName = "Rope (3.2m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 7.4075;
	};	
};
class ACE_rope36 : ACE_ropeBase
{
displayName = "Rope (36.6m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 84.7237;
	};	
};
class ACE_rope6 : ACE_ropeBase
{
displayName = "Rope (6.2m)";
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 14.3521;
	};	
};
class ACE_CableTie : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.25;
	};	
};
class ACE_EarPlugs : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 0.02205;
	};	
};
class ACE_EHP : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 7.2091;
	};	
};
class ACE_IR_Strobe_Item : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 1.3013;
	};	
};
class ACE_Sandbag_empty : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 4.6875;
	};	
};
class ACE_UAVBattery : ACE_ItemCore
{
	class ItemInfo : CBA_MiscItem_ItemInfo
	{
	mass = 3.2849;
	};	
};

// Adjusting Barrel Twist & Length. Unifying Dispersion and Firerate for ACE Firemodes. Adding Barrel Length and Twist to UGL

// Bad News .338 LM
class DMR_02_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 406.4;
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
	class GL_3GL_F : UGL_F
	{
	ACE_barrelLength = 214.884;
	ACE_barrelTwist = 1200; // Basing off of GLX160
	};
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
	reloadTime = "60/700";
	};
};

// AK-15
class arifle_AK12_base_F : Rifle_Base_F
{
ACE_barrelTwist = 265;
};
class arifle_AK12_GL_base_F : arifle_AK12_base_F
{
class EGLM : UGL_F
	{
	ACE_barrelLength = 120;	
	ACE_barrelTwist = 1200;
	};
};
class arifle_AK12U_base_F : arifle_AK12_base_F
{
ACE_barrelLength = 290;	
};

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

// ASP-1
class DMR_04_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 400; // Looks 400 as opposed to 450 from VKS
ACE_barrelTwist = 210; // VSS
};
class srifle_DMR_04_F : DMR_04_base_F
{
ACE_barrelLength = 400;
ACE_barrelTwist = 210;
};

// CPW
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
	class EGLM : UGL_F
	{
	ACE_barrelLength = 243.84;
	ACE_barrelTwist = 1200;
	};
};

// CTAR-21
// Barrel Lenghth, Dispersion and Rate of Fire
class arifle_TRG20_F : Tavor_base_F
{
ACE_barrelLength = 380;
	class fullauto_medium;
	class ACE_Burst_far : fullauto_medium
	{
	reloadTime = "60/825";
	};
};

// FS2000
class mk20_base_F : Rifle_Base_F
{
ACE_barrelLength = 443;
ACE_barrelTwist = 177.8;
ACE_IronSightBaseAngle = 0.006303;
ACE_RailHeightAboveBore = 4.57255;
	class EGLM : UGL_F
	{
	ACE_barrelLength = 243.84;
	ACE_barrelTwist = 1200;
	};
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
	reloadTime = "60/600";
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

// HK416 A5 11'' and GLM Version
class arifle_SPAR_01_base_F : Rifle_Base_F
{
ACE_barrelLength = 279.4;
ACE_barrelTwist = 177.8;
};
class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F
{
	class EGLM : UGL_F
	{
	ACE_barrelLength = 279.908;
	ACE_barrelTwist = 1200;
	};
};

// Hk416 14.5''
class arifle_SPAR_02_base_F : Rifle_Base_F
{
ACE_barrelLength = 368.3;
};

// KH-2002. Also adding back ACE Burst mode.
class arifle_Katiba_Base_F : Rifle_Base_F
{
ACE_barrelLength = 508;
ACE_barrelTwist = 304.8;
ACE_IronSightBaseAngle = 0.011459;
ACE_RailHeightAboveBore = 5.75468;
modes[] += {"ACE_Burst_far"};
	class EGLM : UGL_F
	{
	ACE_barrelLength = 230;
	ACE_barrelTwist = 1200;
	};
};
class arifle_Katiba_F : arifle_Katiba_Base_F
{
ACE_barrelLength = 508;
ACE_barrelTwist = 304.8;
};
class arifle_Katiba_GL_F : arifle_Katiba_Base_F
{
ACE_barrelLength = 508;
ACE_barrelTwist = 304.8;
};
class arifle_Katiba_C_F : arifle_Katiba_Base_F
{
ACE_barrelLength = 457.2;
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
modes[] += {"ACE_Burst_far"};
};
class MMG_01_hex_F : MMG_01_base_F
{
ACE_barrelTwist = 304.8;
};

// MP5K and SP5K
class SMG_05_ParaB_F : SMG_05_base_F
{
ACE_barrelLength = 140;
};
class SMG_05_ParaB_Semi_F : SMG_05_ParaB_F
{
ACE_barrelLength = 148;
};

// MR308
class arifle_SPAR_03_base_F : Rifle_Base_F
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
class arifle_MSBS65_UBS_base_F : arifle_MSBS65_base_F
{
	class UBS_F : Rifle_Base_F
	{
	ACE_barrelLength = 317.5;
	};
};
class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F
{
	class UGL : UGL_F
	{
	ACE_barrelLength = 279.4; // Unkown, defaulting to M320
	ACE_barrelTwist = 1200;
	};
};

// Negev NG-7. Adding Back ACE Mode
class LMG_Zafir_F : Rifle_Long_Base_F
{
ACE_barrelLength = 420;
modes[] += {"ACE_Burst_far"};
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
class arifle_QBZ97_base_F : arifle_CTAR_base_F
{
ACE_barrelTwist = 254;
};
class arifle_CTAR_GL_base_F : arifle_CTAR_base_F
{
	class EGLM : UGL_F
	{
	ACE_barrelLength = 120; // Unknown, defaulting to GP-25
	ACE_barrelTwist = 1200;
	};
};
class arifle_QBZ97_GL_base_F : arifle_CTAR_GL_base_F
{
ACE_barrelTwist = 254;
};

// QJB-95-1 is perfect

// QJB-97
class arifle_QJB97_base_F : arifle_CTARS_base_F
{
ACE_barrelTwist = 304.8;
};

// RFB
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
class arifle_RPK16_base_F : arifle_RPK12_base_F
{
ACE_barrelLength = 550;
ACE_barrelTwist = 200;
};

// Scorpion EVO 3 A1 and S1
class SMG_02_ParaB_F : SMG_02_F
{
ACE_barrelLength = 196;
ACE_barrelTwist = 254;
};

// SIG 556 DMR. Adding back ACE Burst
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
	reloadTime = "60/600";
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
ACE_barrelLength = 460;
};

// GTAR-21
class arifle_TRG21_GL_F : arifle_TRG21_F
{
ACE_barrelLength = 460;
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
class arifle_WASR_545_F : arifle_WASR_base_F
{
ACE_barrelTwist = 195;
};
class arifle_WASR_556_F : arifle_WASR_base_F
{
ACE_barrelTwist = 178;
};

// ZRG-20
class DMR_02_Railgun_base_F : Rifle_Long_Base_F
{
ACE_barrelLength = 406.4;
ACE_barrelTwist = 254;
ACE_IronSightBaseAngle = 0.01547;
ace_overheating_closedBolt = 1;
ACE_RailHeightAboveBore = 3.43913; 
};

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
ACE_barrelTwist = 254;
};

// PMM and IJ-70
class hgun_Pistol_01_F : Pistol_Base_F
{
ACE_barrelLength = 93;
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

// Changing name of NVG Goggles.
class NVGoggles : Binocular
{
displayName = "NV Goggles (Gen 3, Sand)";
};
class NVGoggles_INDEP : NVGoggles
{
displayName = "NV Goggles (Gen 3, Olive)";
};
class NVGoggles_OPFOR : NVGoggles
{
displayName = "NV Goggles (Gen 3)";
};
class ACE_NVG_Gen1_Brown : NVGoggles
{
displayName = "NV Goggles (Gen 1, Sand)";
};
class ACE_NVG_Gen1_Green : NVGoggles_INDEP
{
displayName = "NV Goggles (Gen 1, Olive)";
};
class ACE_NVG_Gen1 :NVGoggles_OPFOR
{
displayName = "NV Goggles (Gen 1)";
};
class ACE_NVG_Gen2_Brown : NVGoggles
{
displayName = "NV Goggles (Gen 2, Sand)";
};
class ACE_NVG_Gen2 : NVGoggles_INDEP
{
displayName = "NV Goggles (Gen 2, Olive)";
};
class ACE_NVG_Gen2_Black : NVGoggles_OPFOR
{
displayName = "NV Goggles (Gen 2)";
};
class ACE_NVGoggles_WP : NVGoggles
{
displayName = "NV Goggles (Gen 3, Sand, WP)";
};
class ACE_NVGoggles_INDEP_WP : NVGoggles_INDEP
{
displayName = "NV Goggles (Gen 3, Olive, WP)";
};
class ACE_NVGoggles_OPFOR_WP : NVGoggles_OPFOR
{
displayName = "NV Goggles (Gen 3, WP)";
};
class ACE_NVG_Gen4 : NVGoggles
{
displayName = "NV Goggles (Gen 4, Sand)";
};
class ACE_NVG_Gen4_Green : NVGoggles_INDEP
{
displayName = "NV Goggles (Gen 4, Olive)";
};
class ACE_NVG_Gen4_Black : NVGoggles_OPFOR
{
displayName = "NV Goggles (Gen 4)";
};
class ACE_NVG_Gen4_WP : ACE_NVG_Gen4
{
displayName = "NV Goggles (Gen 4, Sand, WP)";
};
class ACE_NVG_Gen4_Green_WP : ACE_NVG_Gen4_Green
{
displayName = "NV Goggles (Gen 4, Olive, WP)";
};
class ACE_NVG_Gen4_Black_WP : ACE_NVG_Gen4_Black
{
displayName = "NV Goggles (Gen 4, WP)";
};
class ACE_NVG_Wide : NVGoggles
{
displayName = "NV Goggles (Wide, Sand)";
};
class ACE_NVG_Wide_Green : NVGoggles_INDEP
{
displayName = "NV Goggles (Wide, Olive)";
};
class ACE_NVG_Wide_Black : NVGoggles_OPFOR
{
displayName = "NV Goggles (Wide)";
};
class ACE_NVG_Wide_WP : ACE_NVG_Wide
{
displayName = "NV Goggles (Wide, Sand, WP)";
};
class ACE_NVG_Wide_Green_WP : ACE_NVG_Wide_Green
{
displayName = "NV Goggles (Wide, Olive, WP)";
};
class ACE_NVG_Wide_Black_WP : ACE_NVG_Wide_Black
{
displayName = "NV Goggles (Wide, WP)";
};

// Creating Tropic Variants of ACE NV Goggles
class NVGoggles_tna_F : NVGoggles
{
displayName = "NV Goggles (Gen 3, Tropic)";
};
class ACE_NVG_Gen1_tna : NVGoggles_tna_F
{
ace_nightvision_generation = 1;
author = "ACE-Team";
displayName = "NV Goggles (Gen 1, Tropic)";
};
class ACE_NVG_Gen2_tna : NVGoggles_tna_F
{
ace_nightvision_generation = 2;
author = "ACE-Team";
displayName = "NV Goggles (Gen 2, Tropic)";
};
class ACE_NVGoggles_tna_WP : NVGoggles_tna_F
{
ace_nightvision_colorPreset[] = {0,{0,0,0,0},{1.1,0.8,1.9,0.9},{1,1,6,0}};
descriptionShort = "Night Vision Goggles, White Phosphor";
displayName = "NV Goggles (Gen 3, Tropic, WP)";
};
class ACE_NVG_Gen4_tna : NVGoggles_tna_F
{
ace_nightvision_generation = 4;
author = "ACE-Team";
displayName = "NV Goggles (Gen 4, Tropic)";
};
class ACE_NVG_Gen4_tna_WP : ACE_NVG_Gen4_tna
{
ace_nightvision_colorPreset[] = {0,{0,0,0,0},{1.1,0.8,1.9,0.9},{1,1,6,0}};
descriptionShort = "Night Vision Goggles, White Phosphor";
displayName = "NV Goggles (Gen 4, Tropic, WP)";
};
class ACE_NVG_Wide_tna : NVGoggles_tna_F
{
ace_nightvision_generation = 4;
author = "ACE-Team";
displayName = "NV Goggles (Wide, Tropic)";
};
class ACE_NVG_Wide_tna_WP : ACE_NVG_Wide_tna
{
ace_nightvision_colorPreset[] = {0,{0,0,0,0},{1.1,0.8,1.9,0.9},{1,1,6,0}};
descriptionShort = "Night Vision Goggles, White Phosphor";
displayName = "NV Goggles (Wide, Tropic, WP)";
};

// Adjusting ACE added Weapons
class ACE_Flashlight_Maglite_ML300L : Pistol_Base_F
{
descriptionShort = "746 Lumen LED Flashlight";
displayName = "ML300L™ LED 3D";
picture = "\A3RO_A3\ACE\Textures\UI\icon_Maglite_ML300L_Resize_CA.paa";
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {634.1,671.4,708.7};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 403;
		flareSize = 0.9;
		innerAngle = 13;
		intensity = 128;
		outerAngle = 104;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 403;
			hardLimitStart = 335.8333;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 16.4906;
	};
};
class ACE_VMM3 : Pistol_Base_F
{
descriptionShort = "Metal Detector";
displayName = "VMM3";
picture = "\A3RO_A3\ACE\Textures\UI\icon_VMM3_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 77.16;
	};
};
class ACE_VMH3 : ACE_VMM3
{
descriptionShort = "Metal Detector";
displayName = "VMH3CS";
picture = "\A3RO_A3\ACE\Textures\UI\icon_VMH3CS_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 55.7;
	};
};

// Laser Designators etc.
class ACE_MX2A : Binocular
{
descriptionShort = "Miniature Thermal Imaging Handheld Camera<br />Magnification: 1x<br />eZoom: 2x";	
displayName = "MX-2A";
distanceZoomMax = 200;
distanceZoomMin = 100;
maxRange = 5000;
midRange = 500;
minRange = 150;
opticsZoomInit = 0.25;
opticsZoomMax = 0.25;
opticsZoomMin = 0.125;
thermalMode[] = {0,1};
visionMode[] = {"Ti"};
thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.4};
thermalResolution[] = {0.0, 1200, 1.0, 600}; // Bumped lower end from 480 to 600
	class WeaponSlotsInfo
	{
	mass = 27.55;
	};
};
class ace_dragon_sight : Binocular
{
descriptionShort = "Guided Missile Infrared Tracker<br />Magnification: 6x<br />Used on: M47 Dragon II";	
displayName = "SU-36/P";
distanceZoomMax = 600;
distanceZoomMin = 100;
opticsZoomInit = 0.041666;
opticsZoomMax = 0.041666;
opticsZoomMin = 0.041666;
picture = "\A3RO_A3\ACE\Textures\UI\icon_SU36P_CA.paa";
	class ace_csw
	{
	deployTime = 1;
	pickupTime = 1;
	type = "weapon";
	};
	class WeaponSlotsInfo
	{
	mass = 68.3433;
	};
};
class ACE_Vector : Binocular
{
descriptionShort = "Rangefinder Binoculars<br />Magnification: 7x";	
displayName = "VECTOR 21 Nite";
distanceZoomMax = 700;
distanceZoomMin = 100;
maxRange = 12000;
midRange = 1200;
minRange = 150;
opticsZoomInit = 0.035714;
opticsZoomMax = 0.035714;
opticsZoomMin = 0.035714;
	class WeaponSlotsInfo
	{
	mass = 44.09;
	};
};
class ACE_VectorDay : ACE_Vector
{
displayName = "VECTOR 21";
	class WeaponSlotsInfo
	{
	mass = 37.47;
	};
};
class ACE_Yardage450 : Binocular
{
descriptionShort = "Laser Rangefinder<br />Magnification: 4x";	
displayName = "Yardage Pro Sport 450";
distanceZoomMax = 400;
distanceZoomMin = 100;
maxRange = 913.4856;
midRange = 500;
minRange = 150;
opticsZoomInit = 0.0625;
opticsZoomMax = 0.0625;
opticsZoomMin = 0.0625;
	class WeaponSlotsInfo
	{
	mass = 4.625;
	};
};

// Removing ACE Stinger from Titan MPRL
class launch_Titan_base : Launcher_Base_F
{
ace_overpressure_damage = 1.51;
ace_overpressure_range = 1;
magazines[] = {"Titan_AA"};
class Single;
};

// M47 Dragon (Might aswell)
class launch_Titan_F : launch_Titan_base
{
class WeaponSlotsInfo;
};
class ace_dragon_super : launch_Titan_F
{
ace_overpressure_angle = 45;
ace_overpressure_offset = 0.5;
ace_overpressure_range = 10; // Manual says theres a 30m danger and an additional 20m caution zone. Not happening. Using 1/3rd for any data
ace_reloadlaunchers_enabled = 0;
descriptionShort = "ATGM Launcher<br />Tube: 140mm<br />Arming Range: 65 Meters<br />Maximum Range: 1000 Meters";
displayName = "[CSW] M47 Dragon II";
initSpeed = 74.981;
magazines[] = {"ace_dragon_super"};
magazineWell[] = {"ace_dragon_super_magwell"}; // Not quite sure what I've done...but it works
picture = "\A3RO_A3\ACE\Textures\UI\icon_launch_Dragon_X_CA.paa"; // Launcher Icons need to end with X_CA.paa. I can't find the source on why but I remember from somewhere.
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 321.8749; // M222 HEAT
	class PointerSlot {}; // Inheritance of Rail Items invalid
	};
};

class ace_dragon_superStatic : missiles_titan_static
{
ace_overpressure_angle = 45;
ace_overpressure_damage = 1.66;
ace_overpressure_offset = 0.5;
descriptionShort = "ATGM Launcher<br />Tube: 140mm<br />Arming Range: 65 Meters<br />Effective Range: 1000 Meters";
displayName = "M47 Dragon II";
initSpeed = 74.981;
};

class launch_Vorona_base_F : Launcher_Base_F
{
ace_overpressure_angle = 45;
ace_overpressure_damage = 1.54;
};

class launch_MRAWS_base_F : Launcher_Base_F
{
ace_overpressure_angle = 45;
ace_overpressure_damage = 1;
ace_overpressure_range = 13;
};

class launch_Titan_short_base : launch_Titan_base
{
ace_overpressure_damage = 0.2;
ace_overpressure_range = 0.1; // Spike MR possesses Soft-Launch, this one? Good question.
canLock = 0;
lockedTargetSound[] = {"",0,1}; 
lockingTargetSound[] = {"",0,1};
modelOptics = "\z\ace\addons\spike\data\reticle_titan.p3d";
weaponInfoType = "ACE_RscOptics_spike";
modes[] = {"Single"};
	class Single : Single
	{
	ace_missileGuidance_attackProfile = "SPIKE_TOP";
	};
};
class launch_B_Titan_short_F : launch_Titan_short_base
{
ace_missileguidance_enabled = 1; // Must be explicitly re-configured for each Weapon.
ace_spike_enabled = 1; // Likewise
weaponInfoType = "ACE_RscOptics_spike";
};
class launch_I_Titan_short_F : launch_Titan_short_base
{
ace_missileguidance_enabled = 1;
ace_spike_enabled = 1;
weaponInfoType = "ACE_RscOptics_spike";
};
class launch_O_Titan_short_F : launch_Titan_short_base
{
ace_missileguidance_enabled = 1;
ace_spike_enabled = 1;
weaponInfoType = "ACE_RscOptics_spike";
};
class launch_O_Titan_short_ghex_F : launch_O_Titan_short_F
{
ace_missileguidance_enabled = 1;
ace_spike_enabled = 1;
};
class launch_B_Titan_short_tna_F : launch_B_Titan_short_F
{
ace_missileguidance_enabled = 1;
ace_spike_enabled = 1;
};

class launch_NLAW_F : Launcher_Base_F
{
ace_overpressure_angle = 30;
ace_overpressure_damage = 0.2; // Soft
ace_overpressure_range = 0.1;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 275.5778;
	};
};
class ACE_launch_NLAW_ready_F : launch_NLAW_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 275.5778;
	};
};
class ACE_launch_NLAW_used_F : launch_NLAW_F
{
displayName = "NLAW (Used)";
descriptionShort = "Spent Rocket Launcher Tube<br />Magnification: 2.5x";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 125.6635;
	};
};

class launch_RPG32_F : Launcher_Base_F
{
ace_overpressure_angle = 50;
ace_overpressure_damage = 1.25;
ace_overpressure_range = 16;
};

class launch_RPG7_F : Launcher_Base_F
{
ace_overpressure_damage = 0.47;
ace_overpressure_range = 6;
};

/* // MAAWS Base Class. Adding Using XM157 Framework to implement FCS13RE Functionality. XM157 Currently does not work with Launchers.
class launch_MRAWS_base_F : Launcher_Base_F
{
ACE_ScopeHeightAboveRail = 5.54325;
modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
weaponInfoType = "ace_xm157_info";
	class CBA_ScriptedOptic
	{
	bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
	disableTilt = 0;
	bodyTextureSize = 1;
	hideMagnification = 0;
	};
    class OpticsModes
    {
        class optic
        {
		cameraDir = "";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		distanceZoomMax = 100;
		distanceZoomMin = 100;
		memoryPointCamera = "opticView";
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		opticsID = 1;
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
        opticsZoomInit = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"; // 3x Fixed.
        opticsZoomMax = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
        opticsZoomMin = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
		useModelOptics = 1;
        visionMode[] = {"Normal"};
        };
    };
};*/

// Creating new MAAWS Variants with Thermals.
/*
class launch_MRAWS_olive_TH60_F : launch_MRAWS_olive_F
{
_generalMacro = "launch_MRAWS_olive_TH60_F";
baseWeapon = "launch_MRAWS_olive_TH60_F";
displayName = "M3E1 MAAWS (Olive/TH60)";
descriptionShort = "Rocket Launcher<br />Tube: 84mm<br />Magnification: 1x<br />eZoom: 1x - 4x";
    class OpticsModes
    {
        class optic
        {
        cameraDir = "look";
        distanceZoomMax = 300;
        distanceZoomMin = 300;
        memoryPointCamera = "eye";
        opticsDisablePeripherialVision = 1;
        opticsFlare = 1;
        opticsID = 1;
        opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
        opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
        opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
        opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"; // 4x eZoom
        thermalMode[] = {0};
        thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.5};
        thermalResolution[] = {0,-1,1,512};
        useModelOptics = 1;
        visionMode[] = {"Ti"};
        };
    };
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 218.6986;
	};
};
class launch_MRAWS_green_TH60_F : launch_MRAWS_olive_TH60_F
{
_generalMacro = "launch_MRAWS_green_TH60_F";
baseWeapon = "launch_MRAWS_green_TH60_F";
displayName = "M3E1 MAAWS (TH60)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_darkgreen_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
};
class launch_MRAWS_sand_TH60_F : launch_MRAWS_olive_TH60_F
{
_generalMacro = "launch_MRAWS_sand_TH60_F";
baseWeapon = "launch_MRAWS_sand_TH60_F";
displayName = "M3E1 MAAWS (Sand/TH60)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_sand_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
};*/

// Spike LR
class ace_spike_launcher : ace_spike_base
{

};

// Tripods
class ace_csw_kordCarryTripod : Launcher_Base_F
{
descriptionShort = "Tripod<br />Mountable: Kord 6P50";
displayName = "[CSW] 6T7 Tripod (High)";
picture = "\A3RO_A3\ACE\Textures\UI\icon_tripod_6T7_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 352.7396;
	};
};
class ace_csw_kordCarryTripodLow : ace_csw_kordCarryTripod
{
displayName = "[CSW] 6T7 Tripod (Low)";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 352.7396;
	};
};
class ace_csw_m220CarryTripod : Launcher_Base_F
{
descriptionShort = "Tripod<br />Mountable: TOW-2";
displayName = "[CSW] M220 Tripod";
picture = "\A3RO_A3\ACE\Textures\UI\icon_tripod_M220_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 510;
	};
};
class ace_csw_m3CarryTripod : Launcher_Base_F
{
descriptionShort = "Tripod<br />Mountable: M2/A1, Mini-Spike, Titan MPRL, XM307, XM312";
displayName = "[CSW] M3 Tripod (High)";
picture = "\A3RO_A3\ACE\Textures\UI\icon_tripod_M3_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 440;
	};
};
class ace_csw_m3CarryTripodLow : ace_csw_m3CarryTripod
{
displayName = "[CSW] M3 Tripod (Low)";
};
class ace_csw_staticMortarCarry : Launcher_Base_F
{
descriptionShort = "Mortar<br />Tube: 82mm<br />Effective Range: 36 - 4078 Meters";
displayName = "[CSW] Mk6 Mortar Tube & Sight";
picture = "\A3RO_A3\ACE\Textures\UI\icon_mortar_Mk6_Tube_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 375; // Based on M252
	};
};
class ace_csw_carryMortarBaseplate : Launcher_Base_F
{
descriptionShort = "Mortar Mounting Equipment<br />Mountable: Mk6 Mortar";
displayName = "[CSW] Mk6 Mortar Baseplate & Mount";
picture = "\A3RO_A3\ACE\Textures\UI\icon_mortar_Mk6_Base_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 560;
	};
};
class ace_csw_sag30CarryTripod : Launcher_Base_F
{
descriptionShort = "Tripod<br />Mountable: AGS-30";
displayName = "[CSW] AGS-30 Tripod";
picture = "\A3RO_A3\ACE\Textures\UI\icon_tripod_AGS30_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 181.8814;
	};
};
class ace_csw_spg9CarryTripod : Launcher_Base_F
{
descriptionShort = "Tripod<br />Mountable: SPG-9/M";
displayName = "[CSW] SPG-9 Tripod";
picture = "\A3RO_A3\ACE\Textures\UI\icon_tripod_SPG9_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 264.5547;
	};
};
class ace_csw_staticATCarry : Launcher_Base_F
{
descriptionShort = "Fire-And-Forget ATGM Launcher<br />Tube: 75mm<br />Magnification: 4x - 9x<br />Arming Range: 50 Meters<br />Effective Range: 200 - 1200 Meters<br />Maximum Range: 1500 Meters";
displayName = "[CSW] Mini-Spike";
//picture = "\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\icon_launch_B_Titan_short_F_ca.paa";
picture = "\A3RO_A3\ACE\Textures\UI\icon_launch_B_Titan_short_Namefix_X_CA.paa"; // The above link to the texture throws up an error when you attempt to display it in your inventory.
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.1849;
	};
};
class ace_csw_staticAACarry : ace_csw_staticATCarry
{
descriptionShort = "Fictional MANPAD<br />Tube: 127mm<br />Magnification: 4x - 9x<br />Arming Range: 80 Meters<br />Minimum Range: 161 Meters<br />Maximum Range: 4800 Meters<br />Used in: Titan MPRL";
displayName = "[CSW] Titan MPRL";
picture = "\A3RO_A3\ACE\Textures\UI\icon_launch_B_Titan_Namefix_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.1849;
	};
};
class ace_csw_staticGMGCarry : Launcher_Base_F
{
descriptionShort = "Grenade Machine Gun<br />Calibre: 25x59mm HV<br />Magnification: 1x - 10x<br />Maximum Range: 3600 Meters";
displayName = "[CSW] XM307 GMG";
picture = "\A3RO_A3\ACE\Textures\UI\icon_gmg_XM307_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 419.9806;
	};
};
class ace_csw_staticHMGCarry : Launcher_Base_F
{
descriptionShort = "Heavy Machine Gun<br />Calibre: 12.7x99mm NATO<br />Magnification: 1x - 10x<br />Effective Range: 2000 Meters";
displayName = "[CSW] XM312 HMG";
picture = "\A3RO_A3\ACE\Textures\UI\icon_hmg_XM312_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 352.7396;
	};
};
class ace_csw_staticM2ShieldCarry : ace_csw_staticHMGCarry
{
descriptionShort = "Heavy Machine Gun<br />Calibre: 12.7x99mm NATO<br />Magnification: 1x<br />Effective Range: 1800 Meters";
displayName = "[CSW] M2A1 (DCL120/Shield)";
picture = "\A3RO_A3\ACE\Textures\UI\icon_hmg_M2A1_Extras_X_CA.paa";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 1102.311;
	};
};
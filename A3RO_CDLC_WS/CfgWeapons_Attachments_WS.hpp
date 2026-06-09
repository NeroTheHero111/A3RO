// Western Sahara Optics. Changing: Name. Description. Mass. Magnification
class optic_r1_high_lxWS : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Red<br />Compatible Calibres: All";
displayName = "Micro R-1 (4 MOA, LEAP/03)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 2.822;
		class OpticsModes
		{
			class RDS
			{
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			};
		};
	};
};
class optic_r1_high_arid_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Arid, LEAP/03)";
};
class optic_r1_high_black_sand_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Black/Sand, LEAP/03)";
};
class optic_r1_high_khaki_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Khaki, LEAP/03)";
};
class optic_r1_high_lush_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Lush, LEAP/03)";
};
class optic_r1_high_sand_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Sand, LEAP/03)";
};
class optic_r1_high_snake_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Snake, LEAP/03)";
};
class optic_r1_low_lxWS : optic_r1_high_lxWS // With no Baseclass edits must contain the entire content
{
displayName = "Micro R-1 (4 MOA)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 1.852;
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class RDS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};
};
class optic_r1_low_arid_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Arid)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 1.852;
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class RDS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};
};
class optic_r1_low_khaki_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Khaki)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 1.852;
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class RDS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};
};
class optic_r1_low_lush_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Lush)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 1.852;
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class RDS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};
};
class optic_r1_low_sand_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Sand)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 1.852;
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class RDS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};
};
class optic_r1_low_snake_lxWS : optic_r1_high_lxWS
{
displayName = "Micro R-1 (4 MOA, Snake)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 1.852;
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class RDS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};
};
class optic_DMS_snake_lxWS : optic_DMS
{
displayName = "XTR II™ 1-8x24 (Snake, FastFire 2)";
};
class optic_ACO_grn_camo_lxWS : optic_ACO_grn
{
displayName = "Railway Triangle-Dot (4 MOA, Green, Stripes)";
};
class optic_ACO_camo_lxWS : optic_Aco
{
displayName = "Railway Bullseye (2 MOA, Red, Stripes)";
};
class optic_Arco_hex_lxWS : optic_Arco
{
displayName = "SpecterOS 4x32 (Hex, NV sight II plus)";
};
class optic_Holosight_snake_lxWS : optic_Holosight
{
displayName = "EXPS3™ CQB (2 MOA, Snake)";
};
class optic_Holosight_smg_snake_lxWS : optic_Holosight_smg
{
displayName = "EXPS3™ Circle-Dot (2 MOA, Snake)";
};
class optic_Hamr_arid_lxWS : optic_Hamr
{
displayName = "Mark 4® HAMR® 4x24 (Arid, Deltapoint Pro NV)";
};
class optic_Hamr_lush_lxWS : optic_Hamr
{
displayName = "Mark 4® HAMR® 4x24 (Lush, Deltapoint Pro NV)";
};
class optic_Hamr_sand_lxWS : optic_Hamr
{
displayName = "Mark 4® HAMR® 4x24 (Sand, Deltapoint Pro NV)";
};
class optic_Hamr_snake_lxWS : optic_Hamr
{
displayName = "Mark 4® HAMR® 4x24 (Snake, Deltapoint Pro NV)";
};

// Western Sahara Siderail Attachments. Changing: Name. Mass. Adding Description
// DBAL-A2 Red Arid
class acc_pointer_IR_arid_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 Red (LO IR Laser, Arid)";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_HI_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_LO_ILL_Red";
};
class acc_pointer_IR_arid_lxWS_LO_ILL_Red : acc_pointer_IR_LO_ILL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_LO_IL_Red";
};
class acc_pointer_IR_arid_lxWS_HI_L_Red : acc_pointer_IR_HI_L_Red
{
displayName = "DBAL-A2 Red (HI IR Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_HI_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS";
};
class acc_pointer_IR_arid_lxWS_LO_IL_Red : acc_pointer_IR_LO_IL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_LO_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_VIS_L_Red";
};
class acc_pointer_IR_arid_lxWS_HI_IL_Red : acc_pointer_IR_HI_IL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_VIS_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_HI_ILL_Red";
};
class acc_pointer_IR_arid_lxWS_HI_ILL_Red : acc_pointer_IR_HI_ILL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_HI_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_HI_L_Red";
};
class acc_pointer_IR_arid_lxWS_VIS_L_Red : acc_pointer_IR_VIS_L_Red
{
displayName = "DBAL-A2 Red (VIS Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_LO_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_HI_IL_Red";
};
// DBAL-A2 Green Arid
class acc_pointer_IR_arid_lxWS_LO_L_Green : acc_pointer_IR
{
displayName = "DBAL-A2 Green (LO IR Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_HI_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_LO_ILL_Green";
};
class acc_pointer_IR_arid_lxWS_LO_ILL_Green : acc_pointer_IR_LO_ILL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_LO_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_LO_IL_Green";
};
class acc_pointer_IR_arid_lxWS_HI_L_Green : acc_pointer_IR_HI_L_Green
{
displayName = "DBAL-A2 Green (HI IR Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_HI_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_LO_L_Green";
};
class acc_pointer_IR_arid_lxWS_LO_IL_Green : acc_pointer_IR_LO_IL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_LO_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_VIS_L_Green";
};
class acc_pointer_IR_arid_lxWS_HI_IL_Green : acc_pointer_IR_HI_IL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_VIS_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_HI_ILL_Green";
};
class acc_pointer_IR_arid_lxWS_HI_ILL_Green : acc_pointer_IR_HI_ILL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_HI_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_HI_L_Green";
};
class acc_pointer_IR_arid_lxWS_VIS_L_Green : acc_pointer_IR_VIS_L_Green
{
displayName = "DBAL-A2 Green (VIS Laser, Arid)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_arid_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_arid_lxWS_LO_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_arid_lxWS_HI_IL_Green";
};
// DBAL-A2 Red Lush
class acc_pointer_IR_lush_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 Red (LO IR Laser, Lush)";
DLC = "ws";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_HI_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_LO_ILL_Red";
};
class acc_pointer_IR_lush_lxWS_LO_ILL_Red : acc_pointer_IR_LO_ILL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_LO_IL_Red";
};
class acc_pointer_IR_lush_lxWS_HI_L_Red : acc_pointer_IR_HI_L_Red
{
displayName = "DBAL-A2 Red (HI IR Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_HI_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS";
};
class acc_pointer_IR_lush_lxWS_LO_IL_Red : acc_pointer_IR_LO_IL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_LO_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_VIS_L_Red";
};
class acc_pointer_IR_lush_lxWS_HI_IL_Red : acc_pointer_IR_HI_IL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_VIS_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_HI_ILL_Red";
};
class acc_pointer_IR_lush_lxWS_HI_ILL_Red : acc_pointer_IR_HI_ILL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_HI_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_HI_L_Red";
};
class acc_pointer_IR_lush_lxWS_VIS_L_Red : acc_pointer_IR_VIS_L_Red
{
displayName = "DBAL-A2 Red (VIS Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_LO_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_HI_IL_Red";
};
// DBAL-A2 Green Lush
class acc_pointer_IR_lush_lxWS_LO_L_Green : acc_pointer_IR
{
displayName = "DBAL-A2 Green (LO IR Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_HI_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_LO_ILL_Green";
};
class acc_pointer_IR_lush_lxWS_LO_ILL_Green : acc_pointer_IR_LO_ILL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_LO_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_LO_IL_Green";
};
class acc_pointer_IR_lush_lxWS_HI_L_Green : acc_pointer_IR_HI_L_Green
{
displayName = "DBAL-A2 Green (HI IR Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_HI_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_LO_L_Green";
};
class acc_pointer_IR_lush_lxWS_LO_IL_Green : acc_pointer_IR_LO_IL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_LO_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_VIS_L_Green";
};
class acc_pointer_IR_lush_lxWS_HI_IL_Green : acc_pointer_IR_HI_IL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_VIS_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_HI_ILL_Green";
};
class acc_pointer_IR_lush_lxWS_HI_ILL_Green : acc_pointer_IR_HI_ILL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_HI_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_HI_L_Green";
};
class acc_pointer_IR_lush_lxWS_VIS_L_Green : acc_pointer_IR_VIS_L_Green
{
displayName = "DBAL-A2 Green (VIS Laser, Lush)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_lush_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_lush_lxWS_LO_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_lush_lxWS_HI_IL_Green";
};
// DBAL-A2 Red Sand
class acc_pointer_IR_sand_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 Red (LO IR Laser, Sand)";
DLC = "ws";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_HI_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_LO_ILL_Red";
};
class acc_pointer_IR_sand_lxWS_LO_ILL_Red : acc_pointer_IR_LO_ILL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_LO_IL_Red";
};
class acc_pointer_IR_sand_lxWS_HI_L_Red : acc_pointer_IR_HI_L_Red
{
displayName = "DBAL-A2 Red (HI IR Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_HI_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS";
};
class acc_pointer_IR_sand_lxWS_LO_IL_Red : acc_pointer_IR_LO_IL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_LO_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_VIS_L_Red";
};
class acc_pointer_IR_sand_lxWS_HI_IL_Red : acc_pointer_IR_HI_IL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_VIS_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_HI_ILL_Red";
};
class acc_pointer_IR_sand_lxWS_HI_ILL_Red : acc_pointer_IR_HI_ILL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_HI_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_HI_L_Red";
};
class acc_pointer_IR_sand_lxWS_VIS_L_Red : acc_pointer_IR_VIS_L_Red
{
displayName = "DBAL-A2 Red (VIS Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_LO_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_HI_IL_Red";
};
// DBAL-A2 Green Sand
class acc_pointer_IR_sand_lxWS_LO_L_Green : acc_pointer_IR
{
displayName = "DBAL-A2 Green (LO IR Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_HI_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_LO_ILL_Green";
};
class acc_pointer_IR_sand_lxWS_LO_ILL_Green : acc_pointer_IR_LO_ILL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_LO_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_LO_IL_Green";
};
class acc_pointer_IR_sand_lxWS_HI_L_Green : acc_pointer_IR_HI_L_Green
{
displayName = "DBAL-A2 Green (HI IR Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_HI_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_LO_L_Green";
};
class acc_pointer_IR_sand_lxWS_LO_IL_Green : acc_pointer_IR_LO_IL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_LO_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_VIS_L_Green";
};
class acc_pointer_IR_sand_lxWS_HI_IL_Green : acc_pointer_IR_HI_IL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_VIS_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_HI_ILL_Green";
};
class acc_pointer_IR_sand_lxWS_HI_ILL_Green : acc_pointer_IR_HI_ILL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_HI_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_HI_L_Green";
};
class acc_pointer_IR_sand_lxWS_VIS_L_Green : acc_pointer_IR_VIS_L_Green
{
displayName = "DBAL-A2 Green (VIS Laser, Sand)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_sand_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_sand_lxWS_LO_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_sand_lxWS_HI_IL_Green";
};
// DBAL-A2 Red Snake
class acc_pointer_IR_snake_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 Red (LO IR Laser, Snake)";
DLC = "ws";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_HI_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_LO_ILL_Red";
};
class acc_pointer_IR_snake_lxWS_LO_ILL_Red : acc_pointer_IR_LO_ILL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_LO_IL_Red";
};
class acc_pointer_IR_snake_lxWS_HI_L_Red : acc_pointer_IR_HI_L_Red
{
displayName = "DBAL-A2 Red (HI IR Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_HI_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS";
};
class acc_pointer_IR_snake_lxWS_LO_IL_Red : acc_pointer_IR_LO_IL_Red
{
displayName = "DBAL-A2 Red (LO IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_LO_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_VIS_L_Red";
};
class acc_pointer_IR_snake_lxWS_HI_IL_Red : acc_pointer_IR_HI_IL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_VIS_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_HI_ILL_Red";
};
class acc_pointer_IR_snake_lxWS_HI_ILL_Red : acc_pointer_IR_HI_ILL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_HI_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_HI_L_Red";
};
class acc_pointer_IR_snake_lxWS_VIS_L_Red : acc_pointer_IR_VIS_L_Red
{
displayName = "DBAL-A2 Red (VIS Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_LO_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_HI_IL_Red";
};
// DBAL-A2 Green Snake
class acc_pointer_IR_snake_lxWS_LO_L_Green : acc_pointer_IR
{
displayName = "DBAL-A2 Green (LO IR Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_HI_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_LO_ILL_Green";
};
class acc_pointer_IR_snake_lxWS_LO_ILL_Green : acc_pointer_IR_LO_ILL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_LO_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_LO_IL_Green";
};
class acc_pointer_IR_snake_lxWS_HI_L_Green : acc_pointer_IR_HI_L_Green
{
displayName = "DBAL-A2 Green (HI IR Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_HI_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_LO_L_Green";
};
class acc_pointer_IR_snake_lxWS_LO_IL_Green : acc_pointer_IR_LO_IL_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_LO_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_VIS_L_Green";
};
class acc_pointer_IR_snake_lxWS_HI_IL_Green : acc_pointer_IR_HI_IL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_VIS_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_HI_ILL_Green";
};
class acc_pointer_IR_snake_lxWS_HI_ILL_Green : acc_pointer_IR_HI_ILL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_HI_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_HI_L_Green";
};
class acc_pointer_IR_snake_lxWS_VIS_L_Green : acc_pointer_IR_VIS_L_Green
{
displayName = "DBAL-A2 Green (VIS Laser, Snake)";
DLC = "ws";
model = "\lxws\weapons_1_f_lxWS\acc\accv_pointer_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_accv_pointer_snake_CA.paa";
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_snake_lxWS_LO_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_snake_lxWS_HI_IL_Green";
};
// Scout Light Pro
class saber_light_lxWS : acc_flashlight // Surefire Scout Light Pro Scout Light
{
descriptionShort = "1000 Lumen LED Flashlight";
displayName = "Scout Light Pro";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1}; // Makes whatever light you use whiter/more saturated. Reduces effect of coneFadeCoef.
		color[] = {850,900,950}; // 100%, 85%, 70% for Yellow-ish light. To have some form of Consistency, basing this value off of Lumen and adjusting everything else down the line to work with it. % Total should be 270. Blue light eg 85, 90, 95 % of lumen for Blue light
		coneFadeCoef = 16; // Creates diffusion.
		dayLight = 1; // To work during the day, regardless of intensity
		direction = "flash";
		flareMaxDistance = 213;
		flareSize = 1.2;
		innerAngle = 32; // Size of the Circle that should have 100% brightness on its entire area. Also increases Total size when there is a large coneFadeCoef
		intensity = 64; // Intense enough to be visible in daytime.
		outerAngle = 64; // Needs big enough coneFadeCoef and small enough innerAngle to achieve a smooth fadeout. 
		position = "flash dir";
		scale[] = {1,1,1}; // Unsure if this does anything
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1; // Was 0.5. Almost no effect at this value. Okay.
			hardLimitEnd = 213; // Datasheet
			hardLimitStart = 177.5;
			linear = 32; // Was 0.1. Linked to Intensity. 64 to 8, 128 to 16
			quadratic = 0; // From 0.2.
			start = 0; // Starting Distance. 0 just looks best.
			};
		};
	};
};
class saber_light_arid_lxWS : saber_light_lxWS
{
displayName = "Scout Light Pro (Arid)";
};
class saber_light_khaki_lxWS : saber_light_lxWS
{
displayName = "Scout Light Pro (Khaki)";
};
class saber_light_lush_lxWS : saber_light_lxWS
{
displayName = "Scout Light Pro (Lush)";
};
class saber_light_sand_lxWS : saber_light_lxWS
{
displayName = "Scout Light Pro (Sand)";
};
class saber_light_snake_lxWS : saber_light_lxWS
{
displayName = "Scout Light Pro (Snake)";
};
// Scout Light Pro Infrared
class saber_light_ir_lxWS : saber_light_lxWS
{
descriptionShort = "120 mW / 350 Lumen Dual-Spectrum LED Flashlight";
displayName = "Scout Light Pro Infrared (IR Light)";
MRT_SwitchItemHintText = "IR Light";
MRT_SwitchItemNextClass = "saber_light_ir_lxWS_VIS";
MRT_SwitchItemPrevClass = "saber_light_ir_lxWS_VIS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {120,120,120}; // For IR, basing this off of mW Value
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
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
			hardLimitEnd = 214; // Datasheet
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class saber_light_ir_lxWS_VIS : saber_light_ir_lxWS // New Class to use Dual-Bank capability
{
displayName = "Scout Light Pro Infrared (VIS Light)";
scope = 1;
MRT_SwitchItemHintText = "VIS Light";
MRT_SwitchItemNextClass = "saber_light_ir_lxWS";
MRT_SwitchItemPrevClass = "saber_light_ir_lxWS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight // Different Variants (IR, VIS) Must be explicitly re-defined and not inherited+altered for whatever reason, else the light wont show up
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {297.5,315,332.5};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
		irLight = 0;
		outerAngle = 64;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 214;
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
// Changing Inheritance of Sabers to cut down duplication of Flashlights would be possible, but I may run into incompatiblity.
// Since Attachments cant be reskinned easily anyway I will just redefine it and be done with it...
class saber_light_ir_arid_lxWS : saber_light_arid_lxWS
{
descriptionShort = "120mW / 350 Lumen Dual-Spectrum Flashlight";
displayName = "Scout Light Pro Infrared (IR Light, Arid)";
MRT_SwitchItemHintText = "IR Light";
MRT_SwitchItemNextClass = "saber_light_ir_arid_lxWS_VIS";
MRT_SwitchItemPrevClass = "saber_light_ir_arid_lxWS_VIS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {120,120,120};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
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
			hardLimitEnd = 214;
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class saber_light_ir_arid_lxWS_VIS : saber_light_ir_lxWS_VIS
{
displayName = "Scout Light Pro Infrared (VIS Light, Arid)";
model = "\lxws\weapons_1_f_lxWS\acc\saber_light_arid_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_saber_flashlight_arid_CA.paa";
MRT_SwitchItemHintText = "VIS Light";
MRT_SwitchItemNextClass = "saber_light_ir_arid_lxWS";
MRT_SwitchItemPrevClass = "saber_light_ir_arid_lxWS";
};
class saber_light_ir_khaki_lxWS : saber_light_khaki_lxWS
{
descriptionShort = "120mW / 350 Lumen Dual-Spectrum Flashlight";
displayName = "Scout Light Pro Infrared (IR Light, Khaki)";
MRT_SwitchItemHintText = "IR Light";
MRT_SwitchItemNextClass = "saber_light_ir_khaki_lxWS_VIS";
MRT_SwitchItemPrevClass = "saber_light_ir_khaki_lxWS_VIS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {120,120,120};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
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
			hardLimitEnd = 214;
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class saber_light_ir_khaki_lxWS_VIS : saber_light_ir_lxWS_VIS
{
displayName = "Scout Light Pro Infrared (VIS Light, Khaki)";
model = "\lxws\weapons_1_f_lxWS\acc\saber_light_khaki_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_saber_flashlight_khk_CA.paa";
MRT_SwitchItemHintText = "VIS Light";
MRT_SwitchItemNextClass = "saber_light_ir_khaki_lxWS";
MRT_SwitchItemPrevClass = "saber_light_ir_khaki_lxWS";
};
class saber_light_ir_lush_lxWS : saber_light_lush_lxWS
{
descriptionShort = "120mW / 350 Lumen Dual-Spectrum Flashlight";
displayName = "Scout Light Pro Infrared (IR Light, Lush)";
MRT_SwitchItemHintText = "IR Light";
MRT_SwitchItemNextClass = "saber_light_ir_lush_lxWS_VIS";
MRT_SwitchItemPrevClass = "saber_light_ir_lush_lxWS_VIS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {120,120,120};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
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
			hardLimitEnd = 214;
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class saber_light_ir_lush_lxWS_VIS : saber_light_ir_lxWS_VIS
{
displayName = "Scout Light Pro Infrared (VIS Light, Lush)";
model = "\lxws\weapons_1_f_lxWS\acc\saber_light_lush_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_saber_flashlight_lush_CA.paa";
MRT_SwitchItemHintText = "VIS Light";
MRT_SwitchItemNextClass = "saber_light_ir_lush_lxWS";
MRT_SwitchItemPrevClass = "saber_light_ir_lush_lxWS";
};
class saber_light_ir_sand_lxWS : saber_light_sand_lxWS
{
descriptionShort = "120mW / 350 Lumen Dual-Spectrum Flashlight";
displayName = "Scout Light Pro Infrared (IR Light, Sand)";
MRT_SwitchItemHintText = "IR Light";
MRT_SwitchItemNextClass = "saber_light_ir_sand_lxWS_VIS";
MRT_SwitchItemPrevClass = "saber_light_ir_sand_lxWS_VIS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {120,120,120};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
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
			hardLimitEnd = 214;
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class saber_light_ir_sand_lxWS_VIS : saber_light_ir_lxWS_VIS
{
displayName = "Scout Light Pro Infrared (VIS Light, Sand)";
model = "\lxws\weapons_1_f_lxWS\acc\saber_light_sand_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_saber_flashlight_snd_CA.paa";
MRT_SwitchItemHintText = "VIS Light";
MRT_SwitchItemNextClass = "saber_light_ir_sand_lxWS";
MRT_SwitchItemPrevClass = "saber_light_ir_sand_lxWS";
};
class saber_light_ir_snake_lxWS : saber_light_snake_lxWS
{
descriptionShort = "120mW / 350 Lumen Dual-Spectrum Flashlight";
displayName = "Scout Light Pro Infrared (IR Light, Snake)";
MRT_SwitchItemHintText = "IR Light";
MRT_SwitchItemNextClass = "saber_light_ir_snake_lxWS_VIS";
MRT_SwitchItemPrevClass = "saber_light_ir_snake_lxWS_VIS";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.7337;
		class FlashLight
		{
		ambient[] = {1,1,1};
		color[] = {120,120,120};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 214;
		flareSize = 1.0;
		innerAngle = 32;
		intensity = 64;
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
			hardLimitEnd = 214;
			hardLimitStart = 178.3333;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class saber_light_ir_snake_lxWS_VIS : saber_light_ir_lxWS_VIS
{
displayName = "Scout Light Pro Infrared (VIS Light, Snake)";
model = "\lxws\weapons_1_f_lxWS\acc\saber_light_snake_lxWS.p3d";
picture = "\lxWS\weapons_1_f_lxws\Acc\data\UI\icon_gear_saber_flashlight_sks_CA.paa";
MRT_SwitchItemHintText = "VIS Light";
MRT_SwitchItemNextClass = "saber_light_ir_snake_lxWS";
MRT_SwitchItemPrevClass = "saber_light_ir_snake_lxWS";
};

// Western Sahara Muzzle Attachments. Changing: Name. Mass. Adding Description 
class muzzle_snds_12Gauge_lxWS : muzzle_snds_H
{
descriptionShort = "Modular Shotgun Sound Suppressor<br />Gauge: 12";	
displayName = "Salvo 12";
	class ItemInfo : ItemInfo
	{
	mass = 21.5;
	};
};
class muzzle_snds_12Gauge_snake_lxWS : muzzle_snds_12Gauge_lxWS
{
displayName = "Salvo 12 (Snake)";
};

class suppressor_m_lxWS : muzzle_snds_H
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "QDC/CRS-65-PRT";
	class ItemInfo : ItemInfo
	{
	mass = 13.47; // KAC 5.56 QDC/CRS-PRT is 19.2oz, PRS-1 is 23.5. Put inbetween
	};
};
class suppressor_m_arid_lxWS : muzzle_snds_H
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "QDC/CRS-65-PRT (Arid)";
	class ItemInfo : ItemInfo
	{
	mass = 13.47;
	};
};
class suppressor_m_khaki_lxWS : muzzle_snds_H
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "QDC/CRS-65-PRT (Khaki)";
	class ItemInfo : ItemInfo
	{
	mass = 13.47;
	};
};
class suppressor_m_lush_lxWS : muzzle_snds_H
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "QDC/CRS-65-PRT (Lush)";
	class ItemInfo : ItemInfo
	{
	mass = 13.47;
	};
};
class suppressor_m_sand_lxWS : muzzle_snds_H
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "QDC/CRS-65-PRT (Sand)";
	class ItemInfo : ItemInfo
	{
	mass = 13.47;
	};
};
class suppressor_m_snake_lxWS : muzzle_snds_H
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "QDC/CRS-65-PRT (Snake)";
	class ItemInfo : ItemInfo
	{
	mass = 13.47;
	};
};

class suppressor_h_lxWS : muzzle_snds_B
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "PRS-1";
	class ItemInfo : ItemInfo
	{
	mass = 14.69;
	};
};
class suppressor_h_arid_lxWS : muzzle_snds_B
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "PRS-1 (Arid)";
	class ItemInfo : ItemInfo
	{
	mass = 14.69;
	};
};
class suppressor_h_khaki_lxWS : muzzle_snds_B
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "PRS-1 (Khaki)";
	class ItemInfo : ItemInfo
	{
	mass = 14.69;
	};
};
class suppressor_h_lush_lxWS : muzzle_snds_B
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "PRS-1 (Lush)";
	class ItemInfo : ItemInfo
	{
	mass = 14.69;
	};
};
class suppressor_h_sand_lxWS : muzzle_snds_B
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "PRS-1 (Sand)";
	class ItemInfo : ItemInfo
	{
	mass = 14.69;
	};
};
class suppressor_h_snake_lxWS : muzzle_snds_B
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "PRS-1 (Snake)";
	class ItemInfo : ItemInfo
	{
	mass = 14.69;
	};
};

class suppressor_l_camo_lxWS : muzzle_snds_M
{
displayName = "QDSS NT4 (Stripes)";
	class ItemInfo;
};

class suppressor_l_lxWS : muzzle_snds_M
{
displayName = "QDC/CRS-PRT";
	class ItemInfo : ItemInfo
	{
	mass = 12;
	};
};
class suppressor_l_arid_lxWS : muzzle_snds_M
{
displayName = "QDC/CRS-PRT (Arid)";
	class ItemInfo : ItemInfo
	{
	mass = 12;
	};
};
class suppressor_l_khaki_lxWS : muzzle_snds_M
{
displayName = "QDC/CRS-PRT (Khaki)";
	class ItemInfo : ItemInfo
	{
	mass = 12;
	};
};
class suppressor_l_lush_lxWS : muzzle_snds_M
{
displayName = "QDC/CRS-PRT (Lush)";
	class ItemInfo : ItemInfo
	{
	mass = 12;
	};
};
class suppressor_l_sand_lxWS : muzzle_snds_M
{
displayName = "QDC/CRS-PRT (Sand)";
	class ItemInfo : ItemInfo
	{
	mass = 12;
	};
};
class suppressor_l_snake_lxWS : muzzle_snds_M
{
displayName = "QDC/CRS-PRT (Snake)";
	class ItemInfo : ItemInfo
	{
	mass = 12;
	};
};

// Creating Striped Mini 4
class muzzle_snds_545_stripes_F : suppressor_l_camo_lxWS
{
_generalMacro = "muzzle_snds_M_545_snd_F";	
displayName = "Mini 4 (Stripes)";
	class ItemInfo : ItemInfo
	{
	mass = 8.438;	
	};
};

// Creating GLX-160 Ladder Sight
class optic_glx_lxws : ItemCore
{
_generalMacro = "optic_glx_lxws";
author = "Rotators Collective";
descriptionShort = "Grenade Launcher Ladder Sight<br />Compatible Calibres: 40x46mm LV";
displayName = "GLX-160 Ladder Sight";
inertia = 0.1;
model = "\lxws\weapons_1_f_lxws\acc\optic_glx_lxws.p3d";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_optic_glx_lxws.paa";
scope = 2;
weaponInfoType = "RscWeaponZeroing";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 4.409;	
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class GLX
			{
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 0;
			distanceZoomMax = 300;
			distanceZoomMin = 300;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"Default"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};	
			};
		};
	};
};
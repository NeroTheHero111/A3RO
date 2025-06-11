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
class optic_r1_low_lxWS : optic_r1_high_lxWS // I ought not to mess with the Inheritance, but redefining all subclasses seems silly.
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
class optic_r1_low_arid_lxWS : optic_r1_low_lxWS
{
displayName = "Micro R-1 (4 MOA, Arid)";
};
class optic_r1_low_khaki_lxWS : optic_r1_low_lxWS
{
displayName = "Micro R-1 (4 MOA, Khaki)";
};
class optic_r1_low_lush_lxWS : optic_r1_low_lxWS
{
displayName = "Micro R-1 (4 MOA, Lush)";
};
class optic_r1_low_sand_lxWS : optic_r1_low_lxWS
{
displayName = "Micro R-1 (4 MOA, Sand)";
};
class optic_r1_low_snake_lxWS : optic_r1_low_lxWS
{
displayName = "Micro R-1 (4 MOA, Snake)";
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
class acc_pointer_IR_arid_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 (IR, Arid)";
};
class acc_pointer_IR_lush_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 (IR, Lush)";
};
class acc_pointer_IR_sand_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 (IR, Sand)";
};
class acc_pointer_IR_snake_lxWS : acc_pointer_IR
{
displayName = "DBAL-A2 (IR, Snake)";
};

class saber_light_lxWS : acc_flashlight // Night Evolution M600W KM2-A LED Tactical Scout Light Flashlight
{
descriptionShort = "200 Lumen Flashlight";
displayName = "M600W";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 2.646;
	};
};
class saber_light_arid_lxWS : saber_light_lxWS
{
displayName = "M600W (Arid)";
};
class saber_light_khaki_lxWS : saber_light_lxWS
{
displayName = "M600W (Khaki)";
};
class saber_light_lush_lxWS : saber_light_lxWS
{
displayName = "M600W (Lush)";
};
class saber_light_sand_lxWS : saber_light_lxWS
{
displayName = "M600W (Sand)";
};
class saber_light_snake_lxWS : saber_light_lxWS
{
displayName = "M600W (Snake)";
};
class saber_light_ir_lxWS : saber_light_lxWS
{
descriptionShort = "Fictional 200 Lumen Infrared Flashlight";
displayName = "M600IR";
};
class saber_light_ir_arid_lxWS : saber_light_arid_lxWS
{
descriptionShort = "Fictional 200 Lumen Infrared Flashlight";
displayName = "M600IR (Arid)";
};
class saber_light_ir_khaki_lxWS : saber_light_khaki_lxWS
{
descriptionShort = "Fictional 200 Lumen Infrared Flashlight";
displayName = "M600IR (Khaki)";
};
class saber_light_ir_lush_lxWS : saber_light_lush_lxWS
{
descriptionShort = "Fictional 200 Lumen Infrared Flashlight";
displayName = "M600IR (Lush)";
};
class saber_light_ir_sand_lxWS : saber_light_sand_lxWS
{
descriptionShort = "Fictional 200 Lumen Infrared Flashlight";
displayName = "M600IR (Sand)";
};
class saber_light_ir_snake_lxWS : saber_light_snake_lxWS
{
descriptionShort = "Fictional 200 Lumen Infrared Flashlight";
displayName = "M600IR (Snake)";
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
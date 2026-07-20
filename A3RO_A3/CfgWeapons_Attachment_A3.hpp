// Vanilla Optics. Changing: Name. Description. Mass. Magnification
class optic_ACO_grn : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Green<br />Compatible Calibres: All";
displayName = "Railway Triangle-Dot (4 MOA, Green)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 3.12;
		class OpticsModes
		{
			class ACO
			{
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			};
		};
	};
};
class optic_Aco : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Red<br />Compatible Calibres: All";
displayName = "Railway Bullseye (2 MOA, Red)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 3.12;
		class OpticsModes
		{
			class ACO
			{
			distanceZoomMax = 100;
			distanceZoomMin = 100;		
			};
		};
	};
};
class optic_ACO_grn_smg : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Green<br />Compatible Calibres: All";
displayName = "Railway 3-Cross (6 MOA, Green)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 3.12;
		class OpticsModes
		{
			class ACO
			{
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			};
		};
	};
};
class optic_Aco_smg : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Red<br />Compatible Calibres: All";
displayName = "Railway Circle-Dot (2 MOA, Red)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 3.12;
		class OpticsModes
		{
			class ACO
			{
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			};
		};
	};
};
class optic_AMS_base : ItemCore
{
descriptionShort = "Telescopic Sight with mounted Red Dot<br />Magnification: 1.8x - 10x<br />Maximum Zero: 2000m<br />Compatible Calibres: All<br /><br />Elevation Markings at 100m Zero apply for:<br />6.5x39mm<br />7.62x51mm NATO<br />.308 Winchester<br />7.62x54mmR<br />.338 Norma Magnum<br />9.3x64mm Brenneke<br />12.7x108mm";
displayName = "MR-10 Base Class";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 22.35;
		class OpticsModes
		{
			class AMS
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
			discreteDistanceInitIndex = 1;
			discreteFov[] = {0.138888,0.025};
			distanceZoomMax = 900;
			distanceZoomMin = 50;
			opticsZoomInit = 0.138888;
			opticsZoomMax = 0.138888;
			opticsZoomMin = 0.025;
			};
			class Iron
			{
			discreteDistance[] = {50};	
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			}
		};
	};
};
class optic_AMS : optic_AMS_base
{
displayName = "MR-10 1.8-10x37 (L/T)";
};
class optic_AMS_khk : optic_AMS
{
displayName = "MR-10 1.8-10x37 (Khaki, L/T)";	
};
class optic_AMS_snd : optic_AMS
{
displayName = "MR-10 1.8-10x37 (Sand, L/T)";	
};
class optic_Arco : ItemCore
{
descriptionShort = "Prism Sight with mounted Red Dot<br />Magnification: 4x<br />Compatible Calibres:<br />6.5x39mm<br />7.62x51mm NATO<br />.308 Winchester<br />7.62x54mmR";
displayName = "SpecterOS 4x32 (Tan, NV sight II plus)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 12.74;
		class OpticsModes
		{
			class ARCO2collimator
			{
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			};
			class ARCO2scope : ARCO2collimator
			{
			opticsZoomInit = 0.25;
			opticsZoomMax = 0.75;
			opticsZoomMin = 0.0625; // New. For all 3D scopes allow User to Zoom w/ RMB. Add previous Implementation as additional Mode.
			};
			class ARCO2scope4x : ARCO2scope // Like so
			{
			opticsID = 3;
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			};
		};
	};
};
class optic_Arco_arid_F : optic_Arco
{
displayName = "SpecterOS 4x32 (Arid, NV sight II plus)";
};
class optic_Arco_blk_F : optic_Arco
{
displayName = "SpecterOS 4x32 (Black, NV sight II plus)";
};
class optic_Arco_ghex_F : optic_Arco
{
displayName = "SpecterOS 4x32 (Green Hex, NV sight II plus)";
};
class optic_Arco_lush_F : optic_Arco
{
displayName = "SpecterOS 4x32 (Lush, NV sight II plus)";
};
class optic_Arco_AK_arid_F : optic_Arco_arid_F
{
descriptionShort = "Prism Sight with mounted Red Dot<br />Magnification: 4x<br />Compatible Calibres: 7.62x39mm";
displayName = "SpecterOS AK 4x32 (Arid, NV sight II plus)";
};
class optic_Arco_AK_blk_F : optic_Arco_blk_F
{
descriptionShort = "Prism Sight with mounted Red Dot<br />Magnification: 4x<br />Compatible Calibres: 7.62x39mm";
displayName = "SpecterOS AK 4x32 (Black, NV sight II plus)";
};
class optic_Arco_AK_lush_F : optic_Arco_lush_F
{
descriptionShort = "Prism Sight with mounted Red Dot<br />Magnification: 4x<br />Compatible Calibres: 7.62x39mm";
displayName = "SpecterOS AK 4x32 (Lush, NV sight II plus)";
};
class optic_DMS : ItemCore
{
descriptionShort = "Telescopic Sight with mounted Red Dot<br />Magnification: 1x - 8x<br />Maximum Zero: 1600m<br />Compatible Calibres: All<br /><br />Elevation Markings at 100m Zero apply for:<br />6.5x39mm<br />7.62x51mm NATO<br />.308 Winchester<br />7.62x54mmR<br />.338 Norma Magnum<br />9.3x64mm Brenneke<br />12.7x108mm<br /><br />Dot: 50m<br />Arrows: 100m, 300m, 500m, 700m";
displayName = "XTR II™ 1-8x24 (FastFire 2)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 15.76;
		class OpticsModes
		{
			class Snip
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1200,1250,1300,1350,1400,1450,1500,1550,1600};
			discreteDistanceInitIndex = 1;
			discreteFov[] = {0.25,0.03125};
			distanceZoomMax = 700;
			distanceZoomMin = 100;
			opticsZoomInit = 0.25;
			opticsZoomMax = 0.25;
			opticsZoomMin = 0.03125;
			};
			class Iron : Snip
			{
			discreteDistance[] = {50};
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			};
		};
	};	
};
class optic_DMS_ghex_F : optic_DMS
{
displayName = "XTR II™ 1-8x24 (Green Hex, FastFire 2)";
};
class optic_DMS_weathered_F : optic_DMS
{
displayName = "XTR II™ 1-8x24 (Weathered, FastFire 2)";
	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
		class Iron;
		class Snip;	
		};
	};
};
class optic_DMS_weathered_Kir_F : optic_DMS_weathered_F
{
descriptionShort = "Telescopic Sight with mounted Red Dot<br />Magnification: 1x - 8x<br />Maximum Zero: 600m<br /><br />Dot: 50m<br />Arrows: 100m, 125m, 150m, 175m";
displayName = "XTR II™ 1-8x24 ASP-1 Kir (Weathered, FastFire 2)";
	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Snip : Snip
			{
			cameraDir = "";
			discreteDistance[] = {50,75,100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,500,525,550,575,600};
			discreteDistanceInitIndex = 2;
			discreteFov[] = {0.25,0.03125};
			discreteInitIndex = 0;
			distanceZoomMax = 600;
			distanceZoomMin = 50;
			memoryPointCamera = "opticView";
			modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
			opticsDisablePeripherialVision = 1;
			opticsFlare = 1;
			opticsID = 1;
			opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
			opticsZoomInit = 0.25;
			opticsZoomMax = 0.25;
			opticsZoomMin = 0.03125;
			useModelOptics = 1;
			visionMode[] = {"Normal"};
			};
			class Iron : Iron
			{
			cameraDir = "";
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			discretefov[] = {};
			discreteInitIndex = 0;
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			memoryPointCamera = "eye";
			modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 2;
			opticsPPEffects[] = {"",""};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			};
		};
	};	
};
class optic_ERCO_blk_F : optic_Arco
{
descriptionShort = "Prism Sight with mounted Red Dot<br />Magnification: 4x<br />Compatible Calibres:<br />5.56x45mm NATO<br />7.62x51mm NATO<br />.308 Winchester<br />7.62x54mmR";
displayName = "BRAVO4 4x30 (ROMEO3)";
	class ItemInfo : ItemInfo
	{
	mass = 14.31;
	};
};
class optic_ERCO_khk_F : optic_ERCO_blk_F
{
displayName = "BRAVO4 4x30 (Khaki, ROMEO3)";
};
class optic_ERCO_snd_F : optic_ERCO_blk_F
{
displayName = "BRAVO4 4x30 (Sand, ROMEO3)";
};
class optic_Hamr : ItemCore
{
descriptionShort = "Prism Sight with mounted Red Dot<br />Magnification: 4x<br />Compatible Calibres:<br />6.5x39mm<br />7.62x51mm NATO<br />.308 Winchester<br />7.62x54mmR";
displayName = "Mark 4® HAMR® 4x24 (Deltapoint Pro NV)";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 9.25;		
		class OpticsModes
		{		
			class Hamr2Collimator
			{
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			};
			class Hamr2Scope
			{
			opticsZoomInit = 0.25;
			opticsZoomMax = 0.75;
			opticsZoomMin = 0.0625;
			};
			class Hamr2Scope4x : Hamr2Scope
			{
			opticsID = 3;
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			};
		};
	};	
};
class optic_Hamr_khk_F : optic_Hamr
{
displayName = "Mark 4® HAMR® 4x24 (Khaki, Deltapoint Pro NV)";	
};
class optic_Holosight : ItemCore
{
descriptionShort = "Holographic Sight<br />Magnification: 1x<br />Compatible Calibres: All";
displayName = "EXPS3™ CQB (2 MOA, Tan)";	
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 6.99;
		class OpticsModes
		{
			class ACO
			{
			distanceZoomMax = 100;	
			distanceZoomMin = 100;
			};
		};
	};
};
class optic_Holosight_arid_F : optic_Holosight
{
displayName = "EXPS3™ CQB (2 MOA, Arid)";	
};
class optic_Holosight_blk_F : optic_Holosight
{
displayName = "EXPS3™ CQB (2 MOA)";	
};
class optic_Holosight_khk_F : optic_Holosight
{
displayName = "EXPS3™ CQB (2 MOA, Khaki)";	
};
class optic_Holosight_lush_F : optic_Holosight
{
displayName = "EXPS3™ CQB (2 MOA, Lush)";	
};
class optic_Holosight_smg : ItemCore
{
descriptionShort = "Holographic Sight<br />Magnification: 1x<br />Compatible Calibres: All";
displayName = "EXPS3™ Circle-Dot (2 MOA, Tan)";	
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 6.99;
		class OpticsModes
		{
			class ACO
			{
			distanceZoomMax = 100;	
			distanceZoomMin = 100;
			};
		};
	};
};
class optic_Holosight_smg_blk_F : optic_Holosight_smg
{
displayName = "EXPS3™ Circle-Dot (2 MOA)";	
};
class optic_Holosight_smg_khk_F : optic_Holosight_smg
{
displayName = "EXPS3™ Circle-Dot (2 MOA, Khaki)";	
};
class optic_ico_01_base_f : ItemCore
{
descriptionShort = "Fictional Holographic Sight with Backup Iron Sights<br />Magnification: 2x<br />Compatible Calibres: All";
displayName = "MSBS Grot Modular Sight Base Class";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 22;
		class OpticsModes
		{
			class Hamr2Collimator
			{
			distanceZoomMax = 50;	
			distanceZoomMin = 50;
			};
		};
	};
};
class optic_ico_01_black_f : optic_ico_01_base_f
{	
displayName = "MSBS Grot Modular Sight";
};
class optic_ico_01_camo_f : optic_ico_01_base_f
{	
displayName = "MSBS Grot Modular Sight (Camo)";
};
class optic_ico_01_f : optic_ico_01_base_f 
{	
displayName = "MSBS Grot Modular Sight (Khaki)";
};
class optic_ico_01_sand_f : optic_ico_01_base_f
{	
displayName = "MSBS Grot Modular Sight (Sand)";
};
class optic_KHS_base: ItemCore
{
descriptionShort = "Telescopic Sight with Backup Iron Sights<br />Magnification: 2.4x - 12x<br />Maximum Zero: 2400m<br />Compatible Calibres: All";
displayName = "Helia 5 Base Class";	
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 26.45;
		class OpticsModes
		{
			class Iron
			{
			discreteDistance[] = {50};
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			};
			class KHS
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400};	
			discreteDistanceInitIndex = 1;
			discreteFov[] = {0.104166,0.020833};
			distanceZoomMax = 1500;
			distanceZoomMin = 100;
			opticsZoomInit = 0.104166;
			opticsZoomMax = 0.104166;
			opticsZoomMin = 0.020833;
			};
		};
	};	
};
class optic_KHS_blk : optic_KHS_base
{
displayName = "Helia 5 2.4-12x56i";	
};
class optic_KHS_hex : optic_KHS_blk
{
displayName = "Helia 5 2.4-12x56i (Hex)";	
};
class optic_KHS_old : ItemCore
{
displayName = "Helia 5 2.4-12x56i (Weathered)";
descriptionShort = "Telescopic Sight<br />Magnification: 2.4x - 12x<br />Maximum Zero: 2400m<br />Compatible Calibres: All";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 26.01;		
		class OpticsModes
		{
			class KHS
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400};	
			discreteDistanceInitIndex = 1;	
			discreteFov[] = {0.104166,0.020833};
			distanceZoomMax = 1500;
			distanceZoomMin = 100;
			opticsZoomInit = 0.104166;
			opticsZoomMax = 0.104166;
			opticsZoomMin = 0.020833;
			};
		};
	};	
};
class optic_KHS_tan : optic_KHS_blk
{
displayName = "Helia 5 2.4-12x56i (Tan)";	
};
class optic_LRPS : ItemCore
{
displayName = "NXS 5.5-22x56";	
descriptionShort = "Telescopic Sight<br />Magnification: 5.5x - 22x<br />Maximum Zero: 3400m<br />Compatible Calibres: All";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 26.23;
		class OpticsModes
		{
			class Snip
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400,2450,2500,2550,2600,2650,2700,2750,2800,2850,2900,2950,3000,3050,3100,3150,3200,3250,3300,3350,3400};
			discreteDistanceInitIndex = 1;
			discreteFov[] = {0.045454,0.0113636};
			distanceZoomMax = 2000;
			distanceZoomMin = 100;
			opticsZoomInit = 0.045454;
			opticsZoomMax = 0.045454;
			opticsZoomMin = 0.0113636;
			};
		};
	};	
};
class optic_LRPS_ghex_F : optic_LRPS
{
displayName = "NXS 5.5-22x56 (Green Hex)";		
};
class optic_LRPS_tna_F : optic_LRPS
{
displayName = "NXS 5.5-22x56 (Jungle)";		
};
class optic_MRCO : ItemCore
{
descriptionShort = "Telescopic Sight<br />Magnification: 1x/4x<br />Compatible Calibres:<br />5.56x45mm NATO<br />6.5x39mm<br />7.62x51mm NATO<br />.308 Winchester<br />7.62x54mmR";
displayName = "Pitbull 2 QR-TS 1/4x32";	
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 20.54;			
		class OpticsModes
		{
			class MRCOcq // Unique setup for MRCO due to lack of Backup Sight
			{
			memoryPointCamera = "opticView";
			opticsDisablePeripherialVision = 1;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
			opticsZoomInit = 0.25;
			opticsZoomMax = 0.75;
			opticsZoomMin = 0.0625;			
			};
			class MRCOscope
			{
			opticsZoomInit = 0.0625;
			opticsZoomMax = 0.0625;
			opticsZoomMin = 0.0625;
			};
		};
	};	
};
class optic_MRD : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Red<br />Compatible Calibres: All";
displayName = "MRDS (Tan)";	
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 0.56;	
	};
};

class optic_MRD_black : optic_MRD
{
displayName = "MRDS";
};
class optic_Nightstalker : ItemCore
{
descriptionShort = "Telescopic Thermal Sight with mounted Red Dot<br />Magnification: 4x - 10x<br />Compatible Calibres: All";
displayName = "Nightstalker 4-10x30";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 21;	
		class OpticsModes
		{
			class NCTALKEP	
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
			discreteDistanceInitIndex = 1;
			thermalMode[] = {6};
			visionMode[] = {"Normal","Ti"};
			thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.4};
			thermalResolution[] = {0.0, -1, 1.0, 1024};
			};
		};
	};
};
class optic_NVS : ItemCore
{
descriptionShort = "Night Vision Sight<br />Magnification: 5x<br />Compatible Calibres:<br />5.56x45mm NATO<br />5.8x42mm<br />6.5x39mm<br />.50 Beowulf<br />7.62x39mm";
displayName = "NVS 5x30";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 19.89;		
		class OpticsModes
		{
			class NVS
			{
			visionMode[] = {"Normal","NVG"};
			};
		};
	};	
};
class optic_SOS : ItemCore
{
descriptionShort = "Fictional Telescopic Sight with Backup Iron Sights<br />Magnification: 2.5-5x<br />Maximum Zero: 1000m<br />Compatible Calibres: All";
displayName = "MOS 2.5-5x32";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 21.29;	
		class OpticsModes
		{
			class Iron
			{
			discreteDistance[] = {50};
			distanceZoomMax = 50;
			distanceZoomMin = 50;
			};
			class Snip
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
			discreteDistanceInitIndex = 1;
			discretefov[] = {0.10,0.05};
			distanceZoomMax = 1000;
			distanceZoomMin = 100;
			opticsZoomInit = 0.10;
			opticsZoomMax = 0.10;
			opticsZoomMin = 0.05;
			};
		};
	};
};
class optic_SOS_khk_F : optic_SOS
{
displayName = "MOS 2.5-5x32 (Khaki)";	
};
class optic_tws : ItemCore
{
descriptionShort = "Telescopic Thermal Sight<br />Magnification: 3x<br />eZoom: 2x<br />Maximum Zero: 800m<br />Compatible Calibres: All";
displayName = "LILY-S TWS 3-6x24";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 44.09;				
		class OpticsModes
		{
			class TWS
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800};	
			discreteDistanceInitIndex = 1;
			discretefov[] = {0.083333,0.041666};
			opticsZoomInit = 0.083333;
			opticsZoomMax = 0.083333;
			opticsZoomMin = 0.041666;
			thermalMode[] = {0};
			visionMode[] = {"Ti"};
			thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.66};
			thermalResolution[] = {0.0, 1200, 1.0, 600};
			};
		};
	};	
};
class optic_tws_mg : ItemCore
{
descriptionShort = "Telescopic Thermal Sight<br />Magnification: 6x<br />eZoom: 2x<br />Maximum Zero: 1200m<br />Compatible Calibres: All";
displayName = "LILY-M TWS 6-12x24";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 55.12;	
		class OpticsModes
		{
			class TWS
			{
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200};
			discreteDistanceInitIndex = 1;
			discretefov[] = {0.041666,0.020833};
			distanceZoomMax = 1200;
			distanceZoomMin = 100;
			opticsZoomInit = 0.041666;
			opticsZoomMax = 0.041666;
			opticsZoomMin = 0.020833;
			thermalMode[] = {0};
			visionMode[] = {"Ti"};
			thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.66};
			thermalResolution[] = {0.0, 1200, 1.0, 600};
			};
		};
	};	
};
class optic_Yorris : ItemCore
{
descriptionShort = "Red Dot Sight<br />Color: Red<br />Compatible Calibres: All";
displayName = "FastFire 2";
picture = "\A3RO_A3\Textures\UI\gear_acco_yorris_CA.paa";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 0.55;
	};
};

// Creating DCL120 
class optic_dcl120 : ItemCore
{
_generalMacro = "optic_dcl120";
author = "Bohemia Interactive";
descriptionShort = "HMG Red Dot Sight<br />Color: Red<br />Compatible Calibres: All";
displayName = "DCL120 (3 MOA)";
inertia = 0.2;
model = "\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
picture = "\A3RO_A3\Textures\UI\icon_optic_dcl120.paa";
scope = 2;
weaponInfoType = "RscWeaponZeroing";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 68.34;	
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class DCL120
			{
			cameraDir = "";
			discreteDistance[] = {200,400,600,800,1200};
			discreteDistanceInitIndex = 0;
			distanceZoomMax = 1200;
			distanceZoomMin = 200;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"OpticsBlur1"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};	
			};
		};
	};
};

// Creating trijicon SRS
class optic_srs : ItemCore
{
_generalMacro = "optic_srs";
author = "Bohemia Interactive";
descriptionShort = "Red Dot Sight<br />Color: Red<br />Compatible Calibres: All<br /><br />Scrapped Alpha Content. Thermal Map is not set up (Bright White!)";
displayName = "SRS (1.75 MOA)";
inertia = 0.2;
model = "\A3\Weapons_F\Acc\acco_SRS_F.p3d";
picture = "\A3RO_A3\Textures\UI\icon_optic_srs_F.paa";
scope = 2;
// weaponInfoType = "RscWeaponZeroing";

// Adding Custom Optic Texture to replace the ugly unfinished 3D Model
	class CBA_ScriptedOptic 
	{
		opticsPPEffects[] = {"CBA_OpticsRadBlur3"};
		reticleTexture = "\A3RO_A3\Textures\srs_reticle_reddot_ca.paa";
		reticleTextureNight = "\A3RO_A3\Textures\srs_reticle_reddot_ca.paa";
		reticleTextureSize = 8.04 / 25 * 4;
		bodyTexture = "\A3RO_A3\Textures\srs_body_ca.paa";
		bodyTextureNight = "\A3RO_A3\Textures\srs_body_night_ca.paa";
		bodyTextureSize = 1.34; // reticle 6 is body 1
		hideMagnification = 1;
	};
	weaponInfoType = "CBA_ScriptedOptic";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
	mass = 6.81;	
	modelOptics = "\A3\Weapons_F\empty";
	optics = 1;
		class OpticsModes
		{
			class SRS
			{
			cameraDir = "";
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 1;
			opticsPPEffects[] = {"CBA_OpticsRadBlur3"};
			opticsZoomInit = 0.75;
			opticsZoomMax = 0.75;
			opticsZoomMin = 0.75;
			useModelOptics = 1;
			visionMode[] = {};
			};
		};
	};
};

// Rail Attachments. Changing: Name. Description. Mass
class acc_flashlight_pistol : ItemCore
{
descriptionShort = "170 Lumen LED Flashlight";
displayName = "TLR-3®";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 1.4506;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa"; // Adding ACE Config here as I would have to re-define the entire class again.
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {144.5,153,161.5};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 115;
		flareSize = 0.9;
		innerAngle = 13; // Small center, large diffusing area. 1/8th
		intensity = 128; // Double Intensity to achieve the circle+diffusion at range
		outerAngle = 104;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 115; // Datasheet
			hardLimitStart = 95.8333;
			linear = 16; // Create tighter Cone at center
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_flashlight : ItemCore
{
descriptionShort = "126 Lumen Xenon Flashlight";
displayName = "UTG 126 TWL";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 3.48;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_yellow_ca.paa";
		ACE_Flashlight_Colour = "Xenon";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {126,107.1,88.2};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 75;
		flareSize = 0.9;
		innerAngle = 13;
		intensity = 128;
		outerAngle = 104; // Cant find a single video showing Cone
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1; 
			hardLimitEnd = 75; // No info. Seems weak
			hardLimitStart = 62.5;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_flashlight_smg_01 : acc_flashlight
{
descriptionShort = "126 Lumen Xenon Flashlight";
displayName = "Integrated UTG 126 TWL";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 3.48;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_yellow_ca.paa";
		ACE_Flashlight_Colour = "Xenon";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {126,107.1,88.2};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 75;
		flareSize = 0.9;
		innerAngle = 13;
		intensity = 64;
		outerAngle = 104;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1; 
			hardLimitEnd = 75; // No info. Seems weak
			hardLimitStart = 62.5;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_esd_01_flashlight : ItemCore
{
descriptionShort = "200 / 1200 / 3300 Lumen LED Flashlight";
displayName = "XT11GT Pro (Medium)";
MRT_SwitchItemHintText = "Medium Output";
MRT_SwitchItemNextClass = "acc_esd_01_flashlight_1200";
MRT_SwitchItemPrevClass = "acc_esd_01_flashlight_3300";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 3.8801;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {170,180,190};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 100;
		flareSize = 1;
		innerAngle = 32;
		intensity = 64;
		outerAngle = 64;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1; 
			hardLimitEnd = 100; // Datasheet
			hardLimitStart = 83.3333;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
// Creating Variants
class acc_esd_01_flashlight_1200 : acc_esd_01_flashlight
{
displayName = "XT11GT Pro (High)";
scope = 1;
MRT_SwitchItemHintText = "High Output";
MRT_SwitchItemNextClass = "acc_esd_01_flashlight_3300";
MRT_SwitchItemPrevClass = "acc_esd_01_flashlight";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 3.8801;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {1020,1080,1140};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 240;
		flareSize = 1.3;
		innerAngle = 32;
		intensity = 64;
		outerAngle = 64;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1; 
			hardLimitEnd = 240;
			hardLimitStart = 200;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_esd_01_flashlight_3300 : acc_esd_01_flashlight_1200
{
displayName = "XT11GT Pro (Maximum)";
MRT_SwitchItemHintText = "Maximum Output";
MRT_SwitchItemNextClass = "acc_esd_01_flashlight";
MRT_SwitchItemPrevClass = "acc_esd_01_flashlight_1200";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 3.8801;
		class FlashLight
		{
		ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
		ACE_Flashlight_Colour = "White";
		ACE_Flashlight_Size = 2.5;
		ACE_Flashlight_Sound = 1;
		ambient[] = {1,1,1};
		color[] = {2805,2970,3135};
		coneFadeCoef = 16;
		dayLight = 1;
		direction = "flash";
		flareMaxDistance = 410;
		flareSize = 1.6;
		innerAngle = 32;
		intensity = 64;
		outerAngle = 64;
		position = "flash dir";
		scale[] = {1,1,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1; 
			hardLimitEnd = 410; // Datasheet
			hardLimitStart = 341.6666;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};

// DBAL-A2
// After trying my damndest to adapt the ACE DBAL 3 Classes with the Vanilla IR Lasers for a backwards compatible integration I realized none of this requires ace, just CBA...Whoops.
// DBAL-A2 Red
class acc_pointer_IR : ItemCore // Missing _L_Red for legacy compat reasons
{
descriptionShort = "IR Illuminator / IR Laser / VIS Laser Module";
displayName = "DBAL-A2 Red (LO IR Laser)";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_HI_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_LO_ILL_Red";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 1.25;
			beamMaxLength = 600;
		};
	};
};
class acc_pointer_IR_LO_ILL_Red : acc_pointer_IR
{
displayName = "DBAL-A2 Red (LO IR Illuminator/Laser)";
scope = 1;
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR";
MRT_SwitchItemPrevClass = "acc_pointer_IR_LO_IL_Red";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30}; // You can turn any surface white even with a low intensity by cranking this up to say, 180. Definetly didn't have that as an issue. Nope.
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 600;
		flareSize = 1.0;
		innerAngle = 8; // 10
		intensity = 64; // Was 100. 64 is my Global Variable for Intensity here.
		irLight = 1;
		outerAngle = 16; // 12
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 600; // 250. Datasheet claims 600 under pristine Conditions
			hardLimitStart = 500; // 1/6th
			linear = 32; // I control LO and HI simply by adjusting the linearity here
			quadratic = 0; // Was 0.8, Max range/distribution finetuning.
			start = 0;
			};
		};
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 1.25;
			beamMaxLength = 600;
		};
	};
};
class acc_pointer_IR_HI_L_Red : acc_pointer_IR
{
displayName = "DBAL-A2 Red (HI IR Laser)";
scope = 1;
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_HI_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 6;
			beamMaxLength = 2000;
		};
	};
};
class acc_pointer_IR_LO_IL_Red : acc_pointer_IR
{
displayName = "DBAL-A2 Red (LO IR Illuminator)";
scope = 1;
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_LO_ILL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_VIS_L_Red";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 600;
		flareSize = 1.0;
		innerAngle = 8;
		intensity = 64;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 600; 
			hardLimitStart = 500;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_pointer_IR_HI_IL_Red : acc_pointer_IR_LO_IL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator)";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_VIS_L_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_HI_ILL_Red";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 2000;
		flareSize = 1.2;
		innerAngle = 8;
		intensity = 64;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 2000; // 2000m MAX on Datasheet
			hardLimitStart = 1667;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_pointer_IR_HI_ILL_Red : acc_pointer_IR_LO_ILL_Red
{
displayName = "DBAL-A2 Red (HI IR Illuminator/Laser)";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_HI_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_HI_L_Red";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 2000;
		flareSize = 1.2;
		innerAngle = 8;
		intensity = 64;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 2000;
			hardLimitStart = 1667;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 6;
			beamMaxLength = 2000;
		};
	};
};
class acc_pointer_IR_VIS_L_Red : acc_pointer_IR
{
displayName = "DBAL-A2 Red (VIS Laser)";
scope = 1;
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_LO_IL_Red";
MRT_SwitchItemPrevClass = "acc_pointer_IR_HI_IL_Red";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 0;
			irDotSize = 0.02; // Adds an extra brightspot at around the VIS Laser Dot if big enough, making the Red Dot much bigger
			beamThickness = 0.15; // A beam without colour cannot be seen in NV, but in TI. No colour because it looks dumb during daytime.
			beamMaxLength = 600;
			beamColor[] = {0,0,0}; // Decreasing this (below 200?) causes the Beam to become more transparent when poiting at something out of range. Causing flickering when looking at the skyline.
			dotColor[] = {32768,0,0}; // 20 | 20 is barely visible in pitch darkness.
		};
	};
};
// DBAL-A2 Green
class acc_pointer_IR_LO_L_Green : acc_pointer_IR
{
descriptionShort = "IR Illuminator / IR Laser / Visible Laser Module";
displayName = "DBAL-A2 Green (LO IR Laser)";
MRT_SwitchItemHintText = "LO IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_HI_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_LO_ILL_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 1.25;
			beamMaxLength = 600;
		};
	};
};
class acc_pointer_IR_LO_ILL_Green : acc_pointer_IR_LO_L_Green
{
descriptionShort = "IR Illuminator / IR Laser / Visible Laser Module";
displayName = "DBAL-A2 Green (LO IR Illuminator/Laser)";
scope = 1;
MRT_SwitchItemHintText = "LO IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_LO_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_LO_IL_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 600;
		flareSize = 1.2;
		innerAngle = 8;
		intensity = 60;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 600;
			hardLimitStart = 500;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 1.25;
			beamMaxLength = 600;
		};
	};
};
class acc_pointer_IR_HI_L_Green : acc_pointer_IR_LO_L_Green
{
displayName = "DBAL-A2 Green (HI IR Laser)";
scope = 1;
MRT_SwitchItemHintText = "HI IR Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_HI_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_LO_L_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 6;
			beamMaxLength = 2000;
		};
	};
};
class acc_pointer_IR_LO_IL_Green : acc_pointer_IR_LO_L_Green
{
displayName = "DBAL-A2 Green (LO IR Illuminator)";
scope = 1;
MRT_SwitchItemHintText = "LO IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_LO_ILL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_VIS_L_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 600;
		flareSize = 1.2;
		innerAngle = 8;
		intensity = 64;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,2};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 600; 
			hardLimitStart = 500;
			linear = 32;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_pointer_IR_HI_IL_Green : acc_pointer_IR_LO_IL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator)";
MRT_SwitchItemHintText = "HI IR Illuminator";
MRT_SwitchItemNextClass = "acc_pointer_IR_VIS_L_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_HI_ILL_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 2000;
		flareSize = 1.4;
		innerAngle = 8;
		intensity = 64;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 2000;
			hardLimitStart = 1667;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
	};
};
class acc_pointer_IR_HI_ILL_Green : acc_pointer_IR_LO_ILL_Green
{
displayName = "DBAL-A2 Green (HI IR Illuminator/Laser)";
MRT_SwitchItemHintText = "HI IR Illuminator/Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_HI_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_HI_L_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Flashlight
		{
		ambient[] = {1,1,1};
		color[] = {30,30,30};
		coneFadeCoef = 16;
		direction = "laser dir";
		flareMaxDistance = 2000;
		flareSize = 1.4;
		innerAngle = 8;
		intensity = 64;
		irLight = 1;
		outerAngle = 16;
		position = "laser pos";
		scale[] = {0.32,0.32,1};
		size = 1;
		useFlare = 1;
		volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
			constant = 1;
			hardLimitEnd = 2000;
			hardLimitStart = 1667;
			linear = 16;
			quadratic = 0;
			start = 0;
			};
		};
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 1;
			irDotSize = 6;
			beamMaxLength = 2000;
		};
	};
};
class acc_pointer_IR_VIS_L_Green : acc_pointer_IR_LO_L_Green
{
displayName = "DBAL-A2 Green (VIS Laser)";
scope = 1;
MRT_SwitchItemHintText = "VIS Laser";
MRT_SwitchItemNextClass = "acc_pointer_IR_LO_IL_Green";
MRT_SwitchItemPrevClass = "acc_pointer_IR_HI_IL_Green";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 5.39;
		class Pointer 
		{
			irDistance = 5;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			isIR = 0;
			irDotSize = 0.02;
			beamThickness = 0.15;
			beamMaxLength = 600;
			beamColor[] = {0,0,0};
			dotColor[] = {0,32768,0};
		};
	};
};

// Muzzle Attachments. Changing: Name. Mass. Adding Description
class muzzle_antenna_01_f : muzzle_antenna_base_01_F
{
descriptionShort = "Records and Broadcasts Radio Messages";
displayName = "Military Transceiver Antenna (78-89 MHz)";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "";	
	mass = 18.5188;
	muzzleEnd = "konec hlavne";
	muzzlePos = "usti hlavne";
	};
};

class muzzle_antenna_02_f : muzzle_antenna_base_01_F
{
descriptionShort = "Detects and Jams Autonomous Devices";
displayName = "Scientific Transceiver Antenna (390-500 MHz)";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "";	
	mass = 12.7868;
	muzzleEnd = "konec hlavne";
	muzzlePos = "usti hlavne";
	};
};

class muzzle_antenna_03_f : muzzle_antenna_base_01_F
{
descriptionShort = "Detects and Jams Drones";
displayName = "Jammer Antenna (433 MHz)";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "";	
	mass = 26.8964;	
	muzzleEnd = "konec hlavne";
	muzzlePos = "usti hlavne";
	};
};
class muzzle_snds_338_black : ItemCore
{
descriptionShort = "Titanium Sound Suppressor<br />Calibre: .338 Lapua Magnum, .338 Norma Magnum, .300 Winchester Magnum";
displayName = "TBAC 338 Ultra Gen2 BA";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	mass = 10.75;
	};
};
class muzzle_snds_338_green : muzzle_snds_338_black
{
displayName = "TBAC 338 Ultra Gen2 BA (Green)";
};
class muzzle_snds_338_sand : muzzle_snds_338_black
{
displayName = "TBAC 338 Ultra Gen2 BA (Sand)";
};
class muzzle_snds_570 : ItemCore
{
descriptionShort = "Titanium Sound Suppressor<br />Calibre: FN 5.7x28mm NATO";
displayName = "P-90";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	mass = 7.81;	
	};
};
class muzzle_snds_H : ItemCore
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "65-SD™ Fast-Attach";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	mass = 13.43;	
	};
};
class muzzle_snds_M : muzzle_snds_H
{
descriptionShort = "Inconel Sound Suppressor<br />Calibre: 5.56x45mm NATO";
displayName = "QDSS NT4";
	class ItemInfo : ItemInfo
	{
	mass = 13.73;	
	};
};
class muzzle_snds_58_blk_F : muzzle_snds_M
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 5.8x42mm";
displayName = "HX 580";
	class ItemInfo : ItemInfo
	{
	mass = 6.25;
	};
};
class muzzle_snds_58_ghex_F : muzzle_snds_58_wdm_F
{
displayName = "HX 580 (Green Hex)";
};
class muzzle_snds_58_hex_F : muzzle_snds_58_blk_F
{
displayName = "HX 580 (Hex)";
};
class muzzle_snds_65_TI_blk_F : muzzle_snds_M
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "HX 650";
	class ItemInfo : ItemInfo
	{
	mass = 6.25;
	};
};
class muzzle_snds_65_TI_ghex_F : muzzle_snds_65_TI_blk_F
{
displayName = "HX 650 (Green Hex)";
};
class muzzle_snds_65_TI_hex_F : muzzle_snds_65_TI_blk_F
{
displayName = "HX 650 (Hex)";
};
class muzzle_snds_93mmg : ItemCore
{
descriptionShort = "Fictional Sound Suppressor<br />Calibre: 9.3x64mm Brenneke";
displayName = "TiTAN-93";
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	mass = 15.62;	
	};	
};
class muzzle_snds_93mmg_tan : muzzle_snds_93mmg
{
displayName = "TiTAN-93 (Tan)";	
};
class muzzle_snds_acp : muzzle_snds_H
{
descriptionShort = "Stainless Steel Sound Suppressor<br />Calibre: 9x19 Parabellum to .45 ACP, .300BLK";
displayName = "Omega 45K";
	class ItemInfo : ItemInfo
	{
	mass = 6.31;	
	};	
};
class muzzle_snds_B : muzzle_snds_H
{
descriptionShort = "Stainless Steel Sound Suppressor<br />Calibre: 7.62x51mm NATO";
displayName = "762-SD™ Fast-Attach";
	class ItemInfo : ItemInfo
	{
	mass = 14.37;	
	};	
};
class muzzle_snds_B_arid_F : muzzle_snds_B
{
displayName = "762-SD™ Fast-Attach (Arid)";
};
class muzzle_snds_B_khk_F : muzzle_snds_B
{
displayName = "762-SD™ Fast-Attach (Khaki)";
};
class muzzle_snds_B_lush_F : muzzle_snds_B
{
displayName = "762-SD™ Fast-Attach (Lush)";
};
class muzzle_snds_B_snd_F : muzzle_snds_B
{
displayName = "762-SD™ Fast-Attach (Sand)";
};
class muzzle_snds_H_khk_F : muzzle_snds_H
{
displayName = "65-SD™ Fast-Attach (Khaki)";	
};
class muzzle_snds_H_snd_F : muzzle_snds_H
{
displayName = "65-SD™ Fast-Attach (Sand)";	
};
class muzzle_snds_L : muzzle_snds_H
{
descriptionShort = "Stainless Steel Sound Suppressor<br />Calibre: 9x19 Parabellum, .300BLK";
displayName = "Omega 9K";
	class ItemInfo : ItemInfo
	{
	mass = 4.56;	
	};	
};
class muzzle_snds_m_khk_F : muzzle_snds_M
{
displayName = "QDSS NT4 (Khaki)";
	class ItemInfo;
};
class muzzle_snds_m_snd_F : muzzle_snds_M
{
displayName = "QDSS NT4 (Sand)";
	class ItemInfo;
};

// Hiding this and its Sub-Classes as a duplicate of their model is used for the .338 Rifles and the ACR already has two other Options. Replaced in Crates in other Config.
class muzzle_snds_H_MG : muzzle_snds_H
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Fictional Sound Suppressor<br />Calibre: 6.5x39mm";
displayName = "[ A3RO INCOMPATIBLE ] 65-SD™ Fast-Attach (Sand)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class muzzle_snds_H_MG_blk_F : muzzle_snds_H_MG
{
displayName = "[ A3RO INCOMPATIBLE ] 65-SD™ Fast-Attach";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
};
class muzzle_snds_H_MG_khk_F : muzzle_snds_H_MG
{
displayName = "[ A3RO INCOMPATIBLE ] 65-SD™ Fast-Attach (Khaki)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
};
class muzzle_snds_H_SW : muzzle_snds_H_MG
{
displayName = "[ A3RO INCOMPATIBLE ] 65-SD™ Fast-Attach (Sand)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
};

// Unhiding SIMCOM Adapter. Adding Description. Disabling Muzzle Flash and Damage
class muzzle_tma_65 : ItemCore
{
descriptionShort = "Enhanced Blank Fire Adapter<br />Calibre: Any";
displayName = "SIMCOM Adapter";
inertia = 0.1;
scope = 2;
scopeArsenal = 2;
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "Zasleh2";
	mass = 10.43;
	muzzleEnd = "zaslehPoint";
		class AmmoCoef
		{
		audibleFireTime = 1.1;	
		hit = -0; // If set to 0 Units will have 1 Wound inflicted when first hit with ACE.
		typicalSpeed = 0;
		visibleFire = 0.8;
		visibleFireTime = 1;
		};
		class MagazineCoef
		{
		initSpeed = 1; // If set to 0 ACE will act up. But only in Arsenal?
		};
		class MuzzleCoef
		{
		dispersionCoef = 1;
		fireLightCoef = 0.8;
		recoilCoef = 1.1;
		recoilProneCoef = 1.1;
		};
	};	
};

// Creating 5.45 Sound Supressors (There are none by default)
class muzzle_snds_545 : muzzle_snds_M
{
_generalMacro = "muzzle_snds_M_545";	
displayName = "Mini 4";
	class ItemInfo : ItemInfo
	{
	mass = 8.438;	
	};
};
class muzzle_snds_545_khk_F : muzzle_snds_m_khk_F
{
_generalMacro = "muzzle_snds_M_545_khk_F";	
displayName = "Mini 4 (Khaki)";
	class ItemInfo : ItemInfo
	{
	mass = 8.438;	
	};
};
class muzzle_snds_545_snd_F : muzzle_snds_m_snd_F
{
_generalMacro = "muzzle_snds_M_545_snd_F";	
displayName = "Mini 4 (Sand)";
	class ItemInfo : ItemInfo
	{
	mass = 8.438;	
	};
};

// Creating Flash Suppressors
class muzzle_mzls_H : ItemCore
{
_generalMacro = "muzzle_mzls_H";
afMax = 0;
author = "Bohemia Interactive";
descriptionShort = "Chromoly Steel Flash Suppressor<br />Calibre: 5.56x45 NATO to 7.62x51 NATO";
displayName = "KX3";
htMax = 600;
htMin = 1;
inertia = 0.1;
mFact = 1;
mfMax = 0;
model = "\A3\weapons_f\acc\acca_mzls_H_F";
picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
scope = 2;
tBody = 100;
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "";
	mass = 4.37;
	muzzleEnd = "zaslehPoint";
	soundTypeIndex = 0;
		class AmmoCoef
		{
		airFriction = 1;
		audibleFire = 1;
		audibleFireTime = 1;
		cost = 1;
		hit = 1;
		typicalSpeed = 1;
		visibleFire = 0.666;
		visibleFireTime = 0.666;	
		};
		class MagazineCoef
		{
		initSpeed = 1;	
		};
		class MuzzleCoef
		{
		artilleryDispersionCoef = 1;
		dispersionCoef = 1;
		fireLightCoef = 0.666;
		maxRangeCoef = 1;
		maxRangeProbabCoef = 1;
		midRangeCoef = 1;
		midRangeProbabCoef = 1;
		minRangeCoef = 1;
		minRangeProbabCoef = 1;
		recoilCoef = 1;
		recoilProneCoef = 1;
		};		
	};
};
class muzzle_mzls_l : muzzle_mzls_H
{
_generalMacro = "muzzle_mzls_l";
displayName = "KX5";	
model = "\A3\weapons_f\acc\acca_mzls_l_F";
picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_l_CA.paa";	
	class ItemInfo : ItemInfo
	{
	mass = 2.81;
		class AmmoCoef : AmmoCoef
		{
		visibleFire = 0.5;
		visibleFireTime = 0.5;	
		};
		class MuzzleCoef : MuzzleCoef
		{
		fireLightCoef = 0.5;
		};	
	};
};

// Creating M200 Sound Suppressors
// .408
class muzzle_snds_408 : muzzle_snds_93mmg
{
descriptionShort = "Titanium Alloy Sound Suppressor<br />Calibre: .408 Cheyenne Tactical";
displayName = "ACHERON ELR .408";
	class ItemInfo : ItemInfo
	{
	mass = 14.21;	
	};	
};
class muzzle_snds_408_tan : muzzle_snds_93mmg_tan
{
descriptionShort = "Titanium Alloy Sound Suppressor<br />Calibre: .408 Cheyenne Tactical";	
displayName = "ACHERON ELR .408 (Tan)";
	class ItemInfo : ItemInfo
	{
	mass = 14.21;	
	};	
};
// .375
class muzzle_snds_375 : muzzle_snds_408
{
descriptionShort = "Titanium Alloy Sound Suppressor<br />Calibre: .408 Cheyenne Tactical";
displayName = "ACHERON ELR .375";
	class ItemInfo : ItemInfo
	{
	mass = 13.36;	
	};	
};
class muzzle_snds_375_tan : muzzle_snds_408_tan
{
descriptionShort = "Titanium Alloy Sound Suppressor<br />Calibre: .375 Cheyenne Tactical";	
displayName = "ACHERON ELR .375 (Tan)";
	class ItemInfo : ItemInfo
	{
	mass = 13.36;	
	};	
};

// Creating Osprey Suppressor
class muzzle_snds_osprey_snd_F : ItemCore
{
_generalMacro = "muzzle_snds_osprey_snd_F";
afMax = 0;
author = "Bohemia Interactive";
descriptionShort = "Aluminium Sound Suppressor<br />Calibre: 9x19mm Parabellum to .45 ACP";
displayName = "Osprey 45";
htMax = 600;
htMin = 1;
inertia = 0.2;
mFact = 1;
mfMax = 0;
model = "\A3\weapons_f\acc\acca_snds_osprey_F";
picture = "\A3RO_A3\Textures\UI\icon_muzzle_snds_osprey_ca.paa";
scope = 2;
tBody = 100;
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "Zasleh2";
	mass = 5.75;
	muzzleEnd = "zaslehPoint";
	soundTypeIndex = 1;
		class AmmoCoef
		{
		airFriction = 1;
		audibleFire = 0.1;
		audibleFireTime = 0.5;
		cost = 1;
		hit = 1;
		typicalSpeed = 1;
		visibleFire = 0.5;
		visibleFireTime = 0.5;	
		};
		class MagazineCoef
		{
		initSpeed = 1;	
		};
		class MuzzleCoef
		{
		artilleryDispersionCoef = "1.0f";
		dispersionCoef = "0.95f";
		fireLightCoef = "0.5f";
		maxRangeCoef = "1.0f";
		maxRangeProbabCoef = "1.0f";
		midRangeCoef = "1.0f";
		midRangeProbabCoef = "1.0f";
		minRangeCoef = "1.0f";
		minRangeProbabCoef = "1.0f";
		recoilCoef = "0.95f";
		recoilProneCoef = "0.95f";
		};		
	};
};

// Navy-SD Suppressor
class muzzle_snds_smg_01_F : ItemCore
{
_generalMacro = "muzzle_snds_smg_01_F";
afMax = 0;
author = "Bohemia Interactive";
descriptionShort = "Steel Sound Suppressor<br />Calibre: 9x19mm Parabellum";
displayName = "Navy-SD";
htMax = 600;
htMin = 1;
inertia = 0.2;
mFact = 1;
mfMax = 0;
model = "\A3\weapons_f\acc\acca_mzls_smg_01_F";
picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
scope = 2;
tBody = 100;
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "Zasleh2";
	mass = 5.75;
	muzzleEnd = "zaslehPoint";
	soundTypeIndex = 1;
		class AmmoCoef
		{
		airFriction = 1;
		audibleFire = 0.1;
		audibleFireTime = 0.5;
		cost = 1;
		hit = 1;
		typicalSpeed = 1;
		visibleFire = 0.5;
		visibleFireTime = 0.5;	
		};
		class MagazineCoef
		{
		initSpeed = 1;	
		};
		class MuzzleCoef
		{
		artilleryDispersionCoef = "1.0f";
		dispersionCoef = "0.95f";
		fireLightCoef = "0.5f";
		maxRangeCoef = "1.0f";
		maxRangeProbabCoef = "1.0f";
		midRangeCoef = "1.0f";
		midRangeProbabCoef = "1.0f";
		minRangeCoef = "1.0f";
		minRangeProbabCoef = "1.0f";
		recoilCoef = "0.95f";
		recoilProneCoef = "0.95f";
		};		
	};
};

// Creating ZRG-20 Mk. II Muzzle Device
class muzzle_railgun_03_f : muzzle_antenna_03_f
{
_generalMacro = "muzzle_railgun_03_f";
displayName = "T.U.B.E.";
descriptionShort = "Thermopolaric Uncantonized Balisphat Ejector<br />Greatly increases Accuracy";
tBody = 100; 
	class ItemInfo
	{
	alternativeFire = "";
	mass = 10;
	mountAction = "GestureMountMuzzle";
	muzzleEnd = "zaslehPoint";
	muzzlePos = "usti hlavne";
	scope = 0;
	soundTypeIndex = 0;	
	type = 101;
	unmountAction = "GestureDismountMuzzle";
		class AmmoCoef
		{
		airFriction = 1;
		audibleFire = 1;
		audibleFireTime = 1;
		cost = 1;
		hit = 2;
		typicalSpeed = 1;
		visibleFire = 2;
		visibleFireTime = 2;	
		};
		class MagazineCoef
		{
		initSpeed = 1;	
		};
		class MuzzleCoef
		{
		artilleryDispersionCoef = "1.0f";
		dispersionCoef = "0.00001f";
		fireLightCoef = "1.0f";
		maxRangeCoef = "1.0f";
		maxRangeProbabCoef = "1.0f";
		midRangeCoef = "1.0f";
		midRangeProbabCoef = "1.0f";
		minRangeCoef = "1.0f";
		minRangeProbabCoef = "1.0f";
		recoilCoef = "1.0f";
		recoilProneCoef = "1.0f";
		};
	};
};

// New HX 556 for Type 115
class muzzle_snds_smokey_blk_F : muzzle_snds_65_TI_blk_F
{
_generalMacro = "muzzle_snds_smokey_blk_F";
descriptionShort = "Titanium Sound Suppressor<br />Calibre: 5.56x45mm NATO";
displayName = "Smokey";
	class ItemInfo : ItemInfo
	{
	mass = 6.25;
	};
};
class muzzle_snds_smokey_ghex_F : muzzle_snds_65_TI_blk_F
{
_generalMacro = "muzzle_snds_smokey_ghex_F";
displayName = "Smokey (Green Hex)";
model = "\A3\Weapons_F_Exp\Acc\acca_snds_65_TI_ghex_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_65_TI_ghex_F_ca.paa";
};
class muzzle_snds_smokey_hex_F : muzzle_snds_65_TI_blk_F
{
_generalMacro = "muzzle_snds_smokey_hex_F";
displayName = "Smokey (Hex)";
model = "\A3\Weapons_F_Exp\Acc\acca_snds_65_TI_hex_F.p3d";
picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_65_TI_hex_F_ca.paa";
};

// Rotor 43 for 7.62x54R
class muzzle_snds_vs121_F : ItemCore
{
_generalMacro = "muzzle_snds_vs121_F";
afMax = 0;
author = "Bohemia Interactive";
descriptionShort = "Steel Sound Suppressor<br />Calibre: 7.62x54mmR";
displayName = "Rotor 43";
DLC = "Mark";
htMax = 600;
htMin = 1;
inertia = 0.2;
mFact = 1;
mfMax = 0;
model = "\A3\Weapons_F\Acc\acca_snds_338_black_F";
picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
scope = 2;
tBody = 100;
	class ItemInfo : InventoryMuzzleItem_Base_F
	{
	alternativeFire = "Zasleh2";
	mass = 19.8416;
	muzzleEnd = "zaslehPoint";
	soundTypeIndex = 1;
		class AmmoCoef
		{
		airFriction = 1;
		audibleFire = 0.1;
		audibleFireTime = 0.5;
		cost = 1;
		hit = 1;
		typicalSpeed = 1;
		visibleFire = 0.5;
		visibleFireTime = 0.5;	
		};
		class MagazineCoef
		{
		initSpeed = 1;	
		};
		class MuzzleCoef
		{
		artilleryDispersionCoef = "1.0f";
		dispersionCoef = "0.95f";
		fireLightCoef = "0.5f";
		maxRangeCoef = "1.0f";
		maxRangeProbabCoef = "1.0f";
		midRangeCoef = "1.0f";
		midRangeProbabCoef = "1.0f";
		minRangeCoef = "1.0f";
		minRangeProbabCoef = "1.0f";
		recoilCoef = "0.95f";
		recoilProneCoef = "0.95f";
		};		
	};
};

// Bipods

// Aim Sport BPARS (Or Field Sport)
class bipod_01_F_snd : ItemCore
{
displayName = "BPARS (Sand)";
descriptionShort = "Adjustable Aluminium Weaver Bipod";
	class ItemInfo : InventoryUnderItem_Base_F
	{
	mass = 10;
	};
};
class bipod_01_F_blk : bipod_01_F_snd
{
displayName = "BPARS";
};
class bipod_01_F_khk : bipod_01_F_snd
{
displayName = "BPARS (Khaki)";
};
class bipod_01_F_mtp : bipod_01_F_snd
{
displayName = "BPARS (MTP)";
};

// Hatsan Optima Universal (Its a mass produced chinese Bipod under many names)
class bipod_02_F_blk : bipod_01_F_snd
{
displayName = "Optima";
descriptionShort = "Adjustable Aluminium Weaver Bipod";
	class ItemInfo : ItemInfo
	{
	mass = 6.25;
	};
};
class bipod_02_F_arid : bipod_02_F_blk
{
displayName = "Optima (Arid)";
};
class bipod_02_F_hex : bipod_02_F_blk
{
displayName = "Optima (Hex)";
};
class bipod_02_F_lush : bipod_02_F_blk
{
displayName = "Optima (Lush)";
};
class bipod_02_F_tan : bipod_02_F_blk
{
displayName = "Optima (Tan)";
};

// No Clue. Can't bother anymore. Fictional
class bipod_03_F_blk : bipod_01_F_snd
{
displayName = "UTG Ultralight";
descriptionShort = "Fictional Adjustable Aluminium Weaver Bipod";
	class ItemInfo : ItemInfo
	{
	mass = 5.22;
	};
};
class bipod_03_F_oli : bipod_03_F_blk
{
displayName = "UTG Ultralight (Olive)";
};
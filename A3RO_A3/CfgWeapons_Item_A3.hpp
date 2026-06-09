// Binoculars, Laser Designators & Rangefinders
class Binocular : Default
{
descriptionShort = "Field Binoculars<br />Magnification: 1x - 7x";	
displayName = "M22 7x50";
displaynameshort = "";
opticsZoomInit = 0.25;
opticsZoomMax = 0.25;
opticsZoomMin = 0.035714;
	class WeaponSlotsInfo
	{
	mass = 27;
	};
};
class Laserdesignator : Binocular
{
descriptionShort = "Long-Range Multifunction Binoculars<br />Magnification: 1x - 7x<br />eZoom: 1x - 4x";	
displayName = "JIM Compact (Sand)";
displaynameshort = "";
distanceZoomMax = 2800;
distanceZoomMin = 100;
maxRange = 12000;
midRange = 1200;
minRange = 150;
opticsZoomInit = 0.25;
opticsZoomMax = 0.25;
opticsZoomMin = 0.008928; // Maximum Zoom is Hardcoded to 25x apparently
thermalMode[] = {6};
visionMode[] = {"Normal","NVG","Ti"};
thermalNoise[] = {0.2,2,3,0.75,1,0,0,0.5};
thermalResolution[] = {0.0, 2806, 0.25, 2806, 1.0, 480}; // Based off of Sensor, not Display (No Data) 14 MP
	class WeaponSlotsInfo
	{
	mass = 44.09;
	};
};
class Laserdesignator_03 : Laserdesignator
{
descriptionShort = "Long-Range Multifunction Binoculars<br />Magnification: 1x - 7x<br />eZoom: 1x - 4x";
displayName = "JIM Compact (Khaki)";
};
class Laserdesignator_01_khk_F : Laserdesignator
{	
displayName = "JIM Compact (Olive)";
};
class Laserdesignator_02 : Laserdesignator
{
descriptionShort = "Handheld Eyesafe Laser Target Locator<br />Magnification: 1x - 7.3x";	
displayName = "Mark VIIE (Hex)"; // Wow theres like no Info on the E version. Mustve either tanked or been too successful...
distanceZoomMax = 730;
distanceZoomMin = 100;
maxRange = 19995;
midRange = 1999;
minRange = 150;
opticsZoomInit = 0.25;
opticsZoomMax = 0.25;
opticsZoomMin = 0.034246;
visionMode[] = {"Normal","NVG"};
	class WeaponSlotsInfo
	{
	mass = 42.10;
	};
};
class Laserdesignator_02_ghex_F : Laserdesignator_02
{
displayName = "Mark VIIE (Green Hex)";
};
class Rangefinder : Binocular
{
descriptionShort = "Target Reconnaissance Infrared Geolocating Range Finder<br />Magnification: 1x - 7x";	
displayName = "TRIGR®";
displaynameshort = "";
distanceZoomMax = 700;
distanceZoomMin = 100;
maxRange = 5000;
midRange = 500;
minRange = 150;
opticsZoomInit = 0.25;
opticsZoomMax = 0.25;
opticsZoomMin = 0.035714;
visionMode[] = {"Normal","NVG"};
	class WeaponSlotsInfo
	{
	mass = 55;
	};
};

// Restoring Grey Laser Des
class Laserdesignator_01_grey_F : Laserdesignator
{
displayName = "JIM Compact (Cadet Grey)";	
model = "\A3\Weapons_F_Beta\Binocular\LTLM.p3d";
picture="\A3RO_A3\Textures\UI\gear_laserdesignator_grey_ca.paa";
};

// Misc Items
class FirstAidKit : ItemCore
{
descriptionShort = "Contains Medical Supplies required to administer First Aids<br />Single-Use";
	class ItemInfo : InventoryFirstAidKitItem_Base_F
	{
	mass = 5.1809;
	};
};
class Medikit : ItemCore
{
descriptionShort = "Contains Medical Supplies and Tools required to treat major injuries<br/>Re-Usable<br />Used by: Medics / Doctors";
picture = "\A3RO_A3\Textures\UI\gear_medikit_CA.paa";
	class ItemInfo : MedikitItem
	{
	mass = 66.1387;
	};
};
class Toolkit : ItemCore
{
descriptionShort = "Contains Tools required to conduct Field Repairs and Mine Defusal<br/>Re-Usable<br/>Used by: Engineers / Explosive Specialists";
picture = "\A3RO_A3\Textures\UI\gear_toolkit_CA.paa";
	class ItemInfo : ToolKitItem
	{
	mass = 88.1849;
	};
};
class MineDetector : DetectorCore
{
descriptionshort = "Detects Mines in a 5 Meter Radius";
//detectRange = 5; // 15 > 5 DELAYED UNTIL I CAN FIX THE UI ACCORDINGLY
picture = "\A3RO_A3\Textures\UI\gear_minedetector_CA.paa";
	class ItemInfo
	{
	mass = 22.0462;
	};
};
class ItemMap : ItemCore
{
descriptionShort = "Topographic Map of the Terrain";
	class ItemInfo
	{
	mass = 7.2752;
	};
};
class ItemGPS : ItemCore
{
descriptionShort = "Defense Advanced GPS Receiver";
displayName = "DAGR";
	class ItemInfo
	{
	mass = 10.0089;
	};
};
class UavTerminal_base : ItemCore
{
descriptionShort = "Tactical UAV / UGV Controller";
	class ItemInfo : InventoryUavTerminalItem_Base_F
	{
	createConnectionRadius = 10; // 5 > 10
	mass = 24.9122;
	};
};
class ItemRadio : ItemCore
{
descriptionShort = "Fictional Ruggedized Infantry Radio";
displayName = "MOTOTRBO Ion 2";
model = "\a3\Characters_F\BLUFOR\radio_b.p3d";
picture = "\A3RO_A3\Textures\UI\gear_default_radio_CA.paa";
	class ItemInfo
	{
	mass = 9.1271;
	};
};
class ItemCompass : ItemCore
{
descriptionShort = "Tritium Compass";
displayName = "Model 3H";
	class ItemInfo
	{
	mass = 3.5935;
	};
};
class ItemWatch : ItemCore
{
descriptionShort = "Swiss Watch";
displayName = "Jumbo Day/Date";
	class ItemInfo
	{
	mass = 3.8581;
	};
};
class ChemicalDetector_01_watch_F : ItemCore
{
descriptionShort = "Chemical-Warfare Agent Identifier";
displayName = "LCD-4";
	class ItemInfo
	{
	mass = 12.7868;
	};
};
class ChemicalDetector_01_base_F : ItemCore
{
descriptionShort = "Chemical-Warfare Agent Identifier";
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
	mass = 13.6686;
	};
};
class ChemicalDetector_01_black_F : ChemicalDetector_01_base_F
{
displayName = "LCD-4 (Cover, Black)";
};
class ChemicalDetector_01_olive_F : ChemicalDetector_01_base_F
{
displayName = "LCD-4 (Cover, Olive)";
};
class ChemicalDetector_01_tan_F : ChemicalDetector_01_base_F
{
displayName = "LCD-4 (Cover, Tan)";
};
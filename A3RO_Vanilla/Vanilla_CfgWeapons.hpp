class InventoryFlashLightItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryUnderItem_Base_F;
class ItemCore;
class Launcher;
class Launcher_Base_F : Launcher
{
class WeaponSlotsInfo;
};
class Pistol_Base_F;
class Rifle_Base_F;
class Rifle_Long_Base_F;
class Rifle_Short_Base_F;
class UGL_F;
class NVGoggles;

// Adding Grenade to Throw
class GrenadeLauncher;
class Throw : GrenadeLauncher
{
muzzles[] += {"SmokeShellANM8Muzzle"};
	class ThrowMuzzle;
	class SmokeShellANM8Muzzle: ThrowMuzzle
	{
	magazines[] = {"SmokeShellANM8"};
	};
};	

// Binoculars, Laser Designators & Rangefinders
class Default;
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
picture="\A3RO_Vanilla\Textures\UI\gear_laserdesignator_grey_ca.paa";
};

#include "\A3RO_Vanilla\CfgWeapons_308.hpp"

#include "\A3RO_Vanilla\CfgWeapons_556.hpp"

#include "\A3RO_Vanilla\CfgWeapons_690.hpp"

#include "\A3RO_Vanilla\CfgWeapons_ACR.hpp"

#include "\A3RO_Vanilla\CfgWeapons_AK.hpp"

#include "\A3RO_Vanilla\CfgWeapons_Attachments.hpp"

#include "\A3RO_Vanilla\CfgWeapons_Launchers.hpp"

#include "\A3RO_Vanilla\CfgWeapons_DMR.hpp"

#include "\A3RO_Vanilla\CfgWeapons_GM6.hpp"

#include "\A3RO_Vanilla\CfgWeapons_CSAT.hpp"

#include "\A3RO_Vanilla\CfgWeapons_MG.hpp"

#include "\A3RO_Vanilla\CfgWeapons_M200.hpp"

#include "\A3RO_Vanilla\CfgWeapons_Pistols.hpp"

#include "\A3RO_Vanilla\CfgWeapons_SMG.hpp"

#include "\A3RO_Vanilla\CfgWeapons_QBZ.hpp"

#include "\A3RO_Vanilla\CfgWeapons_Vehicles.hpp"
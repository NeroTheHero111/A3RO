class InventoryFlashLightItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryUnderItem_Base_F;
class ItemCore;
class Launcher_Base_F;
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
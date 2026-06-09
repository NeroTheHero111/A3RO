class InventoryFlashLightItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryUnderItem_Base_F;
class DetectorCore;
class ItemCore;
class Launcher;
class Launcher_Base_F : Launcher
{
class WeaponSlotsInfo;
};
class muzzle_antenna_base_01_F;
class muzzle_snds_58_wdm_F;
class NVGoggles;
class Pistol_Base_F;
class Rifle_Base_F;
class Rifle_Long_Base_F;
class Rifle_Short_Base_F;
class UGL_F;
class InventoryFirstAidKitItem_Base_F;
class MedikitItem;
class ToolKitItem;
class InventoryUavTerminalItem_Base_F;
class HMG_127;
class GMG_F;
class CannonCore;

class arifle_MSBS65_base_black_F;
class arifle_MSBS65_GL_base_black_F;
class arifle_MSBS65_Mark_base_black_F;
class arifle_MSBS65_UBS_base_black_F;
class arifle_MSBS65_base_camo_F;
class arifle_MSBS65_GL_base_camo_F;
class arifle_MSBS65_Mark_base_camo_F;
class arifle_MSBS65_UBS_base_camo_F;
class arifle_MSBS65_base_sand_F;
class arifle_MSBS65_GL_base_sand_F;
class arifle_MSBS65_Mark_base_sand_F;
class arifle_MSBS65_UBS_base_sand_F;

// Adding Throwables
class GrenadeLauncher;
class Throw : GrenadeLauncher
{
muzzles[] += {"SmokeShellANM8_Muzzle","Chemlight_Orange_Muzzle","Chemlight_White_Muzzle","Chemlight_IR_Muzzle","Chemlight_IR_3H_Muzzle","Chemlight_Yellow_HI_Muzzle","Chemlight_Red_HI_Muzzle","Chemlight_White_HI_Muzzle","Chemlight_Orange_UHI_Muzzle"};
	class ThrowMuzzle;
	class SmokeShellANM8_Muzzle: ThrowMuzzle
	{
	magazines[] = {"SmokeShellANM8_Magazine"};
	};
	class Chemlight_Orange_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_orange"};
	};
	class Chemlight_White_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_white"};
	};
	class Chemlight_IR_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_IR"};
	};
	class Chemlight_IR_3H_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_IR_3H"};
	};
	class Chemlight_Yellow_HI_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_yellow_HI"};
	};
	class Chemlight_Red_HI_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_red_HI"};
	};
	class Chemlight_White_HI_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_white_HI"};
	};
	class Chemlight_Orange_UHI_Muzzle: ThrowMuzzle
	{
	magazines[] = {"Chemlight_orange_UHI"};
	};
};
// Adding ...Put-ables?
class Default;
class Put : Default
{
muzzles[] += {"RakeMine_Muzzle","FlareTripMine_Wire_Muzzle"};
	class PutMuzzle;
	class RakeMine_Muzzle : PutMuzzle
	{
	autoReload = 0;
	displayName = "Rake";
	enableAttack = 1;
	magazines[] = {"RakeMine_Mag"};
	showToPlayer = 0;
	};
	class FlareTripMine_Wire_Muzzle : PutMuzzle
	{
	autoReload = 0;
	displayName = "M50A1";
	enableAttack = 1;
	magazines[] = {"FlareTripMine_Mag"};
	showToPlayer = 0;
	};
};

#include "\A3RO_A3\CfgWeapons_Attachment_A3.hpp"
#include "\A3RO_A3\CfgWeapons_DMR_A3.hpp"
#include "\A3RO_A3\CfgWeapons_Item_A3.hpp"
#include "\A3RO_A3\CfgWeapons_Launcher_A3.hpp"
#include "\A3RO_A3\CfgWeapons_MG_A3.hpp"
#include "\A3RO_A3\CfgWeapons_Rifle_A3.hpp"
#include "\A3RO_A3\CfgWeapons_Secondary_A3.hpp"
#include "\A3RO_A3\CfgWeapons_SMG_A3.hpp"
#include "\A3RO_A3\CfgWeapons_Turret_A3.hpp"
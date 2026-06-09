class ModuleMine_F;
class Site_F;

class Weapon_Base_F;
class Pistol_Base_F;
class Launcher_Base_F;
class Item_Base_F;
class Bag_Base;
class Weapon_Bag_Base;

class FIA_Box_Base_F;
class ReammoBox_F;
class IND_Box_Base;
class EAST_Box_Base;
class NATO_Box_Base;
class Box_NATO_Equip_F;
class CargoNet_01_ammo_base_F;
class Pod_Heli_Transport_04_base_F;

class B_AssaultPack_rgr;
class B_FieldPack_ghex_F;
class B_Carryall_ghex_OTAmmo_F;
class B_Carryall_ghex_OTAAR_AAR_F;
class B_Carryall_ocamo_AAR;
class B_Carryall_oucamo_AAR;
class B_Patrol_Carryall_green_Ammo_F;
class B_Kitbag_rgr;
class B_Carryall_mcamo;
class B_Kitbag_mcamo;
class B_Carryall_oli;
class B_Carryall_wdl_F;
class B_FieldPack_ocamo;
class B_FieldPack_oucamo;
class B_FieldPack_oli;
class B_Carryall_cbr;
class B_FieldPack_cbr;
class B_FieldPack_blk;
class B_FieldPack_khk;
class B_AssaultPack_mcamo;
class B_Carryall_ocamo;
class B_Carryall_oucamo;
class B_TacticalPack_oli;
class B_Carryall_eaf_F;
class B_ViperHarness_hex_F;

class B_HMG_02_high_weapon_F;
class B_HMG_02_weapon_F;
class O_Mortar_01_F;

// XM307 / XM312. Adjusting Scope
class LandVehicle;
class StaticWeapon : LandVehicle
{
	class Turrets;
};
class StaticGrenadeLauncher : StaticWeapon
{
	class Turrets;
};
class GMG_TriPod : StaticGrenadeLauncher
{
	class Turrets : Turrets
	{
		class MainTurret;
	};
};
class GMG_01_base_F : GMG_TriPod
{
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
			class OpticsIn
			{
				class ViewOptics // : ViewOptics
				{
				maxFov = 0.25; // 1x
				initFov = 0.25;
				minFov = 0.025; // 10x. Pure Guess. No Info
				visionMode[] = {"Normal","NVG"}; // No TI
				};
			};
		};
	};
};
class StaticMGWeapon : StaticWeapon
{
	class Turrets : Turrets
	{
		class MainTurret;
	};
};
class HMG_01_base_F : StaticMGWeapon
{
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
			class ViewOptics // : ViewOptics
			{
			maxFov = 0.25;
			initFov = 0.25;
			minFov = 0.025;
			visionMode[] = {"Normal","NVG"};
			};
		};
	};
};

class SoldierEB;
class B_CTRG_Soldier_F;
class B_Soldier_02_f;
class B_Soldier_03_f;
class B_Soldier_04_f;
class B_Soldier_05_f;
class B_Soldier_F;
class B_soldier_AAR_F;
class B_G_Soldier_F;
class B_Soldier_base_F;
class B_Soldier_recon_base;
class B_Soldier_support_base_F;
class B_Soldier_sniper_base_F;
class I_officer_F;
class I_Soldier_02_F;	
class I_Soldier_03_F;
class I_Soldier_04_F;
class I_L_Soldier_Base_F;
class I_Soldier_sniper_base_F;
class I_Soldier_support_base_F;
class I_Soldier_base_F;
class I_C_Soldier_base_F;
class I_E_Soldier_base_F;
class I_G_Soldier_base_F;
class O_A_soldier_base_F;
class O_R_Soldier_Base_F;
class O_Soldier_recon_base;
class O_R_Soldier_recon_base;
class O_Soldier_02_F;
class O_Soldier_sniper_base_F;
class O_Soldier_base_F : SoldierEB
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_V_Soldier_base_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","Chemlight_red","Chemlight_red"};
};
class O_Soldier_GL_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
};
class O_Soldier_Urban_base : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_support_base_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};

#include "\A3RO_A3\CfgVehicles_Attachment_A3.hpp"
#include "\A3RO_A3\CfgVehicles_Backpack_A3.hpp"
#include "\A3RO_A3\CfgVehicles_DMR_A3.hpp"
#include "\A3RO_A3\CfgVehicles_Faction_A3.hpp"
#include "\A3RO_A3\CfgVehicles_Item_A3.hpp"
#include "\A3RO_A3\CfgVehicles_Launcher_A3.hpp"
#include "\A3RO_A3\CfgVehicles_MG_A3.hpp"
#include "\A3RO_A3\CfgVehicles_Rifle_A3.hpp"
#include "\A3RO_A3\CfgVehicles_Secondary_A3.hpp"
#include "\A3RO_A3\CfgVehicles_SMG_A3.hpp"
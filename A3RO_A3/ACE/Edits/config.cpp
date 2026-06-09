class CfgPatches
{
    class A3RO_ACE_Edits
    {
    name = "Arma 3 Realism Overhaul - ACE Compat #3 - Edits";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"A3RO_A3_WSI",
	"A3RO_A3_WSI_2",
	"ace_advanced_ballistics",
	"ace_ballistics",
	"ace_captives",
	"ace_csw",
	"ace_common",
	"ace_disposable",
	"ace_dragon",
	"ace_explosives",
	"ace_flashlights",
	"ace_flashsuppressors",
	"ace_grenades",	
	"ace_huntir",
	"ace_interaction",
	"ace_irlight",
	"ace_javelin",
	"ace_laserpointer",
	"ace_metis",
	"ace_milr",
	"ace_missileguidance",
	"ace_nightvision",
	"ace_optics",
	"ace_overpressure",
	"ace_quickmount",
	"ace_realisticnames",
	"ace_realisticweights",
	"ace_rearm",
	"ace_reload",
	"ace_scopes",
	"ace_smallarms",
	"ace_spike",
	"A3RO_ACE_Overwrite",
	"A3RO_ACE_Overwrite_WSI",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

// Adding new Optics to Rails for Compatibility
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
	ACE_optic_Arco_arid_2D = 1;
	ACE_optic_Arco_blk_2D = 1;
	ACE_optic_Arco_ghex_2D = 1;
	ACE_optic_Arco_lush_2D = 1;
	ACE_optic_Hamr_khk_2D = 1;
	ACE_optic_LRPS_ghex_2D = 1;
	ACE_optic_LRPS_tna_2D = 1;
	ACE_optic_SOS_khk_2D = 1;
	/*ACE_optic_Arco_arid_PIP = 1;
	ACE_optic_Arco_blk_PIP = 1;
	ACE_optic_Arco_ghex_PIP = 1;
	ACE_optic_Arco_lush_PIP = 1;
	ACE_optic_Hamr_khk_PIP = 1;
	ACE_optic_LRPS_ghex_PIP = 1;
	ACE_optic_LRPS_tna_PIP = 1;
	ACE_optic_SOS_khk_PIP = 1;*/
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	ACE_optic_Arco_arid_2D = 1;
	ACE_optic_Arco_blk_2D = 1;
	ACE_optic_Arco_ghex_2D = 1;
	ACE_optic_Arco_lush_2D = 1;
	ACE_optic_Hamr_khk_2D = 1;
	ACE_optic_LRPS_ghex_2D = 1;
	ACE_optic_LRPS_tna_2D = 1;
	ACE_optic_SOS_khk_2D = 1;
	/*ACE_optic_Arco_arid_PIP = 1;
	ACE_optic_Arco_blk_PIP = 1;
	ACE_optic_Arco_ghex_PIP = 1;
	ACE_optic_Arco_lush_PIP = 1;
	ACE_optic_Hamr_khk_PIP = 1;
	ACE_optic_LRPS_ghex_PIP = 1;
	ACE_optic_LRPS_tna_PIP = 1;
	ACE_optic_SOS_khk_PIP = 1;*/
	};
};

// Removing ACE Flash Suppressors from Muzzleslots as I already added my own version to compatible Calibres.
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_338 = 0;	
	};
};
class asdg_MuzzleSlot_45ACP : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_01 = 0;
	};
};
class asdg_MuzzleSlot_45ACP_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_01 = 0;
	};
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_L = 0;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_B = 0;
	};
};
class asdg_MuzzleSlot_65 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_H = 0;
	};
};
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_B = 0;
	};
};
class asdg_MuzzleSlot_93x64 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_93mmg = 0;
	};
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_02 = 0;
	};
};
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_smg_02 = 0;
	};
};
class MuzzleSlot;
class MuzzleSlot_556 : MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_L = 0;
	};
};
class MuzzleSlot_65 : MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_H = 0;
	};
};
class MuzzleSlot_65MG : MuzzleSlot_65
{
	class compatibleItems : compatibleItems
	{
	ACE_muzzle_mzls_H = 0;
	};
};
class MuzzleSlot_762 : MuzzleSlot
{
	class compatibleItems
	{
	ACE_muzzle_mzls_B = 0;
	};
};

// Editing Triggers
class ACE_Triggers
{
	class Command
	{
	displayName = "M57";
	};
	class Cellphone : Command
	{
	displayName = "3210";
	};
	class DeadManSwitch : Command
	{
	displayName = "Pressure Release Detonator";
	};
	class MK16_Transmitter : Command
	{
	displayName = "MK26";
	};
};

class asdg_SlotInfo;
class asdg_FrontSideRail : asdg_SlotInfo
{
	class compatibleItems
	{
	ACE_acc_pointer_green = 0; // Removing From Sideslot as I have replaced them with my own
	ACE_acc_pointer_green_IR = 0;
	ACE_acc_pointer_red = 0;
	ACE_DBAL_A3_Green = 0;
	ACE_DBAL_A3_Green_II = 0;
	ACE_DBAL_A3_Green_IP = 0;
	ACE_DBAL_A3_Green_LR = 0;
	ACE_DBAL_A3_Green_LR_II = 0;
	ACE_DBAL_A3_Green_LR_IP = 0;
	ACE_DBAL_A3_Green_LR_VP = 0;
	ACE_DBAL_A3_Green_VP = 0;
	ACE_DBAL_A3_Red = 0;
	ACE_DBAL_A3_Red_II = 0;
	ACE_DBAL_A3_Red_IP = 0;
	ACE_DBAL_A3_Red_LR = 0;
	ACE_DBAL_A3_Red_LR_II = 0;
	ACE_DBAL_A3_Red_LR_IP = 0;
	ACE_DBAL_A3_Red_LR_VP = 0;
	ACE_DBAL_A3_Red_VP = 0;
	};
};
class PointerSlot;
class PointerSlot_Rail : PointerSlot
{
	class compatibleItems
	{
	ACE_acc_pointer_green = 0;
	ACE_acc_pointer_green_IR = 0;
	ACE_acc_pointer_red = 0;
	ACE_DBAL_A3_Green = 0;
	ACE_DBAL_A3_Green_II = 0;
	ACE_DBAL_A3_Green_IP = 0;
	ACE_DBAL_A3_Green_LR = 0;
	ACE_DBAL_A3_Green_LR_II = 0;
	ACE_DBAL_A3_Green_LR_IP = 0;
	ACE_DBAL_A3_Green_LR_VP = 0;
	ACE_DBAL_A3_Green_VP = 0;
	ACE_DBAL_A3_Red = 0;
	ACE_DBAL_A3_Red_II = 0;
	ACE_DBAL_A3_Red_IP = 0;
	ACE_DBAL_A3_Red_LR = 0;
	ACE_DBAL_A3_Red_LR_II = 0;
	ACE_DBAL_A3_Red_LR_IP = 0;
	ACE_DBAL_A3_Red_LR_VP = 0;
	ACE_DBAL_A3_Red_VP = 0;
	};
};
// Adding to Misc Classes
class PointerSlot_Launcher : PointerSlot
{
	class compatibleItems
	{
	ace_milr_000 = 1;
	ace_milr_002 = 1;
	ace_milr_004 = 1;
	ace_milr_006 = 1;
	ace_milr_008 = 1;
	ace_milr_010 = 1;
	ace_milr_012 = 1;
	ace_milr_014 = 1;
	ace_milr_016 = 1;
	ace_milr_018 = 1;
	ace_milr_020 = 1;
	ace_milr_022 = 1;
	ace_milr_024 = 1;
	ace_milr_026 = 1;
	ace_milr_028 = 1;
	ace_milr_030 = 1;
	ace_milr_032 = 1;
	ace_milr_034 = 1;
	ace_milr_036 = 1;
	ace_milr_038 = 1;
	ace_milr_040 = 1;
	ace_milr_042 = 1;
	ace_milr_044 = 1;
	ace_milr_046 = 1;
	ace_milr_048 = 1;
	ace_milr_050 = 1;
	ace_milr_052 = 1;
	ace_milr_054 = 1;
	ace_milr_056 = 1;
	ace_milr_058 = 1;
	ace_milr_060 = 1;
	ace_milr_062 = 1;
	ace_milr_064 = 1;
	ace_milr_066 = 1;
	ace_milr_068 = 1;
	ace_milr_070 = 1;
	ace_milr_072 = 1;
	ace_milr_074 = 1;
	ace_milr_076 = 1;
	ace_milr_078 = 1;
	ace_milr_080 = 1;
	ace_milr_082 = 1;
	ace_milr_084 = 1;
	ace_milr_086 = 1;
	ace_milr_088 = 1;
	ace_milr_090 = 1;
	ace_milr_092 = 1;
	ace_milr_094 = 1;
	ace_milr_096 = 1;
	ace_milr_098 = 1;
	ace_milr_100 = 1;
	ace_milr_110 = 1;
	ace_milr_120 = 1;
	ace_milr_130 = 1;
	ace_milr_140 = 1;
	ace_milr_150 = 1;
	ace_milr_160 = 1;
	ace_milr_170 = 1;
	ace_milr_180 = 1;
	ace_milr_190 = 1;
	ace_milr_200 = 1;
	ace_milr_210 = 1;
	ace_milr_220 = 1;
	ace_milr_230 = 1;
	ace_milr_240 = 1;
	ace_milr_250 = 1;
	ace_milr_260 = 1;
	ace_milr_270 = 1;
	ace_milr_280 = 1;
	ace_milr_290 = 1;
	ace_milr_300 = 1;
	ace_milr_base = 1;
	ACE_SPIR = 1;
	ACE_SPIR_LR = 1;
	ACE_SPIR_LR_Medium = 1;
	ACE_SPIR_LR_Narrow = 1;
	ACE_SPIR_Medium = 1;
	ACE_SPIR_Narrow = 1;
	};
};

class asdg_PistolUnderRail;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class ace_missileguidance_type_Metis;
class ace_missileguidance_type_Javelin;
class ace_missileguidance_type_Stinger;

class CfgAmmo
{
class BulletBase;
class Chemlight_base;
class MissileBase;
class SubmunitionBase;
class RocketBase;
class M_70mm_SAAMI;
class SubmunitionBullet;
class B_762x54_Tracer_Green;
class ACE_G_Chemlight_IR;
class Grenade;
class MineBase;
class BoundingMineBase;
class DirectionalBombBase;
class FlareBase;
class PipeBombBase;
class APERSMineDispenser_Ammo;

#include "ACE_CfgAmmo.hpp"
};

class CfgMagazines
{
class CA_Magazine;
class UGL_FlareWhite_F;
class SmokeShell;
class Titan_AA;
class HandGrenade;
class ATMine_Range_Mag;
class APERSTripMine_Wire_Mag;
class APERSBoundingMine_Range_Mag;
class ace_intelitems_base;
class 2Rnd_12Gauge_Pellets;
class 5Rnd_127x108_Mag;
class 6Rnd_12Gauge_Pellets;
class 7Rnd_408_Mag;
class 10Rnd_338_Mag;
class 10Rnd_556x45_KBU_NT_Mag_F;
class 10Rnd_Mk14_762x51_Mag;
class 20Rnd_650x39_Cased_Mag_F;
class 20Rnd_762x51_slr_lxWS; // Name is deliberate in order to be overwritten
class 20Rnd_762x51_Mag;
class 20Rnd_762x51_HK_Mag;
class 20Rnd_556x45_Katiba_NT_Mag;
class 20Rnd_762x51_AK_Mag_NT_F;
class 30Rnd_556x45_AK_Mag_NT_F;
class 30Rnd_556x45_NT_QBZ_Mag_F;
class 30Rnd_65x39_caseless_msbs_mag_NT;
class 30Rnd_556x45_Stanag_NT;
class 30Rnd_556x45_Stanag_Sand_NT;
class 30Rnd_556x45_Stanag_Tracer_Red;
class 75Rnd_556x45_NT_QBZ_Mag_F;
class 75Rnd_556x45_NT_Hex_QBZ_Mag_F;
class 75Rnd_556x45_NT_Ghex_QBZ_Mag_F;
class 90Rnd_556x45_AK_Mag_NT_F;
class 90Rnd_556x45_AK_Green_Mag_NT_F;
class 100Rnd_65x39_caseless_mag_Tracer;
class 100Rnd_762x51_NG7_Box_NT;
class 150Rnd_556x45_Drum_Green_Mag_NT_F;
class 150Rnd_556x45_Drum_Sand_Mag_NT_F;
class 150Rnd_556x45_Drum_Mag_NT_F;
class 150Rnd_93x64_Mag_NT;
class 200Rnd_65x39_cased_Box;
class 200Rnd_65x39_cased_Box_NT;
class 200Rnd_556x45_Box_NT_F;
class 1Rnd_HE_Grenade_shell;
class 1Rnd_GAA_missiles;
class 16Rnd_9x21_Mag;
class 10Rnd_762x54_Mag;
class 30Rnd_65x39_caseless_mag;
class 30Rnd_65x39_caseless_black_mag;
class 30Rnd_65x39_caseless_khaki_mag;
class 30Rnd_65x39_caseless_msbs_mag;
class 30Rnd_65x39_caseless_green_mag_Tracer;
class 30Rnd_65x39_caseless_mag_Tracer;
class 50Rnd_127x108_Ball;
class 100Rnd_127x99_mag;
class 100Rnd_127x99_mag_Tracer_Green;
class 100Rnd_127x99_mag_Tracer_Red;
class 100Rnd_127x99_mag_Tracer_Yellow;
class 40Rnd_20mm_G_belt;
class 8Rnd_82mm_Mo_guided;
class 8Rnd_82mm_Mo_shells;
class 8Rnd_82mm_Mo_LG;
class 8Rnd_82mm_Mo_Flare_white_illumination;
class 8Rnd_82mm_Mo_Smoke_white;
#include "ACE_CfgMagazines.hpp"
};

class CfgMagazineWells
{
#include "ACE_CfgMagazineWells.hpp"	
};

class CfgVehicles
{
class ModuleMine_APERSMine_F;
class ModuleMine_SLAMDirectionalMine_F;
class ModuleMine_APERSTripMine_F;
class Item_Base_F;
class Bag_Base;
class Items_base_F;
class ThingX;
class SLAMDirectionalMine;
class APERSMine;
class APERSTripMine;
class IEDLandBig_F;
class IEDUrbanBig_F;
class IEDLandSmall_F;
class IEDUrbanSmall_F;
class Pistol_Base_F;
class ace_intelitems_base;
class NATO_Box_Base;
class FIA_Box_Base_F;
class EAST_Box_Base;
class IND_Box_Base;
class ReammoBox_F;
class CargoNet_01_ammo_base_F;
#include "ACE_CfgVehicles.hpp"
};

class CfgWeapons
{
class Rifle_Base_F;
class Rifle_Long_Base_F;
class Rifle_Short_Base_F;
class Pistol;
class Pistol_Base_F : Pistol
{
class WeaponSlotsInfo;
};
class UGL_F;
class Binocular;
class Launcher;
class Launcher_Base_F : Launcher
{
class WeaponSlotsInfo;
};
class ItemCore;
class acc_pointer_IR;
class acc_flashlight;
class missiles_titan_static;
class pdw2000_base_F;
class SMG_05_base_F;
class arifle_CTAR_base_F;
class arifle_CTARS_base_F;
class arifle_SDAR_F;
class arifle_RPK12_base_F;
class SMG_02_F;
class DMR_03_base_F;
class arifle_TR3_base_F;
class arifle_WASR_base_F;
class ItemWatch;
class ACE_ItemCore;
class ACE_ropeBase;
class CBA_MiscItem_ItemInfo;
class ACE_ExplosiveItem;
class ace_spike_base;
#include "ACE_CfgWeapons.hpp"
};
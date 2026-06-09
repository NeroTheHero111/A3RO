class CfgPatches
{
    class A3RO_Real_Engine_Compat
    {
    name = "Arma 3 Realism Overhaul - Real Engine Compat";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"real_fix_flare_lights",
	"real_fix_grenade_deflection",
	"real_fix_scopes",
	"real_slots_to_rails",
	"real_fix_weapons",
	"A3RO_A3_WSI",
	"A3RO_A3_WSI_2",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_OpticRail1913_short;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_762;


// Overwriting Real Engine Values to be in line with A3RO/ACE Behavior I altered.
// Flares

class CfgAmmo
{
	class FlareCore;
	class FlareBase: FlareCore
	{
	brightness = 2;
	};
	class F_40mm_White: FlareBase
	{
	brightness = 12;
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
	brightness = 2;
	};
};

class CfgWeapons
{
// Optics

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_Holosight: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_Holosight_smg: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};	
	class optic_arco: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ARCO2collimator
				{
					discreteDistance[] = {50};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.25;
					opticsZoomMin = 0.25;
					opticsFlare = 0;
				};
				class ARCO2scope: ARCO2collimator
				{
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;	
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};	
	class optic_Hamr: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Hamr2Collimator
				{
					discreteDistance[]={50};
					discreteDistanceInitIndex=0;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsPPEffects[] = {"Default"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.25;
					opticsZoomMin = 0.25;
				};
				class Hamr2Scope
				{
				discreteDistance[]={300};
				discreteDistanceInitIndex=0;
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;			
				opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
				};
			};
		};
	};	
	class optic_DMS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1200,1250,1300,1350,1400,1450,1500,1550,1600};
					discreteDistanceInitIndex = 1;
				};
				class Iron: Snip
				{
					discreteDistance[] = {50};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};	
	class optic_SOS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex = 1;
				};
				class Iron
				{
					discreteDistance[]={50};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class MRCOcq
				{
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
				};
				class MRCOscope
				{
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class optic_NVS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NVS
				{
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};

// Slots To Rails

	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo {};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo {};
	};

	class GM6_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: asdg_OpticRail1913_long {};
	};
	class srifle_GM6_F: GM6_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_long {};
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo {};
	};
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_long {};
			class PointerSlot {};
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_65 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65 {};
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class arifle_MSBS65_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_556 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_long {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class SMG_03_TR_BASE: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class PointerSlot: asdg_FrontSideRail {};
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_long {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_long {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class MuzzleSlot: asdg_MuzzleSlot_58 {};
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
	};
};
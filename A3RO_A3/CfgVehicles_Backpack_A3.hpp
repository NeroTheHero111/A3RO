// Increasing Backpack Load Capacity by 3x (and rouded up) as a stopgap solution until I have time to analyze exact Volumes
// This has become necessary as with the Magazines Rework completed, a 100Rnd Belt of 7.62 in a Pouch weighs 3 Kilos, of which I can only fit 2.25 into an Assault Pack. I am confident one could fit 6 in there so, 3x for everything...
class B_AssaultPack_Base : Bag_Base
{
mass = 15.4324; // 700g
maximumLoad = 485.017; // ? 22Kg
};

class B_AssaultPack_Kerry : B_AssaultPack_mcamo
{
mass = 15.4324;
maximumLoad = 485.017;
};
class B_Bergen_Base_F : Bag_Base
{
mass = 119.4906; // 5420g
maximumLoad = 1543.236; // Rated for 70Kg
};
class B_Carryall_Base : Bag_Base
{
mass = 48.5017; // 2200g
maximumLoad = 970.034; // ? 44Kg
};
class B_CombinationUnitRespirator_01_Base_F : Bag_Base
{
mass = 180.7791; // 8200g
maximumLoad = 66.1387; // ? 3Kg
};
class B_CivilianBackpack_01_Base_F : Bag_Base
{
mass = 5.7321; // 260g. Flimsy Civvie Pack
maximumLoad = 330.6934; // Limiting to 15Kg lest it snaps
};
class B_FieldPack_Base : Bag_Base
{
mass = 24.2509; // 1100g
maximumLoad = 595.2481; // ? 27Kg
};
class B_Kitbag_Base : Bag_Base
{
mass = 45; // 2041g
maximumLoad = 837.7566; // ? 38Kg
};
class B_LegStrapBag_base_F : Bag_Base
{
mass = 10.5822; // 480g
maximumLoad = 132.2774; // ? 6Kg
};
class B_Messenger_Base_F : Bag_Base
{
mass = 19; // 861,83g
maximumLoad = 418.8783; // ? 19Kg
};
class B_RadioBag_01_base_F : Bag_Base
{
mass = 226; // 10251,19g
maximumLoad = 154.3236; // ? 7Kg
};
class B_SCBA_01_base_F : Bag_Base
{
mass = 154.3236; // 7000g
};
class B_TacticalPack_Base : Bag_Base
{
mass = 30.8648; // 1400g
maximumLoad = 727.5255; // ? 33Kg
};
class B_ViperHarness_base_F : Bag_Base
{
mass = 28.6601; // 1300g
maximumLoad = 639.3406; // ? 29Kg
};
class B_ViperLightHarness_base_F : Bag_Base
{
mass = 26.4555; // 1200g
maximumLoad = 617.2943; // ? 28Kg
};
// Camps
class B_Respawn_Sleeping_bag_blue_F : B_FieldPack_blk
{
mass = 49.0308; // 2224g
};
class B_Respawn_Sleeping_bag_brown_F : B_FieldPack_khk
{
mass = 49.0308;
};
class B_Respawn_Sleeping_bag_F : B_FieldPack_oli
{
mass = 49.0308;
};
class B_Respawn_TentDome_F : B_Carryall_oli
{
mass = 90.6982; // 4114g 
};
class B_Patrol_Respawn_bag_F : B_Kitbag_mcamo
{
mass = 87.1965; // 3955,166g 
};
class B_Respawn_TentA_F : B_Carryall_cbr
{
mass = 78.5017; // 3560,777g 
};
// Statics

// XM312
class B_HMG_01_weapon_F : Weapon_Bag_Base
{
mass = 383.6043; // 17400g
};
class I_HMG_01_weapon_F : B_HMG_01_weapon_F
{
mass = 383.6043;
};
// XM307A
class B_GMG_01_A_weapon_F : B_HMG_01_weapon_F
{
mass = 483.9341; // 21950,88g
};
// XM312A
class B_HMG_01_A_weapon_F : B_HMG_01_weapon_F
{
mass = 416.6737; // 18900g
};
class I_E_HMG_01_A_Weapon_F : I_HMG_01_weapon_F
{
mass = 416.6737;
};
// M2 Raised
class I_HMG_02_high_weapon_F : B_HMG_02_high_weapon_F
{
mass = 868.6213; // 39400g
};
class I_G_HMG_02_high_weapon_F : B_HMG_02_high_weapon_F
{
mass = 868.6213;
};
class I_E_HMG_02_high_weapon_F : B_HMG_02_high_weapon_F
{
mass = 868.6213;
};
class I_C_HMG_02_high_weapon_F : B_HMG_02_high_weapon_F
{
mass = 868.6213;
};
// M2
class I_HMG_02_weapon_F : B_HMG_02_weapon_F
{
mass = 868.6213;
};
class I_G_HMG_02_weapon_F : B_HMG_02_weapon_F
{
mass = 868.6213;
};
class I_E_HMG_02_weapon_F : B_HMG_02_weapon_F
{
mass = 868.6213;
};
class I_C_HMG_02_weapon_F : B_HMG_02_weapon_F
{
mass = 868.6213;
};
// XM312 Raised
class B_HMG_01_high_weapon_F : B_HMG_01_weapon_F
{
mass = 383.6043; // 17400g
};
class I_HMG_01_high_weapon_F : B_HMG_01_high_weapon_F
{
mass = 383.6043;
};
class O_HMG_01_high_weapon_F : B_HMG_01_high_weapon_F
{
mass = 383.6043;
};
class I_E_HMG_01_high_Weapon_F : I_HMG_01_high_weapon_F
{
mass = 383.6043;
};
// XM307 Raised
class B_GMG_01_high_weapon_F : B_HMG_01_high_weapon_F
{
mass = 450.8647; // 20450,88g
};
class I_GMG_01_high_weapon_F : B_GMG_01_high_weapon_F
{
mass = 450.8647; 
};
class O_GMG_01_high_weapon_F : B_GMG_01_high_weapon_F
{
mass = 450.8647;
};
class I_E_GMG_01_high_Weapon_F : I_GMG_01_high_weapon_F
{
mass = 450.8647;
};
// XM307
class B_GMG_01_weapon_F : B_HMG_01_weapon_F
{
mass = 450.8647;
};
class I_GMG_01_weapon_F : B_GMG_01_weapon_F
{
mass = 450.8647;
};
class O_GMG_01_weapon_F : B_GMG_01_weapon_F
{
mass = 450.8647;
};
class I_E_GMG_01_Weapon_F : I_GMG_01_weapon_F
{
mass = 450.8647;
};
// Mk6 Base
class B_Mortar_01_support_F : Bag_Base
{
mass = 590.8647;
};
class I_Mortar_01_support_F : B_Mortar_01_support_F
{
mass = 590.8647;
};
class O_Mortar_01_support_F : B_Mortar_01_support_F
{
mass = 590.8647;
};
class I_E_Mortar_01_support_F : I_Mortar_01_support_F
{
mass = 590.8647;
};
// Mk6 Tube
class B_Mortar_01_weapon_F : Weapon_Bag_Base
{
mass = 405.8646;
};
class I_Mortar_01_weapon_F : B_Mortar_01_weapon_F
{
mass = 405.8646;
};
class O_Mortar_01_weapon_F : B_Mortar_01_weapon_F
{
mass = 405.8646;
};
class I_E_Mortar_01_Weapon_F : I_Mortar_01_weapon_F
{
mass = 405.8646;
};
// Tripod
class B_HMG_01_support_F : Bag_Base
{
mass = 440;
};
class I_HMG_01_support_F : B_HMG_01_support_F
{
mass = 440;
};
class O_HMG_01_support_F : B_HMG_01_support_F
{
mass = 440;
};
class I_E_HMG_01_support_F : I_HMG_01_support_F
{
mass = 440;
};
// Tripod Raised
class B_HMG_01_support_high_F : B_HMG_01_support_F
{
mass = 440;
};
class I_HMG_01_support_high_F : B_HMG_01_support_high_F
{
mass = 440;
};
class O_HMG_01_support_high_F : B_HMG_01_support_high_F
{
mass = 440;
};
class I_E_HMG_01_support_high_F : I_HMG_01_support_high_F
{
mass = 440;
};
// Tripod M2
class B_HMG_02_support_F : Bag_Base
{
mass = 440;
};
// Tripod M2 Raised
class B_HMG_02_support_high_F : B_HMG_02_support_F
{
mass = 440;
};
// Remote Designators
class O_Static_Designator_02_weapon_F : Weapon_Bag_Base
{
mass = 101.6248;
};
class B_Static_Designator_01_weapon_F : Weapon_Bag_Base
{
mass = 103.6173;
};
// Static AA 
class B_AA_01_weapon_F : Weapon_Bag_Base
{
mass = 682.1102;
};
class I_AA_01_weapon_F : Weapon_Bag_Base
{
mass = 682.1102;
};
class O_AA_01_weapon_F : Weapon_Bag_Base
{
mass = 682.1102;
};
// Static AT
class B_AT_01_weapon_F : Weapon_Bag_Base
{
mass = 440.9245;
};
class I_AT_01_weapon_F : Weapon_Bag_Base
{
mass = 440.9245;
};
class O_AT_01_weapon_F : Weapon_Bag_Base
{
mass = 440.9245;
};
// Parachute
class B_Parachute : Bag_Base
{
mass = 600;
};
// Changing Static AA Ammo from 4 to 2
class AA_01_base_F : StaticMGWeapon
{
class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
		magazines[] = {"1Rnd_GAA_missiles","1Rnd_GAA_missiles"};
		};
	};
};
// Drone Backpacks
// AL-6 / Utility
class UAV_06_backpack_base_F : Weapon_Bag_Base
{
mass = 420.8647;
};
// AR-2
class B_UAV_01_backpack_F : Weapon_Bag_Base
{
mass = 209.3437;
};
class I_E_UAV_01_backpack_F : Weapon_Bag_Base
{
mass = 209.3437;
};
class C_IDAP_UAV_01_backpack_F : Weapon_Bag_Base
{
mass = 209.3437;
};
// ED-1
class UGV_02_backpack_base_F;
class UGV_02_Demining_backpack_base_F : UGV_02_backpack_base_F
{
mass = 569.8949;
};
class UGV_02_Science_backpack_base_F : UGV_02_backpack_base_F
{
mass = 613.9874;
};

// Faction Specific Backpacks. Edits and new ones

// Editing existing CTRG Pacific Unit Classes that use the 150Rnd Drum that has been converted to a 100Rnd Drum to receive additional Drums or Magazines to make up for the loss
// Creating Autorifleman Backpack to store 100Rnd Drums
class B_AssaultPack_rgr_CTRGAR_F : B_AssaultPack_rgr
{
_generalMacro = "B_AssaultPack_rgr_CTRGAR_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
		{
		count = 1;
		magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";	
		};
		class _xx_150Rnd_556x45_Drum_Mag_T4_F
		{
		count = 2;
		magazine = "150Rnd_556x45_Drum_Mag_T4_F";	
		};
	};
};

// Editing existing Unit Classes that use the RPK-12 to use the RPK-16 and its Magazines instead
// Ammo Bearer Backpack
class B_Patrol_Carryall_green_Ammo_545_F : B_Patrol_Carryall_green_Ammo_F
{
	class TransportMagazines	
	{
		class _xx_1Rnd_GP25_VOG25M_Grenade
		{
		count = 3;
		magazine = "1Rnd_GP25_VOG25M_Grenade";	
		};
		class _xx_30Rnd_762x39_AK12_Lush_Mag_F
		{
		count = 8;
		magazine = "30Rnd_762x39_AK12_Lush_Mag_F";	
		};
		class _xx_95Rnd_545x39_RPK16_Lush_Mag_T4_F	
		{
		count = 2;
		magazine = "95Rnd_545x39_RPK16_Lush_Mag_T4_F";	
		};
		class _xx_RPG32_F
		{
		count = 1;
		magazine = "RPG32_F";
		};
		class _xx_RPG32_HE_F
		{
		count = 1;
		magazine = "RPG32_HE_F";	
		};
	};
};

// Editing existing CSAT Unit Classes that use the 7.62 150Rnd Box that has been converted to a 100Rnd Box to receive additional Boxes to make up for the loss.
// Assistant Autorifleman Backpack, New
class B_Carryall_ocamo_AAR_2 : B_Carryall_ocamo_AAR
{
	class TransportMagazines	
	{
		class _xx_100Rnd_762x51_NG7_Box_GT4
		{
		count = 3;
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_150Rnd_93x64_Mag_T4
		{
		count = 2;
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};	
};

// Urban Assistant Autorifleman Backpack
class B_Carryall_oucamo_AAR_2 : B_Carryall_oucamo_AAR
{
	class TransportMagazines	
	{
		class _xx_100Rnd_762x51_NG7_Box_GT4
		{
		count = 3;
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_150Rnd_93x64_Mag_T4
		{
		count = 2;
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};		
};

// Editing existing CSAT Pacific Unit Classes that use the 100Rnd Drum that has been converted to a 75Rnd Drum to receive additional Drums or Magazines to make up for the loss.
// Ammo Bearer Backpack
class B_Carryall_ghex_OTAmmo_580_F : B_Carryall_ghex_OTAmmo_F
{
	class TransportMagazines	
	{
		class _xx_100Rnd_580x42_T4_Mag_F
		{
		count = 1;
		magazine = "100Rnd_580x42_T4_Mag_F";
		};
		class _xx_10Rnd_93x64_DMR_05_Mag
		{
		count = 2;
		magazine = "10Rnd_93x64_DMR_05_Mag";
		};
		class _xx_1Rnd_QGL10A_DFS10_Grenade
		{
		count = 6;
		magazine = "1Rnd_QGL10A_DFS10_Grenade";
		};
		class _xx_20Rnd_650x39_Cased_Mag_F
		{
		count = 3;
		magazine = "20Rnd_650x39_Cased_Mag_F";
		};
		class _xx_30Rnd_580x42_Mag_F
		{
		count = 7;
		magazine = "30Rnd_580x42_Mag_F";
		};
		class _xx_HandGrenade
		{
		count = 2;
		magazine = "HandGrenade";
		};
		class _xx_MiniGrenade
		{
		count = 2;
		magazine = "MiniGrenade";
		};
		class _xx_RPG32_F
		{
		count = 1;
		magazine = "RPG32_F";
		};				
	};
};
// Assistant Autorifleman Backpack
class B_Carryall_ghex_OTAAR_AAR_2_F : B_Carryall_ghex_OTAAR_AAR_F
{
	class TransportMagazines	
	{
		class _xx_100Rnd_580x42_T4_Mag_F
		{
		count = 3;
		magazine = "100Rnd_580x42_T4_Mag_F";
		};
		class _xx_150Rnd_93x64_Mag_T4
		{
		count = 2;
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};
};

// Reload Tracer MG Ammo to Tracer Every 4
// NATO Asst. Autorifleman Backpack
class B_Kitbag_rgr_AAR : B_Kitbag_rgr
{
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_caseless_mag;
		class _xx_100Rnd_65x39_T4_mag
		{
		count = 5;
		magazine = "100Rnd_65x39_T4_mag";	
		};
		class _xx_100Rnd_65x39_caseless_mag_Tracer
		{
		count = 1;
		};
	};
};
// Creating Derivative for Tropic
class B_T_Kitbag_rgr_AAR : B_Kitbag_rgr_AAR
{
	class TransportItems
	{
		class _xx_bipod_01_F_khk
		{
		count = 1;
		name = "bipod_01_F_khk";
		};
		class _xx_muzzle_snds_338_green
		{
		count = 1;
		name = "muzzle_snds_338_green";
		};
		class _xx_muzzle_snds_H_khk_F
		{
		count = 1;
		name = "muzzle_snds_H_khk_F";
		};
		class _xx_optic_tws_mg
		{
		count = 1;
		name = "optic_tws_mg";
		};
	};
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_T4_mag;
		delete _xx_100Rnd_65x39_caseless_mag_Tracer;
		class _xx_100Rnd_65x39_T4_khaki_mag
		{
		count = 5;
		magazine = "100Rnd_65x39_T4_khaki_mag";
		};
		class _xx_100Rnd_65x39_caseless_khaki_mag_tracer
		{
		count = 1;
		magazine = "100Rnd_65x39_caseless_khaki_mag_tracer";
		};
		class _xx_130Rnd_338_Mag
		{
		count = 2;
		magazine = "130Rnd_338_Mag";
		}
	};
};
// NATO Woodland Asst. Autorifleman Backpack
class B_Kitbag_rgr_BWAAR : B_Kitbag_rgr
{
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_caseless_black_mag;
		class _xx_100Rnd_65x39_T4_black_mag
		{
		count = 5;
		magazine = "100Rnd_65x39_T4_black_mag";	
		};
		class _xx_100Rnd_65x39_caseless_black_mag_Tracer
		{
		count = 1;
		};
	};
};
// NATO Ammobearer Backpack
class B_AssaultPack_mcamo_Ammo : B_Carryall_mcamo
{
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_caseless_mag;
		class _xx_100Rnd_65x39_T4_mag
		{
		count = 3;
		magazine = "100Rnd_65x39_T4_mag";	
		};
		delete _xx_1Rnd_HE_Grenade_shell;
		class _xx_3Rnd_3GL_HEAB_F
		{
		count = 1;
		magazine = "3Rnd_3GL_HEAB_F";	
		};
		class _xx_3Rnd_HE_Grenade_shell // 1 more
		{
		count = 2;
		magazine = "3Rnd_HE_Grenade_shell";
		};
	};
};
// NATO Patrol Ammobearer Backpack
class B_Patrol_supply_bag_F : B_Kitbag_mcamo
{
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_caseless_mag;
		class _xx_100Rnd_65x39_T4_mag
		{
		count = 3;
		magazine = "100Rnd_65x39_T4_mag";	
		};
		delete _xx_150Rnd_762x54_Box;
		class _xx_100Rnd_762x51_NG7_Box_RT4
		{
		count = 1;
		magazine = "100Rnd_762x51_NG7_Box_RT4";	
		};
		delete _xx_200Rnd_65x39_cased_Box;
		class _xx_200Rnd_65x39_cased_Box_T4_Red
		{
		count = 1;
		magazine = "200Rnd_65x39_cased_Box_T4_Red";	
		};
	};
};
// NATO Pacific Ammobearer Backpack
class B_Carryall_oli_BTAmmo_F : B_Carryall_oli
{
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_caseless_khaki_mag;
		class _xx_100Rnd_65x39_T4_khaki_mag
		{
		count = 3;
		magazine = "100Rnd_65x39_T4_khaki_mag";	
		};
		delete _xx_1Rnd_HE_Grenade_shell;
		class _xx_3Rnd_3GL_HEAB_F
		{
		count = 1;
		magazine = "3Rnd_3GL_HEAB_F";	
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
		count = 2;
		magazine = "3Rnd_HE_Grenade_shell";
		};
	};
};
// NATO Woodland Ammobearer Backpack
class B_Carryall_wdl_BWAmmo_F : B_Carryall_wdl_F
{
	class TransportMagazines
	{
		delete _xx_100Rnd_65x39_caseless_black_mag;
		class _xx_100Rnd_65x39_T4_black_mag
		{
		count = 3;
		magazine = "100Rnd_65x39_T4_black_mag";	
		};
		delete _xx_1Rnd_HE_Grenade_shell;
		class _xx_3Rnd_3GL_HEAB_F
		{
		count = 1;
		magazine = "3Rnd_3GL_HEAB_F";	
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
		count = 2;
		magazine = "3Rnd_HE_Grenade_shell";
		};
	};
};
// NATO Heavy Gunner Backpack
class B_AssaultPack_rgr_NATOHG_F : B_AssaultPack_rgr
{
_generalMacro = "B_AssaultPack_rgr_NATOHG_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_130Rnd_338_Mag
		{
		count = 2;
		magazine = "130Rnd_338_Mag";	
		};
	};
};

// Zafir
// CSAT Ammobearer Backpack
class B_FieldPack_cbr_Ammo : B_Carryall_ocamo
{
	class TransportMagazines
	{
		delete _xx_150Rnd_762x54_Box;
		class _xx_100Rnd_762x51_NG7_Box_GT4
		{
		count = 1;
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
	};
};
// CSAT Urban Ammobearer Backpack
class B_FieldPack_oucamo_Ammo : B_Carryall_oucamo
{
	class TransportMagazines
	{
		delete _xx_150Rnd_762x54_Box;
		class _xx_100Rnd_762x51_NG7_Box_GT4
		{
		count = 1;
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
	};
};

// Mk200
// Asst. Autorifleman Backpack
class B_TacticalPack_oli_AAR : B_TacticalPack_oli
{
	class TransportMagazines
	{
		delete _xx_200Rnd_65x39_cased_Box;
		class _xx_200Rnd_65x39_cased_Box_T4
		{
		count = 3;
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
// LDF Asst. Autorifleman Backpack
class B_Carryall_eaf_IEAAR_F : B_Carryall_eaf_F
{
	class TransportMagazines
	{
		delete _xx_200Rnd_65x39_cased_Box_Tracer_Red;
		class _xx_200Rnd_65x39_cased_Box_Tracer
		{
		count = 1;
		magazine = "200Rnd_65x39_cased_Box_Tracer";
		};
		delete _xx_200Rnd_65x39_cased_Box_Red;
		class _xx_200Rnd_65x39_cased_Box_T4
		{
		count = 3;
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
// LDF Ammobearer Backpack
class B_Carryall_eaf_IEAmmo_F : B_Carryall_eaf_F
{
	class TransportMagazines
	{
		delete _xx_200Rnd_65x39_cased_Box_Red;
		class _xx_200Rnd_65x39_cased_Box_T4
		{
		count = 1;
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
// FIA Ammobearer Backpack
class G_Carryall_Ammo : B_Carryall_oli
{
	class TransportMagazines
	{
		delete _xx_200Rnd_65x39_cased_Box;
		class _xx_200Rnd_65x39_cased_Box_T4
		{
		count = 2;
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
// AAF Ammobearer Backpack
class I_Fieldpack_oli_Ammo : B_Carryall_oli
{
	class TransportMagazines
	{
		delete _xx_200Rnd_65x39_cased_Box;
		class _xx_200Rnd_65x39_cased_Box_T4
		{
		count = 2;
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};

// Viper
// CSAT Viper Backpack
class B_ViperHarness_hex_M_F : B_ViperHarness_hex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_30Rnd_65x39_caseless_green
		{
		count = 10;
		magazine = "30Rnd_65x39_caseless_green";
		};	
	};
};
// Creating new Viper Marksman Backpack with Tracerless Ammo
class O_ViperHarness_hex_Marksman_F : B_ViperHarness_hex_M_F
{
_generalMacro = "O_ViperHarness_hex_Marksman_F";
scope = 1;
	class TransportMagazines
	{
		delete _xx_30Rnd_65x39_caseless_green;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 10;
		magazine = "20Rnd_556x45_Katiba_NT_Mag";
		};
	};
};

// M249
class B_FieldPack_cb_Bandit_3_F : B_FieldPack_cbr
{
	class TransportMagazines
	{
		delete _xx_200Rnd_556x45_Box_F;
		class _xx_200Rnd_556x45_Box_T4_F
		{
		count = 2;
		magazine = "200Rnd_556x45_Box_T4_F";
		};
	};
};
// Creating QJB-95-1 Autorifleman Backpack
class O_FieldPack_ghex_CSATAR_O_F : B_FieldPack_ghex_F
{
_generalMacro = "O_FieldPack_ghex_CSATAR_O_F";
scope = 1;
	class TransportMagazines
	{
		class _xx_100Rnd_580x42_Mag_Tracer_F
		{
		count = 1;
		magazine = "100Rnd_580x42_Mag_Tracer_F";
		};
		class _xx_100Rnd_580x42_T4_Mag_F
		{
		count = 2;
		magazine = "100Rnd_580x42_T4_Mag_F";
		};
	};
};
// NG-7 AR Backpacks
class O_FieldPack_CSATAR_ocamo : B_FieldPack_ocamo
{
_generalMacro = "O_FieldPack_CSATAR_ocamo";
scope = 1;
	class TransportMagazines
	{
		class _xx_150Rnd_762x54_Box_Tracer
		{
		count = 1;
		magazine = "150Rnd_762x54_Box_Tracer";
		};
		class _xx_100Rnd_762x51_NG7_Box_GT4
		{
		count = 1;
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
	};
};
class O_FieldPack_CSATAR_oucamo : B_FieldPack_oucamo
{
_generalMacro = "O_FieldPack_CSATAR_oucamo";
scope = 1;
	class TransportMagazines
	{
		class _xx_150Rnd_762x54_Box_Tracer
		{
		count = 1;
		magazine = "150Rnd_762x54_Box_Tracer";
		};
		class _xx_100Rnd_762x51_NG7_Box_GT4
		{
		count = 1;
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
	};
};
// MG5
class O_FieldPack_CSATHG_ocamo : B_FieldPack_ocamo
{
_generalMacro = "O_FieldPack_CSATHG_ocamo";
scope = 1;
	class TransportMagazines
	{
		class _xx_150Rnd_93x64_Mag_T4
		{
		count = 1;
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};
};
class O_FieldPack_CSATHG_oucamo : B_FieldPack_oucamo
{
_generalMacro = "O_FieldPack_CSATHG_oucamo";
scope = 1;
	class TransportMagazines
	{
		class _xx_150Rnd_93x64_Mag_T4
		{
		count = 1;
		magazine = "150Rnd_93x64_Mag_T4";
		};
	};
};
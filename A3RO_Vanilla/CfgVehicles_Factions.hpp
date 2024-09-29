// Changing Light to Medium AT
class B_CTRG_Soldier_LAT2_tna_F : B_CTRG_Soldier_F
{
displayName = "Rifleman (Medium AT)";
};
class B_soldier_LAT2_F : B_Soldier_base_F
{
displayName = "Rifleman (Medium AT)";
};
class B_T_Soldier_LAT2_F : B_soldier_LAT2_F
{
displayName = "Rifleman (Medium AT)";
};
class I_G_Soldier_LAT2_F : I_G_Soldier_base_F
{
displayName = "Rifleman (Medium AT)";
};
class I_E_Soldier_LAT2_F : I_E_Soldier_base_F
{
displayName = "Rifleman (Medium AT)";
};

// Editing existing Unit Classes that use the PDW2000 to use the CPW 9x19 instead

// FIA Alexis Kouris
class B_G_Story_Guerilla_01_F : B_G_Soldier_F
{
magazines[] = {"30Rnd_9x19_RT_Yellow_Mag","MiniGrenade"};	
weapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_RT_Yellow_Mag","MiniGrenade"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
};

// AAF Helicopter Pilot
class I_helipilot_F : I_Soldier_03_F
{
magazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};	
weapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};	
respawnWeapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
};

// AAF Pilot
class I_pilot_F : I_Soldier_04_F
{
magazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
weapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
respawnWeapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
};

// Looters Criminal (SMG)
class I_L_Criminal_SMG_F : I_L_Soldier_Base_F
{
magazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
weapons[] = {"hgun_cpw_ParaB_F","hgun_Pistol_heavy_02_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","hgun_Pistol_heavy_02_F","Throw","Put"};
};

// Looters Looter (SMG)
class I_L_Looter_SMG_F : I_L_Soldier_Base_F
{
magazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","Chemlight_blue"};
weapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","30Rnd_9x19_RT_Yellow_Mag","Chemlight_blue"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
};

// Editing existing Unit Classes that use the Protector to use the MP5K-PDW instead

// Gendarme Base Class
class B_GEN_Soldier_base_F : B_Soldier_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};	
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};	
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put"};	
};

// Blufor Gendarmerie Commander
class B_GEN_Commander_F : B_GEN_Soldier_base_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
};
	
// Opfor Gendarmerie Commander
class O_GEN_Commander_F : B_GEN_Commander_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
};

// Editing existing Unit Classes that use the Sting to use the Scorpion EVO 3 A1 instead
class O_helipilot_F : O_Soldier_02_F
{
magazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};
class O_Pilot_F : O_helipilot_F
{
magazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};
weapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};
class O_T_Helipilot_F : O_helipilot_F
{
magazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"SMG_02_ParaB_ACO_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};
class O_T_Pilot_F : O_Pilot_F
{
magazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};	
weapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","30Rnd_9x19_SMG_RT_Green_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};

// Editing existing CTRG Pacific Unit Classes that use the 150Rnd Drum that has been converted to a 100Rnd Drum to receive additional Drums or Magazines to make up for the loss

// Creating Autorifleman Backpack to store 100Rnd Drums
class B_AssaultPack_rgr_CTRGAR_F : B_AssaultPack_rgr
{
_generalMacro = "B_AssaultPack_rgr_CTRGAR_F";
scope = 1;
	class TransportMagazines
	{
		class 150Rnd_556x45_Drum_Mag_F
		{
		count = 2;
		magazine = "150Rnd_556x45_Drum_Mag_F";	
		};
	};
};

// Autorifleman
class B_CTRG_Soldier_AR_tna_F : B_CTRG_Soldier_F
{
backpack = "B_AssaultPack_rgr_CTRGAR_F";
};

// Editing existing Unit Classes that use the RPK-12 to use the RPK-16 and its Magazines instead
	
// Ammo Bearer Backpack
class B_Patrol_Carryall_green_Ammo_545_F : B_Patrol_Carryall_green_Ammo_F
{
	class TransportMagazines	
	{
		class _xx_1Rnd_HE_Grenade_shell
		{
		count = 3;
		magazine = "1Rnd_HE_Grenade_shell";	
		};
		class _xx_30rnd_762x39_AK12_Lush_Mag_F
		{
		count = 8;
		magazine = "30rnd_762x39_AK12_Lush_Mag_F";	
		};
		class _xx_95rnd_545x39_RPK16_Lush_Mag_F			
		{
		count = 2;
		magazine = "95rnd_545x39_RPK16_Lush_Mag_F";	
		};
		class _xx_30Rnd_545x39_Mag_NT_F
		{
		count = 1;
		magazine = "30Rnd_545x39_Mag_NT_F";	
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

// Spetsnaz Autorifleman. Also changing ARCO AK to ARCO as its markings are more accurate for 5.45
class O_R_Soldier_AR_F : O_R_Soldier_Base_F
{
magazines[] = {"95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"arifle_RPK16_lush_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_RPK16_lush_arco_pointer_F","hgun_Rook40_F","Throw","Put"};	
};

// Spetsnaz Combat Patrol Ammo Bearer
class O_R_Patrol_Soldier_A_F : O_R_Soldier_Base_F
{
backpack = "B_Patrol_Carryall_green_Ammo_545_F";
};

// Spetsnaz Combat Patrol Autorifleman #1
class O_R_Patrol_Soldier_AR_F : O_R_Soldier_AR_F
{
magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
weapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
respawnWeapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
};	
	
// Spetsnaz Combat Patrol Autorifleman #2
class O_R_Patrol_Soldier_AR2_F : O_R_Soldier_AR_F
{
magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};	
weapons[] = {"arifle_RPK16_lush_holo_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};	
respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};	
respawnWeapons[] = {"arifle_RPK16_lush_holo_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};	
};
	
// Spetsnaz Special Forces Recon Autorifleman
class O_R_recon_AR_F : O_R_Soldier_recon_base
{
magazines[] = {"95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","95rnd_545x39_RPK16_Lush_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};	
respawnWeapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Throw","Put"};	
};

// Editing existing CSAT Unit Classes that use the 7.62 150Rnd Box that has been converted to a 100Rnd Box to receive additional Boxes to make up for the loss.

// Assistant Autorifleman Backpack
class B_Carryall_ocamo_AAR_2 : B_Carryall_ocamo_AAR
{
	class TransportMagazines	
	{
		class _xx_150Rnd_762x54_Box
		{
		count = 2;
		magazine = "150Rnd_762x54_Box";
		};
		class _xx_150Rnd_762x54_Box_Tracer
		{
		count = 1;
		magazine = "150Rnd_762x54_Box_Tracer";
		};
		class _xx_150Rnd_93x64_Mag
		{
		count = 2;
		magazine = "150Rnd_93x64_Mag";
		};
	};	
};

// Urban Assistant Autorifleman Backpack
class B_Carryall_oucamo_AAR_2 : B_Carryall_oucamo_AAR
{
	class TransportMagazines	
	{
		class _xx_150Rnd_762x54_Box
		{
		count = 2;
		magazine = "150Rnd_762x54_Box";
		};
		class _xx_150Rnd_762x54_Box_Tracer
		{
		count = 1;
		magazine = "150Rnd_762x54_Box_Tracer";
		};
		class _xx_150Rnd_93x64_Mag
		{
		count = 2;
		magazine = "150Rnd_93x64_Mag";
		};
	};		
};

// CSAT Assistant Autorifleman
class O_Soldier_AAR_F : O_Soldier_support_base_F
{
backpack = "B_Carryall_ocamo_AAR_2";
};

// CSAT Autorifleman
class O_Soldier_AR_F : O_Soldier_base_F
{
magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};	
respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};	
};

// CSAT Urban Assistant Autorifleman
class O_soldierU_AAR_F : O_Soldier_Urban_base
{
backpack = "B_Carryall_oucamo_AAR_2";
};

// CSAT Urban Autorifleman
class O_soldierU_AR_F : O_Soldier_Urban_base
{
magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
};

// CSAT Ammo Bearer
class O_Soldier_A_F : O_Soldier_base_F
{
magazines[] = {"150Rnd_762x54_Box","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"150Rnd_762x54_Box","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};

// CSAT Urban Ammo Bearer
class O_soldierU_A_F : O_Soldier_Urban_base
{
magazines[] = {"150Rnd_762x54_Box","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"150Rnd_762x54_Box","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};

// Editing existing CSAT Pacific Unit Classes that use the 100Rnd Drum that has been converted to a 75Rnd Drum to receive additional Drums or Magazines to make up for the loss.

// Ammo Bearer Backpack
class B_Carryall_ghex_OTAmmo_2_F : B_Carryall_ghex_OTAmmo_F
{
	class TransportMagazines	
	{
		class _xx_100Rnd_580x42_Mag_F
		{
		count = 1;
		magazine = "100Rnd_580x42_Mag_F";
		};
		class _xx_10Rnd_93x64_DMR_05_Mag
		{
		count = 2;
		magazine = "10Rnd_93x64_DMR_05_Mag";
		};
		class _xx_1Rnd_HE_Grenade_shell
		{
		count = 6;
		magazine = "1Rnd_HE_Grenade_shell";
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
		class _xx_100Rnd_580x42_Mag_F
		{
		count = 2;
		magazine = "100Rnd_580x42_Mag_F";
		};
		class _xx_100Rnd_580x42_Mag_Tracer_F
		{
		count = 1;
		magazine = "100Rnd_580x42_Mag_Tracer_F";
		};
		class _xx_150Rnd_93x64_Mag
		{
		count = 2;
		magazine = "150Rnd_93x64_Mag";
		};
	};
};

// Ammo Bearer
class O_T_Soldier_A_F : O_Soldier_A_F
{
backpack = "B_Carryall_ghex_OTAmmo_2_F";
};

// Assistant Autorifleman
class O_T_Soldier_AAR_F : O_Soldier_AAR_F
{
backpack = "B_Carryall_ghex_OTAAR_AAR_2_F";
};

// Autorifleman
class O_T_Soldier_AR_F : O_Soldier_AR_F
{
magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};

// Editing existing Unit Classes to use a different, more fitting optic with Caliber Changes in mind. Also for Standardization.

// AAF Marksman
class I_Soldier_M_F : I_Soldier_base_F
{
respawnWeapons[] = {"srifle_EBR_DMS_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
weapons[] = {"srifle_EBR_DMS_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
};

// NATO Heavy Gunner
class B_HeavyGunner_F : B_Soldier_base_F
{
respawnWeapons[] = {"MMG_02_sand_MOS_LP_F","hgun_P07_F","Throw","Put"};
weapons[] = {"MMG_02_sand_MOS_LP_F","hgun_P07_F","Throw","Put"};
};

// NATO Marksman
class B_soldier_M_F : B_Soldier_base_F
{
respawnWeapons[] = {"arifle_MXM_MOS_LP_BI_F","hgun_P07_F","Throw","Put"};
weapons[] = {"arifle_MXM_MOS_LP_BI_F","hgun_P07_F","Throw","Put"};
};

// CSAT Heavy Gunner
class O_HeavyGunner_F : O_Soldier_base_F
{
respawnWeapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
weapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
};

// CSAT Urban Heavy Gunner 
class O_Urban_HeavyGunner_F : O_Soldier_Urban_base
{
respawnWeapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
weapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
};

// Editing existing AAF Unit Classes that use the FS2000 Tactical TR to use the F2000 Tactical TR instead

// Ammo Bearer
class I_Soldier_A_F : I_Soldier_02_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
};

// Assistant Autorifleman
class I_Soldier_AAR_F: I_Soldier_support_base_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
};

// Assistant Missile Specialist (AT)
class I_Soldier_AAT_F : I_Soldier_support_base_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
};
// Assistant Missile Specialist (AA) derives from above

// Combat Life Saver
class I_medic_F : I_Soldier_02_F
{
respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
};

// FIA Combat Life Saver
class I_G_medic_F : I_G_Soldier_base_F
{
respawnWeapons[] = {"arifle_Mk20C_F","hgun_ACPC2_F","Throw","Put"};
weapons[] = {"arifle_Mk20C_F","hgun_ACPC2_F","Throw","Put"};
};

// Major Gavras
class I_Story_Officer_01_F : I_officer_F
{
respawnweapons[] = {"arifle_Mk20C_F","hgun_ACPC2_F","Throw","Put"};
weapons[] = {"arifle_Mk20C_F","hgun_ACPC2_F","Throw","Put"};
};

// Repair Specialist
class I_Soldier_repair_F : I_Soldier_02_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
};

// Rifleman
class I_soldier_F : I_Soldier_base_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
};

// Rifleman (AT)
class I_Soldier_LAT_F : I_Soldier_base_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_NLAW_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_NLAW_F","hgun_ACPC2_F","Throw","Put"};
};

// Rifleman (Light AT). Changed to Medium AT here
class I_Soldier_LAT2_F : I_Soldier_base_F
{
displayName = "Rifleman (Medium AT)";
weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_MRAWS_olive_rail_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_MRAWS_olive_rail_F","hgun_ACPC2_F","Throw","Put"};
};

// Rifleman (Light)
class I_Soldier_lite_F :  I_Soldier_02_F
{
weapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
};

// Spotter
class I_Spotter_F : I_Soldier_sniper_base_F
{
respawnWeapons[] = {"arifle_Mk20C_MRCO_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
weapons[] = {"arifle_Mk20C_MRCO_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
};

// Squad Leader
class I_Soldier_SL_F : I_Soldier_02_F 
{
weapons[] = {"arifle_Mk20C_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
respawnWeapons[] = {"arifle_Mk20C_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
};

// UAV Operator
class I_soldier_UAV_F : I_Soldier_base_F
{
weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
};
// UAV Operator (AL-6) and UAV Operator (AL-6, Medical) derive from above

// Unhiding CSAT and NATO M2 Static Classes
class StaticMGWeapon;
class HMG_02_base_F : StaticMGWeapon
{
    class Turrets
    {
        class MainTurret;
    }
};
class B_HMG_02_F : HMG_02_base_F
{
editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_HMG_02_F.jpg";
faction = "BLU_F";
mapSize = 3.16;
scope = 2;
side = 1;
    class Turrets : Turrets
    {
        class MainTurret : MainTurret
        {
        discreteDistance[] = {200,400,600,800,1200};
        discreteDistanceInitIndex = 0;
        };
    };
};
class HMG_02_high_base_F : HMG_02_base_F
{
    class Turrets
    {
        class MainTurret;
    }
}
class B_HMG_02_high_F : HMG_02_high_base_F
{
editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_HMG_02_high_F.jpg";
faction = "BLU_F";
mapSize = 3.16;
scope = 2;
side = 1;
    class Turrets : Turrets
    {
        class MainTurret : MainTurret
        {
        discreteDistance[] = {200,400,600,800,1200};
        discreteDistanceInitIndex = 0;
        };
    };
};
class O_HMG_02_F : HMG_02_base_F
{
editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_HMG_02_F.jpg";
faction = "OPF_F";
mapSize = 3.16;
scope = 2;
side = 0;
    class Turrets : Turrets
    {
        class MainTurret : MainTurret
        {
        discreteDistance[] = {200,400,600,800,1200};
        discreteDistanceInitIndex = 0;
        };
    };
};
class O_HMG_02_high_F : HMG_02_high_base_F
{
editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_HMG_02_high_F.jpg";
faction = "OPF_F";
mapSize = 3.16;
scope = 2;
side = 0;
    class Turrets : Turrets
    {
        class MainTurret : MainTurret
        {
        discreteDistance[] = {200,400,600,800,1200};
        discreteDistanceInitIndex = 0;
        };
    };
};

// Creating M2 Turret Classes for additional Factions

// NATO Pacific
class B_T_HMG_02_F : B_HMG_02_F
{
crew = "B_T_Soldier_F";
faction = "BLU_T_F";
};
class B_T_HMG_02_high_F : B_HMG_02_high_F
{
crew = "B_T_Soldier_F";
faction = "BLU_T_F";
};

// CSAT Pacific
class O_T_HMG_02_F : O_HMG_02_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};
class O_T_HMG_02_high_F : O_HMG_02_high_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};

// Adding missing NATO Pacific and CSAT Pacific Mk30 Turret Variants
class B_GMG_01_high_F;
class B_T_GMG_01_high_F : B_GMG_01_high_F
{
crew = "B_T_Soldier_F";
faction = "BLU_T_F";
};
class B_HMG_01_high_F;
class B_T_HMG_01_high_F : B_HMG_01_high_F
{
crew = "B_T_Soldier_F";
faction = "BLU_T_F";
};

class O_GMG_01_F;
class O_T_GMG_01_F : O_GMG_01_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};
class O_GMG_01_high_F;
class O_T_GMG_01_high_F : O_GMG_01_high_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};
class O_HMG_01_high_F;
class O_T_HMG_01_high_F : O_HMG_01_high_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};
class O_HMG_01_F;
class O_T_HMG_01_F : O_HMG_01_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};

// Replacing MK-I EMR with SIG 556 DMR
class B_Sharpshooter_F : B_Soldier_base_F
{
magazines[] = {"20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
respawnMagazines[] = {"20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","20Rnd_223Rem_Mag_NT_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
respawnWeapons[] = {"srifle_DMR_SIG556_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
weapons[] = {"srifle_DMR_SIG556_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
};

// Crates

// Cargo Net [AAF]. Replacing ubiquitous 'Sound Suppressor MG' (Which shares its model with the .338 NM variant) with an additional 5.56 Suppressor. Full Revamp in a future version.
// Also replacing FS2000 with F2000, PDW with CPW
class CargoNet_01_ammo_base_F;
class I_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
{
	class TransportItems
	{
		delete _xx_muzzle_snds_H_MG;
		class _xx_muzzle_snds_M
		{
		count = 6;
		name = "muzzle_snds_M";
		};
	};
	class TransportWeapons
	{
		delete _xx_arifle_Mk20_F;
		class _xx_arifle_Mk20C_F
		{
		count = 12;
		weapon = "arifle_Mk20C_F";
		};
		delete _xx_hgun_PDW2000_F;
		class _xx_hgun_cpw_ParaB_F
		{
		count = 2;
		weapon = "hgun_cpw_ParaB_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag;
		class _xx_30Rnd_9x19_RT_Green_Mag
		{
		count = 14;
		magazine = "30Rnd_9x19_RT_Green_Mag";	
		}
	};
};

// Special Weapons [LDF]. Replacing MK-I with SIG 556 DMR.
class Box_IND_WpsSpecial_F;
class Box_EAF_WpsSpecial_F : Box_IND_WpsSpecial_F
{
	class TransportWeapons
	{
		delete _xx_srifle_DMR_03_F;
		class _xx_srifle_DMR_SIG556_F
		{
		count = 1;
		weapon = "srifle_DMR_SIG556_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class _xx_20Rnd_223Rem_Mag_NT_F
		{
		count = 4;
		magazine = "20Rnd_223Rem_Mag_NT_F";	
		}
	};
};

// Special Weapons [NATO]. Replacing MK-I with SIG 556 DMR.
class NATO_Box_Base;
class Box_NATO_WpsSpecial_F : NATO_Box_Base
{
	class TransportWeapons
	{
		delete _xx_srifle_DMR_03_F;
		class _xx_srifle_DMR_SIG556_F
		{
		count = 1;
		weapon = "srifle_DMR_SIG556_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class _xx_20Rnd_223Rem_Mag_NT_F
		{
		count = 6;
		magazine = "20Rnd_223Rem_Mag_NT_F";	
		}
	};
};

// Special Weapons [NATO Pacific]. Replacing MK-I with SIG 556 DMR.
class Box_T_NATO_WpsSpecial_F : Box_NATO_WpsSpecial_F
{
	class TransportWeapons
	{
		delete _xx_srifle_DMR_03_woodland_F;
		class srifle_DMR_SIG556_woodland_F
		{
		count = 1;
		weapon = "srifle_DMR_SIG556_woodland_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_762x51_Mag;
		class _xx_20Rnd_223Rem_Mag_NT_F
		{
		count = 6;
		magazine = "20Rnd_223Rem_Mag_NT_F";	
		}
	};
};

// Basic Weapons [AAF]. Replacing PDW with CPW. Repaled FS2000 with F2000
class IND_Box_Base;
class Box_IND_Wps_F : IND_Box_Base
{
	class TransportWeapons
	{
		delete _xx_arifle_Mk20_F;
		class _xx_arifle_Mk20C_F
		{
		count = 6;
		weapon = "arifle_Mk20C_F";
		};
		delete _xx_hgun_PDW2000_F;
		class _xx_hgun_cpw_ParaB_F
		{
		count = 1;
		weapon = "hgun_cpw_ParaB_F";
		};

	};
	class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag;
		class _xx_30Rnd_9x19_RT_Green_Mag
		{
		count = 1;
		magazine = "30Rnd_9x19_RT_Green_Mag";	
		}
	};
};

// Basic Weapons [CSAT]
class EAST_Box_Base;
class Box_East_Wps_F : EAST_Box_Base
{
	class TransportWeapons
	{
		delete _xx_SMG_02_F;
		class _xx_SMG_02_ParaB_F
		{
		count = 1;
		weapon = "SMG_02_ParaB_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag_SMG_02;
		class _xx_30Rnd_9x19_SMG_RT_Red_Mag
		{
		count = 1;
		magazine = "30Rnd_9x19_SMG_RT_Red_Mag";	
		}
	};
};

// Basic Weapons [CSAT Pacific]
class Box_T_East_Wps_F : Box_East_Wps_F
{
	class TransportWeapons
	{
		delete _xx_SMG_02_F;
		class _xx_SMG_02_ParaB_F
		{
		count = 1;
		weapon = "SMG_02_ParaB_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag;
		class _xx_30Rnd_9x19_SMG_RT_Red_Mag
		{
		count = 1;
		magazine = "30Rnd_9x19_SMG_RT_Red_Mag";	
		}
	};
};

// Cargo Net [CSAT]
class O_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
{
	class TransportWeapons
	{
		delete _xx_SMG_02_F;
		class _xx_SMG_02_ParaB_F
		{
		count = 2;
		weapon = "SMG_02_ParaB_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag;
		class _xx_30Rnd_9x19_SMG_RT_Red_Mag
		{
		count = 14;
		magazine = "30Rnd_9x19_SMG_RT_Red_Mag";	
		}
	};
};

// Supply Box [Gendarmerie]
class Box_NATO_Equip_F;
class Box_GEN_Equip_F : Box_NATO_Equip_F
{
	class TransportWeapons
	{
		delete _xx_SMG_05_F;
		class _xx_SMG_05_ParaB_F
		{
		count = 6;
		weapon = "SMG_05_ParaB_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_30Rnd_9x21_Mag_SMG_02;
		class _xx_30Rnd_9x19_SMG_RT_Red_Mag
		{
		count = 24;
		magazine = "30Rnd_9x19_SMG_RT_Red_Mag";	
		}
	};
};
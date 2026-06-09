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
magazines[] = {"30Rnd_9x19_Mag","MiniGrenade"};	
weapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","MiniGrenade"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
};

// AAF Helicopter Pilot
class I_helipilot_F : I_Soldier_03_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};	
weapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};	
respawnWeapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
};

// AAF Pilot
class I_pilot_F : I_Soldier_04_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
weapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
respawnWeapons[] = {"hgun_cpw_ParaB_Holo_F","Throw","Put"};
};

// Looters Criminal (SMG)
class I_L_Criminal_SMG_F : I_L_Soldier_Base_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
weapons[] = {"hgun_cpw_ParaB_F","hgun_Pistol_heavy_02_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","hgun_Pistol_heavy_02_F","Throw","Put"};
};

// Looters Looter (SMG)
class I_L_Looter_SMG_F : I_L_Soldier_Base_F
{
magazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","Chemlight_blue"};
weapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","30Rnd_9x19_Mag","Chemlight_blue"};
respawnWeapons[] = {"hgun_cpw_ParaB_F","Throw","Put"};
};

// Editing existing Unit Classes that use the Protector to use the MP5K-PDW instead

// Gendarme Base Class
class B_GEN_Soldier_base_F : B_Soldier_F
{
magazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};	
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};	
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put"};	
};

// Blufor Gendarmerie Commander
class B_GEN_Commander_F : B_GEN_Soldier_base_F
{
magazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
respawnMagazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
};
	
// Opfor Gendarmerie Commander
class O_GEN_Commander_F : B_GEN_Commander_F
{
magazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
weapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
respawnMagazines[] = {"30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","30Rnd_9x19_MP5_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};	
respawnWeapons[] = {"SMG_05_ParaB_F","hgun_P07_F","Throw","Put","Binocular"};
};

// Editing existing Unit Classes that use the Sting to use the Scorpion EVO 3 A1 instead
class O_helipilot_F : O_Soldier_02_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};
class O_Pilot_F : O_helipilot_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};
weapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};
class O_T_Helipilot_F : O_helipilot_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"SMG_02_ParaB_ACO_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};
class O_T_Pilot_F : O_Pilot_F
{
magazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};	
weapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","30Rnd_9x19_SMG_Mag","SmokeShell","SmokeShellRed","Chemlight_red"};
respawnWeapons[] = {"SMG_02_ParaB_ACO_F","Throw","Put"};
};

// Editing existing Classes that use the Vector to use no tracer Magazines
class B_Pilot_F : B_Soldier_05_f
{
magazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShell","SmokeShellBlue","Chemlight_green"};
respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShell","SmokeShellBlue","Chemlight_green"};
};
// class B_T_Pilot_F : B_Pilot_F
class B_Helipilot_F : B_Soldier_04_f
{
magazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};
class B_T_Helipilot_F : B_Helipilot_F
{
magazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","30Rnd_45ACP_Mag_SMG_01_NT","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};

// Editing existing Unit Classes to use a different, more fitting optic with Caliber Changes in mind. Also for Standardization.

// AAF Marksman
class I_Soldier_M_F : I_Soldier_base_F
{
respawnWeapons[] = {"srifle_EBR_DMS_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
weapons[] = {"srifle_EBR_DMS_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
};

// NATO Heavy Gunner. Adding Backpack to carry Belt
class B_HeavyGunner_F : B_Soldier_base_F
{
backpack = "B_AssaultPack_rgr_NATOHG_F";
magazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
weapons[] = {"MMG_02_sand_MOS_LP_F","hgun_P07_F","Throw","Put"};
respawnMagazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnWeapons[] = {"MMG_02_sand_MOS_LP_F","hgun_P07_F","Throw","Put"};
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
class HMG_02_base_F : StaticMGWeapon
{
    class Turrets : Turrets
    {
        class MainTurret;
    };
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
    class Turrets : Turrets
    {
        class MainTurret;
    };
};
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

// Crates!
class Box_FIA_Ammo_F : FIA_Box_Base_F
{
	class TransportMagazines
	{
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
class Box_FIA_Support_F : FIA_Box_Base_F
{
	class TransportBackpacks
	{
		class _xx_B_Bergen_blk
		{
		backpack = "B_TacticalPack_blk";
		};
	};
};
class Box_FIA_Wps_F : FIA_Box_Base_F
{
	class TransportMagazines
	{
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
class IG_supplyCrate_F : ReammoBox_F
{
	class TransportMagazines
	{
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
class Box_IND_Ammo_F : IND_Box_Base
{
	class TransportMagazines
	{
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_Mag";
		};
	};
};
class Box_East_Ammo_F : EAST_Box_Base
{
	class TransportMagazines
	{
		class _xx_150Rnd_762x54_Box
		{
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_16Rnd_9x21_Mag
		{
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_30Rnd_9x21_Mag_SMG_02
		{
		magazine = "30Rnd_9x19_SMG_Mag";
		};
	};
};
class Box_T_East_Ammo_F : Box_East_Ammo_F
{
	class TransportMagazines
	{
		class _xx_100Rnd_580x42_Mag_F
		{
		magazine = "100Rnd_580x42_T4_Mag_F";
		};
		class _xx_16Rnd_9x21_Mag
		{
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_SMG_Mag";
		};
	};
};
class Box_NATO_Ammo_F : NATO_Box_Base
{
	class TransportMagazines
	{
		class _xx_100Rnd_65x39_caseless_mag
		{
		magazine = "100Rnd_65x39_T4_mag";
		};
		class _xx_30Rnd_45ACP_Mag_SMG_01
		{
		magazine = "30Rnd_45ACP_Mag_SMG_01_NT";
		};
		class _xx_20Rnd_762x51_IRT_Mag // Added (Pre-emptive ace replace)
		{
		count = 4;
		magazine = "20Rnd_762x51_IRT_Mag";
		};
		class _xx_20Rnd_762x51_Tracer_Mag // Added
		{
		count = 4;
		magazine = "20Rnd_762x51_Tracer_Mag";
		};		
	};
};
class Box_Syndicate_Ammo_F : ReammoBox_F
{
	class TransportMagazines
	{
		class _xx_1Rnd_HE_Grenade_shell
		{
		magazine = "1Rnd_GP25_VOG25M_Grenade";
		};
		class _xx_200Rnd_556x45_Box_F
		{
		magazine = "200Rnd_556x45_Box_T4_F";
		};
	};
};
class Box_IND_Wps_F : IND_Box_Base
{
	class TransportWeapons
	{
		class  _xx_arifle_Mk20_F
		{
		weapon = "arifle_Mk20C_F";
		};
		class _xx_hgun_PDW2000_F
		{
		weapon = "hgun_cpw_ParaB_F";
		};
	};
	class TransportMagazines
	{
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_Mag";	
		};
		class _xx_9Rnd_45ACP_Mag
		{
		count = 2;
		};
	};
};
class Box_East_Wps_F : EAST_Box_Base
{
	class TransportWeapons
	{
		class _xx_SMG_02_F
		{
		weapon = "SMG_02_ParaB_F";
		};
	};
	class TransportMagazines
	{
		class _xx_150Rnd_762x54_Box
		{
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_30Rnd_9x21_Mag_SMG_02
		{
		magazine = "30Rnd_9x19_SMG_Mag";	
		};
		class _xx_16Rnd_9x21_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_10Rnd_762x54_Mag
		{
		count = 4;
		magazine = "10Rnd_762x54_Mag";	
		};
	};
};
class Box_T_East_Wps_F : Box_East_Wps_F
{
	class TransportWeapons
	{
		class _xx_SMG_02_F
		{
		weapon = "SMG_02_ParaB_F";
		};
	};
	class TransportMagazines
	{
		class _xx_16Rnd_9x21_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_20Rnd_650x39_Cased_Mag_F
		{
		count = 4;
		}
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_SMG_Mag";	
		};
		class _xx_100Rnd_580x42_Mag_F
		{
		magazine = "100Rnd_580x42_T4_Mag_F";
		};
	};
};
class Box_EAF_Wps_F : Box_IND_Wps_F
{
	class TransportWeapons
	{
		class _xx_SMG_03_black
		{
		weapon = "SMG_03C_black";
		};
	};
	class TransportMagazines
	{
		class _xx_200Rnd_65x39_cased_Box_Red
		{
		magazine = "200Rnd_65x39_cased_Box_T4_Red";
		};
		class _xx_30Rnd_65x39_caseless_msbs_mag_Tracer
		{
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
	};
};
class Box_NATO_Wps_F : NATO_Box_Base
{
	class TransportMagazines
	{
		class _xx_100Rnd_65x39_caseless_mag
		{
		magazine = "100Rnd_65x39_T4_mag";
		};
		class _xx_11Rnd_45ACP_Mag
		{
		count = 2;
		}
		class _xx_16Rnd_9x21_Mag
		{
		count = 2;
		};
		class _xx_30Rnd_45ACP_Mag_SMG_01
		{
		magazine = "30Rnd_45ACP_Mag_SMG_01_NT";
		};
	};
};
class Box_T_NATO_Wps_F : Box_NATO_Wps_F
{
	class TransportWeapons
	{
		class _xx_hgun_Pistol_heavy_01_F
		{
		weapon = "hgun_Pistol_heavy_01_green_F";
		};
	};
	class TransportMagazines
	{
		class _xx_100Rnd_65x39_caseless_khaki_mag
		{
		magazine = "100Rnd_65x39_T4_khaki_mag";
		};
		class _xx_11Rnd_45ACP_Mag
		{
		count = 2;
		}
		class _xx_16Rnd_9x21_Mag
		{
		count = 2;
		};
		class _xx_30Rnd_45ACP_Mag_SMG_01
		{
		magazine = "30Rnd_45ACP_Mag_SMG_01_NT";
		};
	};
};
class Box_Syndicate_Wps_F : ReammoBox_F
{
	class TransportMagazines
	{
		class _xx_200Rnd_556x45_Box_F
		{
		magazine = "200Rnd_556x45_Box_T4_F";
		};
	};
};
class Box_IND_AmmoOrd_F : IND_Box_Base
{
	class TransportItems
	{
		delete _xx_ACE_Cellphone;
		delete _xx_ACE_Deadmanswitch;
	};
};
class Box_EAF_AmmoOrd_F : Box_IND_AmmoOrd_F
{
	class TransportItems
	{
		class _xx_ACE_Clacker
		{
		count = 12;
		name = "ACE_Clacker";
		};
		class _xx_ACE_DefusalKit
		{
		count = 12;
		name = "ACE_DefusalKit";
		};
		class _xx_ACE_M26_Clacker
		{
		count = 6;
		name = "ACE_M26_Clacker";
		};
	};
};
class Box_IED_Exp_F : ReammoBox_F
{
	class TransportItems
	{
		class _xx_ACE_Cellphone
		{
		count = 3;
		name = "ACE_Cellphone";
		};
		class _xx_ACE_Deadmanswitch
		{
		count = 6;
		name = "ACE_Deadmanswitch";
		};
	};
};
class Box_IDAP_AmmoOrd_F : Box_IND_AmmoOrd_F
{
	class TransportItems
	{
		class _xx_ACE_Clacker
		{
		count = 2;
		name = "ACE_Clacker";
		};
	};
};
class Box_IND_Grenades_F : IND_Box_Base
{
	class TransportMagazines
	{
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareYellow_Illumination_F;
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareYellow_F
		{
		count = 4;
		};
	};
};
class Box_East_Grenades_F : EAST_Box_Base
{
	class TransportMagazines
	{
		delete _xx_UGL_FlareRed_Illumination_F;
		delete _xx_UGL_FlareYellow_Illumination_F;
		class _xx_UGL_FlareRed_F
		{
		count = 4;
		};
		class _xx_UGL_FlareYellow_F
		{
		count = 4;
		};
	};
};
class Box_EAF_Grenades_F : Box_IND_Grenades_F
{
	class TransportMagazines
	{
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_1Rnd_HE_Grenade_shell
		{
		count = 12;
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
class Box_NATO_Grenades_F : NATO_Box_Base
{
	class TransportMagazines
	{
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_1Rnd_Smoke_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_Smoke_Grenade_shell";
		};
		class _xx_1Rnd_SmokeBlue_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeBlue_Grenade_shell";
		};	
		class _xx_1Rnd_SmokeGreen_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeGreen_Grenade_shell";
		};	
		class _xx_1Rnd_SmokeOrange_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeOrange_Grenade_shell";
		};	
		class _xx_1Rnd_SmokePurple_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokePurple_Grenade_shell";
		};	
		class _xx_1Rnd_SmokeRed_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeRed_Grenade_shell";
		};
		class _xx_1Rnd_SmokeYellow_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeYellow_Grenade_shell";
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
		count = 4;	
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 1;
		magazine = "3Rnd_UGL_FlareGreen_F";
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 1;
		magazine = "3Rnd_UGL_FlareWhite_F";
		};
	};
};
class Box_IND_WpsSpecial_F : IND_Box_Base
{
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		class _xx_5Rnd_127x108_Mag
		{
		count = 4;
		};
		class _xx_30Rnd_556x45_Stanag_IRT_F
		{
		count = 4;
		magazine = "30Rnd_556x45_Stanag_IRT_F";
		};
		class _xx_5Rnd_127x108_APDS_Mag
		{
		count = 4;
		magazine = "5Rnd_127x108_APDS_Mag";
		};
	};
};
class Box_East_WpsSpecial_F : EAST_Box_Base
{
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		class _xx_150Rnd_93x64_Mag
		{
		magazine = "150Rnd_93x64_Mag_T4";
		};
		class _xx_30Rnd_556x45_Stanag_green
		{
		count = 6;
		magazine = "30Rnd_65x39_caseless_green";
		};
		class _xx_20Rnd_556x45_Katiba_IRT_Mag
		{
		count = 4;
		magazine = "20Rnd_556x45_Katiba_IRT_Mag";
		};
	};
};
class Box_T_East_WpsSpecial_F : Box_East_WpsSpecial_F
{
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		delete _xx_30Rnd_556x45_Stanag_green;
		class _xx_150Rnd_93x64_Mag
		{
		magazine = "150Rnd_93x64_Mag_T4";
		};
		class _xx_20Rnd_556x45_Katiba_IRT_Mag
		{
		count = 4;
		magazine = "20Rnd_556x45_Katiba_IRT_Mag";
		};
	};
};
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
		class _xx_20Rnd_223REM_Mag_NT_F
		{
		count = 6;
		magazine = "20Rnd_223REM_Mag_NT_F";	
		};
		class _xx_30Rnd_65x39_caseless_msbs_mag
		{
		count = 6;
		magazine = "30Rnd_65x39_caseless_msbs_mag";
		};
		class _xx_30Rnd_556x45_Stanag_PMAG_IRT_F
		{
		count = 4;
		magazine = "30Rnd_556x45_Stanag_PMAG_IRT_F";
		};
	};
};
class Box_NATO_WpsSpecial_F : NATO_Box_Base
{
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
		delete _xx_srifle_DMR_03_F;
		class _xx_srifle_DMR_SIG556_F
		{
		count = 1;
		weapon = "srifle_DMR_SIG556_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		delete _xx_30Rnd_556x45_Stanag_red;
		delete _xx_20Rnd_762x51_Mag;
		class _xx_20Rnd_223REM_Mag_NT_F
		{
		count = 6;
		magazine = "20Rnd_223REM_Mag_NT_F";	
		};
		class _xx_100Rnd_65x39_IRT4_Mag
		{
		count = 4;
		magazine = "100Rnd_65x39_IRT4_Mag";
		};
		class _xx_30Rnd_65x39_IRT_Mag
		{
		count = 4;
		magazine = "30Rnd_65x39_IRT_Mag";
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
		count = 4;
		magazine = "30Rnd_65x39_caseless_mag_Tracer";
		};
	};
};
class Box_T_NATO_WpsSpecial_F : Box_NATO_WpsSpecial_F
{
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
		delete _xx_srifle_DMR_03_woodland_F;
		class srifle_DMR_SIG556_woodland_F
		{
		count = 1;
		weapon = "srifle_DMR_SIG556_woodland_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		delete _xx_30Rnd_556x45_Stanag_red;
		delete _xx_20Rnd_762x51_Mag;
		class _xx_20Rnd_223REM_Mag_NT_F
		{
		count = 6;
		magazine = "20Rnd_223REM_Mag_NT_F";	
		};
		class _xx_100Rnd_65x39_IRT4_Khaki_Mag
		{
		count = 4;
		magazine = "100Rnd_65x39_IRT4_Khaki_Mag";
		};
		class _xx_30Rnd_65x39_IRT_Khaki_Mag
		{
		count = 4;
		magazine = "30Rnd_65x39_IRT_Khaki_Mag";
		};
		class _xx_30Rnd_65x39_caseless_khaki_mag_Tracer
		{
		count = 4;
		magazine = "30Rnd_65x39_caseless_khaki_mag_Tracer";
		};
	};
};
class B_supplyCrate_F : ReammoBox_F
{
	class TransportMagazines
	{
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_100Rnd_65x39_caseless_mag
		{
		magazine = "100Rnd_65x39_T4_mag";
		};
		class _xx_1Rnd_Smoke_Grenade_shell
		{
		count = 1;		
		magazine = "3Rnd_Smoke_Grenade_shell";
		};
		class _xx_1Rnd_SmokeGreen_Grenade_shell
		{
		count = 1;		
		magazine = "3Rnd_SmokeGreen_Grenade_shell";
		};
		class _xx_20Rnd_762x51_Tracer_Mag
		{
		count = 4;		
		magazine = "20Rnd_762x51_Tracer_Mag";
		};
		class _xx_20Rnd_762x51_IRT_Mag
		{
		count = 4;		
		magazine = "20Rnd_762x51_IRT_Mag";
		};
		class _xx_30Rnd_45ACP_Mag_SMG_01
		{
		magazine = "30Rnd_45ACP_Mag_SMG_01_NT";
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
		count = 4;
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
class I_supplyCrate_F : B_supplyCrate_F
{
	class TransportWeapons
	{
		class _xx_arifle_Mk20_F
		{
		weapon = "arifle_Mk20C_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareYellow_Illumination_F;
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_Mag";
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareYellow_F
		{
		count = 4;
		};
	};
};
class O_supplyCrate_F : B_supplyCrate_F
{
	class TransportMagazines
	{
		delete _xx_UGL_FlareRed_Illumination_F;
		delete _xx_UGL_FlareYellow_Illumination_F;
		class _xx_150Rnd_762x54_Box
		{
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_16Rnd_9x21_Mag
		{
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_30Rnd_9x21_Mag_SMG_02
		{
		magazine = "30Rnd_9x19_SMG_Mag";
		};
		class _xx_UGL_FlareRed_F
		{
		count = 4;
		};
		class _xx_UGL_FlareYellow_F
		{
		count = 4;
		};
	};
};
class I_EAF_supplyCrate_F : I_supplyCrate_F
{
	class TransportMagazines
	{
		delete _xx_UGL_FlareWhite_Illumination_F;
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_100Rnd_65x39_caseless_black_mag;
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
class C_supplyCrate_F : ReammoBox_F
{
	class TransportMagazines
	{
		delete _xx_3Rnd_HE_Grenade_shell;
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_100Rnd_65x39_caseless_mag
		{
		magazine = "100Rnd_65x39_T4_mag";
		};
		class _xx_1Rnd_HE_Grenade_shell
		{
		count = 4;
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
class C_T_supplyCrate_F : ReammoBox_F
{
	class TransportItems
	{
		class _xx_LaserDesignator
		{
		name = "Laserdesignator_03";
		};
	};
	class TransportMagazines
	{
		delete _xx_3Rnd_HE_Grenade_shell;
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_150Rnd_556x45_Drum_Mag_F
		{
		magazine = "150Rnd_556x45_Drum_Mag_T4_F";
		};
		class _xx_1Rnd_HE_Grenade_shell
		{
		count = 4;
		};
		class _xx_20Rnd_762x51_Mag
		{
		magazine = "20Rnd_308WIN_HK_Mag";
		};
		class _xx_30Rnd_556x45_Stanag
		{
		magazine = "30Rnd_556x45_Stanag_red";
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
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
		class _xx_hgun_P07_F
		{
		weapon = "hgun_P07_blk_F";
		};
	};
	class TransportMagazines
	{
		class _xx_30Rnd_9x21_Mag_SMG_02
		{
		magazine = "30Rnd_9x19_MP5_Mag";	
		};
	};
};
class Box_IND_Support_F : IND_Box_Base
{
	class TransportItems
	{
		delete _xx_muzzle_snds_H;
		class _xx_muzzle_mzls_H
		{
		count = 5;
		name = "muzzle_mzls_H";
		};
		class _xx_muzzle_mzls_l
		{
		count = 5;
		name = "muzzle_mzls_l";
		};
	};
};
class Box_East_Support_F : EAST_Box_Base
{
	class TransportItems
	{
		delete _xx_muzzle_snds_H;
		delete _xx_muzzle_snds_65_TI_blk_F;
		delete _xx_muzzle_snds_65_TI_ghex_F;
		delete _xx_muzzle_snds_65_TI_hex_F;
		class _xx_muzzle_snds_58_blk_F
		{
		count = 2;
		};
		class _xx_muzzle_snds_58_ghex_F
		{
		count = 2;
		};
		class _xx_muzzle_snds_58_hex_F
		{
		count = 2;
		name = "muzzle_snds_58_hex_F";
		};
		class _xx_muzzle_snds_M
		{
		count = 6;
		name = "muzzle_snds_M";
		};
		class _xx_muzzle_snds_b
		{
		count = 4;
		};
		class _xx_muzzle_snds_vs121_F
		{
		count = 2;
		name = "muzzle_snds_vs121_F";
		};
	};
};
class Box_EAF_Support_F : Box_IND_Support_F
{
	class TransportItems
	{
		class _xx_muzzle_snds_338_black
		{
		name = "muzzle_snds_338_black";
		};
		class _xx_muzzle_snds_H
		{
		name = "muzzle_snds_M";
		};
		class _xx_muzzle_snds_L
		{
		count = 5;
		name = "muzzle_snds_L";
		};
	};
};
class B_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
{
	class TransportItems
	{
		class _xx_muzzle_snds_H_SW
		{
		name = "muzzle_snds_H_snd_F";
		};
	};
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
		class _xx_launch_Titan_F
		{
		weapon = "launch_B_Titan_F";
		};
		class _xx_launch_Titan_short_F
		{
		weapon = "launch_B_Titan_short_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_20Rnd_556x45_UW_mag;
		delete _xx_30Rnd_556x45_Stanag_red;
		class _xx_1Rnd_Smoke_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_Smoke_Grenade_shell";
		};
		class _xx_1Rnd_SmokeBlue_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeBlue_Grenade_shell";
		};
		class _xx_1Rnd_SmokeGreen_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeGreen_Grenade_shell";
		};
		class _xx_1Rnd_SmokeOrange_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeOrange_Grenade_shell";
		};
		class _xx_1Rnd_SmokePurple_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokePurple_Grenade_shell";
		};
		class _xx_1Rnd_SmokeRed_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeRed_Grenade_shell";
		};
		class _xx_1Rnd_SmokeYellow_Grenade_shell
		{
		count = 1;
		magazine = "3Rnd_SmokeYellow_Grenade_shell";
		};
		class _xx_30Rnd_45ACP_Mag_SMG_01
		{
		magazine = "30Rnd_45ACP_Mag_SMG_01_NT";
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
		count = 4;
		};
		class _xx_UGL_FlareGreen_F
		{
		count = 4;
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 4;
		};
	};
};
class I_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
{
	class TransportItems
	{
		class _xx_muzzle_snds_H_MG
		{
		name = "muzzle_snds_M";
		};
	};
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
		class _xx_arifle_Mk20_F
		{
		weapon = "arifle_Mk20C_F";
		};
		class _xx_hgun_PDW2000_F
		{
		weapon = "hgun_cpw_ParaB_F";
		};
		class _xx_launch_Titan_F
		{
		weapon = "launch_I_Titan_F";
		};
		class _xx_launch_Titan_short_F
		{
		weapon = "launch_I_Titan_short_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_Mag";	
		};
		class _xx_200Rnd_65x39_cased_Box
		{
		magazine = "200Rnd_65x39_cased_Box_T4";
		};
	};
};
class O_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
{
	class TransportItems
	{
		class _xx_muzzle_snds_H
		{
		name = "muzzle_snds_M";
		};
		class _xx_muzzle_snds_b
		{
		count = 4;
		};
		class _xx_muzzle_snds_vs121_F
		{
		count = 2;
		name = "muzzle_snds_vs121_F";
		};
	};
	class TransportWeapons
	{
		delete _xx_arifle_SDAR_F;
		class _xx_SMG_02_F
		{
		weapon = "SMG_02_ParaB_F";
		};
		class _xx_launch_Titan_F
		{
		weapon = "launch_O_Titan_F";
		};
		class _xx_launch_Titan_short_F
		{
		weapon = "launch_O_Titan_short_F";
		};
	};
	class TransportMagazines
	{
		delete _xx_20Rnd_556x45_UW_mag;
		delete _xx_30Rnd_556x45_Stanag_green;
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_SMG_Mag";	
		};
		class _xx_150Rnd_762x54_Box
		{
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_16Rnd_9x21_Mag
		{
		magazine = "17Rnd_9x19_MP433_Mag";
		};
	};
};
class I_E_CargoNet_01_ammo_F : I_CargoNet_01_ammo_F
{
	class TransportItems
	{
		class _xx_muzzle_snds_H
		{
		name = "muzzle_snds_M";
		};
		class _xx_muzzle_snds_570
		{
		count = 2;
		name = "muzzle_snds_570";
		};
	};
	class TransportWeapons
	{
		class _xx_SMG_03_black
		{
		weapon = "SMG_03C_black";
		};
	};
	class TransportMagazines
	{
		delete _xx_UGL_FlareGreen_Illumination_F;
		delete _xx_UGL_FlareWhite_Illumination_F;
		class _xx_UGL_FlareGreen_F
		{
		count = 1;
		magazine = "3Rnd_UGL_FlareGreen_F";
		};
		class _xx_UGL_FlareWhite_F
		{
		count = 1;
		magazine = "3Rnd_UGL_FlareWhite_F";
		};
	};
};
class Land_Pod_Heli_Transport_04_box_F : Pod_Heli_Transport_04_base_F
{
	class TransportMagazines
	{
		class _xx_150Rnd_762x54_Box
		{
		magazine = "100Rnd_762x51_NG7_Box_GT4";
		};
		class _xx_16Rnd_9x21_Mag
		{
		magazine = "17Rnd_9x19_MP433_Mag";
		};
		class _xx_30Rnd_9x21_Mag
		{
		magazine = "30Rnd_9x19_SMG_Mag";
		};
	};
};

// Machine Gunners / Autoriflemen / Ammo Bearers. Reload Tracer MG Ammo to Tracer Every 4
// BLUFOR
// NATO Autorifleman
class B_soldier_AR_F : B_Soldier_02_f
{
magazines[] = {"100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

// NATO Patrol Machine Gunner
class B_Patrol_Soldier_MG_F : B_soldier_AR_F
{
magazines[] = {"200Rnd_65x39_cased_Box_T4_Red","200Rnd_65x39_cased_Box_T4_Red","200Rnd_65x39_cased_Box_T4_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
respawnMagazines[] = {"200Rnd_65x39_cased_Box_T4_Red","200Rnd_65x39_cased_Box_T4_Red","200Rnd_65x39_cased_Box_T4_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
};
// Patrol Autorifleman
class B_Patrol_Soldier_AR_F : B_soldier_AR_F
{
magazines[] = {"100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_T4_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen"};
respawnMagazines[] = {"100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_T4_mag","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_T4_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen"};
};
// Patrol Heavy Gunner
class B_Patrol_HeavyGunner_F : B_HeavyGunner_F
{
magazines[] = {"100Rnd_762x51_NG7_Box_RT4","100Rnd_762x51_NG7_Box_RT4","100Rnd_762x51_NG7_Box_RT4","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
respawnMagazines[] = {"100Rnd_762x51_NG7_Box_RT4","100Rnd_762x51_NG7_Box_RT4","100Rnd_762x51_NG7_Box_RT4","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
};
class B_CTRG_Soldier_AR_tna_F : B_CTRG_Soldier_F
{
backpack = "B_AssaultPack_rgr_CTRGAR_F";
magazines[] = {"150Rnd_556x45_Drum_Mag_T4_F","150Rnd_556x45_Drum_Mag_T4_F","150Rnd_556x45_Drum_Mag_T4_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_T4_F","150Rnd_556x45_Drum_Mag_T4_F","150Rnd_556x45_Drum_Mag_T4_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// class B_G_Soldier_AR_F : I_G_Soldier_AR_F
// NATO Pacific Autorifleman
class B_T_Soldier_AR_F : B_soldier_AR_F
{
magazines[] = {"100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_caseless_khaki_mag_tracer","100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_T4_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_caseless_khaki_mag_tracer","100Rnd_65x39_T4_khaki_mag","100Rnd_65x39_T4_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
class B_T_Soldier_AAR_F : B_soldier_AAR_F
{
backpack = "B_T_Kitbag_rgr_AAR";
};
// NATO Woodland Autorifleman
class B_W_Soldier_AR_F : B_soldier_AR_F
{
magazines[] = {"100Rnd_65x39_T4_black_mag","100Rnd_65x39_T4_black_mag","100Rnd_65x39_T4_black_mag","100Rnd_65x39_caseless_black_mag_tracer","100Rnd_65x39_T4_black_mag","100Rnd_65x39_T4_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"100Rnd_65x39_T4_black_mag","100Rnd_65x39_T4_black_mag","100Rnd_65x39_T4_black_mag","100Rnd_65x39_caseless_black_mag_tracer","100Rnd_65x39_T4_black_mag","100Rnd_65x39_T4_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

// Spotter
class B_spotter_F : B_Soldier_sniper_base_F
{
respawnWeapons[] = {"arifle_MX_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
weapons[] = {"arifle_MX_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
};
// Snipers
class B_sniper_F : B_Soldier_sniper_base_F
{
respawnWeapons[] = {"srifle_LRR_camo_LRPS_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
weapons[] = {"srifle_LRR_camo_LRPS_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
};
class B_ghillie_base_F : B_Soldier_sniper_base_F
{
respawnWeapons[] = {"srifle_LRR_camo_LRPS_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
weapons[] = {"srifle_LRR_camo_LRPS_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
};
// Pacific
class B_T_Spotter_F : B_spotter_F
{
respawnWeapons[] = {"arifle_MX_khk_Hamr_Pointer_snds_F","hgun_P07_khk_F","Throw","Put","Laserdesignator"};
weapons[] = {"arifle_MX_khk_Hamr_Pointer_snds_F","hgun_P07_khk_F","Throw","Put","Laserdesignator"};
};
class B_T_Sniper_F : B_sniper_F
{
respawnWeapons[] = {"srifle_LRR_tna_LRPS_snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
weapons[] = {"srifle_LRR_tna_LRPS_snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
};
class B_T_ghillie_tna_F : B_ghillie_base_F
{
respawnWeapons[] = {"srifle_LRR_tna_LRPS_snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
weapons[] = {"srifle_LRR_tna_LRPS_snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
};


//OPFOR
// CSAT Autorifleman
class O_Soldier_AR_F : O_Soldier_base_F
{
backpack = "O_FieldPack_CSATAR_ocamo";
magazines[] = {"100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Urban Autorifleman
class O_soldierU_AR_F : O_Soldier_Urban_base
{
backpack = "O_FieldPack_CSATAR_oucamo";
magazines[] = {"100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","100Rnd_762x51_NG7_Box_GT4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Urban Asst. Autorifleman
class O_soldierU_AAR_F : O_Soldier_Urban_base
{
backpack = "B_Carryall_oucamo_AAR_2";
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Pacific Autorifleman
class O_T_Soldier_AR_F : O_Soldier_AR_F
{
backpack = "O_FieldPack_ghex_CSATAR_O_F";
magazines[] = {"100Rnd_580x42_T4_Mag_F","100Rnd_580x42_T4_Mag_F","100Rnd_580x42_T4_Mag_F","100Rnd_580x42_T4_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_580x42_T4_Mag_F","100Rnd_580x42_T4_Mag_F","100Rnd_580x42_T4_Mag_F","100Rnd_580x42_T4_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// class O_G_Soldier_AR_F : I_G_Soldier_AR_F
// Spetsnaz Autorifleman. Also changing ARCO AK to ARCO as its markings are more accurate for 5.45
class O_R_Soldier_AR_F : O_R_Soldier_Base_F
{
magazines[] = {"95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_Tracer_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"arifle_RPK16_lush_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_Tracer_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_RPK16_lush_arco_pointer_F","hgun_Rook40_F","Throw","Put"};	
};
// Spetsnaz Autorifleman #2
class O_R_Patrol_Soldier_AR2_F : O_R_Soldier_AR_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","HandGrenade","HandGrenade","SmokeShell"};
weapons[] = {"arifle_RPK16_lush_holo_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};	
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","HandGrenade","HandGrenade","SmokeShell"};
respawnWeapons[] = {"arifle_RPK16_lush_holo_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};	
};
// Spetsnaz Autorifleman #1
class O_R_Patrol_Soldier_AR_F : O_R_Soldier_AR_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","HandGrenade","HandGrenade","SmokeShell"};
weapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","HandGrenade","HandGrenade","SmokeShell"};
respawnWeapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
};
// Recon Autorifleman
class O_R_recon_AR_F : O_R_Soldier_recon_base
{
magazines[] = {"95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_Tracer_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","95Rnd_545x39_RPK16_Lush_Mag_Tracer_F","95Rnd_545x39_RPK16_Lush_Mag_T4_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_RPK16_lush_arco_snds_pointer_F","hgun_Rook40_F","Throw","Put"};	
};
// CSAT Ammobearer
class O_Soldier_A_F : O_Soldier_base_F
{
magazines[] = {"100Rnd_762x51_NG7_Box_GT4","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_762x51_NG7_Box_GT4","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Urban Ammobearer
class O_soldierU_A_F : O_Soldier_Urban_base
{
magazines[] = {"100Rnd_762x51_NG7_Box_GT4","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"100Rnd_762x51_NG7_Box_GT4","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};

// CSAT Pacific Ammobearer
class O_T_Soldier_A_F : O_Soldier_A_F
{
backpack = "B_Carryall_ghex_OTAmmo_580_F";
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// Spetsnaz Ammobearer
class O_R_Patrol_Soldier_A_F : O_R_Soldier_Base_F
{
backpack = "B_Patrol_Carryall_green_Ammo_545_F";
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
};

//INDFOR
// Guard
class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F
{
magazines[] = {"200Rnd_556x45_Box_T4_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
respawnMagazines[] = {"200Rnd_556x45_Box_T4_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
};
// Oppressor
class I_C_Soldier_Para_4_F : I_C_Soldier_base_F
{
magazines[] = {"200Rnd_556x45_Box_T4_F","200Rnd_556x45_Box_T4_F","200Rnd_556x45_Box_T4_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
respawnMagazines[] = {"200Rnd_556x45_Box_T4_F","200Rnd_556x45_Box_T4_F","200Rnd_556x45_Box_T4_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
};
// AAF Autorifleman
class I_Soldier_AR_F : I_Soldier_02_F
{
magazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

// FIA Autorifleman
class I_G_Soldier_AR_F : I_G_Soldier_base_F
{
magazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
};
// LDF Autorifleman
class I_E_Soldier_AR_F : I_E_Soldier_base_F
{
magazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
respawnMagazines[] = {"200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","200Rnd_65x39_cased_Box_T4","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
};

// Sharpshooters / Marksmen / Ammo Bearers. Tracerless Magazines

// INDFOR
// FIA Marksman
class I_G_Soldier_M_F : I_G_Soldier_base_F
{
magazines[] = {"30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
};
//class O_G_Soldier_M_F : I_G_Soldier_M_F
class I_E_soldier_M_F : I_E_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","30Rnd_65x39_caseless_msbs_mag_NT","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
};

// BLUFOR
// Replacing MK-I EMR with SIG 556 DMR
class B_Sharpshooter_F : B_Soldier_base_F
{
magazines[] = {"20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
respawnMagazines[] = {"20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","20Rnd_223REM_Mag_NT_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
respawnWeapons[] = {"srifle_DMR_SIG556_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
weapons[] = {"srifle_DMR_SIG556_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
};
// CTRG Pacific Marksman
class B_CTRG_Soldier_M_tna_F : B_CTRG_Soldier_F
{
magazines[] = {"20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","20Rnd_762x51_HK_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// NATO Marksman?
class B_G_Soldier_M_F : I_G_Soldier_M_F
{
magazines[] = {"30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
respawnMagazines[] = {"30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","30Rnd_556x45_Stanag_NT","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
};
// NATO Marksman. Also Changing Gun
class B_soldier_M_F : B_Soldier_base_F 
{
magazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
weapons[] = {"arifle_MXM_MOS_LP_BI_F","hgun_P07_F","Throw","Put"};
respawnMagazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnWeapons[] = {"arifle_MXM_MOS_LP_BI_F","hgun_P07_F","Throw","Put"};
};
// NATO Recon Marksman
class B_recon_M_F : B_Soldier_recon_base
{
magazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","30Rnd_65x39_NT_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// NATO Pacific Marksman
class B_T_soldier_M_F : B_soldier_M_F
{
magazines[] = {"30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// NATO Pacific Recon Marksman
class B_T_Recon_M_F : B_recon_M_F
{
magazines[] = {"30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","30Rnd_65x39_NT_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};
// NATO Woodland Marksman
class B_W_soldier_M_F : B_soldier_M_F
{
magazines[] = {"30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","30Rnd_65x39_NT_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
};

// OPFOR
// CSAT Sharpshooter
class O_Sharpshooter_F : O_Soldier_base_F
{
magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
};
// CSAT Urban Sharpshooter
class O_Urban_Sharpshooter_F : O_Soldier_Urban_base
{
magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
};
// class O_V_Soldier_M_ghex_F : O_V_Soldier_M_hex_F
// Spetsnaz Marksman
class O_R_soldier_M_F : O_R_Soldier_Base_F
{
magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// Spetsnaz Sharpshooter
class O_R_Patrol_Soldier_M_F : O_R_soldier_M_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","30Rnd_762x39_AK12_NT_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
};
// CSAT Marksman
class O_soldier_M_F : O_Soldier_base_F
{
magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Recon Marksman
class O_recon_M_F : O_Soldier_recon_base
{
magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Urban Marksman
class O_soldierU_M_F : O_Soldier_Urban_base
{
magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Viper Marksman
class O_V_Soldier_M_hex_F : O_V_Soldier_base_F
{
backpack = "O_ViperHarness_hex_Marksman_F";
magazines[] = {"20Rnd_556x45_Katiba_NT_Mag","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"20Rnd_556x45_Katiba_NT_Mag","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","Chemlight_red","Chemlight_red"};
};

// Marksman
class O_T_Soldier_M_F : O_soldier_M_F
{
magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// Recon Marksman
class O_T_Recon_M_F : O_recon_M_F
{
magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// Spetsnaz Marksman
class O_R_Patrol_Soldier_M2_F : O_R_soldier_M_F
{
magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell"};
respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell"};
};
// Spetsnaz Recon Marksman
class O_R_recon_M_F : O_R_Soldier_recon_base
{
magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};

// MP-443 Fix for the remaining classes
// CSAT Asst. Autorifleman
class O_Soldier_AAR_F : O_Soldier_support_base_F
{
backpack = "B_Carryall_ocamo_AAR_2";
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// CSAT Pacific Asst. Autorifleman
class O_T_Soldier_AAR_F : O_Soldier_AAR_F
{
backpack = "B_Carryall_ghex_OTAAR_AAR_2_F";
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// class O_support_AMG_F : O_Soldier_support_base_F
// class O_support_AMort_F : O_Soldier_support_base_F
// class O_Soldier_AHAT_F : O_Soldier_support_base_F
// class O_Soldier_AAT_F : O_Soldier_support_base_F
// class O_Soldier_AAA_F : O_Soldier_AAT_F
class O_support_AMG_F;
class O_support_AMort_F;
class O_Soldier_AHAT_F;
class O_Soldier_AAT_F;
class O_Soldier_AAA_F;
class O_medic_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_crew_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_engineer_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_soldier_exp_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Fighter_Pilot_F : O_Pilot_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
};
// class O_support_GMG_F : O_Soldier_support_base_F
// class O_support_MG_F : O_Soldier_support_base_F
// class O_support_Mort_F : O_Soldier_support_base_F
// class O_soldier_mine_F : O_soldier_exp_F
class O_support_GMG_F;
class O_support_MG_F;
class O_support_Mort_F;
class O_soldier_mine_F;
class O_Soldier_AA_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_AT_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// class O_soldier_PG_F : O_Soldier_base_F
// class O_soldier_repair_F : O_Soldier_base_F
// class O_Soldier_F : O_Soldier_base_F
class O_soldier_PG_F;
class O_soldier_repair_F;
class O_Soldier_F;
class O_Soldier_LAT_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_HAT_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_lite_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Soldier_SL_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_Soldier_TL_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
};
class O_soldier_UAV_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// class O_soldier_UAV_06_F : O_soldier_UAV_F
// class O_soldier_UAV_06_medical_F : O_soldier_UAV_F
class O_Soldier_diver_base_F : O_Soldier_base_F
{
magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShellRed","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShellRed","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
};
// class O_diver_F : O_Soldier_diver_base_F
// class O_diver_exp_F : O_Soldier_diver_base_F
// class O_diver_TL_F : O_Soldier_diver_base_F
class O_recon_exp_F : O_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_recon_JTAC_F : O_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
};
class O_recon_medic_F : O_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_Pathfinder_F : O_Soldier_recon_base
{
magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
};
class O_recon_F : O_Soldier_recon_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_recon_LAT_F : O_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_recon_TL_F : O_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_sniper_F : O_Soldier_sniper_base_F
{
magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_ghillie_base_F : O_Soldier_sniper_base_F
{
magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
// class O_ghillie_ard_F : O_ghillie_base_F
// class O_ghillie_lsh_F : O_ghillie_base_F
// class O_ghillie_sard_F : O_ghillie_base_F
class O_spotter_F : O_Soldier_sniper_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
};
// class O_Story_CEO_F : O_Soldier_base_F
// class O_Story_Colonel_F : O_Soldier_base_F
class O_A_soldier_F : O_A_soldier_base_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
};
class O_soldierU_AAA_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_soldierU_AAT_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_soldierU_medic_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_engineer_U_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_soldierU_exp_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_SoldierU_GL_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_soldierU_AA_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_soldierU_AT_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_soldierU_repair_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
//class O_soldierU_F : O_Soldier_Urban_base
class O_soldierU_LAT_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_SoldierU_SL_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_soldierU_TL_F : O_Soldier_Urban_base
{
magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class B_ViperHarness_hex_Exp_F : B_ViperHarness_hex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};
};
class O_V_Soldier_JTAC_hex_F : O_V_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
};
class B_ViperHarness_hex_JTAC_F : B_ViperHarness_hex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};
};
// class O_V_Soldier_Medic_hex_F : O_V_Soldier_base_F
class B_ViperHarness_hex_Medic_F : B_ViperHarness_hex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};
};
class O_V_Soldier_LAT_hex_F : O_V_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x19_MP433_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
};
class B_ViperHarness_hex_LAT_F : B_ViperHarness_hex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};
};
// class O_V_Soldier_TL_hex_F : O_V_Soldier_base_F
class O_V_Soldier_TL_hex_F;
class B_ViperHarness_hex_TL_F : B_ViperHarness_hex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};
};
class O_T_Support_AMG_F : O_support_AMG_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Support_AMort_F : O_support_AMort_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_AHAT_F : O_Soldier_AHAT_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_AAA_F : O_Soldier_AAA_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_AAT_F : O_Soldier_AAT_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Medic_F : O_medic_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_T_Crew_F : O_crew_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Engineer_F : O_engineer_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_Exp_F : O_soldier_exp_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Support_GMG_F : O_support_GMG_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Support_MG_F : O_support_MG_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Support_Mort_F : O_support_Mort_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_helicrew_F;
class O_T_Helicrew_F : O_helicrew_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
// class O_T_soldier_mine_F : O_T_Soldier_Exp_F
class O_T_Soldier_AA_F : O_Soldier_AA_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_AT_F : O_Soldier_AT_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_PG_F : O_soldier_PG_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_Repair_F : O_soldier_repair_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_F : O_Soldier_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_LAT_F : O_Soldier_LAT_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_HAT_F : O_Soldier_HAT_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_SL_F : O_Soldier_SL_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_T_Soldier_UAV_F : O_soldier_UAV_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
// class O_T_soldier_UAV_06_F : O_T_Soldier_UAV_F
// class O_T_soldier_UAV_06_medical_F : 
// class O_T_Diver_F : O_diver_F
// class O_T_Diver_Exp_F : O_diver_exp_F
// class O_T_Diver_TL_F : O_diver_TL_F
class O_T_Recon_Exp_F : O_recon_exp_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Recon_Medic_F : O_recon_medic_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Recon_F : O_recon_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Recon_LAT_F : O_recon_LAT_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_T_Recon_TL_F : O_recon_TL_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
// class O_T_Sniper_F : O_sniper_F
// class O_T_ghillie_tna_F : O_ghillie_base_F 
// Spotter (Missing IR Pointer?)
class O_T_Spotter_F : O_spotter_F // Missing IR Pointer
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
};
//class O_V_Soldier_Exp_ghex_F : O_V_Soldier_Exp_hex_F
class B_ViperHarness_ghex_F;
class B_ViperHarness_ghex_Exp_F : B_ViperHarness_ghex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};	
};
// class O_V_Soldier_JTAC_ghex_F : O_V_Soldier_JTAC_hex_F
class B_ViperHarness_ghex_JTAC_F : B_ViperHarness_ghex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};	
};
// class O_V_Soldier_M_ghex_F : O_V_Soldier_M_hex_F
class B_ViperHarness_ghex_M_F : B_ViperHarness_ghex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};	
};
// class O_V_Soldier_ghex_F : O_V_Soldier_hex_F
// class O_V_Soldier_Medic_ghex_F : O_V_Soldier_Medic_hex_F
class B_ViperHarness_ghex_Medic_F : B_ViperHarness_ghex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};	
};
// class O_V_Soldier_LAT_ghex_F : O_V_Soldier_LAT_hex_F
class B_ViperHarness_ghex_LAT_F : B_ViperHarness_ghex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};	
};
// class O_V_Soldier_TL_ghex_F : O_V_Soldier_TL_hex_F
class B_ViperHarness_ghex_TL_F : B_ViperHarness_ghex_F
{
	class TransportMagazines
	{
		delete _xx_16Rnd_9x21_Mag;
		class _xx_17Rnd_9x19_MP433_Mag
		{
		count = 2;
		magazine = "17Rnd_9x19_MP433_Mag";	
		};
	};		
};
class O_R_medic_F : O_R_Soldier_Base_F
{
magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class O_R_soldier_exp_F : O_R_Soldier_Base_F
{
magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_R_JTAC_F : O_R_Soldier_Base_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","MiniGrenade","MiniGrenade","O_R_IR_Grenade","O_R_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","MiniGrenade","MiniGrenade","O_R_IR_Grenade","O_R_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_R_Soldier_LAT_F : O_R_Soldier_Base_F
{
magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_R_Patrol_Soldier_Medic : O_R_medic_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell"};
};
class O_R_Patrol_Soldier_Engineer_F : O_R_Soldier_Base_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell","LaserBatteries"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell","LaserBatteries"};
};
class O_R_Patrol_Soldier_LAT_F : O_R_Soldier_LAT_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","RPG32_F","SmokeShell"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","RPG32_F","SmokeShell"};
};
class O_R_recon_exp_F : O_R_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_R_recon_JTAC_F : O_R_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","MiniGrenade","MiniGrenade","O_R_IR_Grenade","O_R_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","MiniGrenade","MiniGrenade","O_R_IR_Grenade","O_R_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_R_recon_medic_F : O_R_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
};
class O_R_recon_LAT_F : O_R_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};	
};
class O_HeavyGunner_F : O_Soldier_base_F
{
backpack = "O_FieldPack_CSATHG_ocamo";
magazines[] = {"150Rnd_93x64_Mag_T4","150Rnd_93x64_Mag_T4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"150Rnd_93x64_Mag_T4","150Rnd_93x64_Mag_T4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
};
class O_Urban_HeavyGunner_F : O_Soldier_Urban_base
{
backpack = "O_FieldPack_CSATHG_oucamo";
magazines[] = {"150Rnd_93x64_Mag_T4","150Rnd_93x64_Mag_T4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
weapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
respawnMagazines[] = {"150Rnd_93x64_Mag_T4","150Rnd_93x64_Mag_T4","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
respawnWeapons[] = {"MMG_01_hex_MOS_LP_F","hgun_Rook40_F","Throw","Put"};
};
// Creating Missing Pacific Mortar
class O_T_Mortar_01_F : O_Mortar_01_F
{
crew = "O_T_Soldier_F";
faction = "OPF_T_F";
};

// class B_W_Helipilot_F : B_Helipilot_F
// Name Fix, Extra Mags
class I_L_Looter_Rifle_F : I_L_Soldier_Base_F
{
displayName = "Looter (Rifle)";
magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","20Rnd_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","20Rnd_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
};
class I_L_Hunter_F : I_L_Soldier_Base_F
{
magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","20Rnd_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","20Rnd_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
};

// Grenadiers. Changing Ammo, adding where needed
// 3GL
class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_Story_Protagonist_F : B_Soldier_02_f
{
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","3Rnd_HE_Grenade_shell","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeGreen_F"};
respawnmagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","3Rnd_HE_Grenade_shell","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeGreen_F"};
};
class B_Soldier_TL_F : B_Soldier_03_f
{
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_Patrol_Soldier_TL_F : B_Soldier_TL_F
{
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
};

class B_T_Soldier_TL_F : B_Soldier_TL_F
{
magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_W_Soldier_TL_F : B_Soldier_TL_F
{
magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_recon_JTAC_F : B_Soldier_recon_base
{
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_T_Recon_JTAC_F : B_recon_JTAC_F
{
magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_Soldier_GL_F : B_Soldier_base_F
{
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_T_Soldier_GL_F : B_Soldier_GL_F
{
magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};
class B_W_Soldier_GL_F : B_Soldier_GL_F
{
magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeWhite_F","1Rnd_3GL_SmokeBlue_F","1Rnd_3GL_SmokeGreen_F","1Rnd_3GL_SmokeOrange_F"};
};

// 35mmCL
class O_T_Soldier_GL_F : O_Soldier_GL_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_Red_Grenade","1Rnd_QGL10A_DFD10_Green_Grenade","1Rnd_QGL10A_DFD10_Yellow_Grenade"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_Red_Grenade","1Rnd_QGL10A_DFD10_Green_Grenade","1Rnd_QGL10A_DFD10_Yellow_Grenade"};
};
class O_A_soldier_TL_F : O_A_soldier_base_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
};
class O_T_Recon_JTAC_F : O_recon_JTAC_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_Red_Grenade","1Rnd_QGL10A_DFD10_Green_Grenade","1Rnd_QGL10A_DFD10_Yellow_Grenade"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_Red_Grenade","1Rnd_QGL10A_DFD10_Green_Grenade","1Rnd_QGL10A_DFD10_Yellow_Grenade"};
};
class O_T_Soldier_TL_F : O_Soldier_TL_F
{
magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_Red_Grenade","1Rnd_QGL10A_DFD10_Green_Grenade","1Rnd_QGL10A_DFD10_Yellow_Grenade"};
respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","1Rnd_QGL10A_DFS10_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_White_Grenade","1Rnd_QGL10A_DFD10_Red_Grenade","1Rnd_QGL10A_DFD10_Green_Grenade","1Rnd_QGL10A_DFD10_Yellow_Grenade"};
};

// 40mmCL
class O_R_Soldier_GL_F : O_R_Soldier_Base_F
{
magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade"};
respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade"};
};
class O_R_Patrol_Soldier_GL_F : O_R_Soldier_GL_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell","UGL_FlareGreen_GP25_F","UGL_FlareRed_GP25_F"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","HandGrenade","HandGrenade","SmokeShell","UGL_FlareGreen_GP25_F","UGL_FlareRed_GP25_F"};
};
class O_R_recon_GL_F : O_R_Soldier_recon_base
{
magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade"};
respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade"};
};
class O_R_Soldier_TL_F : O_R_Soldier_Base_F
{
magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade"};
respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade"};
};
class O_R_Patrol_Soldier_TL_F : O_R_Soldier_TL_F
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade","HandGrenade","HandGrenade","SmokeShell"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade","HandGrenade","HandGrenade","SmokeShell"};
};
class O_R_recon_TL_F : O_R_Soldier_recon_base
{
magazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
respawnMagazines[] = {"17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","17Rnd_9x19_MP433_Mag","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","30rnd_762x39_AK12_Lush_Mag_Tracer_F","MiniGrenade","MiniGrenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VDG25_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_VOG25PM_Grenade","1Rnd_GP25_RLV_HEDP_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
};
class I_C_Soldier_Bandit_6_F : I_C_Soldier_base_F
{
magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade"};
respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade"};
};
class I_C_Soldier_Para_6_F : I_C_Soldier_base_F
{
magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade"};
respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade","1Rnd_GP25_VOG25M_Grenade"};
};

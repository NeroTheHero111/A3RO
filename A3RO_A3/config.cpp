class CfgPatches
{
    class A3RO_A3
    {
    name = "Arma 3 Realism Overhaul - Vanilla";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"A3_Data_F_AoW_Loadorder",
	"A3_Data_F_Argo_Loadorder",
	"A3_Data_F_Bootcamp_Loadorder",
	"A3_Data_F_Curator_Loadorder",
	"A3_Data_F_Decade_Loadorder",
	"A3_Data_F_Destroyer_Loadorder",
	"A3_Data_F_Enoch_Loadorder",
	"A3_Data_F_Exp_A_Loadorder",
	"A3_Data_F_Exp_B_Loadorder",
	"A3_Data_F_Exp_Loadorder",
	"A3_Data_F_Heli_Loadorder",
	"A3_Data_F_Jets_Loadorder",
	"A3_Data_F_Kart_Loadorder",
	"A3_Data_F_Loadorder",
	"A3_Data_F_Mark_Loadorder",
	"A3_Data_F_Mod_Loadorder",
	"A3_Data_F_Oldman_Loadorder",
	"A3_Data_F_Orange_Loadorder",
	"A3_Data_F_Patrol_Loadorder",
	"A3_Data_F_Sams_Loadorder",
	"A3_Data_F_Tacops_Loadorder",
	"A3_Data_F_Tank_Loadorder",
	"A3_Data_F_Warlords_Loadorder",
	"cba_main",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 0;
    };
};

// Increasing Max Load to account for the significant Weight increase in some of the Equipment (Mines, MG Boxes, Emplacements...)
class CfgInventoryGlobalVariable
{
maxSoldierLoad = 1500; // 1000 > 1500. Equals to a total of 150lb before not being able to jog.
};
// Decreasing Global Stamina Drain, increasing Duration to balance Weight increase in heavier Equipment.
class CfgMovesFatigue
{
aimPrecisionSpeedCoef = 5;
staminaCooldown = 10;
staminaDuration = 66; // 60 > 66
staminaRestoration = 30;
terrainDrainRun = -0.9; // -1 > -0.9
terrainDrainSprint = -0.9; // -1 > -0.9
terrainSpeedCoef = 0.9;
};
// Editing Mine Detector UI to be in line with reduced Range functionality DELAYED
/*class RscCustomInfoMineDetect
{
	
};*/
// Adding new DBAL-A2 Module using CBA Switching System to replace default IR Lasers
class asdg_SlotInfo;
class asdg_FrontSideRail : asdg_SlotInfo
{
	class compatibleItems
	{
	acc_pointer_IR_LO_IL_Red = 1;
	acc_pointer_IR_LO_ILL_Red = 1;
	acc_pointer_IR_HI_L_Red = 1;
	acc_pointer_IR_HI_IL_Red = 1;
	acc_pointer_IR_HI_ILL_Red = 1;
	acc_pointer_IR_VIS_L_Red = 1;
	acc_pointer_IR_LO_L_Green = 1;
	acc_pointer_IR_LO_IL_Green = 1;
	acc_pointer_IR_LO_ILL_Green = 1;
	acc_pointer_IR_HI_L_Green = 1;
	acc_pointer_IR_HI_IL_Green = 1;
	acc_pointer_IR_HI_ILL_Green = 1;
	acc_pointer_IR_VIS_L_Green = 1;
	};
};

// Adding new XT11GT Variants.
class PointerSlot;
class ESD_PointerSlot : PointerSlot
{
	class compatibleItems
	{
	acc_esd_01_flashlight_1200 = 1;
	acc_esd_01_flashlight_3300 = 1;
	};
};

// Adding Attachments from New Vanilla Rail Classes to account for edge cases
class PointerSlot_Rail : PointerSlot
{
	class compatibleItems
	{
	acc_flashlight_broken = 1;
	acc_pointer_IR_LO_IL_Red = 1;
	acc_pointer_IR_LO_ILL_Red = 1;
	acc_pointer_IR_HI_L_Red = 1;
	acc_pointer_IR_HI_IL_Red = 1;
	acc_pointer_IR_HI_ILL_Red = 1;
	acc_pointer_IR_VIS_L_Red = 1;
	acc_pointer_IR_LO_L_Green = 1;
	acc_pointer_IR_LO_IL_Green = 1;
	acc_pointer_IR_LO_ILL_Green = 1;
	acc_pointer_IR_HI_L_Green = 1;
	acc_pointer_IR_HI_IL_Green = 1;
	acc_pointer_IR_HI_ILL_Green = 1;
	acc_pointer_IR_VIS_L_Green = 1;
	};
};
class PointerSlot_Launcher : PointerSlot
{
	class compatibleItems
	{
	acc_flashlight_broken = 1;
	acc_pointer_IR_broken = 1;
	acc_pointer_IR_LO_IL_Red = 1;
	acc_pointer_IR_LO_ILL_Red = 1;
	acc_pointer_IR_HI_L_Red = 1;
	acc_pointer_IR_HI_IL_Red = 1;
	acc_pointer_IR_HI_ILL_Red = 1;
	acc_pointer_IR_VIS_L_Red = 1;
	acc_pointer_IR_LO_L_Green = 1;
	acc_pointer_IR_LO_IL_Green = 1;
	acc_pointer_IR_LO_ILL_Green = 1;
	acc_pointer_IR_HI_L_Green = 1;
	acc_pointer_IR_HI_IL_Green = 1;
	acc_pointer_IR_HI_ILL_Green = 1;
	acc_pointer_IR_VIS_L_Green = 1;
	};
};
/*class PointerSlot_Pistol : PointerSlot
{
	class compatibleItems
	{
	
	};
};*/

// Adding existing and new hidden Muzzle Attachments to Slots for Compatibility
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};

class asdg_MuzzleSlot_45ACP : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	};
};
class asdg_MuzzleSlot_45ACP_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	};
};
class asdg_MuzzleSlot_46 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_M = 1;
	muzzle_snds_m_khk_F = 1;
	muzzle_snds_m_snd_F = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_545R : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_545 = 1;
	muzzle_snds_545_khk_F = 1;
	muzzle_snds_545_snd_F = 1;
	};
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_smokey_blk_F = 1;
	muzzle_snds_smokey_ghex_F = 1;
	muzzle_snds_smokey_hex_F = 1;
	};
};
class asdg_MuzzleSlot_58 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_65 : asdg_MuzzleSlot // Removed Inheritance of 7.62 Suppressors on purpose
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_H_MG = 0;
	muzzle_snds_H_MG_blk_F = 0;
	muzzle_snds_H_MG_khk_F = 0;
	muzzle_snds_H_SW = 0;
	muzzle_snds_B = 1;
	muzzle_snds_B_arid_F = 1;
	muzzle_snds_B_khk_F = 1;
	muzzle_snds_B_lush_F = 1;
	muzzle_snds_B_snd_F = 1;
	};
};
class asdg_MuzzleSlot_762R : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class asdg_MuzzleSlot_762R_PK : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_762R_SVD : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_vs121_F = 1;
	};
};
class asdg_MuzzleSlot_762R_VZ58 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_93x64 : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	muzzle_snds_smg_01_F = 1;
	muzzle_snds_acp = 1;
	};
};
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	muzzle_snds_smg_01_F = 1;
	muzzle_snds_acp = 1;
	};
};

// Adding existing and new hidden Optics to Rails for Compatibility
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
	optic_ico_01_black_f = 1;
	optic_ico_01_camo_f = 1;
	optic_ico_01_f = 1;
	optic_ico_01_sand_f = 1;
	optic_MRD = 1;
	optic_MRD_black = 1;
	optic_Yorris = 1;
	optic_dcl120 = 1;
	optic_srs = 1;
	};
};
class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
	optic_ico_01_black_f = 1;
	optic_ico_01_camo_f = 1;
	optic_ico_01_f = 1;
	optic_ico_01_sand_f = 1;
	optic_MRD = 1;
	optic_MRD_black = 1;
	optic_Yorris = 1;
	optic_dcl120 = 1;
	optic_srs = 1;
	};
};
// Removing too long Optics
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems : compatibleItems
	{
	optic_dcl120 = 0;
	optic_ico_01_black_f = 0;
	optic_ico_01_camo_f = 0;
	optic_ico_01_f = 0;
	optic_ico_01_sand_f = 0;
	};
};

// Adding existing and new hidden Muzzle Attachments to Vanilla Slots for Compatibility
class MuzzleSlot;
class MuzzleSlot_338 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};
class MuzzleSlot_45ACP : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	};
};
class MuzzleSlot_545R: MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_545 = 1;
	muzzle_snds_545_khk_F = 1;
	muzzle_snds_545_snd_F = 1;
	};
};
class MuzzleSlot_556 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};
class MuzzleSlot_57 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_58 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_65 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_65MG : MuzzleSlot_65
{
	class compatibleItems : compatibleItems // Inheritance required for ACR HB to display the correct Muzzle Attachments
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_H_MG = 0;
	muzzle_snds_H_MG_blk_F = 0;
	muzzle_snds_H_MG_khk_F = 0;
	muzzle_snds_H_SW = 0;
	};
};

class MuzzleSlot_762 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	};
};

class MuzzleSlot_762R : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_mzls_H = 1;
	muzzle_mzls_l = 1;
	muzzle_snds_B = 1; // Added since there are no other viable options in Vanilla
	muzzle_snds_B_arid_F = 1;
	muzzle_snds_B_khk_F = 1;
	muzzle_snds_B_lush_F = 1;
	muzzle_snds_B_snd_F = 1;
	};
};

class MuzzleSlot_93 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	};
};

class MuzzleSlot_9mm : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_osprey_snd_F = 1;
	muzzle_snds_smg_01_F = 1;
	muzzle_snds_acp = 1;
	};
};

// Creating Additional MuzzleSlots
class MuzzleSlot_408 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_408 = 1;
	muzzle_snds_408_tan = 1;
	};	
};
class MuzzleSlot_375 : MuzzleSlot
{
	class compatibleItems
	{
	muzzle_tma_65 = 1;
	muzzle_snds_375 = 1;
	muzzle_snds_375_tan = 1;
	};	
};

// Creating new Effect Configuration Classes. Editing existing.
class CfgCloudlets
{
	class SmokeShellWhiteWater;
	class SmokeShellWhiteUW;
	// Changing Purple to Violet. Sue me.
	class SmokeShellPurpleWater : SmokeShellWhiteWater
	{
	colorCoef[] = {0.502,0,0.502,1};
	};
	class SmokeShellPurpleUW : SmokeShellWhiteUW
	{
	color[] = {{0.502,0,0.502,1}};
	};
	// Altering other existing Smoke
	class SmokeShellBlueWater : SmokeShellWhiteWater
	{
	colorCoef[] = {0,0.7,1,1};
	};
	class SmokeShellBlueUW : SmokeShellWhiteUW
	{
	color[] = {{0,0.7,1,1}};
	};
	class SmokeShellOrangeWater : SmokeShellWhiteWater
	{
	colorCoef[] = {1,0.7,1,1};
	};
	class SmokeShellOrangeUW : SmokeShellWhiteUW
	{
	color[] = {{1,0.7,1,1}};
	};
	class SmokeShellRedWater : SmokeShellWhiteWater
	{
	colorCoef[] = {1,0,0.3,1};
	};
	class SmokeShellRedUW : SmokeShellWhiteUW
	{
	color[] = {{1,0,0.3,1}};
	};
	class SmokeShellGreenWater : SmokeShellWhiteWater
	{
	colorCoef[] = {0,0.75,0.55,1};
	};
	class SmokeShellGreenUW : SmokeShellWhiteUW
	{
	color[] = {{0,0.75,0.55,1}};
	};
	class SmokeShellYellowWater : SmokeShellWhiteWater
	{
	colorCoef[] = {1,0.9,0,1};
	};
	class SmokeShellYellowUW : SmokeShellWhiteUW
	{
	color[] = {{1,0.9,0,1}};
	};
	// Practice Dye
	class SmokeShellPracticeUW : SmokeShellOrangeUW // Not really sure this is different in behaviour than the regular Orange but I already made it now.
	{
	lifeTime = 0.23;
	lifeTimeVar = 0.03;
	MoveVelocityVar[] = {0.075,0.075,0.075};
	};
	class SmokeShellPractice2UW : SmokeShellPracticeUW
	{
	postEffects = "SmokeShellOrangeWater";
	};
	// Thermobaric Explosion
	class HeavyBombExp1;
	class ThermobaricGrenadeExp1 : HeavyBombExp1
	{
	animationSpeed[] = {0.75};
	lifeTime = 0.1;
	lifeTimeVar = 0.02;
	moveVelocity[] = {0,15,0};
	MoveVelocityVar[] = {3,3,3};
	positionVar[] = {1,1,1};
	size[] = {9,10};
	};
	class GrenadeSmoke1;
	class ThermobaricGrenadeSmoke1 : GrenadeSmoke1
	{
	size[] = {"0.013 * intensity + 4","0.0125 * intensity + 7","0.013 * intensity + 9","0.013 * intensity + 11"};
	};
	// Instant Smoke
	class WPCloud;
	class SmokeScreenUGL1 : WPCloud
	{
	moveVelocity[] = {0,-1,0}; // Somehow its x z y?
	moveVelocityVar[] = {0.333,-0.333,0};
	rotationVelocity = 4;
	rotationVelocityVar = 2;
	weight = 12.764;
	volume = 10;
	rubbing = 0.2;
	size[] = {0.001,12,15,17,18,19,0.002};
	sizeVar = 0.001;
	position[] = {0,0,0};
	positionVar[] = {0.5,0,0};
	randomDirectionPeriod = 0.333;
	};
	// Smoke Trail
	class WPTrailEffect;
	class TrackingGrenadeTrailEffect: WPTrailEffect
	{
	interval = 0.02;
	lifeTime = 10;
	weight = 10.075;
	rubbing = 0.1;
	//size[] = {0.75,1.75};
	color[] =
		{
				{0.9883,0.8606,0.0719,0},
				{0.9883,0.8606,0.0719,0.8},
				{0.9883,0.8606,0.0719,0.6},
				{0.9883,0.8606,0.0719,0.5},
				{0.9883,0.8606,0.0719,0.3},
				{0.9883,0.8606,0.0719,0.1},
				{0.9883,0.8606,0.0719,0}
		};
	lifeTimeVar = 0.5;
	sizeVar = 0.33;
	};
};

class CfgLights
{
	class GrenadeExploLight;
	class ThermobaricGrenadeExpLight : GrenadeExploLight
	{
	brightness = 100;
	};
	class Chemlight_Green
	{
	ambient[] = {0,0,0,0};
	brightness = 1;
	color[] = {0,1,0,1}; // Greener
	diffuse[] = {0,0.5,0}; // Halving Diffuse Values
	drawLight = 0;
	intensity = 1200; // 4000 > 1200
	position[] = {0,0,0};
	};
	class Chemlight_Blue : Chemlight_Green
	{
	color[] = {0,0.5,1,1}; // Bluer
	diffuse[] = {0,0.25,0.5};
	};
	class Chemlight_Red : Chemlight_Green
	{
	color[] = {1,0,0,1}; // Redder
	diffuse[] = {0.5,0,0};
	};
	class Chemlight_Yellow : Chemlight_Green
	{
	color[] = {1,1,0,1}; // Editing as its practically orange.
	diffuse[] = {0.5,0.5,0};
	};
	class Chemlight_Orange : Chemlight_Green
	{
	color[] = {1,0.5,0,1};
	diffuse[] = {0.5,0.25,0};
	};
	class Chemlight_White : Chemlight_Green
	{
	color[] = {1,1,1,1};
	diffuse[] = {0.5,0.5,0.5};
	};
	class Chemlight_IR : Chemlight_Green
	{
	color[] = {0,0,0,0};
	diffuse[] = {0,0.00002,0};
	intensity = 2500000;
	};
	class Chemlight_Yellow_HI : Chemlight_Yellow
	{
	intensity = 12000;
	};
	class Chemlight_Red_HI : Chemlight_Red
	{
	intensity = 12000;
	};
	class Chemlight_White_HI : Chemlight_White
	{
	intensity = 12000;
	};
	class Chemlight_Orange_UHI : Chemlight_Orange
	{
	intensity = 36000;
	};
};

// Creating corresponding Effect Classes
// Practice Round Poof Effect
class SmokeShellWhiteEffect
{
class SmokeShell;
class SmokeShell2;
class SmokeShell2UW;
class SmokeShellUW;
};
class SmokeShellPracticeEffect : SmokeShellWhiteEffect
{
	class SmokeShell : SmokeShell // For new Smoke Effects, SmokeShell and SmokeShell2 MUST BE INHERITED from the above class
	{
	intensity = 1;
	interval = 1;
	position[] = {0,0,0};
	simulation = "particles";
	type = "SmokeShellWhite";
	};
	class SmokeShell2 : SmokeShell2UW // Otherwise, even with identical values, no Smoke will be visible. AAAAAAAAAAAAAH
	{
	intensity = 1;
	interval = 1;
	position[] = {0,0,0};
	simulation = "particles";
	type = "SmokeShellWhite2";
	};
	class SmokeShell2UW
	{
	intensity = 1;
	interval = 1;
	position[] = {0,0,0};
	simulation = "particles";
	type = "SmokeShellPractice2UW";
	};
	class SmokeShellUW
	{
	intensity = 1;
	interval = 1;
	position[] = {0,0,0};
	simulation = "particles";
	type = "SmokeShellPracticeUW";
	};
};
// Thermobaric Expansion effect
class ThermobaricExplosion // Based off HeavyBombExplosion (Cruise Missile)
{
	class ThermobaricGrenadeExp1
	{
	intensity = 1;
	interval = 1;
	lifeTime = 0.1;
	position[] = {0,0,0};
	simulation = "particles"; //CfgCloudlets
	type = "ThermobaricGrenadeExp1";
	};
	class ThermobaricGrenadeSmoke1
	{
	intensity = 1;
	interval = 1;
	lifeTime = 5;
	position[] = {0,0,0};
	simulation = "particles";
	type = "ThermobaricGrenadeSmoke1";
	};
	class ThermobaricGrenadeExpLight
	{
	intensity = 0.1;
	interval = 1;
	lifeTime = 0.5;
	position[] = {0,0,0};
	simulation = "light"; // CfgLights
	type = "ThermobaricGrenadeExpLight";
	};
};
// Smoke Screen
class SmokeScreenUGLExplosion // Based off HeavyBombExplosion (Cruise Missile)
{
	class SmokeScreenUGL1
	{
	intensity = 1;
	interval = 1;
	position[] = {0,0,0};
	simulation = "particles";
	type = "SmokeScreenUGL1";
	};
};
// Smoke Screen
class TrackingGrenadeTrail // Based off HeavyBombExplosion (Cruise Missile)
{
	class TrackingGrenadeTrailEffect
	{
	intensity = 1;
	interval = 1;
	position[] = {0,0,0};
	simulation = "particles";
	type = "TrackingGrenadeTrailEffect";
	};
};

// New ChemLight effects.
class ChemlightLight_orange
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_Orange";
	};
};
class ChemlightLight_white
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_White";
	};
};
class ChemlightLight_IR
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_IR";
	};
};
class ChemlightLight_yellow_HI
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_Yellow_HI";
	};
};
class ChemlightLight_red_HI
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_Red_HI";
	};
};
class ChemlightLight_white_HI
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_White_HI";
	};
};
class ChemlightLight_orange_UHI
{
	class Light1
	{
	simulation = "light";
	type = "Chemlight_Orange_UHI";
	};
};

class CfgEditorSubcategories
{
	// Adding Shotgun Editor Subcategory
	class EdSubcat_Shotguns
	{
	displayName = "Shotguns";
	};
	// Adding Sport & Hunting Subcategory
	class EdSubcat_Sport_Hunt
	{
	displayName = "Sporting & Hunting Rifles";
	};
	// Editing Collimator Editor Subcategory
	class EdSubcat_TopSlot_Collimators
	{
	displayName = "Collimator Sights and Red Dots";
	};
	// Editing Optics Editor Subcategory
	class EdSubcat_TopSlot_Optics
	{
	displayName = "Scopes";
	};
};

// Misc. Base Class declaration
class ViewOptics;

class CfgAmmo
{
#include "\A3RO_A3\A3_CfgAmmo.hpp"
};

class CfgMagazines
{
#include "\A3RO_A3\A3_CfgMagazines.hpp"
};

class CfgMagazineWells
{
#include "\A3RO_A3\A3_CfgMagazineWells.hpp"
};

class CfgVehicles
{
#include "\A3RO_A3\A3_CfgVehicles.hpp"
};

class CfgWeapons
{
#include "\A3RO_A3\A3_CfgWeapons.hpp"
};

// Mission / Scenario Incompatible Weapons / Magazines / Items Replacements
class CfgMissions
{
	class Campaigns
	{	
		class EastWind
		{
			class Campaign
			{
				class MissionDefault;
				class Missions
				{
					class B_hub01 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class Default;
								class BIS_Armory : Default
								{
								primaryWeapon[] = {{"SMG_02_ParaB_ACO_F","30Rnd_9x19_SMG_Mag",6}};
								};
								class BIS_HUB_Medic : Default
								{
								primaryWeapon[] = {{"hgun_cpw_ParaB_F","30Rnd_9x19_Mag",6}};
								};
							};
						};
					};
					class B_hub02 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class Default;
								class Skirmish : Default {};
								class BIS_FullStart_B_m01 : Default
								{
								primaryWeapon[] = {{"SMG_02_F","30Rnd_9x19_SMG_Mag",4}};
								};
								class BIS_HUB_Officer : Default
								{
								primaryWeapon[] = {{"SMG_02_ParaB_ACO_F","30Rnd_9x19_SMG_Mag",4}};
								};
								class BIS_HUB_Medic : Default
								{
								primaryWeapon[] = {{"hgun_cpw_ParaB_F","30Rnd_9x19_Mag",6}};
								};
								class BIS_Skirmish03Squad8 : Skirmish
								{
								primaryWeapon[] = {{"SMG_02_ParaB_ACO_F","30Rnd_9x19_SMG_Mag",8}};
								};
							};
						};
					};
					class B_hub03 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class Default;
								class Skirmish : Default {};
								class BIS_HUB_RepairSpecialist : Default
								{
								primaryWeapon[] = {{"SMG_02_F","30Rnd_9x19_SMG_Mag",4}};
								};
								class BIS_FullStart_B_m05 : Default
								{
								primaryWeapon[] = {{"SMG_02_ParaB_ACO_F","30Rnd_9x19_SMG_Mag",4}};
								};
								class BIS_HUB_Medic : Default
								{
								primaryWeapon[] = {{"hgun_cpw_ParaB_F","30Rnd_9x19_Mag",6}};
								};
								class BIS_Skirmish02Squad7 : Skirmish
								{
								primaryWeapon[] = {{"SMG_02_ParaB_ACO_F","30Rnd_9x19_SMG_Mag",8}};
								};
							};
						};
					};
					class B_m02_1 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class JoinedNP;
								class BIS_autorifleman : JoinedNP
								{
								add[] = {{"item","muzzle_snds_acp"},{"item","muzzle_snds_M"}};
								};
							};
						};
					};
					class B_m02_2 : MissionDefault
					{
						class Description
						{
							class TemplateCharacters;
							class Characters : TemplateCharacters
							{
								class Squad;
								class BIS_autorifleman : Squad
								{
								add[] = {{"item","muzzle_snds_acp"},{"item","muzzle_snds_M"}};
								};
							};
						};
					};	
				};
			};
		};
	};
};

// Firing Drills
class CfgFiringDrills
{
	class SP_FD01
	{
	magazines[] = {"30Rnd_9x19_SMG_Mag","17Rnd_9x19_MP433_Mag"};
	magazinesCompetitor[] = {"30Rnd_9x19_SMG_Mag","17Rnd_9x19_MP433_Mag"};
	weapons[] = {"SMG_02_ParaB_ACO_F","hgun_Rook40_F"};
	weaponsCompetitor[] = {"SMG_02_ParaB_ACO_F","hgun_Rook40_F"};
	};
	class SP_FD08
	{
	magazines[] = {"30Rnd_9x19_Mag","30Rnd_556x45_Stanag_NT","9Rnd_45ACP_Mag"}; // Repl w No Tracer
	magazinesCompetitor[] = {"30Rnd_9x19_Mag","9Rnd_45ACP_Mag"};
	weapons[] = {"hgun_cpw_ParaB_F","arifle_Mk20C_plain_F","hgun_ACPC2_F"};
	weaponsCompetitor[] = {"hgun_cpw_ParaB_F","hgun_ACPC2_F"};
	};
	class SP_FD11
	{
	magazines[] = {"20Rnd_223REM_Mag_NT_F","130Rnd_338_Mag","16Rnd_9x21_Mag"};
	magazinesCompetitor[] = {"20Rnd_223REM_Mag_NT_F","16Rnd_9x21_Mag"};
	weapons[] = {"srifle_DMR_SIG556_AMS_F","MMG_02_black_RCO_BI_F","hgun_P07_F"};
	weaponsCompetitor[] = {"srifle_DMR_SIG556_AMS_F","hgun_P07_F"};
	};
};
// Syndikat Gear
class SyndikatGear
{
primaryWeapons[] = {{{"arifle_AKS_F",1},{"SMG_05_ParaB_F",0.7},{"SMG_03C_TR_black",0.5},{"arifle_AKM_F",0.7},{"sgun_HunterShotgun_01_F",1},{"sgun_HunterShotgun_01_sawedoff_F",0.2},{"srifle_DMR_06_hunter_F",0.6},{"arifle_SPAR_01_blk_F",0.2},{"arifle_AK12_F",0.2},{"SMG_02_ParaB_F",0.2},{"SMG_01_F",0.2},{"srifle_DMR_07_blk_F",0.4},{"srifle_DMR_01_F",0.3},{"LMG_03_F",0.3}},{{"arifle_AKM_F",1},{"arifle_AKS_F",1},{"arifle_CTAR_blk_F",0.5},{"sgun_HunterShotgun_01_F",0.5},{"sgun_HunterShotgun_01_sawedoff_F",0.1},{"srifle_DMR_07_blk_F",0.5},{"arifle_SPAR_01_blk_F",0.3},{"LMG_03_F",0.4},{"SMG_03_TR_black",0.2},{"arifle_AK12_F",0.3},{"arifle_AK12_GL_F",0.3},{"arifle_CTARS_blk_F",0.3},{"arifle_CTAR_GL_blk_F",0.2},{"srifle_DMR_07_blk_F",0.2},{"arifle_Katiba_F",0.2},{"srifle_DMR_06_olive_F",0.2},{"arifle_RPK16_F",0.1},{"LMG_Zafir_F",0.1},{"srifle_EBR_F",0.2}},{{"arifle_AKM_F",0.7},{"arifle_AKS_F",0.3},{"arifle_CTAR_blk_F",0.6},{"sgun_HunterShotgun_01_F",0.1},{"srifle_DMR_07_blk_F",0.5},{"srifle_DMR_07_ghex_F",0.6},{"arifle_SPAR_01_blk_F",0.6},{"LMG_03_F",0.4},{"SMG_03_TR_black",0.2},{"arifle_AK12_F",1},{"arifle_AK12_lush_F",0.1},{"arifle_AK12_GL_F",0.2},{"arifle_AK12_GL_lush_F",0.2},{"arifle_CTARS_blk_F",0.2},{"arifle_CTAR_GL_blk_F",0.2},{"srifle_DMR_07_blk_F",0.2},{"arifle_Katiba_F",0.3},{"srifle_DMR_06_olive_F",0.2},{"arifle_RPK16_F",0.4},{"LMG_Zafir_F",0.3},{"srifle_EBR_F",0.3},{"arifle_AK12U_F",0.5},{"arifle_AK12U_lush_F",0.5},{"arifle_CTARS_ghex_F",0.5},{"arifle_CTAR_ghex_F",0.4},{"arifle_CTAR_GL_ghex_F",0.4},{"arifle_CTAR_GL_blk_F",0.4},{"srifle_DMR_05_blk_F",0.3},{"srifle_GM6_F",0.2},{"srifle_DMR_02_F",0.1},{"srifle_DMR_SIG556_khaki_F",0.2},{"srifle_DMR_06_camo_F",0.3},{"srifle_DMR_06_olive_F",0.2},{"LMG_Mk200_black_F",0.2},{"arifle_RPK12_lush_F",0.3},{"arifle_SPAR_01_GL_blk_F",0.2},{"arifle_SPAR_02_blk_F",0.3},{"arifle_SPAR_03_blk_F",0.3},{"arifle_MSBS65_Mark_black_F",0.2},{"arifle_MSBS65_GL_black_F",0.2},{"MMG_01_tan_F",0.2},{"arifle_ARX_blk_F",0.3}}};
};
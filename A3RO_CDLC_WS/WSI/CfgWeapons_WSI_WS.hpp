class Rifle;
class Rifle_Base_F: Rifle
{
	class WeaponSlotsInfo;
};
class Rifle_Long_Base_F : Rifle_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo{};
};
class Rifle_Short_Base_F : Rifle_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo{};
};
class Pistol;
class Pistol_Base_F : Pistol
{
	class WeaponSlotsInfo;
};
class Launcher;
class Launcher_Base_F : Launcher
{
	class WeaponSlotsInfo;
};
class UGL_F;

// Galil ARM 5.56 Base Class
class arifle_Galat_base_lxWS : Rifle_Base_F
{
discreteDistance[] = {100,300,500};
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.000872664;
	reloadTime = "60/650";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.000872664;
	reloadTime = "60/650";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 95.90108;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.483,0.24};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.039,0.35};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.275,0.36};
		iconScale = 0.19;
		};
	};
};

// Galil ARM. Re-adding Semi-Auto
class arifle_Galat_lxWS : arifle_Galat_base_lxWS
{
modes[] = {"Single","FullAuto","close","short","medium","far_optic1","far_optic2","single_medium_optics1","single_medium_optics2"};	
class FullAuto;
class Single;
};
class arifle_Galat_poly_lxWS : arifle_Galat_lxWS
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 95.87108;
	};
};

// Galil ARM Weathered. Increasing Dispersion. Hiding AI Firemodes from Player
class arifle_Galat_worn_lxWS : arifle_Galat_lxWS
{
	class FullAuto : FullAuto
	{
	dispersion = 0.001163552;
	reloadTime = "60/650";
	};
	class close : FullAuto
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class far_optic1 : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class far_optic2 : far_optic1
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class medium : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class short : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.001163552;
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
};

// Removing Full Auto for Semi-Auto Galil Versions
class arifle_Galat_Semi_base_lxWS : arifle_Galat_base_lxWS
{
modes[] = {"Single","single_medium_optics1","single_medium_optics2"};	
	class FullAuto : FullAuto
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class close : FullAuto
	{
	reloadTime = "60/600";
	};
	class far_optic1 : close
	{
	reloadTime = "60/600";
	};
	class far_optic2 : far_optic1
	{
	reloadTime = "60/600";
	};
	class medium : close
	{
	reloadTime = "60/600";
	};
	class short : close
	{
	reloadTime = "60/600";
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class single_medium_optics1 : Single
	{
	reloadTime = "60/600";
	};
	class single_medium_optics2 : single_medium_optics1
	{
	reloadTime = "60/600";
	};
};

// Adjusting Weight of Model 372
class arifle_Galat_M372_lxWS : arifle_Galat_Semi_base_lxWS
{
	class WeaponSlotsInfo;
};
class arifle_Galat_M372_Poly_lxWS : arifle_Galat_M372_lxWS
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 95.87108;
	};
};
// Increasing Dispersion for the Weathered Model
class arifle_Galat_M372_Worn_lxWS : arifle_Galat_M372_lxWS
{
	class FullAuto : FullAuto
	{
	dispersion = 0.001163552;
	reloadTime = "60/650";
	};
	class close : FullAuto
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class far_optic1 : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class far_optic2 : far_optic1
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class medium : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class short : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.001163552;
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
};

// Adjusting Weight of Model 323. Changing Muzzle Attachments.
class arifle_Galat_M323_lxWS : arifle_Galat_Semi_base_lxWS
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 98.10571;
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {-0.039,0.35};
		iconScale = 0.2;
		};
	};
};
class arifle_Galat_M323_Poly_lxWS : arifle_Galat_M323_lxWS
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 98.07571;
	};
};
// Increasing Dispersion for the Weathered Model
class arifle_Galat_M323_Worn_lxWS : arifle_Galat_M323_lxWS
{
	class FullAuto : FullAuto
	{
	dispersion = 0.001163552;
	reloadTime = "60/650";
	};
	class close : FullAuto
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class far_optic1 : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class far_optic2 : far_optic1
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class medium : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class short : close
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.001163552;
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.001163552;
	showToPlayer = 0;
	};
};

// GLX 160 Base Class.
class glaunch_GLX_base_lxWS : Rifle_Base_F
{
maxZeroing = 1000; // Doesn't do anything. But I can't promise it won't break if I change it.
	class single : Mode_SemiAuto
	{
	dispersion = 0.000581776;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 48.5017;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.355,0.36};
		iconScale = 0.18;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.34,0.36};
		iconScale = 0.22;
		};
	};
};

// AA-12 CQB
class sgun_aa40_base_lxWS : Rifle_Base_F
{
maxZeroing = 200;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.00290888;
	reloadTime = "60/300";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 99.9400;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.43,0.305};
		iconScale = 0.178;
		};
		class MuzzleSlot // It wont let me inherit it! AAAH
		{
		access = 1;
		displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
		iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
		iconPinpoint = "Center";
		iconPosition[] = {0.016,0.385};
		iconScale = 0.3;
		linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
		scope = 0;
			class compatibleItems
			{
			muzzle_snds_12Gauge_lxWS = 1;
			muzzle_snds_12Gauge_snake_lxWS = 1;	
			};
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.225,0.395};
		iconScale = 0.235;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.183,0.755};
		iconScale = 0.3;
		};
	};
};

// FN FAL Variants
class DMR_06_base_F : Rifle_Long_Base_F
{
class WeaponSlotsInfo;
};
class arifle_SLR_lxWS : DMR_06_base_F
{
discreteDistance[] = {200,300,400,500,600};
discreteDistanceInitIndex = 1;
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";		
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	};
	class single_close_optics1 : Single
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 107.448096;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.601,0.376};
		iconScale = 0.13;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.09,0.415};
		iconScale = 0.16;
		};
	};
};
class arifle_SLR_V_lxWS : arifle_SLR_lxWS
{
	class FullAuto : FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	};
	class single_close_optics1 : Single
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0006981312;
	reloadTime = "60/700";
	showToPlayer = 0;
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 113.5381;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.601,0.376};
		iconScale = 0.13;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.09,0.415};
		iconScale = 0.16;
		};
	};
};

// SA58™ Carbine 16''
class arifle_SLR_GL_lxWS : arifle_SLR_lxWS
{
maxZeroing = 1800;
	class R_GL_lxWS : UGL_F
	{
	descriptionShort = "Rifle Grenade Launcher<br />Calibre: 40-58mm";
	displayName = "FAL Type 2 Rifle Grenade Launcher";
		class Single : Mode_SemiAuto
		{
		aiRateOfFireDistance = 250;
		dispersion = 0.000581776;
		maxRange = 400;
		maxRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		minRange = 30;
		minRangeProbab = 0.1;
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		reloadTime = "60/20";
		sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
			soundSetShot[] = {"lxWS_FAL_ShotGL_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
			};
		};
	};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	};
	class single_close_optics1 : Single
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 106.02900824;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.605,0.37};
		iconScale = 0.13;
		};
	};
};
class arifle_SLR_V_GL_lxWS : arifle_SLR_V_lxWS
{
maxZeroing = 1800;
	class R_GL_lxWS : UGL_F
	{
	descriptionShort = "Rifle Grenade Launcher<br />Calibre: 40-58mm";
	displayName = "FAL Type 2 Rifle Grenade Launcher";
		class Single : Mode_SemiAuto
		{
		aiRateOfFireDistance = 250;
		dispersion = 0.000581776;
		maxRange = 400;
		maxRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		minRange = 30;
		minRangeProbab = 0.1;
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		reloadTime = "60/20";
		sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
			soundSetShot[] = {"lxWS_FAL_ShotGL_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
			};
		};
	};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	};
	class single_close_optics1 : Single
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0009423159;
	reloadTime = "60/675";
	showToPlayer = 0;
	};		
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 112.1190;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.605,0.37};
		iconScale = 0.13;
		};
	};
};

// SA56 OSW 11''
class arifle_SLR_Para_lxWS : arifle_SLR_V_lxWS
{
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
maxZeroing = 1200;
	class FullAuto : FullAuto
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	};
	class single_close_optics1 : Single
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0010226531;
	reloadTime = "60/650";
	showToPlayer = 0;
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 94.1887;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.508,0.365};
		iconScale = 0.14;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.172,0.41};
		iconScale = 0.16;
		};
		class pointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.338,0.4};
		iconScale = 0.175;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.315,0.739};
		iconScale = 0.3;
		};
	};
};

// Velko Base Class
class arifle_Velko_base_lxWS : arifle_Galat_base_lxWS
{
discreteDistance[] = {100,300,500};
maxZeroing = 1800;
	class GL203_lxWS : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0;
	displayName = "SOPMOD M203A1";
	magazineWell[] = {"UGL_40x36","CBA_40mm_M203"}; // The Pike doesn't fit.
		class Single : Mode_SemiAuto
		{
		dispersion = 0.000581776;
		initSpeed = 76;
		maxRange = 400;
		maxRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		minRange = 30;
		minRangeProbab = 0.1;
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
			soundClosure[] = {"closure1",1};
			};
			class StandardSound : BaseSoundModeType
			{
			begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
			begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
		};
	};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700"; // 650-750 PICK ONE ARGH
	};
	class close : FullAuto
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class far_optic1 : close
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class far_optic2 : far_optic1
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class medium : close
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class short : close
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0008435752;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 94.7988;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.51,0.275};
		iconScale = 0.155;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.03,0.35};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.192,0.355};
		iconScale = 0.205;
		};
	};
};

// Velko R4 needs no WSI adjustment as it inherits from the ARM
class arifle_Velko_lxWS : arifle_Velko_base_lxWS 
{
class FullAuto;
class Single;
};
// Vektor LM4
class arifle_Velko_Semi_lxWS : arifle_Velko_lxWS
{
modes[] = {"Single","single_medium_optics1","single_medium_optics2"};
	class FullAuto : FullAuto
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class close : FullAuto
	{
	reloadTime = "60/600";
	};
	class far_optic1 : close
	{
	reloadTime = "60/600";
	};
	class far_optic2 : far_optic1
	{
	reloadTime = "60/600";
	};
	class medium : close
	{
	reloadTime = "60/600";
	};
	class short : close
	{
	reloadTime = "60/600";
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class single_medium_optics1 : Single
	{
	reloadTime = "60/600";
	};
	class single_medium_optics2 : single_medium_optics1
	{
	reloadTime = "60/600";
	};
};

// Velko R5. This is actually a Galil SAR. Yep. The Gas Port is different on the Vektor R5
class arifle_VelkoR5_lxWS : arifle_Velko_base_lxWS
{
maxZeroing = 1200;
	class FullAuto : FullAuto
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class close : FullAuto
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	showToPlayer = 0;
	};
	class far_optic1 : close
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class far_optic2 : far_optic1
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class medium : close
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class short : close
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0012091127;
	reloadTime = "60/650";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 82.6733;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.438,0.265};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.03,0.35};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.162,0.36};
		iconScale = 0.22;
		};
	};
};

// Galil SAR M203A1
class arifle_VelkoR5_GL_lxWS : arifle_VelkoR5_lxWS
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 105.8219;
	};
};

// GM6 Snake
class GM6_base_F;
class srifle_GM6_F : GM6_base_F
{
class WeaponSlotsInfo;
};
class srifle_GM6_snake_lxWS : srifle_GM6_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.597,0.31};
		iconScale = 0.118;
		};
	};
};
class GM6_50BMG_base_F;
class srifle_GM6_50BMG_F : GM6_50BMG_base_F
{
class WeaponSlotsInfo;
};
class srifle_GM6_50BMG_Snake_F : srifle_GM6_50BMG_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.597,0.31};
		iconScale = 0.118;
		};
	};
};

// SS77 Mk1
class LMG_S77_base_lxWS : Rifle_Long_Base_F
{
discreteDistance[] = {200,300,400,500,600,700,800};
discreteDistanceInitIndex = 1;
maxZeroing = 3000;
	class FullAutoSlow : Mode_FullAuto
	{
	dispersion = 0.0009064750;
	reloadTime = "60/700";
	};
	class FullAutoFast : FullAutoSlow
	{
	dispersion = 0.0009064750;
	reloadTime = "60/900";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 226.2;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.575,0.28};
		iconScale = 0.133;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762MG
		{
		iconPosition[] = {-0.02,0.365};
		iconScale = 0.19;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.18,0.367};
		iconScale = 0.19;
		};
	};
};

// SS77 Compact
class LMG_S77_Compact_base_lxWS : LMG_S77_base_lxWS
{
maxZeroing = 3000;
	class FullAutoSlow : FullAutoSlow
	{
	dispersion = 0.0010605757;
	};
	class FullAutoFast : FullAutoSlow
	{
	dispersion = 0.0010605757;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 182.10182;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.56,0.28};
		iconScale = 0.144;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762MG
		{
		iconPosition[] = {-0.03,0.365};
		iconScale = 0.19;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.285,0.45};
		iconScale = 0.182;
		};
	};	
};

// XMS Base Class
class arifle_SPAR_01_base_F : Rifle_Base_F
{
class WeaponSlotsInfo;
};
class arifle_XMS_Base_lxWS : arifle_SPAR_01_base_F
{
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/750";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/750";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.32;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.535,0.285};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.11,0.43};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.277,0.407};
		iconScale = 0.195;
		};
	};	
};

// XMS GL
class arifle_XMS_GL_lxWS : arifle_XMS_Base_lxWS
{
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/750";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/750";
	};
	class UGL_lxWS : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "GLM";
	initSpeed = 75;
		class Single : Mode_SemiAuto
		{
		dispersion = 0.000581776;
		maxRange = 400;
		maxRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		minRange = 30;
		minRangeProbab = 0.1;
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
			soundClosure[] = {"closure1",1};		
			};
			class StandardSound : BaseSoundModeType
			{
			begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
			begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};		
			soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 112.57;
	};		
};
// XMS SG
class arifle_XMS_Shot_lxWS : arifle_XMS_Base_lxWS
{
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/750";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006981312;
	reloadTime = "60/750";
	};	
	class UBS_lxWS : Rifle_Base_F
	{
	descriptionShort = "Underbarrel Shotgun<br />Gauge: 12";
	displayName = "SIX12 UBS Compact";
	magazineWell[] = {"UBS_12GA","HunterShotgun_01_12GA","CBA_12g_6rnds","CBA_12g_5rnds","CBA_12g_4rnds","CBA_12g_3rnds","CBA_12g_2rnds","CBA_12g_1rnd"};
	initSpeed = -0.9078;
		class Single : Mode_SemiAuto
		{
		dispersion = 0.00290888;
		reloadTime = "60/600";
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 129.572;
	};		
};
// XMS SW
class arifle_XMS_M_lxWS : arifle_XMS_Base_lxWS
{
maxZeroing = 2000;
	class FullAuto : FullAuto
	{
	dispersion = 0.0006205610;
	reloadTime = "60/750";
	};
	class Single : Single
	{
	dispersion = 0.0006205610;
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 95.672;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.035,0.43};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.313,0.772};
		iconScale = 0.3;	
		};
	};	
};
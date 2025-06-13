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
class CannonCore;
class cannon_railgun : CannonCore
{
class player;
}
class UGL_F;
// Fixing Attachment Icon Positioning. Adjusting Mass, Rate of Fire. Adding and Removing Attachment Slots where necessary.

// 690 Field Base Class
class sgun_HunterShotgun_01_base_F : Rifle_Long_Base_F
{
maxZeroing = 200;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0014544400;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 78.75;
	};
};

// 690 Field (Sawed-Off)
class sgun_HunterShotgun_01_sawedoff_base_F : sgun_HunterShotgun_01_base_F
{
maxZeroing = 200;	
	class Single : Single
	{
	dispersion = 0.0029088800;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 39.375;
	};
};

// ACR Carbine Base Class
class arifle_MX_Base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 1200;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0007853976;
	reloadTime = "60/675";
	};
	class fullauto_medium;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0007853976;	
	reloadTime = "60/675";
	};
	class single_medium_optics1;
	class single_far_optics2;
	class GL_3GL_F : UGL_F // Editing it here is better. Still have to re-define the lower classes though.
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0;
	displayName = "3GL";
	initSpeed = 77; // Spitballing due to length. EGLM is 76, GLM is 75
	magazines[] = {"3Rnd_HE_Grenade_shell"};
	magazineWell[] = {"3UGL_40x36","CBA_40mm_3GL"}; // 3GL uses custom Grenades with Induction coils to fire. The Shells are superimposed, they slide into eachother along the tube from the back. There are no shells left once they are fired. All of this leads me to believe only proprietary Metal Storm Grenades will allow the weapon to function. As such, Im creating seperate 2 and 1Rnd 3GL versions so that I can use the vanilla 1Rnd Vanilla for the GLM etc.
		class Single : Mode_SemiAuto
		{
		dispersion = 0.000581776; // Adjusting Dispersion for all UGLs. Up from 0.68 MOA to 2 MOA. Just to not have it laserbeam (curve?) that hard.
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
	mass = 78.75;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.47,0.36};
		iconScale = 0.18;
		};
		class MuzzleSlot : asdg_MuzzleSlot_65
		{
		iconPosition[] = {0.02,0.44};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.245,0.45};
		iconScale = 0.225;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.24,0.7};
		iconScale = 0.2;
		};
	};
};
// ACR Carbine
class arifle_MX_F : arifle_MX_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 78.75;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.47,0.36};
		iconScale = 0.18;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.24,0.7};
		iconScale = 0.2;
		};
	};
};
// ACR Carbine 3GL
class arifle_MX_GL_F : arifle_MX_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 118.75;	
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.47,0.36};
		iconScale = 0.18;
		};
	};
};
// ACR Entry Carbine
class arifle_MXC_F : arifle_MX_Base_F
{
maxZeroing = 800;
	class FullAuto : FullAuto
	{
	dispersion = 0.0010471968;
	reloadTime = "60/650";	
	};
	class fullauto_medium : fullauto_medium
	{
	dispersion = 0.0010471968;
	reloadTime = "60/650";	
	};
	class Single : Single
	{
	dispersion = 0.0010471968;
	reloadTime = "60/650";	 
	};
	class single_medium_optics1 : single_medium_optics1
	{
	dispersion = 0.0010471968;		
	reloadTime = "60/650";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 66.9375;	
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.44,0.338};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_65
		{
		iconPosition[] = {0.025,0.4172};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.245,0.44};
		iconScale = 0.24;
		};
	};
};
// ACR HB
class arifle_MX_SW_F : arifle_MX_Base_F
{
maxZeroing = 2000;	
	class FullAuto : FullAuto
	{
	dispersion = 0.0006690424;
	reloadTime = "60/685";
	showToPlayer = 0; // modes[] uses manual, so I will use manual.
	};
	class manual : FullAuto
	{
	dispersion = 0.0006690424;
	reloadTime = "60/685";
	showToPlayer = 1;
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0006690424;
	reloadTime = "60/685";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006690424;
	reloadTime = "60/685";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0006690424;
	reloadTime = "60/685";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0006690424;
	reloadTime = "60/685";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 98.4375;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.48,0.37};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_65
		{
		iconPosition[] = {0,0.43};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.28,0.45};
		iconScale = 0.22;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.18,0.7};
		iconScale = 0.2;
		};
	};
};
// ACR SPR
class arifle_MXM_F : arifle_MX_Base_F
{
maxZeroing = 2400;
	class FullAuto : FullAuto
	{
	dispersion = 0.0005817760;
	reloadTime = "60/700";	
	};
	class fullauto_medium : fullauto_medium
	{
	dispersion = 0.0005817760;	
	reloadTime = "60/700";	
	};
	class Single : Single
	{
	dispersion = 0.0005817760;	
	reloadTime = "60/700";	
	};
	class single_medium_optics1 : single_medium_optics1
	{
	dispersion = 0.0005817760;	
	reloadTime = "60/700";	
	};
	class single_far_optics2 : single_far_optics2
	{
	dispersion = 0.0005817760;
	reloadTime = "60/700";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 102.375;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.51,0.37};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_65
		{
		iconPosition[] = {-0.06,0.43};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.25,0.44};
		iconScale = 0.175;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.216,0.67};
		iconScale = 0.2;
		};
	};
};

// AK-15 Base Class
class arifle_AK12_base_F : Rifle_Base_F
{
discreteDistance[] = {300,100,200,300,400,500,600,700,800};
discreteDistanceInitIndex = 0;
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";	
	};
	class Burst : Mode_Burst
	{
	dispersion = 0.0006417872;	
	reloadTime = "60/1000";	
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/700";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 77.38225;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.5,0.27};
		iconScale = 0.155;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.35,0.7};	
		iconScale = 0.2;
		};
	};
};

// AK-15 Patterns
class arifle_AK12_F : arifle_AK12_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
	};
};
class arifle_AK12_arid_F : arifle_AK12_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
	};
};
class arifle_AK12_lush_F : arifle_AK12_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
	};
};

// AK-15 GP-25 Base Class
class arifle_AK12_GL_base_F : arifle_AK12_base_F
{
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40mmCL";
	discreteDistanceInitIndex = 0; 
	displayName = "GP-25";
	initSpeed = 76.5;
	magazines[] = {"1Rnd_GP25_VOG25M_Grenade"};
	magazineWell[] = {"CBA_40mm_GP"};
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
	mass = 110.4516;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.5,0.27};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.35,0.7};	
		iconScale = 0.2;
		};
	};
};

// AK-15 GP-25 Patterns
class arifle_AK12_GL_F : arifle_AK12_GL_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
	};
};
class arifle_AK12_GL_arid_F : arifle_AK12_GL_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
	};
};
class arifle_AK12_GL_lush_F : arifle_AK12_GL_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3475,0.376};
		iconScale = 0.2;
		};
	};
};

// AK-15C Base Class
class arifle_AK12U_base_F : arifle_AK12_base_F
{
discreteDistance[] = {300,100,200,300,400,500,600,700,800};
discreteDistanceInitIndex = 0;
maxZeroing = 800;
	class FullAuto : FullAuto
	{
	dispersion = 0.0008529380;
	reloadTime = "60/675";	
	};
	class Single : Single
	{
	dispersion = 0.0008529380;
	reloadTime = "60/675";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0008529380;	
	reloadTime = "60/675";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 69.666;		
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.4125,0.24};
		iconScale = 0.185;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.0215,0.34};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.215,0.371};
		iconScale = 0.21;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.22,0.71};
		iconScale = 0.3;
		};
	};
};

// AK-12 Base Class
class arifle_AK12_545_base_F : arifle_AK12_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
	class FullAuto : FullAuto
	{
	dispersion = 0.0006417872;
	reloadTime = "60/625";	
	};
	class Burst : Burst
	{
	dispersion = 0.0006417872;	
	reloadTime = "60/1000";	
	};
	class Single : Single
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/625";	
	};
	class single_medium_optics1 : single_medium_optics1
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/625";
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/625";
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 76.8311;
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};

// AK-12 GP-25 Base Class
class arifle_AK12_GL_545_base_F : arifle_AK12_GL_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
	class FullAuto : FullAuto
	{
	dispersion = 0.0006417872;	
	reloadTime = "60/625";	
	};
	class Burst : Burst
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/1000";	
	};
	class Single : Single
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/625";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/625";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/625";	
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
	mass = 109.9004;
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};	

// AK-12C Base Class
class arifle_AK12U_545_base_F : arifle_AK12U_base_F // I wrote K everywhere in the Config but Kalashnikovs own website has since changed the name I think? Its refered to as the AK-12/15C now
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
	class FullAuto : FullAuto
	{
	dispersion = 0.0008529380;
	reloadTime = "60/600";	
	};
	class Burst : Burst
	{
	dispersion = 0.0008529380;				
	reloadTime = "60/950";	
	};
	class Burst_medium : Burst
	{
	dispersion = 0.0008529380;				
	reloadTime = "60/950";	
	};
	class Single : Single
	{
	dispersion = 0.0008529380;				
	reloadTime = "60/600";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0008529380;				
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0008529380;				
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{	
	mass = 70.21723;		
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {0.0212,0.34};
		iconScale = 0.2;
		};
	};
};

// AK-19 Base Class
class arifle_AK19_base_F : arifle_AK12_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
	class FullAuto : FullAuto
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/700";
	};
	class Burst : Burst
	{
	dispersion = 0.0006417872;			
	reloadTime = "60/1000";
	};
	class Single : Single
	{
	dispersion = 0.0006417872;			
	reloadTime = "60/700";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/700";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 78.9254;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};

// AK-19 GP-25 Base Class
class arifle_AK19_GL_base_F : arifle_AK12_GL_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
	class FullAuto : FullAuto
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";
	};
	class Burst : Burst
	{
	dispersion = 0.0006417872;	
	reloadTime = "60/1000";	
	};
	class Single : Single
	{
	dispersion = 0.0006417872;	
	reloadTime = "60/700";
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 111.9948;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};	

// AK-308 Base Class
class arifle_AK308_base_F : arifle_AK12_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
maxZeroing = 2400;
	class FullAuto : FullAuto
	{
	dispersion = 0.0006417872;	
	reloadTime = "60/700";
	};
	class Burst : Burst
	{
	dispersion = 0.0006417872;		
	autoFire = 1;
	burst = 1;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class Burst_medium : Burst
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/700";
	};
	class Single : Single
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";	
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0006417872;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0006417872;		
	reloadTime = "60/700";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 89.2872;
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};

// AKM Base Class
class arifle_AKM_base_F : Rifle_Base_F
{
discreteDistance[] = {300,100,200,300,400,500,600,700,800,900,1000};
discreteDistanceInitIndex = 0;
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0013030226;
	reloadTime = "60/600";	
	};
	class FullAuto_medium : FullAuto
	{
	dispersion = 0.0013030226;
	reloadTime = "60/600";	
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0013030226;	
	reloadTime = "60/600";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 72.7525;	
		class CowsSlot : CowsSlot_Dovetail
		{
		iconPosition[] = {0.525,0.36};
		iconScale = 0.2;
		};
		class MuzzleSlot : MuzzleSlot_762R
		{
		iconPosition[] = {-0.025,0.44};
		iconScale = 0.2;
		};
	};
};

// AKS-74U Base Class
class arifle_AKS_base_F : Rifle_Base_F
{
discreteDistance[] = {400};
modes[] = {"Single","FullAuto","FullAuto_medium"};
maxZeroing = 800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0016642016;
	reloadTime = "60/700";	
	};
	class FullAuto_medium : FullAuto
	{
	dispersion = 0.0016642016;
	reloadTime = "60/700";	
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0016642016;
	reloadTime = "60/700";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 59.5248;	
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {0.16,0.415};
		iconScale = 0.2;
		};
	};
};

// AKSU-K
class arifle_AKS_F : arifle_AKS_base_F
{
class FullAuto;
class FullAuto_medium;
class Single;
class WeaponSlotsInfo;
}
class arifle_AKS_Semi_F : arifle_AKS_F
{
discreteDistance[] = {300};
	class FullAuto : FullAuto
	{
	dispersion = 0.0016642016;
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class FullAuto_medium : FullAuto_medium
	{
	dispersion = 0.0016642016;	
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	};
	class Single : Single
	{
	dispersion = 0.0016642016;
	reloadTime = "60/600";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 59.52481;	
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {0.16,0.415};
		iconScale = 0.2;
		};
	};
};

// ASP-1 Kir Base Class
class DMR_04_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300,100,200,300,400,500,600};
discreteDistanceInitIndex = 0;
maxZeroing = 600;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0004363320;		
	reloadTime = "60/375";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 147.4341;		
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.535,0.39};
		iconScale = 0.148;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3,0.45};
		iconScale = 0.19;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.225,0.71};
		iconScale = 0.2;
		};
	};
};

// ASP-1 Kir
class srifle_DMR_04_F : DMR_04_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 147.4341;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.535,0.39};
		iconScale = 0.148;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3,0.45};
		iconScale = 0.19;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.225,0.71};
		iconScale = 0.2;
		};
	};
};

// Bad News LVOA Base Class
class DMR_02_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
maxZeroing = 2400;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0001458607;	
	reloadTime = "60/550";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 107.445;		
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.585,0.37};
		iconScale = 0.14;
		};
		class MuzzleSlot : asdg_MuzzleSlot_338
		{
		iconPosition[] = {0.01,0.432};
		iconScale = 0.18;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.2,0.42};
		iconScale = 0.19;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.19,0.8};
		iconScale = 0.3;
		};
	};
};	

// Bad News LVOA
class srifle_DMR_02_F : DMR_02_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 107.445;
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.585,0.37};
		iconScale = 0.14;
		};
		class MuzzleSlot : asdg_MuzzleSlot_338
		{
		iconPosition[] = {0.01,0.432};
		iconScale = 0.18;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.2,0.42};
		iconScale = 0.19;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.19,0.8};
		iconScale = 0.3;
		};
	};
};

// Creating ZRG-20 Mk. II
class DMR_02_Railgun_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
maxRange = 2000;
maxZeroing = 3600;
modes[] = {"Single","medium_optic2","far_optic1","far_optic2"}; // Revelation: AI cant fire if you dont give them firemodes.
	class Single : Mode_SemiAuto
	{
	aiRateOfFire = 5;
	aiRateOfFireDistance = 500;
	dispersion = 0.0029; // From 0.0057. To encourage use of the T.U.B.E.
	maxRange = 450;
	maxRangeProbab = 0.3;
	midRange = 150;
	midRangeProbab = 0.7;
	minRange = 2;
	minRangeProbab = 0.5;
	recoil = "recoil_single_gm6";
	recoilProne = "recoil_single_prone_gm6";
	reloadTime = "60/13.3333";
	soundContinuous = 0;
	sounds[] = {"StandardSound"};
		class StandardSound
		{
		soundSetShot[] = {"railgun_01_Discharge_01_SoundSet","railgun_01_Tail_SoundSet"};
		};
	};
	class medium_optic2 : Single
	{
	aiRateOfFire = 7;
	aiRateOfFireDistance = 1000;
	maxRange = 1000;
	maxRangeProbab = 0.4;
	midRange = 750;
	midRangeProbab = 0.7;
	minRange = 250;
	minRangeProbab = 0.2;
	requiredOpticType = 2;
	showToPlayer = 0;
	};
	class far_optic1 : Single
	{
	aiRateOfFire = 5;
	aiRateOfFireDistance = 500;
	maxRange = 1500;
	maxRangeProbab = 0.4;
	midRange = 500;
	midRangeProbab = 0.7;
	minRange = 150;
	minRangeProbab = 0.2;
	requiredOpticType = 1;
	showToPlayer = 0;
	};
	class far_optic2 : far_optic1
	{
	aiRateOfFire = 7;
	aiRateOfFireDistance = 1000;
	maxRange = 2100;
	maxRangeProbab = 0.3;
	midRange = 1200;
	midRangeProbab = 0.7;
	minRange = 500;
	minRangeProbab = 0.2;
	requiredOpticType = 2;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 230;
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.585,0.37};
		iconScale = 0.14;
		};
		class MuzzleSlot
		{
		compatibleItems[] = {"muzzle_railgun_03_f"};
		iconPicture = "\a3\Weapons_F_Enoch\Pistols\ESD_01\data\ui\hgun_esd_01_antenna_03_F_ca.paa";
		iconPinpoint = "Center";
		iconPosition[] = {-0.11,0.425};
		iconScale = 0.50;
		linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
		scope = 0;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.2,0.42};
		iconScale = 0.19;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.19,0.8};
		iconScale = 0.3;
		};
	};
};

// CPW Base Class
class pdw2000_base_F : Rifle_Short_Base_F
{
discreteDistance[] = {50};
maxZeroing = 600;
	class Burst;
	class FullAuto;
	class Single;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.38,0.34};
		iconScale = 0.205;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{
		iconPosition[] = {0.14,0.418};
		iconScale = 0.2;
		};
	};
};

// Hidden Vanilla PDW2000 
class hgun_PDW2000_F : pdw2000_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.38,0.34};
		iconScale = 0.205;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{
		iconPosition[] = {0.14,0.418};
		iconScale = 0.2;
		};
	};
};

// CPW Base Class
class cpw_pdw_base_F : pdw2000_base_F
{
discreteDistance[] = {50};
	class Burst : Burst
	{
	dispersion = 0.0009892744; 	
	burst = 1;
	reloadTime = "60/1000";
	showToPlayer = 0;	
	};
	class FullAuto : FullAuto
	{
	dispersion = 0.0009892744; 		
	reloadTime = "60/1000";	
	};
	class Single : Single
	{
	dispersion = 0.0009892744; 		
	reloadTime = "60/1000";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 39.6; // AmmoTerra
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.38,0.34};
		iconScale = 0.205;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{
		iconPosition[] = {0.14,0.418};
		iconScale = 0.2;
		};
	};
};
// 9x19 Variant uses Base Config
// New CPW with 4.6 Caliber
class hgun_cpw_HK_F : cpw_pdw_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : asdg_MuzzleSlot_46
		{
		iconPosition[] = {0.14,0.418};
		iconScale = 0.2;
		};
	};
};
// New CPW with 5.7
class hgun_cpw_FN_F : cpw_pdw_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot_57
		{
		iconPosition[] = {0.14,0.418};
		iconScale = 0.2;
		};
	};
};

// Tavor Base Class
class Tavor_base_F : Rifle_Base_F
{
discreteDistance[] = {300};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006690424;
	reloadTime = "60/875";	
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006690424; 		
	reloadTime = "60/875";
	};
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "FN40GL®";
	initSpeed = 75;
	magazineWell[] = {"UGL_40x36","CBA_40mm_M203"}; // Pike doesn't fit
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
	mass = 79.3664;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.44,0.255};
		iconScale = 0.185;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.1,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.31,0.335};
		iconScale = 0.2;
		};
	};
};

// CTAR-21
class arifle_TRG20_F : Tavor_base_F
{
maxZeroing = 1200;
	class FullAuto : FullAuto
	{
	dispersion = 0.0008024996; 	
	reloadTime = "60/850";	
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0008024996; 		
	reloadTime = "60/850";
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.0008024996; 		
	reloadTime = "60/850";
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0008024996;	
	reloadTime = "60/850";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0008024996;	
	reloadTime = "60/850";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 77.1617;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.44,0.255};
		iconScale = 0.185;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.1,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.31,0.335};
		iconScale = 0.21;
		};
	};
};

// FS2000 Base Class
class mk20_base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0004832376;	
	reloadTime = "60/850";
	};
	class fullauto_medium;
	class single_medium_optics1;
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "GL1";
	initSpeed = 75; // I guess
	magazineWell[] = {"UGL_40x36","CBA_40mm_M203"}; // The Pike doesn't fit.
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
	mass = 76.0227;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.455,0.25};
		iconScale = 0.195;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.01,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.315,0.405};
		iconScale = 0.21;
		};
	};
};

// FS2000 Tactical TR
class arifle_Mk20_F : mk20_base_F
{
	class FullAuto : FullAuto
	{
	dispersion = 0.0004363320;	
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0004363320;	
	burst = 1;	
	reloadTime = "60/600";	
	};
	class Single : Single
	{
	dispersion = 0.0004363320;
	reloadTime = "60/600";
	};
	class single_medium_optics1 : Single
	{
	dispersion = 0.0004363320;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_far_optics2 : single_medium_optics1
	{
	dispersion = 0.0004363320;	
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 79.9227;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.455,0.25};
		iconScale = 0.195;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.315,0.405};
		iconScale = 0.21;
		};
	};
};

// F2000 Tactical
class arifle_Mk20C_F : mk20_base_F
{
maxZeroing = 1200;
	class FullAuto : FullAuto
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class fullauto_medium : fullauto_medium
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class Single : Single
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class single_medium_optics1 : single_medium_optics1
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 76.0227;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.455,0.25};
		iconScale = 0.195;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.06,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.315,0.405};
		iconScale = 0.21;
		};
	};
};

// F2000 Tactical GL1
class arifle_Mk20_GL_F : mk20_base_F
{
maxZeroing = 1200;
	class FullAuto : FullAuto
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class fullauto_medium : fullauto_medium
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class Single : Single
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class single_medium_optics1 : single_medium_optics1
	{
	dispersion = 0.0004832376;
	reloadTime = "60/850";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 105.6227;		
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.455,0.25};
		iconScale = 0.195;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.06,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.315,0.405};
		iconScale = 0.21;
		};
	};
};

// GM6 Lynx 12.7x108 Base Class. Disabling PointerSlot Class. Inheritance to 12.7x99
class GM6_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
maxZeroing = 3600;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0002908880;	
	reloadTime = "60/275";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 231.4854;
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.61,0.31};
		iconScale = 0.106;
		};
		class PointerSlot{};
	};
};

// GM6 Lynx 12.7x108
class srifle_GM6_F : GM6_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 231.4854;
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.61,0.31};
		iconScale = 0.106;
		};
	};
};

// GM6 12.7x108 Patterns
class srifle_GM6_camo_F : srifle_GM6_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.605,0.31};
		iconScale = 0.119;
		};
	};
};
class srifle_GM6_ghex_F : srifle_GM6_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.585,0.315};
		iconScale = 0.137;
		};
	};
};

// GM6 12.7x99 Patterns
class GM6_50BMG_base_F : GM6_base_F
{
class WeaponSlotsInfo;
};
class srifle_GM6_50BMG_F : GM6_50BMG_base_F
{
class WeaponSlotsInfo : WeaponSlotsInfo{};
};
class srifle_GM6_50BMG_hex_F : srifle_GM6_50BMG_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.605,0.31};
		iconScale = 0.119;
		};
	};
};
class srifle_GM6_50BMG_ghex_F : srifle_GM6_50BMG_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.585,0.315};
		iconScale = 0.137;
		};
	};
};

// HK416 A5 11'' Base Class 
class arifle_SPAR_01_base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0002948052;
	reloadTime = "60/850";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0002948052;	
	reloadTime = "60/850";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 70.5479;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.447,0.32};
		iconScale = 0.194;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.012,0.4};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.19,0.405};
		iconScale = 0.24;
		};
		class UnderBarrelSlot : asdg_UnderSlot 
		{
		iconPosition[] = {0.215,0.77};
		iconScale = 0.3;
		};
	};	
};

// HK416 A5 11''
class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class UnderBarrelSlot : asdg_UnderSlot 
		{
		iconPosition[] = {0.215,0.77};
		iconScale = 0.3;
		};
	};
};
class arifle_SPAR_01_khk_F : arifle_SPAR_01_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class UnderBarrelSlot : asdg_UnderSlot 
		{
		iconPosition[] = {0.215,0.77};
		iconScale = 0.3;
		};
	};
};
class arifle_SPAR_01_snd_F : arifle_SPAR_01_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class UnderBarrelSlot : asdg_UnderSlot 
		{
		iconPosition[] = {0.215,0.77};
		iconScale = 0.3;
		};
	};
};

// HK416 A5 11'' GLM Base Class 
class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F
{
	class EGLM : UGL_F
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
	mass = 98.5466;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.022,0.4};
		iconScale = 0.2;
		};
	};
};

// HK416 A5 14.5''Base Class 
class arifle_SPAR_02_base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 1200;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0002479044;
	reloadTime = "60/875";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0002479044;
	reloadTime = "60/875";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 77.1617;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.505,0.36};
		iconScale = 0.194;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.042,0.44};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.24,0.45};
		iconScale = 0.23;
		};
		class UnderBarrelSlot : asdg_UnderSlot 
		{
		iconPosition[] = {0.228,0.812};
		iconScale = 0.3;
		};
	};	
};

// KH-2002 Base Class. Changing MuzzleSlot to 5.56
class arifle_Katiba_Base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 1800;
modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0011635520;
	reloadTime = "60/825";
	};
	class fullauto_medium;
	class Burst : FullAuto // If I declare Burst using Mode_Burst I am 99% certain Sound mods will not change the Burst sounds. Update: Yes.
	{
	aiDispersionCoefX = 1.9;
	aiDispersionCoefY = 2.4;
	aiRateOfFire = 2;
	autoFire = 0;
	burst = 3;
	dispersion = 0.0011635520;
	displayName = "Burst";
	maxRange = 150;
	maxRangeProbab = 0.04;
	midRange = 60;
	midRangeProbab = 0.58;
	minRange = 10;
	minRangeProbab = 0.3;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	reloadTime = "60/1000";	
	soundLoop[] = {"sound",1};
	textureType = "burst";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0011635520;
	reloadTime = "60/825";
	};
	class single_medium_optics1;
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "ML40 mk1";
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
	mass = 75.7287;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.484,0.3};
		iconScale = 0.18;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556 
		{			
		iconPosition[] = {0.01,0.44};
		iconScale=0.2;	
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.44};
		iconScale = 0.22;
		};
	};	
};

// KH-2002
class arifle_Katiba_F : arifle_Katiba_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 75.7287;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.484,0.3};
		iconScale = 0.18;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.44};
		iconScale = 0.22;
		};
	};	
};

// KH-2002 ML40 mk1
class arifle_Katiba_GL_F : arifle_Katiba_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 97.6647;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.484,0.3};
		iconScale = 0.18;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.44};
		iconScale = 0.22;
		};
	};	
};

// KH-2002 Carbine
class arifle_Katiba_C_F : arifle_Katiba_Base_F
{
maxZeroing = 1800;
	class FullAuto : FullAuto
	{
	dispersion = 0.0012905773;
	reloadTime = "60/800";
	};
	class fullauto_medium : fullauto_medium
	{
	dispersion = 0.0012905773;
	reloadTime = "60/800";
	};
	class Burst : Burst
	{
	dispersion = 0.0012905773;
	reloadTime = "60/1000";
	};
	class Single : Single
	{
	dispersion = 0.0012905773;
	reloadTime = "60/800";
	};
	class single_medium_optics1 : single_medium_optics1
	{
	dispersion = 0.0012905773;
	reloadTime = "60/800";
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0012905773;
	reloadTime = "60/800";
	};
	class single_far_optics2 : single_medium_optics1
	{
	dispersion = 0.0012905773;	
	reloadTime = "60/800";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 71.7287;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.49,0.3};
		iconScale = 0.18;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556 
		{			
		iconPosition[] = {0.148,0.435};
		iconScale=0.2;	
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.42};
		iconScale = 0.23;
		};
	};	
};

// M200 Intervention® Base Class. Adding Suppressed Sounds. Adding .408 MuzzleSlot
class LRR_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
maxZeroing = 3600;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0000916838;
	reloadTime = "60/33.3333";
	sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType;
		class SilencedSound : BaseSoundModeType
		{
		soundsetshot[] = {"M320_silencerShot_SoundSet","M320_silencerTail_SoundSet","M320_silencerInteriorTail_SoundSet"};
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 310;
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.636,0.35};
		iconScale = 0.11;
		};
		class MuzzleSlot : MuzzleSlot_408 
		{			
		iconPosition[] = {-0.012,0.395};
		iconScale = 0.2;	
		};	
	};
};

// M200 Intervention® .408. Adding .408 MuzzleSlot
class srifle_LRR_F : LRR_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 310;
		class CowsSlot : asdg_OpticRail1913_long 
		{
		iconPosition[] = {0.636,0.35};
		iconScale = 0.11;
		};
		class MuzzleSlot : MuzzleSlot_408 
		{			
		iconPosition[] = {-0.012,0.395};
		iconScale = 0.2;	
		};	
	};		
}; 

// M200 Intervention® .375. Adding .375 MuzzleSlot
class srifle_LRR_375_F : srifle_LRR_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot_375
		{			
		iconPosition[] = {-0.012,0.395};
		iconScale = 0.2;	
		};	
	};		
}; 

// M25 Polymer Base Class
class DMR_06_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {200,400,600,800};
discreteDistanceInitIndex = 0;
maxZeroing = 2400;
	class FullAuto : Mode_FullAuto
	{
	autoFire = 0;	
	dispersion = 0.0001454440;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0001454440;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 114.4741;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.565,0.36};
		iconScale = 0.11;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762 
		{			
		iconPosition[] = {0.027,0.41};
		iconScale = 0.18;	
		};	
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.313,0.77};
		iconScale = 0.27;
		};
	};		
};

// M25 Camo
class srifle_DMR_06_camo_F : DMR_06_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.565,0.36};
		iconScale = 0.11;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.313,0.77};
		iconScale = 0.27;
		};
	};		
};

// M21 Wood Base Class
class DMR_06_hunter_base_F : DMR_06_base_F
{
	class Single : Single
	{
	dispersion = 0.0001454440;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 120.4741;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.558,0.345};
		iconScale = 0.125;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762 
		{			
		iconPosition[] = {-0.0028,0.4};
		iconScale = 0.18;	
		};	
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.311,0.756};
		iconScale = 0.27;
		};
	};
};

// M21 Wood
class srifle_DMR_06_hunter_F : DMR_06_hunter_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.558,0.345};
		iconScale = 0.125;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.311,0.756};
		iconScale = 0.27;
		};
	};		
};

// M249 Para Base Class
class LMG_03_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300,400,500,600,700,800,900,1000};
discreteDistanceInitIndex = 0;
maxZeroing = 2000;
modes[] = {"FullAutoSlow","FullAutoFast","close","short","medium","far_optic1","far_optic2"};
	class FullAutoSlow : Mode_FullAuto
	{
	dispersion = 0.0011613293;
	reloadTime = "60/850";
	};
	class FullAutoFast : FullAutoSlow
	{
	dispersion = 0.0011613293;
	reloadTime = "60/850";
	showToPlayer = 0;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913_short_MG 
		{
		iconPosition[] = {0.533,0.32};
		iconScale = 0.15;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556 
		{			
		iconPosition[] = {0.01,0.41};
		iconScale = 0.19;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.384,0.43};
		iconScale = 0.18;
		};
	};	
};

// M249 Para
class LMG_03_F : LMG_03_base_F
{
	class FullAutoFast;
	class FullAutoSlow;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 156.5282;	
		class CowsSlot : asdg_OpticRail1913_short_MG 
		{
		iconPosition[] = {0.533,0.32};
		iconScale = 0.15;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556 
		{			
		iconPosition[] = {0.01,0.41};
		iconScale = 0.19;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.384,0.43};
		iconScale = 0.18;
		};
	};	
};

// M249S Para
class LMG_03_Semi_F : LMG_03_F
{
	class FullAutoFast : FullAutoFast
	{
	dispersion = 0.0009697039;	
	autoFire = 0;
	reloadTime = "60/600";
	};
	class FullAutoSlow : FullAutoSlow
	{
	dispersion = 0.0009697039;	
	autoFire = 0;
	reloadTime = "60/600";
	textureType = "semi";
	};
	class medium : FullAutoSlow
	{
	dispersion = 0.0009697039;	
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class close : FullAutoFast
	{
	dispersion = 0.0009697039;
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	};
	class short : close
	{
	dispersion = 0.0009697039;
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	};
	class far_optic1 : medium
	{
	dispersion = 0.0009697039;
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class far_optic2 : far_optic1
	{
	dispersion = 0.0009697039;
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 160;
	};	
};

// MG5 Base Class
class MMG_01_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
discreteDistanceInitIndex = 2;
maxZeroing = 3000;
modes[] = {"FullAutoFast","Burst","manual","close","short","medium","far_optic1","far_optic2"};	
	class manual : Mode_FullAuto
	{
	dispersion = 0.0009914264;
	displayName = "FullSlow";
	reloadTime = "60/640";
	textureType = "burst";
	};
	class Burst : Mode_Burst
	{
	dispersion = 0.0009914264;
	aiDispersionCoefX = 2;
	aiDispersionCoefY = 3;
	autoFire = 1;
	burst = 1;
	displayName = "Full";
	maxRange = 80;
	midRange = 30;
	minRangeProbab = 0.2;
	reloadTime = "60/720";
	soundLoop[] = {};
	textureType = "fullAuto";
	};
	class FullAutoFast : Burst
	{
	dispersion = 0.0009914264;
	displayName = "FullFast";
	reloadTime = "60/800";
	textureType = "fastAuto";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	mass = 246.9177;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.56,0.325};
		iconScale = 0.12;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762MG
		{			
		iconPosition[] = {-0.03,0.395};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.27,0.455};
		iconScale = 0.18;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.28,0.77};
		iconScale = 0.27;
		};	
	};
};

// MG5 Hex
class MMG_01_hex_F : MMG_01_base_F 
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.56,0.325};
		iconScale = 0.12;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762MG
		{			
		iconPosition[] = {-0.03,0.395};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.27,0.455};
		iconScale = 0.18;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.28,0.77};
		iconScale = 0.27;
		};	
	};
};

// Mk 14 Base Class
class EBR_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {200,400,600,800};
discreteDistanceInitIndex = 0;
maxZeroing = 2400;
modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.000218166;
	reloadTime = "60/725";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.000218166;
	reloadTime = "60/725";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 110;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.51,0.32};
		iconScale = 0.155;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{			
		iconPosition[] = {0.045,0.36};
		iconScale = 0.18;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.315,0.4};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.3,0.7};
		iconScale = 0.25;
		};	
	};
};

// Mk 14 Mod 0 EBR
class srifle_EBR_F : EBR_base_F
{
	class FullAuto;
	class Single;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 110;	
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.51,0.32};
		iconScale = 0.155;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.315,0.4};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.3,0.7};
		iconScale = 0.25;
		};	
	};
};

// M1A ACLS
class srifle_M1A_ACLS_F : srifle_EBR_F
{
	class FullAuto : FullAuto
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	reloadTime = "60/600";
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class single_close_optics1 : Single
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_far_optics1 : single_medium_optics1
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
};

// Mk-I EMR Base Class
class DMR_03_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
	class FullAuto : Mode_FullAuto
	{
	reloadTime = "60/650";
	};
	class Single : Mode_SemiAuto
	{
	reloadTime = "60/650";
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 84.2165;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.53,0.38};
		iconScale = 0.145;
		};	
		class MuzzleSlot : asdg_MuzzleSlot_762
		{			
		iconPosition[] = {0.037,0.44};
		iconScale = 0.16;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3,0.43};
		iconScale = 0.18;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.31,0.805};
		iconScale = 0.28;
		};	
	};
};

// MK-I Black
class srifle_DMR_03_F : DMR_03_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 84.2165;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.53,0.38};
		iconScale = 0.145;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3,0.43};
		iconScale = 0.18;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.31,0.805};
		iconScale = 0.28;
		};	
	};
};

// MP5K-PDW Base Class
class SMG_05_Base_F : Rifle_Short_Base_F
{
discreteDistance[] = {50};
maxZeroing = 600;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0015156738;
	reloadTime = "60/900";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0015156738;
	reloadTime = "60/900";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 50.7063;
		class CowsSlot : asdg_OpticRail1913_short
		{
		iconPosition[] = {0.355,0.26};
		iconScale = 0.21;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{			
		iconPosition[] = {0.055,0.36};
		iconScale = 0.22;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.23,0.37};
		iconScale = 0.27;
		};
	};
};

// MR223 A3 11'' Base Class
class arifle_MR223_01_base_F : arifle_SPAR_01_base_F
{
	class FullAuto : FullAuto
	{
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class single_medium_optics1 : Single
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 79.3664;
	};	
};

// MR223 A3 14.5'' Base Class
class arifle_MR223_02_base_F : arifle_SPAR_02_base_F
{
modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
	class FullAuto : FullAuto
	{
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	autoFire = 0;
	reloadTime = "60/600";
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class single_medium_optics1 : Single
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 81.571;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.505,0.36};
		iconScale = 0.194;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.042,0.44};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.24,0.45};
		iconScale = 0.23;
		};
		class UnderBarrelSlot : asdg_UnderSlot 
		{
		iconPosition[] = {0.228,0.812};
		iconScale = 0.3;
		};
	};	
};

// MR308 A3-28 Base Class
class arifle_SPAR_03_base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 2400;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0001886408;	
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0001886408;
	burst = 1;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0001886408;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 112.4358;
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.575,0.345};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{			
		iconPosition[] = {-0.06,0.42};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.33,0.43};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.33,0.785};
		iconScale = 0.3;
		};
	};
};
// MR308 A3-28 Khaki & Sand as ther Icon is apparently ever so slightly different...
class arifle_SPAR_03_khk_F : arifle_SPAR_03_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.575,0.365};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{			
		iconPosition[] = {-0.06,0.44};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.33,0.45};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.33,0.8};
		iconScale = 0.3;
		};
	};
};
class arifle_SPAR_03_snd_F : arifle_SPAR_03_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.575,0.365};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{			
		iconPosition[] = {-0.06,0.44};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.33,0.45};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.33,0.8};
		iconScale = 0.3;
		};
	};
};

// MSBS Grot B16 Base Class
class arifle_MSBS65_base_F : Rifle_Base_F
{
discreteDistance[] = {300};	
maxZeroing = 1800;
modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0007380455;	
	reloadTime = "60/800";
	};
	class Burst : FullAuto
	{
	aiDispersionCoefX = 1.9;
	aiDispersionCoefY = 2.4;
	aiRateOfFire = 2;
	autoFire = 0;
	burst = 3;
	dispersion = 0.0007380455;
	displayName = "Burst";
	maxRange = 150;
	maxRangeProbab = 0.04;
	midRange = 60;
	midRangeProbab = 0.58;
	minRange = 10;
	minRangeProbab = 0.3;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	reloadTime = "60/1000";
	soundLoop[] = {"sound",1};
	textureType = "burst";	
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0007380455;	
	reloadTime = "60/800";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	mass = 82.6733;
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.375,0.26};
		iconScale = 0.18;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {0.05,0.39};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.2,0.4};
		iconScale = 0.2;
		};
	};	
}

// MSBS Grot B16 GP Base Class
class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F
{
	class UGL : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "GP";
	initSpeed = 75;
		class Single : Mode_SemiAuto
		{
		dispersion = 0.000581776;
		maxRange = 400; // Used Default Mode_SemiAuto Range Config. Huh.
		maxRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		minRange = 30;
		minRangeProbab = 0.1;
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		sounds[] = {"StandardSound"};
			class StandardSound
			{
			soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};		
			};
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 113.5381;
	};
};

// MSBS Grot B16 SIX12 Base Class
class arifle_MSBS65_UBS_base_F :  arifle_MSBS65_base_F
{
	class UBS_F : Rifle_Base_F
	{
	descriptionShort = "Underbarrel Shotgun<br />Gauge: 12";
	displayName = "SIX12 UBS";
	magazineWell[] = {"UBS_12GA","HunterShotgun_01_12GA","CBA_12g_6rnds","CBA_12g_5rnds","CBA_12g_4rnds","CBA_12g_3rnds","CBA_12g_2rnds","CBA_12g_1rnd"};
		class Single : Mode_SemiAuto // For some reason I needn't redefine the subclasses here.
		{
		dispersion = 0.00290888; // Using Dispersion of the Sawn-Off (10 MOA)
		reloadTime = "60/600"; // Increasing to my Semi Auto Default
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 127.6733;
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.455,0.295};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {0.16,0.415};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3,0.415};
		iconScale = 0.2;
		};
	};	
};

// MSBS Grot B26 Base Class
class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F
{
maxZeroing = 2400;
	class FullAuto : FullAuto
	{
	dispersion = 0.0002767670;		
	reloadTime = "60/850";
	};
	class Single : Single
	{
	dispersion = 0.0002767670;
	reloadTime = "60/850";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 93.6964;	
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.47,0.3};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {0.01,0.41};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.335,0.42};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.33,0.78};
		iconScale = 0.3;
		};
	};	
};

// Negev NG-7 SF
class LMG_Zafir_F : Rifle_Long_Base_F
{
discreteDistance[] = {300,400,500,600,700,800,900,1000};	
discreteDistanceInitIndex = 0;
maxZeroing = 3000;
modes[] = {"FullAuto","FullAutoFast","Single","close","short","medium","far_optic1","far_optic2"};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0008215235;	
	reloadTime = "60/600";
	sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType;
		class SilencedSound : BaseSoundModeType
		{
		soundSetShot[] = {"Zafir_silencerShot_SoundSet","Zafir_silencerTail_SoundSet","Zafir_silencerInteriorTail_SoundSet"};
		};
	};
	class FullAutoFast : FullAuto
	{
	dispersion = 0.0008215235;
	reloadTime = "60/750";
	textureType = "fastAuto";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0008215235;
	reloadTime = "60/600";
	sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType;
		class SilencedSound : BaseSoundModeType
		{
		soundSetShot[] = {"Zafir_silencerShot_SoundSet","Zafir_silencerTail_SoundSet","Zafir_silencerInteriorTail_SoundSet"};
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 171.9606;
		class CowsSlot : asdg_OpticRail1913_short_MG
		{
		iconPosition[] = {0.62,0.39};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762MG
		{			
		iconPosition[] = {-0.03,0.41};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.42,0.445};
		iconScale = 0.18;
		};
	};	
};

// P90 TR Base Class
class SMG_03_TR_BASE : Rifle_Base_F
{
discreteDistance[] = {100};
maxZeroing = 800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0013752584;
	reloadTime = "60/900";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0013752584;
	reloadTime = "60/900";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 56.8095;
		class CowsSlot :  asdg_OpticRail1913_short
		{
		iconPosition[] = {0.37,0.29};
		iconScale = 0.22;
		};
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {0.19,0.51};
		iconScale = 0.23;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.335};
		iconScale = 0.25;
		};
	};
};

// PS90 Base Class
class SMG_03_TR_BASE_SEMI : SMG_03_TR_BASE
{
maxZeroing = 1200;
	class FullAuto : FullAuto
	{
	dispersion = 0.0010187099;
	autoFire = 0;	
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.0010187099;
	reloadTime = "60/600";
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	mass = 61.6095;
		class CowsSlot :  asdg_OpticRail1913_short
		{
		iconPosition[] = {0.37,0.29};
		iconScale = 0.22;
		};
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {0.19,0.51};
		iconScale = 0.23;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.335};
		iconScale = 0.25;
		};
	};
};

// P90 Base Class
class SMG_03C_BASE : SMG_03_TR_BASE
{
maxZeroing = 800;	
	class FullAuto : FullAuto
	{
	dispersion = 0.0013752584;	
	reloadTime = "60/900";
	};
	class Single : Single
	{
	dispersion = 0.0013752584;	
	reloadTime = "60/900";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 58;
		class CowsSlot :  asdg_OpticRail1913_short
		{
		iconPosition[] = {0.37,0.29};
		iconScale = 0.22;
		};
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {0.19,0.51};
		iconScale = 0.23;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.335};
		iconScale = 0.25;
		};
	};
};

// P90 TR Black
class SMG_03C_TR_black : SMG_03C_BASE
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 56.8095;
		class CowsSlot :  asdg_OpticRail1913_short
		{
		iconPosition[] = {0.37,0.29};
		iconScale = 0.22;
		};
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {0.19,0.51};
		iconScale = 0.23;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.335};
		iconScale = 0.25;
		};
	};
};

// P90 USG Black
class SMG_03C_black : SMG_03C_BASE
{
	class WeaponSlotsInfo
	{	
	mass = 58;	
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {0.19,0.51};
		iconScale = 0.23;
		};	
	};
};

// PS90 TR Black
class SMG_03_TR_black : SMG_03_TR_BASE_SEMI
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 61.6095;	
		class CowsSlot :  asdg_OpticRail1913_short
		{
		iconPosition[] = {0.37,0.29};
		iconScale = 0.22;
		};		
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {-0.03,0.51};
		iconScale = 0.23;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.335};
		iconScale = 0.25;
		};
	};
};

// PS90 TR Hex
class SMG_03_TR_hex : SMG_03_TR_black
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot :  asdg_OpticRail1913_short
		{
		iconPosition[] = {0.37,0.29};
		iconScale = 0.22;
		};
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {-0.03,0.51};
		iconScale = 0.23;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.36,0.335};
		iconScale = 0.25;
		};
	};
};

// PS90 USG Black
class SMG_03_black : SMG_03_TR_BASE_SEMI
{
	class WeaponSlotsInfo
	{	
	mass = 62.8;
		class MuzzleSlot : MuzzleSlot_57
		{			
		iconPosition[] = {-0.03,0.51};
		iconScale = 0.23;
		};	
	};
};

// QBU-88 Base Class
class DMR_07_base_F : Rifle_Base_F
{
discreteDistance[] = {300,600};	
discreteDistanceInitIndex = 0;
maxZeroing = 2400;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0004363320;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 90.3895;	
		class CowsSlot : asdg_OpticRail1913_short
		{
		iconPosition[] = {0.54,0.32};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_58
		{			
		iconPosition[] = {0.02,0.42};
		iconScale = 0.19;
		};	
		class PointerSlot
		{
		};
	};
};

// KBU-97A Base Class
class DMR_KBU97A_base_F : DMR_07_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {0.02,0.42};
		iconScale = 0.19;
		};	
	};
};

// QBZ-95-1 Base Class
class arifle_CTAR_base_F : Rifle_Base_F
{
discreteDistance[] = {100,200,300,400,500,600};		
discreteDistanceInitIndex = 2;
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0007909739;
	reloadTime = "60/650";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0007909739;
	reloadTime = "60/650";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 71.31954;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.4,0.25};
		iconScale = 0.19;
		};
		class MuzzleSlot : asdg_MuzzleSlot_58
		{			
		iconPosition[] = {-0.005,0.405};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.29,0.345};
		iconScale = 0.215;
		};
	};
};

// QBZ-95-1 GL Base Class
class arifle_CTAR_GL_base_F : arifle_CTAR_base_F
{
	class EGLM : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 35mmCL";
	discreteDistanceInitIndex = 0; 		
	displayName = "QLG-10A";
	initSpeed = 78;
	magazines[] = {"1Rnd_QGL10A_DFS10_Grenade"};
	magazineWell[] = {"CBA_35mm_Type10"};
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
	mass = 103.2866;
	};
};

// QBZ-97 Base Class
class arifle_QBZ97_base_F : arifle_CTAR_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 71.31954;	
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {-0.005,0.405};
		iconScale = 0.2;
		};	
	};
};

// QBZ-97 GL Base Class
class arifle_QBZ97_GL_base_F : arifle_CTAR_GL_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 108.0265;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {-0.005,0.405};
		iconScale = 0.2;
		};	
	};
};

// QJB-95-1 LSW Base Class
class arifle_CTARS_base_F : Rifle_Base_F
{
discreteDistance[] = {100,200,300,400,500,600};		
discreteDistanceInitIndex = 2;
maxZeroing = 2000;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0006591449;
	reloadTime = "60/675";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0006591449;
	reloadTime = "60/675";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 87.0825;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.46,0.285};
		iconScale = 0.175;
		};
		class MuzzleSlot : asdg_MuzzleSlot_58
		{			
		iconPosition[] = {-0.02,0.41};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.34,0.365};
		iconScale = 0.215;
		};
	};
};

// QJB-97 LSW Base Class
class arifle_QJB97_base_F : arifle_CTARS_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 87.0825;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {-0.02,0.41};
		iconScale = 0.2;
		};	
	};
};

// Creating T97NSR-A Base Class
class arifle_T97NSRA_base_F : arifle_QBZ97_base_F
{
	class FullAuto : FullAuto
	{
	autoFire = 0;	
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
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
	showToPlayer = 0;
	};
	class single_far_optics2 : single_medium_optics1
	{
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 71.31954;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {-0.005,0.405};
		iconScale = 0.2;
		};	
	};
};

// SDAR Base Class
class SDAR_base_F;

// SDAR
class arifle_SDAR_F : SDAR_base_F
{
	class Burst;
	class FullAuto;
	class Single;
	class WeaponSlotsInfo;
};

// RFB
class arifle_RFB_F : arifle_SDAR_F
{
discreteDistance[] = {300};	
maxZeroing = 2400;
	class Burst : Burst
	{
	dispersion = 0.0005817760;
	burst = 1;	
	reloadTime = "60/600";
	showToPlayer = 0;
	};	
	class FullAuto : FullAuto
	{
	dispersion = 0.0005817760;
	autoFire = 0;	
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Single : Single
	{
	dispersion = 0.0005817760;
	reloadTime = "60/600";
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 87;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.45,0.325};
		iconScale = 0.2;
		};
	};
};

// RM338 Base Class
class MMG_02_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
maxZeroing = 3000;
	class manual : Mode_FullAuto
	{
	dispersion = 0.0008726640;
	reloadTime = "60/500";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 240;
		class CowsSlot : asdg_OpticRail1913_short_MG
		{
		iconPosition[] = {0.62,0.32};
		iconScale = 0.15;
		};
		class MuzzleSlot : asdg_MuzzleSlot_338
		{			
		iconPosition[] = {0.06,0.42};
		iconScale = 0.15;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.38,0.42};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.35,0.85};
		iconScale = 0.3;
		};	
	};
};

// RM338 Camo
class MMG_02_camo_F : MMG_02_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913_short_MG
		{
		iconPosition[] = {0.655,0.34};
		iconScale = 0.13;
		};
		class MuzzleSlot : asdg_MuzzleSlot_338
		{			
		iconPosition[] = {0.007,0.42};
		iconScale = 0.16;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.31,0.46};
		iconScale = 0.165;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.3,0.84};
		iconScale = 0.3;
		};	
	};
};

// RPK-12 Base Class
class arifle_RPK12_base_F : arifle_AK12_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800};
discreteDistanceInitIndex = 0;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.565,0.32};
		iconScale = 0.137;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{			
		iconPosition[] = {-0.045,0.39};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.44,0.39};
		iconScale = 0.195;
		};
	};
};

// RPK-16 Base Class
class arifle_RPK16_base_F : arifle_RPK12_base_F
{
maxZeroing = 2000;
	class Burst : Burst
	{
	dispersion = 0.0005754762;
	autoFire = 1;
	burst = 1;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class Burst_medium : Burst
	{
	dispersion = 0.0005754762;
	autoFire = 1;
	burst = 1;
	reloadTime = "60/700";
	};
	class FullAuto : FullAuto
	{
	dispersion = 0.0005754762;
	reloadTime = "60/700";
	};
	class Single : Single
	{
	dispersion = 0.0005754762;
	reloadTime = "60/700";
	};	
	class single_medium_optics1 : Single
	{
	dispersion = 0.0005754762;
	reloadTime = "60/700";
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	dispersion = 0.0005754762;
	reloadTime = "60/700";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 132.2774;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.565,0.32};
		iconScale = 0.137;
		};
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{			
		iconPosition[] = {-0.045,0.39};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.44,0.39};
		iconScale = 0.195;
		};
	};
};

// Sting Base Class
class SMG_02_base_F : Rifle_Short_Base_F
{
discreteDistance[] = {50};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.46,0.28};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{			
		iconPosition[] = {0.11,0.39};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.28,0.4};
		iconScale = 0.23;
		};
	};
};

// Sting
class SMG_02_F : SMG_02_base_F
{
	class Burst;
	class FullAuto;
	class Single;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.46,0.28};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{			
		iconPosition[] = {0.11,0.39};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.28,0.4};
		iconScale = 0.23;
		};
	};
};

// Scorpion EVO 3 A1
class SMG_02_ParaB_F : SMG_02_F
{
maxZeroing = 600;
	class Burst : Burst
	{
	dispersion = 0.0012502349;	
	reloadTime = "60/1150";
	};
	class FullAuto : FullAuto
	{
	dispersion = 0.0012502349;	
	reloadTime = "60/1150";
	};
	class Single : Single
	{
	dispersion = 0.0012502349;	
	reloadTime = "60/1150";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 56.2178;
		class CowsSlot : asdg_OpticRail1913
		{
		iconPosition[] = {0.46,0.28};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{			
		iconPosition[] = {0.11,0.39};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.28,0.4};
		iconScale = 0.23;
		};
	};
};
// Scorpion EVO 3 S1
class SMG_02_ParaB_Semi_F : SMG_02_ParaB_F
{
	class Burst : Burst
	{
	burst = 1;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class FullAuto : FullAuto
	{
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	mass = 56.2178;
	};
};

// Creating SIG 556 DMR Base Class
class DMR_SIG556_base_F : DMR_03_base_F
{
maxZeroing = 2400;
	class FullAuto : FullAuto
	{
	dispersion = 0.0003490656;
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0003490656;
	reloadTime = "60/600";
	};	
	class Single : Single
	{
	dispersion = 0.0003490656;
	reloadTime = "60/600";
	};	
	class single_close_optics1 : Single
	{
	dispersion = 0.0003490656;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class single_medium_optics1 : single_close_optics1
	{
	dispersion = 0.0003490656;	
	reloadTime = "60/600";
	};
	class single_far_optics1 : single_medium_optics1
	{
	dispersion = 0.0003490656;	
	reloadTime = "60/600";
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 95;
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {0.037,0.44};
		iconScale = 0.16;
		};	
	};
};

// SP5K-PDW
class SMG_05_ParaB_F : SMG_05_base_F
{
	class FullAuto;
	class Single;
}
class SMG_05_ParaB_Semi_F : SMG_05_ParaB_F
{
	class FullAuto : FullAuto
	{
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Single : Single
	{
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{	
	mass = 45.1947;
	};
};

// Stoner 96
class LMG_Mk200_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
maxZeroing = 2000;
	class manual : Mode_FullAuto
	{
	dispersion = 0.0009064750;	
	reloadTime = "60/575";
	};
	class Single : manual // Preventing ACE from enabling it
	{
	dispersion = 0.0009064750;		
	reloadTime = "60/575";
	showToPlayer = 0;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 99.2080;
		class CowsSlot : asdg_OpticRail1913_short_MG
		{
		iconPosition[] = {0.525,0.33};
		iconScale = 0.185;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{			
		iconPosition[] = {-0.04,0.385};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.27,0.465};
		iconScale = 0.22;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.22,0.82};
		iconScale = 0.3;
		};	
	};
};

// SVDK Magpul Base Class
class DMR_05_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {300};
maxZeroing = 2400;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0005875937;
	autoFire = 0;
	reloadTime = "60/475";
	showToPlayer = 0;
	};
	class fullauto_medium : FullAuto
	{
	dispersion = 0.0005875937;	
	burst = 1;
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0005875937;	
	reloadTime = "60/475";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 147.7097;
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.51,0.4};
		iconScale = 0.16;
		};
		class MuzzleSlot : asdg_MuzzleSlot_93x64
		{			
		iconPosition[] = {-0.005,0.45};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.25,0.45};
		iconScale = 0.19;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.3,0.81};
		iconScale = 0.3;
		};	
	};
};

// SVDK Magpul Black
class srifle_DMR_05_blk_F : DMR_05_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 147.7097;
		class CowsSlot : asdg_OpticRail1913_long
		{
		iconPosition[] = {0.532,0.39};
		iconScale = 0.15;
		};
		class MuzzleSlot : asdg_MuzzleSlot_93x64
		{			
		iconPosition[] = {-0.023,0.46};
		iconScale = 0.2;
		};	
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.3,0.45};
		iconScale = 0.18;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.253,0.82};
		iconScale = 0.3;
		};	
	};
};

// TAR-21 
class arifle_TRG21_F : Tavor_base_F
{
maxZeroing = 1800;
	class FullAuto : FullAuto
	{
	dispersion = 0.0006690424;	
	reloadTime = "60/875";	
	};
	class Single : Single
	{
	dispersion = 0.0006690424;	
	reloadTime = "60/875";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 79.3664;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.44,0.255};
		iconScale = 0.185;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.002,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.31,0.335};
		iconScale = 0.21;
		};
	};
};

// GTAR-21
class arifle_TRG21_GL_F : arifle_TRG21_F
{
maxZeroing = 1800;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 108.9664;
		class CowsSlot : asdg_OpticRail1913_short 
		{
		iconPosition[] = {0.44,0.255};
		iconScale = 0.185;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.02,0.362};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.31,0.335};
		iconScale = 0.2;
		};
	};
};

// TR3 Base Class
class arifle_TR3_base_F : arifle_AK19_base_F
{
modes[] = {"Single","Burst","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
	class FullAuto : FullAuto
	{
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Burst : Burst
	{
	burst = 1;	
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class Burst_medium : Burst
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
	showToPlayer = 0;
	};
	class single_medium_optics2 : single_medium_optics1
	{
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 76.7208;
	};
};

class arifle_TR3_545_F : arifle_TR3_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 79.0357;
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};

// TR3 .223 Remington uses AK-19 556 Muzzleslot

// TR3 7.62x39
class arifle_TR3_762_F : arifle_TR3_base_F
{
discreteDistance[] = {300,100,200,300,400,500,600,700,800};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 78.4845;
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.025,0.34};
		iconScale = 0.2;
		};
	};
};

// Type 115 Base Class
class arifle_ARX_base_F : Rifle_Base_F
{
discreteDistance[] = {300};
maxZeroing = 1800;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0005817759;
	reloadTime = "60/900";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0005817759;
	reloadTime = "60/900";
	};
	class Secondary : Rifle_Base_F
	{
	discreteDistance[] = {300};
	displayName = "Integrated .50 BW";
	magazineWell[] = {"Type115_50BW"};
		class Single : Mode_SemiAuto
		{
		reloadTime = "60/375";	
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 97.0034;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.473,0.35};
		iconScale = 0.168;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {0.067,0.41};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.257,0.485};
		iconScale = 0.21;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.2,0.815};
		iconScale = 0.3;
		};	
	};
};

// Vector SMG Base Class
class SMG_01_Base : Rifle_Short_Base_F
{
discreteDistance[] = {50};	
maxZeroing = 600;
	class Burst : Mode_Burst
	{
	dispersion = 0.0012217296;
	reloadTime = "60/1200";
	};
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0012217296;
	reloadTime = "60/1200";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0012217296;
	reloadTime = "60/1200";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 74.9571;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.4,0.3};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_45ACP_SMG
		{
		iconPosition[] = {0.1,0.4};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.23,0.375};
		iconScale = 0.12;
		};
	};
};

// Vector SMG .45 ACP
class SMG_01_F : SMG_01_Base
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 74.9571;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.43,0.335};
		iconScale = 0.17;
		};
		class MuzzleSlot : asdg_MuzzleSlot_45ACP_SMG
		{
		iconPosition[] = {0.15,0.437};
		iconScale = 0.19;
		};
	};
};
// Vector SMG 9x19
class SMG_01_9x19_F : SMG_01_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
		{
		iconPosition[] = {0.15,0.437};
		iconScale = 0.2;
		};
	};
};

// VS-121 Base Class
class DMR_01_base_F : Rifle_Long_Base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800,900,1000};	
discreteDistanceInitIndex = 0;
maxZeroing = 2400;
	class FullAuto : Mode_FullAuto
	{
	dispersion = 0.0003025235;
	reloadTime = "60/650";
	};
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0003025235;
	reloadTime = "60/650";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.1849;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.51,0.395};
		iconScale = 0.165;
		};
		class MuzzleSlot : asdg_MuzzleSlot_762
		{
		iconPosition[] = {0.035,0.45};
		iconScale = 0.2;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.395,0.45};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.362,0.76};
		iconScale = 0.25;
		};	
	};
};

// VS-121
class srifle_DMR_01_F : DMR_01_base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.1849;
		class CowsSlot : asdg_OpticRail1913 
		{
		iconPosition[] = {0.51,0.395};
		iconScale = 0.165;
		};
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.395,0.45};
		iconScale = 0.2;
		};
		class UnderBarrelSlot : asdg_UnderSlot
		{
		iconPosition[] = {0.362,0.76};
		iconScale = 0.25;
		};	
	};
};

// WASR Base Class
class arifle_WASR_base_F : arifle_AKM_base_F
{
discreteDistance[] = {300,100,200,300,400,500,600,700,800,900,1000};
discreteDistanceInitIndex = 0;
modes[] = {"Single","FullAuto","FullAuto_medium"};
	class FullAuto : FullAuto
	{
	dispersion = 0.0007954272;
	autoFire = 0;
	reloadTime = "60/600";
	showToPlayer = 0;
	};
	class FullAuto_medium : FullAuto_medium
	{
	dispersion = 0.0007954272;	
	autoFire = 0;
	burst = 1;
	reloadTime = "60/600";
	};
	class Single : Single
	{
	dispersion = 0.0007954272;	
	reloadTime = "60/600";	
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 75;	
		class CowsSlot : CowsSlot_Dovetail
		{
		iconPosition[] = {0.525,0.36};
		iconScale = 0.2;
		};
		class MuzzleSlot : MuzzleSlot_762R
		{
		iconPosition[] = {-0.025,0.44};
		iconScale = 0.2;
		};
	};
};

// WASR-2
class arifle_WASR_545_F : arifle_WASR_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800,900,1000};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 75;	
		class CowsSlot : CowsSlot_Dovetail
		{
		iconPosition[] = {0.525,0.36};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_545R
		{
		iconPosition[] = {-0.025,0.44};
		iconScale = 0.2;
		};
	};
};

// WASR-3
class arifle_WASR_556_F : arifle_WASR_base_F
{
discreteDistance[] = {400,100,200,300,400,500,600,700,800,900,1000};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 75;	
		class CowsSlot : CowsSlot_Dovetail
		{
		iconPosition[] = {0.525,0.36};
		iconScale = 0.2;
		};
		class MuzzleSlot : asdg_MuzzleSlot_556
		{
		iconPosition[] = {-0.025,0.44};
		iconScale = 0.2;
		};
	};
};

// WASR-10 Uses AKM Muzzleslot

// Custom TLE/RL .45
class hgun_ACPC2_F : Pistol_Base_F
{
// All Pistols Ironsights are Zeroed to 50m
maxZeroing = 100;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0021115079;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 24.375;
		class MuzzleSlot : asdg_MuzzleSlot_45ACP
		{
		iconPosition[] = {0.245,0.36};
		iconScale = 0.26;
		};
		class PointerSlot : asdg_PistolUnderRail
		{
		iconPosition[] = {0.51,0.59};
		iconScale = 0.17;
		};
	};
};

// Flare Pistol
class hgun_Pistol_Signal_F : Pistol_Base_F
{
maxZeroing = 100;	
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0218166000;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 23.125;
	};
};

// FNX-45 Tactical
class hgun_Pistol_heavy_01_F : Pistol_Base_F
{
maxZeroing = 100;	
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0027782999;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 20.8125;
		class CowsSlot : asdg_PistolOpticMount 
		{
		iconPosition[] = {0.7,0.29};
		iconScale = 0.09;
		};
		class MuzzleSlot : asdg_MuzzleSlot_45ACP
		{
		iconPosition[] = {0.27,0.32};
		iconScale = 0.26;
		};
		class PointerSlot : asdg_PistolUnderRail
		{
		iconPosition[] = {0.505,0.635};
		iconScale = 0.22;
		};
	};
};

// Rhino 60DS .40
class hgun_Pistol_heavy_02_F : Pistol_Base_F
{
maxZeroing = 100;	
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0025004699;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 21.0541;
		class CowsSlot : asdg_PistolOpticRail1913 
		{
		iconPosition[] = {0.42,0.315};
		iconScale = 0.08;
		};
		class MuzzleSlot
		{
		};
		class PointerSlot : asdg_PistolUnderRail
		{
		iconPosition[] = {0.32,0.63};
		iconScale = 0.18;
		};
	};
};

// Judge Magnum
class hgun_Pistol_Judge_F : hgun_Pistol_heavy_02_F
{
maxZeroing = 100;	
	class Single : Single
	{
	dispersion = 0.0099224996;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 23.125;
		class CowsSlot
		{
		};
		class MuzzleSlot
		{
		};
		class PointerSlot
		{
		};
	};
};

// MP-443 Grach
class hgun_Rook40_F : Pistol_Base_F
{
maxZeroing = 100;	
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0043633200;
	reloadTime = "60/600";
	};	
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 20.94391;
		class MuzzleSlot : asdg_MuzzleSlot_9MM
		{
		iconPosition[] = {0.245,0.377};
		iconScale = 0.33;
		};
	};
};

// P99 9x19 Sand
class hgun_P07_F : Pistol_Base_F
{
maxZeroing = 100;	
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0018336779;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 13.8891;	
		class MuzzleSlot : asdg_MuzzleSlot_9MM
		{
		iconPosition[] = {0.185,0.325};
		iconScale = 0.33;
		};
		class PointerSlot : asdg_PistolUnderRail
		{
		iconPosition[] = {0.415,0.595};
		iconScale = 0.18;
		};
	};
};

// P99 .40 sand
class hgun_P99_40SW_F : hgun_P07_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 14.4402;	
		class MuzzleSlot : asdg_MuzzleSlot_45ACP
		{
		iconPosition[] = {0.185,0.325};
		iconScale = 0.33;
		};
	};
};

// P99 9x21
class hgun_P99_9x21_F : hgun_P07_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 15.3662;	
	};
};

// PM
class hgun_Pistol_01_F : Pistol_Base_F
{
maxZeroing = 100;	
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0074087997;
	reloadTime = "60/600";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 16.7551;	
	};
};

// IJ-70
class hgun_Pistol_01_380A_F : hgun_Pistol_01_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 14.9032;	
	};
};

class hgun_esd_01_base_F : Pistol_Base_F
{
maxZeroing = 100;
	class Single : Mode_SemiAuto
	{
	dispersion = 0.0002036216;
	};
	class WeaponSlotsInfo
	{
	holsterScale = 0;
	mass = 12.3458;
	};
};

// 9K115-2 Metis-M1
class launch_Vorona_base_F : Launcher_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 352.7396;	
	};
};

// M3A1/E1 MAAWS Base Class 
class launch_MRAWS_base_F : Launcher_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 185.6292;
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.113,0.485};
		iconScale = 0.14;
		};
	};
};

// M3A1 MAAWS
class launch_MRAWS_olive_F : launch_MRAWS_base_F
{
class WeaponSlotsInfo;
};
class launch_MRAWS_olive_rail_F : launch_MRAWS_olive_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 149.4734;
	};
};

// NLAW
class launch_NLAW_F : Launcher_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 0; // All Mass is in the Ammo for Vanilla
	};
};

// RPG-32
class launch_RPG32_F : Launcher_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 93.69646;	
	};
};

// RPG-7
class launch_RPG7_F : Launcher_Base_F
{
maxZeroing = 500;
	// Optic is like that of a Grenade Launcher (Which it technically is) meaning I can't just plop different Zeroings into the config as it is bound to the actual view angle configured in the model.
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 138.8912;
		class CowsSlot : CowsSlot_Dovetail_RPG 
		{
		iconPosition[] = {0.51,0.44};
		iconScale = 0.12;
		};
	};
};

// Titan MPRL Base class
class launch_Titan_base : Launcher_Base_F
{
modes[] = {"Single"};
	class Single : Mode_SemiAuto
	{
	aiRateOfFireDistance = 4800;
	maxRange = 4800;
	midRange = 2400;
	minRange = 161;
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.1849;
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.245,0.53};
		iconScale = 0.23;
		};
	};
};

// Mini-Spike Base Class
class launch_Titan_short_base : launch_Titan_base
{
modes[] = {"Single","TopDown"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
	mass = 88.1849;
		class PointerSlot : asdg_FrontSideRail
		{
		iconPosition[] = {0.32,0.54};
		iconScale = 0.22;
		};
	};
};

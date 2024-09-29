class CfgPatches
{
    class A3RO_Vanilla_WSI
    {
    name = "Arma 3 Realism Overhaul - Vanilla Weapon Slots Info";
    author = "NeroTheHero111";
    url = "";
    version="2.0.0";
	requiredAddons[] = 
	{
	"A3RO_Vanilla",	
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 0;
    };
};

// For reasons unbeknownst to me, the game will not accept Inheritance to a 'new' weapon if I have edited the compatibleItems Sub-class in the same config. Hence this seperate config. Mass could be adjusted in the initial weapon config but it looks neater if its all in one spot.
class asdg_MuzzleSlot_338;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_45ACP_SMG;
class asdg_MuzzleSlot_46;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_762MG;
class asdg_MuzzleSlot_93x64;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_9MM_SMG;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_PistolUnderRail;
class asdg_UnderSlot;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class CowsSlot_MSBS65;
class Mode_Burst;
class Mode_FullAuto;
class Mode_SemiAuto;
class MuzzleSlot_375;
class MuzzleSlot_408;
class MuzzleSlot_57;
class MuzzleSlot_762R;
class RscStructuredText;

// Adding Spacing inbetween Weapon and Attachment Information
class RscGearTemplates
{
	class CA_Tooltip : RscStructuredText
	{
	accessoriesHeadline = "<br />Accessories:";	
	};
}

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;	
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;

	// Creating M200 Intervention Suppressed SoundSet
	class M320_silencerShot_SoundSet : Rifle_Shot_Base_SoundSet
	{
	soundShaders[] = {"M320_Closure_SoundShader","M320_Bolt_SoundShader","M320_silencerShot_SoundShader"};	
	};
	class M320_silencerTail_SoundSet : Rifle_Tail_Base_SoundSet
	{
	soundShaders[] = {"M320_silencerTailForest_SoundShader","M320_silencerTailHouses_SoundShader","M320_silencerTailMeadows_SoundShader","M320_silencerTailTrees_SoundShader"};	
	};	
	class M320_silencerInteriorTail_SoundSet : Rifle_InteriorTail_Base_SoundSet
	{
	soundShaders[] = {"M320_silencerTailInterior_SoundShader"};	
	};

	// Creating Negev NG-7 SF Suppressed SoundSet
	class Zafir_silencerShot_SoundSet : Rifle_Shot_Base_SoundSet
	{
	soundShaders[] = {"Zafir_Closure_SoundShader","Zafir_silencerShot_SoundShader"};
	};
	class Zafir_silencerTail_SoundSet : Rifle_Tail_Base_SoundSet
	{
	soundShaders[] = {"Zafir_silencerTailForest_SoundShader","Zafir_silencerTailHouses_SoundShader","Zafir_silencerTailMeadows_SoundShader","Zafir_silencerTailTrees_SoundShader"};
	};	
	class Zafir_silencerInteriorTail_SoundSet : Rifle_InteriorTail_Base_SoundSet
	{
	soundShaders[] = {"Zafir_silencerTailInterior_SoundShader"};
	};
};
class CfgSoundShaders
{
	// M200 Suppressed SoundShaders
	class M320_silencerShot_SoundShader
	{
	range = 150;
	rangeCurve = "closeShotCurve";
	samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_03",1}};
	volume = 1;	
	};
	class M320_silencerTailForest_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0.3}};
	samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailForest",1}};
	volume = "(1-interior/1.4)*forest/3";
	};	
	class M320_silencerTailHouses_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0}};
	samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailHouses",1}};
	volume = "(1-interior/1.4)*houses/3";
	};	
	class M320_silencerTailInterior_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{50,0.3},{150,0}};
	samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailInterior",1}};
	volume = "interior";
	};		
	class M320_silencerTailMeadows_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0.3}};
	samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailMeadows",1}};
	volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
	};	
	class M320_silencerTailTrees_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0.3}};
	samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailTrees",1}};
	volume = "(1-interior/1.4)*trees/3";
	};	

	// Negev NG-7 SF Suppressed SoundShaders
	class Zafir_silencerShot_SoundShader
	{
	range = 150;
	rangeCurve = "closeShotCurve";
	samples[] = {{"A3\Sounds_F\weapons\Zafir\Silencer_zafir_1",1},{"A3\Sounds_F\weapons\Zafir\Silencer_zafir_2",1}};
	volume = 1;	
	};
	class Zafir_silencerTailForest_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0.3}};
	samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailForest",1}};
	volume = "(1-interior/1.4)*forest/3";
	};
	class Zafir_silencerTailHouses_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0}};
	samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailHouses",1}};
	volume = "(1-interior/1.4)*houses/3";
	};
	class Zafir_silencerTailInterior_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{50,0.3},{150,0}};
	samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailInterior",1}};
	volume = "interior";
	};
	class Zafir_silencerTailMeadows_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0.3}};
	samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailMeadows",1}};
	volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
	};
	class Zafir_silencerTailTrees_SoundShader
	{
	limitation = 1;
	range = 150;
	rangeCurve[] = {{0,1},{150,0.3}};
	samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailTrees",1}};
	volume = "(1-interior/1.4)*trees/3";
	};
};

class CfgWeapons
{
#include "\A3RO_Vanilla\WSI\CfgWeapons_WSI.hpp"
};
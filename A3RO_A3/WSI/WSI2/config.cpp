class CfgPatches
{
    class A3RO_A3_WSI_2
    {
    name = "Arma 3 Realism Overhaul - Vanilla Weapon Slots Info 2";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"A3RO_A3",
    "A3RO_A3_WSI",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class Mode_FullAuto;
class Mode_SemiAuto;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_762R_SVD;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons // If someone could tell me why this wont work in the regular WSI file, let me know.
{
    class Rifle_Base_F;
    class Rifle_Long_Base_F : Rifle_Base_F
    {
        class WeaponSlotsInfo;
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
            class MuzzleSlot : asdg_MuzzleSlot_762R_SVD
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
};
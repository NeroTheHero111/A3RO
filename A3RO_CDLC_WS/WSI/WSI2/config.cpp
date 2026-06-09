class CfgPatches
{
    class A3RO_CDLC_WS_WSI_2
    {
    name = "Arma 3 Realism Overhaul - Western Sahara Weapon Slots Info";
    author = "NeroTheHero111";
    url = "";
    version="1.1.5";
	requiredAddons[] = 
	{
	"data_f_lxWS_Loadorder",
	"cba_main",
	"A3RO_CDLC_WS",
    "A3RO_CDLC_WS_WSI",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};

class Mode_FullAuto;
class asdg_OpticRail1913_short;
class MuzzleSlot;
class MuzzleSlot_12Gauge_lxWS : MuzzleSlot
{
    class compatibleItems
    {
    //muzzle_tma_65 = 1; Since it deploys submunition, I cannot reduce the damage on impact
    };
};
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons // I mean, if it works...
{
    class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
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
            class CowsSlot : asdg_OpticRail1913_short
            {
            iconPosition[] = {0.43,0.305};
            iconScale = 0.178;
            };
            class MuzzleSlot : MuzzleSlot_12Gauge_lxWS
            {
            iconPosition[] = {0.016,0.385};
            iconScale = 0.3;
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
};
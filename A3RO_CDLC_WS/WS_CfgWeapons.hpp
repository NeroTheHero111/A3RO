class InventoryFlashLightItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryUnderItem_Base_F;
class ItemCore;
class Launcher_Base_F;
class Pistol_Base_F;
class Rifle_Base_F;
class Rifle_Long_Base_F;
class Rifle_Short_Base_F;
class UGL_F;
class NVGoggles;
class srifle_GM6_F;
class srifle_GM6_50BMG_F;
class hgun_cpw_ParaB_F;
class launch_RPG32_F;
class arifle_AKM_F;
class optic_DMS;
class optic_ACO_grn;
class optic_Aco;
class optic_Arco;
class optic_Holosight;
class optic_Holosight_smg;
class optic_Hamr;
class acc_pointer_IR;
class acc_flashlight;
class muzzle_snds_H : ItemCore
{
    class ItemInfo;
};
class muzzle_snds_B : muzzle_snds_H
{
    class ItemInfo;
};
class muzzle_snds_M : muzzle_snds_H
{
    class ItemInfo;
};
class Binocular;
class Camera_lxWS : Binocular
{
displayName = "Deacon D810";
descriptionShort = "Digital Camera<br />Magnification: 0.5x - 4x";
distanceZoomMin = 100;
opticsZoomInit = 0.25;
opticsZoomMax = 0.5;
opticsZoomMin = 0.0625;
};

#include "\A3RO_CDLC_WS\CfgWeapons_762_WS.hpp"
#include "\A3RO_CDLC_WS\CfgWeapons_Attachments_WS.hpp"
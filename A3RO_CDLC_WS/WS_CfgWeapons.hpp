class Binocular;
class InventoryFlashLightItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryUnderItem_Base_F;
class ItemCore;
class Launcher_Base_F;
class NVGoggles;
class Pistol_Base_F;
class Rifle_Base_F;
class Rifle_Long_Base_F;
class Rifle_Short_Base_F;
class UGL_F;

class acc_pointer_IR;
class acc_pointer_IR_LO_ILL_Red;
class acc_pointer_IR_HI_L_Red;
class acc_pointer_IR_LO_IL_Red;
class acc_pointer_IR_HI_IL_Red;
class acc_pointer_IR_HI_ILL_Red;
class acc_pointer_IR_VIS_L_Red;
class acc_pointer_IR_LO_ILL_Green;
class acc_pointer_IR_HI_L_Green;
class acc_pointer_IR_LO_IL_Green;
class acc_pointer_IR_HI_IL_Green;
class acc_pointer_IR_HI_ILL_Green;
class acc_pointer_IR_VIS_L_Green;
class acc_flashlight;
class arifle_AKM_F;
class hgun_cpw_ParaB_F;
class launch_RPG32_F;
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
class optic_DMS;
class optic_ACO_grn;
class optic_Aco;
class optic_Arco;
class optic_Holosight;
class optic_Holosight_smg;
class optic_Hamr;
class srifle_GM6_F;
class srifle_GM6_50BMG_F;

// Creating CPW for Unit replacement
class hgun_cpw_ParaB_r1_F : hgun_cpw_ParaB_F
{
author = "Rotators Collective";
DLC = "ws";
    class LinkedItems
    {
        class LinkedItemsOptic
        {
        item = "optic_r1_high_lxWS";
        slot = "CowsSlot";
        };
    };
};

#include "\A3RO_CDLC_WS\CfgWeapons_Attachments_WS.hpp"
#include "\A3RO_CDLC_WS\CfgWeapons_DMR_WS.hpp"
#include "\A3RO_CDLC_WS\CfgWeapons_Item_WS.hpp"
#include "\A3RO_CDLC_WS\CfgWeapons_Launcher_WS.hpp"
#include "\A3RO_CDLC_WS\CfgWeapons_MG_WS.hpp"
#include "\A3RO_CDLC_WS\CfgWeapons_Rifle_WS.hpp"
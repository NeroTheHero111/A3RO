class ammo_Penetrator_Base;
class BulletBase;
class FlareBase;
class GrenadeBase;
class MissileCore;
class MissileBase : MissileCore
{
class Components;
};
class RocketBase;
class SubmunitionBase;
class SubmunitionBullet;

class B_762x54_Tracer_Green;
class B_12Gauge_Pellets_Submunition : BulletBase // Federal #00 Buck
{
submunitionConeType[] = {"poissondisc",9};
submunitionInitSpeed = 403.86;
timeToLive = 6.5;
typicalSpeed = 403.86;
};
class B_12Gauge_Pellets_Submunition_Deploy;
class Sh_75mm_Railgun_APFSDS;
class Chemlight_yellow;
class Chemlight_red;
class GrenadeCore;
class Grenade;
class PipeBombBase;
class MineBase;
class BoundingMineBase;
class DirectionalBombBase;

#include "\A3RO_A3\CfgAmmo_DMR_A3.hpp"
#include "\A3RO_A3\CfgAmmo_Explosive_A3.hpp"
#include "\A3RO_A3\CfgAmmo_Rifle_A3.hpp"
#include "\A3RO_A3\CfgAmmo_Secondary_A3.hpp"
#include "\A3RO_A3\CfgAmmo_SMG_A3.hpp"
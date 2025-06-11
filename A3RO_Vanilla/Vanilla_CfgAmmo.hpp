class BulletBase;
class GrenadeBase;
class FlareBase;
class SmokeShell;
class ammo_Penetrator_Base;
class B_12Gauge_Pellets_Submunition_Deploy;
class SubmunitionBase;
class MissileCore;
class MissileBase : MissileCore
{
class Components;
};
class RocketBase;
class B_12Gauge_Pellets_Submunition : BulletBase // Federal #00 Buck
{
submunitionConeType[] = {"poissondisc",9};
submunitionInitSpeed = 403.86;
timeToLive = 6.5;
typicalSpeed = 403.86;
};
class SubmunitionBullet;

#include "\A3RO_Vanilla\CfgAmmo_223.hpp"

#include "\A3RO_Vanilla\CfgAmmo_308.hpp"

#include "\A3RO_Vanilla\CfgAmmo_M200.hpp"

#include "\A3RO_Vanilla\CfgAmmo_Pistols.hpp"

#include "\A3RO_Vanilla\CfgAmmo_SMG.hpp"

#include "\A3RO_Vanilla\CfgAmmo_Explosives.hpp"
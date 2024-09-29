class BulletBase;
class SmokeShell;

// Creating ANM8 Smoke Grenade Ammo
class SmokeShellANM8 : SmokeShell
{
effectsSmoke = "SmokeShellWhiteEffect";
model = "\A3\Weapons_f\ammo\ANM8_white_throw";
timeToLive = 120;
};

class SmokeShellANM8_Infinite : SmokeShellANM8
{
timeToLive = 1e+010;
};

#include "\A3RO_Vanilla\CfgAmmo_223.hpp"

#include "\A3RO_Vanilla\CfgAmmo_308.hpp"

#include "\A3RO_Vanilla\CfgAmmo_M200.hpp"

#include "\A3RO_Vanilla\CfgAmmo_Pistols.hpp"

#include "\A3RO_Vanilla\CfgAmmo_SMG.hpp"
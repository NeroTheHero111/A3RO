class 10Rnd_762x51_Mag;
class 150Rnd_762x51_Box;
class 3Rnd_UGL_FlareGreen_F;
class 500Rnd_127x99_mag;
class CA_Magazine;
class CA_LauncherMagazine;
class SmokeShell;

// Creating ANM8 Smoke Grenade Magazine
class SmokeShellANM8 : SmokeShell
{
ammo = "SmokeShellANM8";
displayName = "AN-M8 Smoke Grenade (White)";
model = "\A3\Weapons_f\ammo\ANM8_white";
};

// Adjusting Muzzle Velocity of 9x21 30Rnd Mags.
class 30Rnd_9x21_Mag : CA_Magazine
{
initSpeed = 360;	
};

// Vermin 30Rnd Magazines. Changing: Name. Description
class 30Rnd_45ACP_Mag_SMG_01 : 30Rnd_9x21_Mag
{
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Vector Reload Tracer (Red) Mag";
initSpeed = 345.948;
lastRoundsTracer = 4;
};

// Navid 9.3 130Rnd Belts. Changing: Name. Description. Calibre to 7.62 NATO.
class 150Rnd_93x64_Mag : CA_Magazine
{
ammo = "B_762x51_Tracer_Green";
count = 120;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 120<br />Used in: MG5 A2";
displayName = "7.62 mm 120Rnd Reload Tracer (Green) Belt";
lastRoundsTracer = 4;
mass = 55;
tracersEvery = 0;
};

// MX 6.5 Reload Tracer Magazines. Changing: Name. Description. Removed Tracer every 4. Switched from Caseless to Cased Ammo
class 30Rnd_65x39_caseless_mag : CA_Magazine
{
ammo = "B_65x39_Case";			
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5 mm 30Rnd Reload Tracer (Red) Mag";
initSpeed = 859.2312;
lastRoundsTracer = 4;
tracersEvery = 0;
};

#include "\A3RO_Vanilla\CfgMagazines_308.hpp"

#include "\A3RO_Vanilla\CfgMagazines_556.hpp"

#include "\A3RO_Vanilla\CfgMagazines_ACR.hpp"

#include "\A3RO_Vanilla\CfgMagazines_AK.hpp"

#include "\A3RO_Vanilla\CfgMagazines_DMR.hpp"

#include "\A3RO_Vanilla\CfgMagazines_GM6.hpp"

#include "\A3RO_Vanilla\CfgMagazines_CSAT.hpp"

#include "\A3RO_Vanilla\CfgMagazines_Launchers.hpp"

#include "\A3RO_Vanilla\CfgMagazines_MG.hpp"

#include "\A3RO_Vanilla\CfgMagazines_M200.hpp"

#include "\A3RO_Vanilla\CfgMagazines_Pistols.hpp"

#include "\A3RO_Vanilla\CfgMagazines_SMG.hpp"

#include "\A3RO_Vanilla\CfgMagazines_QBZ.hpp"
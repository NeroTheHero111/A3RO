class CA_Magazine;
class CA_LauncherMagazine;
class SmokeShell;
class VehicleMagazine;

// Adjusting M33 Ball initspeed
class 500Rnd_127x99_mag : VehicleMagazine
{
initSpeed = 887;
};
// 57-BZ-542
class 450Rnd_127x108_Ball : VehicleMagazine
{
initSpeed = 860;
};
// 7.62x51 NATO 20Rnd Magazine. Changing: Description
class 20Rnd_762x51_Mag : CA_Magazine
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Mag";
displayNameShort = "";
initSpeed = 843.0768;
mass = 16.0977;
};
// Hiding Unused (Wrong) VS-121 Magazine
class 10Rnd_762x51_Mag : 20Rnd_762x51_Mag
{
scope = 1;
};
// Adjusting Muzzle Velocity of 9x21 30Rnd Mags. Hiding 9x21 30Rnd Magazines and its Children.
class 30Rnd_9x21_Mag : CA_Magazine
{
initSpeed = 360;
scope = 1;
};
class 30Rnd_9x21_Mag_SMG_02 : 30Rnd_9x21_Mag
{
initSpeed = 360;
};
class 30Rnd_9x21_Green_Mag : 30Rnd_9x21_Mag
{
initSpeed = 360;
};
class 30Rnd_9x21_Mag_SMG_02_Tracer_Green : 30Rnd_9x21_Mag_SMG_02
{
initSpeed = 360;
};

// Creating ANM8 Smoke Grenade Magazine
class SmokeShellANM8 : SmokeShell
{
ammo = "SmokeShellANM8";
displayName = "AN-M8 Smoke Grenade (White)";
descriptionShort = "Type: White Smoke<br />Rounds: 1<br />Ignition Delay: 1.2 - 2 Seconds<br />Burn Time: ~120 Seconds<br />Used in: Hand";
displayNameShort = "Smoke (White)";
model = "\A3\Weapons_f\ammo\ANM8_white";
};

// Putting Flares here as Pistol Config also needs it.
class UGL_FlareWhite_F : CA_Magazine
{
descriptionShort = "Type: White Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M583A1 Star (White) Grenade"; 
displayNameShort = "Star (White)";
initSpeed = 76;
mass = 4.9;
picture = "\A3RO_Vanilla\Textures\UI\gear_40x46_M583A1_CA.paa";
};

// Vermin 30Rnd Magazines. Changing: Name. Description
class 30Rnd_45ACP_Mag_SMG_01 : 30Rnd_9x21_Mag
{
count = 30; // HUH?
descriptionShort = "Calibre: .45 ACP<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: Vector SMG Gen I .45 ACP";
displayName = ".45 ACP 30Rnd Reload Tracer (Red) Vector Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 345.948;
lastRoundsTracer = 4;
mass = 16.7571;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_45ACP_RRT_Vector_Mag_CA.paa";
scope = 2;
};

// Navid 9.3 130Rnd Boxes. Changing: Name. Description. Calibre to 7.62 NATO.
class 150Rnd_93x64_Mag : CA_Magazine
{
ammo = "B_762x51_Tracer_Green";
count = 120;
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 120<br />Tracers: Last 4 Rounds<br />Used in: MG5 A2";
displayName = "7.62x51 120Rnd Reload Tracer (Green) MG5 Box";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
mass = 83.1869;
picture = "\A3RO_Vanilla\Textures\UI\icon_120Rnd_762x51_GRT_CA.paa";
tracersEvery = 0;
};

// MX 6.5 Reload Tracer Magazines. Changing: Name. Description. Removed Tracer every 4. Switched from Caseless to Cased Ammo
class 30Rnd_65x39_caseless_mag : CA_Magazine
{
ammo = "B_65x39_Case";			
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5x39 30Rnd Reload Tracer (Red) Sand Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 786.384;
lastRoundsTracer = 4;
mass = 14.5624;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RRT_mag_CA.paa";
tracersEvery = 0;
};

// The Battery
class Laserbatteries : CA_Magazine
{
descriptionShort = "Laser Designator Battery Pack<br />Do Not Incinerate, Puncture or Crush";
displayName = "Type 163 LTU Battery";
mass = 0; // Given that all Laser Designators/Range Finders have their Weight listed with Batteries included, it makes no sense to add extra weight here. I could also add 6 Battery Items I have no Info on. No. 
};

// Vanilla Pistol Flare Rounds? Not used anywhere as the Beta Flare Gun was scrapped (There's only a Texture in the Game Files)
class FlareWhite_F : CA_Magazine
{
descriptionShort = "Type: White Flare<br />Rounds: 1<br />Used in: Flare Gun";
displayName = "26.5mm Flare (White)";
displayNameShort = "Flare (White)";
scope = 1; // Hiding
};
class FlareGreen_F : FlareWhite_F
{
descriptionShort = "Type: Green Flare<br />Rounds: 1<br />Used in: Flare Gun";
displayName = "26.5mm Flare (Green)";
displayNameShort = "Flare (Green)";
};
class FlareRed_F : FlareWhite_F
{
descriptionShort = "Type: Red Flare<br />Rounds: 1<br />Used in: Flare Gun";
displayName = "26.5mm Flare (Red)";
displayNameShort = "Flare (Red)";
};
class FlareYellow_F : FlareWhite_F
{
descriptionShort = "Type: Yellow Flare<br />Rounds: 1<br />Used in: Flare Gun";
displayName = "26.5mm Flare (Yellow)";
displayNameShort = "Flare (Yellow)";
};

#include "\A3RO_Vanilla\CfgMagazines_308.hpp"

#include "\A3RO_Vanilla\CfgMagazines_556.hpp"

#include "\A3RO_Vanilla\CfgMagazines_ACR.hpp"

#include "\A3RO_Vanilla\CfgMagazines_AK.hpp"

#include "\A3RO_Vanilla\CfgMagazines_DMR.hpp"

#include "\A3RO_Vanilla\CfgMagazines_Explosives.hpp"

#include "\A3RO_Vanilla\CfgMagazines_GM6.hpp"

#include "\A3RO_Vanilla\CfgMagazines_CSAT.hpp"

#include "\A3RO_Vanilla\CfgMagazines_Launchers.hpp"

#include "\A3RO_Vanilla\CfgMagazines_MG.hpp"

#include "\A3RO_Vanilla\CfgMagazines_M200.hpp"

#include "\A3RO_Vanilla\CfgMagazines_Pistols.hpp"

#include "\A3RO_Vanilla\CfgMagazines_SMG.hpp"

#include "\A3RO_Vanilla\CfgMagazines_QBZ.hpp"
// 40x46
class 1Rnd_Pellet_Grenade_shell_lxWS : 1Rnd_HE_Grenade_shell // M576
{
ammo = "G_40mm_UGL_Buckshot"; // Replacing with My Ammo
descriptionShort = "Type: Buckshot<br />Rounds: 1<br />Aim For The Feet!<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M576 Buckshot Grenade";
displayNameShort = "Buckshot";
initSpeed = 269.139;
mass = 2.54;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M576_CA.paa";
};

// Hiding A3RO Buckshot when WS is loaded
class 1Rnd_Buckshot_Grenade_shell : 1Rnd_HE_Grenade_shell
{
scope = 1;
};

// Rifle Mounted Grenades
class 1Rnd_40mm_HE_lxWS : 1Rnd_HE_Grenade_shell // The Grenade ID on the Textures is accurate. Yippie
{
descriptionShort = "Type: Anti-Personnel / Anti-Vehicle Rifle Grenade<br />Rounds: 1<br />Used on: SA58™ Carbine 16'' TPB";
displayName = "53x352 APAV40 F2 Grenade";
displaynameshort = "Dual Purpose";
initSpeed = 74.981; // Based off Energa AT Rifle Grenade which is the only one I could find with a velocity
mass = 11.0231;
};
class 1Rnd_Smoke_Grenade_shell;
class 1Rnd_50mm_Smoke_lxWS : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: White Smoke Rifle Grenade<br />Rounds: 1<br />Burn Time: ~40 Seconds<br />Used on: SA58™ Carbine 16'' TPB";
displayName = "40x290 Modèle 1954 F4 Smoke (White) Grenade";
displaynameshort = "Smoke (White)";
initSpeed = 74.981;
mass = 11.7947;
};
class 1Rnd_58mm_AT_lxWS : 1Rnd_40mm_HE_lxWS
{
descriptionShort = "Type: Anti-Armour Rifle Grenade<br />Rounds: 1<br />Used on: SA58™ Carbine 16'' TPB";
displayName = "58x380 AC58 Grenade";
displaynameshort = "Anti-Armour";
initSpeed = 74.981;
mass = 11.8388;
};

// ZGLA-85 Ammo
class 1Rnd_ZGL_Grenade_F : 1Rnd_HE_Grenade_shell
{
ammo = "G_ZGLA_85";
descriptionShort = "Type: Precision Munition<br />Rounds: 1<br />Effective Range: 5 Meters<br />Used in: ZGL-40 Mk. II";
displayName = "ZGLA-85";
displayNameShort = "Precision Munition";
mass = 440.9245;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M441_CA.paa";
};
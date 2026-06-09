// Handheld Grenades

// Frag
class HandGrenade : CA_Magazine
{
descriptionShort = "Type: Fragmentation<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Used in: Hand";
displayName = "M67";
displayNameShort = "M67";
initSpeed = 23;
mass = 8.75;
picture = "\A3RO_A3\Textures\UI\gear_M67_CA.paa";
};
class MiniGrenade : CA_Magazine
{
descriptionShort = "Type: Fragmentation<br />Rounds: 1<br />Ignition Delay: 4 Seconds<br />Used in: Hand";
displayName = "V40";
displayNameShort = "V40";
initSpeed = 25;
mass = 2.9983;
picture = "\A3RO_A3\Textures\UI\gear_mini_frag_CA.paa";
};
// Creating Stone (Class already existed)
class HandGrenade_Stone : HandGrenade
{
descriptionShort = "Type: Just a regular good ol' Stone<br />Rounds: 1<br />Throwability: High<br />Puntability: Yes<br />Used in: Hand";
displayName = "Stone";
displayNameShort = "Stone";
initSpeed = 13;
mass = 37.1258;
model = "\A3\Weapons_f\ammo\stone_2";
picture = "\A3RO_A3\Textures\UI\gear_Stone_CA.paa";
scope = 2;
};

// M18
class SmokeShell : HandGrenade
{
descriptionShort = "Type: White Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 25 - 70 Seconds<br />Used in: Hand";
displayName = "M83 (White)";
displayNameShort = "M83 (White)";
initSpeed = 22;
mass = 10;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_white_ca.paa";
};
class SmokeShellBlue : SmokeShell // Chili Fireworks makes blue "M18" Smokes.
{
descriptionShort = "Type: Blue Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 50 - 70 Seconds<br />Used in: Hand"; // Low Nr is a guess
displayName = "CLE7034-BLU (Blue)";
displayNameShort = "CLE7034-BLU (Blue)";
initSpeed = 24;
mass = 7.9863;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_blue_ca.paa";
};
class SmokeShellGreen : SmokeShell
{
descriptionShort = "Type: Green Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 50 - 90 Seconds<br />Used in: Hand";
displayName = "M18 (Green)";
displayNameShort = "M18 (Green)";
initSpeed = 21;
mass = 11.875;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_green_ca.paa";
};
class SmokeShellOrange : SmokeShell
{
descriptionShort = "Type: Orange Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 30 - 35 Seconds<br />Used in: Hand";
displayName = "TAG 18 (Orange)";
displayNameShort = "TAG 18 (Orange)";
initSpeed = 26;
mass = 4.0786;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_orange_ca.paa";
};
class SmokeShellPurple : SmokeShell
{
descriptionShort = "Type: Viiolet Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 50 - 90 Seconds<br />Used in: Hand";
displayName = "M18 (Violet)";
displayNameShort = "M18 (Violet)";
initSpeed = 21;
mass = 11.875;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_violet_ca.paa";
};
class SmokeShellRed : SmokeShell
{
descriptionShort = "Type: Red Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 50 - 90 Seconds<br />Used in: Hand";
displayName = "M18 (Red)";
displayNameShort = "M18 (Red)";
initSpeed = 21;
mass = 11.875;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_red_ca.paa";
};
class SmokeShellYellow : SmokeShell
{
descriptionShort = "Type: Yellow Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 50 - 90 Seconds<br />Used in: Hand";
displayName = "M18 (Yellow)";
displayNameShort = "M18 (Yellow)";
initSpeed = 21;
mass = 11.875;
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_yellow_ca.paa";
};

// Creating ANM8 Smoke Grenade Magazine
class SmokeShellANM8_Magazine : SmokeShell
{
ammo = "SmokeShellANM8";
descriptionShort = "Type: White Smoke<br />Rounds: 1<br />Ignition Delay: 0.7 - 2 Seconds<br />Burn Time: 105 - 150 Seconds<br />Used in: Hand";
displayName = "AN-M8 (White)";
displayNameShort = "AN-M8 (White)";
initSpeed = 19;
mass = 15;
model = "\A3\Weapons_f\ammo\ANM8_white";
picture = "\A3RO_A3\Textures\UI\gear_smokegrenade_anm8_CA.paa";
};

// Chemlights
class Chemlight_green : SmokeShell
{
descriptionShort = "Type: Green Lightstick<br />Rounds: 1<br />Duration: 12 Hours<br />Used in: Hand";
displayName = "ChemLight (12h, Green)";
displayNameShort = "CL (12h, Green)";
initSpeed = 14;
mass = 0.4409;
};
class Chemlight_blue : Chemlight_green
{
descriptionShort = "Type: Blue Lightstick<br />Rounds: 1<br />Duration: 8 Hours<br />Used in: Hand";
displayName = "ChemLight (8h, Blue)";
displayNameShort = "CL (8h, Blue)";
};
class Chemlight_red : Chemlight_green
{
descriptionShort = "Type: Red Lightstick<br />Rounds: 1<br />Duration: 12 Hours<br />Used in: Hand";
displayName = "ChemLight (12h, Red)";
displayNameShort = "CL (12h, Red)";
};
class Chemlight_yellow : Chemlight_green
{
descriptionShort = "Type: Yellow Lightstick<br />Rounds: 1<br />Duration: 12 Hours<br />Used in: Hand";
displayName = "ChemLight (12h, Yellow)";
displayNameShort = "CL (12h, Yellow)";
};
// New Chemlight
class Chemlight_orange : Chemlight_green
{
ammo = "Chemlight_orange";
descriptionShort = "Type: Orange Lightstick<br />Rounds: 1<br />Duration: 12 Hours<br />Used in: Hand";
displayName = "ChemLight (12h, Orange)";
displayNameShort = "CL (12h, Orange)";
model = "\A3\Weapons_f\chemlight\chemlight_red";
picture = "\A3RO_A3\Textures\UI\M_chemlight_orange_CA.paa";
};
class Chemlight_white : Chemlight_green
{
ammo = "Chemlight_white";
descriptionShort = "Type: White Lightstick<br />Rounds: 1<br />Duration: 8 Hours<br />Used in: Hand";
displayName = "ChemLight (8h, White)";
displayNameShort = "CL (8h, White)";
model = "\A3\Weapons_f\chemlight\chemlight_blue";
picture = "\A3RO_A3\Textures\UI\M_chemlight_white_CA.paa";
};
class Chemlight_IR : Chemlight_green
{
ammo = "Chemlight_IR";
descriptionShort = "Type: Infra-Red Lightstick<br />Rounds: 1<br />Duration: 8 Hours<br />Used in: Hand";
displayName = "ChemLight (8h, IR)";
displayNameShort = "CL (8h, IR)";
model = "\A3\Weapons_f\chemlight\chemlight_green";
picture = "\A3RO_A3\Textures\UI\M_chemlight_IR_CA.paa";
};
class Chemlight_IR_3H : Chemlight_IR
{
ammo = "Chemlight_IR_3H";
descriptionShort = "Type: Infra-Red Lightstick<br />Rounds: 1<br />Duration: 3 Hours<br />Used in: Hand";
displayName = "ChemLight (3h, IR)";
displayNameShort = "CL (3h, IR)";
};
class Chemlight_yellow_HI : Chemlight_yellow
{
ammo = "Chemlight_yellow_HI";
descriptionShort = "Type: High-Intensity Yellow Lightstick<br />Rounds: 1<br />Duration: 30 Minutes<br />Used in: Hand";
displayName = "ChemLight (30m, Yellow-HI)";
displayNameShort = "CL (30m, Yellow)";
picture = "\A3RO_A3\Textures\UI\M_chemlight_yellow_HI_CA.paa";
};
class Chemlight_red_HI : Chemlight_red
{
ammo = "Chemlight_red_HI";
descriptionShort = "Type: High-Intensity Red Lightstick<br />Rounds: 1<br />Duration: 30 Minutes<br />Used in: Hand";
displayName = "ChemLight (30m, Red-HI)";
displayNameShort = "CL (30m, Red)";
picture = "\A3RO_A3\Textures\UI\M_chemlight_red_HI_CA.paa";
};
class Chemlight_white_HI : Chemlight_white
{
ammo = "Chemlight_white_HI";
descriptionShort = "Type: High-Intensity White Lightstick<br />Rounds: 1<br />Duration: 30 Minutes<br />Used in: Hand";
displayName = "ChemLight (30m, White-HI)";
displayNameShort = "CL (30m, White)";
picture = "\A3RO_A3\Textures\UI\M_chemlight_white_HI_CA.paa";
};
class Chemlight_orange_UHI : Chemlight_orange
{
ammo = "Chemlight_orange_UHI";
descriptionShort = "Type: Ultra High-Intensity Orange Lightstick<br />Rounds: 1<br />Duration: 5 Minutes<br />Used in: Hand";
displayName = "ChemLight (5m, Orange-UHI)";
displayNameShort = "CL (5m, Orange)";
picture = "\A3RO_A3\Textures\UI\M_chemlight_orange_UHI_CA.paa";
};

// IR Strobes
class B_IR_Grenade : CA_Magazine // Model loosely based off of VIP IR, doesn't exist. Lil 2035 Magic
{
descriptionShort = "Type: Fictional Infra-Red Strobe<br />Rounds: 1<br />Battery Life: 300 Hours<br />Used in: Hand";
displayName = "VIP IR-2 Signal Light";
displayNameShort = "IR Strobe";
initSpeed = 20;
mass = 1.6755;
picture = "\A3RO_A3\Textures\UI\gear_B_IRStrobe_CA.paa";
};
class I_IR_Grenade : B_IR_Grenade
{
descriptionShort = "Type: Infra-Red Strobe<br />Rounds: 1<br />Battery Life: 300 Hours<br />Used in: Hand";
displayName = "VIP IR Signal Light";
initSpeed = 22;
mass = 2.4375;
picture = "\A3RO_A3\Textures\UI\gear_I_IRStrobe_CA.paa";
};
class I_E_IR_Grenade : I_IR_Grenade
{
descriptionShort = "Type: Infra-Red Strobe<br />Rounds: 1<br />Battery Life: 300 Hours<br />Used in: Hand";
displayName = "VIP IR Signal Light";
scope = 1; // Duplicate.
};
class O_IR_Grenade : B_IR_Grenade
{
descriptionShort = "Type: Infra-Red Strobe<br />Rounds: 1<br />Battery Life: 65 Hours<br />Used in: Hand";
displayName = "Mini Flasher™ 2130IR";
initSpeed = 14;
mass = 0.3087;
picture = "\A3RO_A3\Textures\UI\gear_O_IRStrobe_CA.paa";
};
class O_R_IR_Grenade : O_IR_Grenade
{
descriptionShort = "Type: Infra-Red Strobe<br />Rounds: 1<br />Battery Life: 65 Hours<br />Used in: Hand";
displayName = "Mini Flasher™ 2130IR";
scope = 1;
};

// UGL Grenades
class UGL_FlareCIR_F : UGL_FlareWhite_F
{
ammo = "F_40mm_Cir_Illumination";
descriptionShort = "Type: Infra-Red Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M992 Star (IR) Grenade"; 
displayNameShort = "Star (IR)";
initSpeed = 76.2;
mass = 4.9;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M992_CA.paa";
};
class UGL_FlareRed_F : UGL_FlareWhite_F
{
ammo = "F_40mm_Red_Illumination";
descriptionShort = "Type: Red Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M662 Star (Red) Grenade"; 
displayNameShort = "Star (Red)";
initSpeed = 76.2;
mass = 4.9;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M662_CA.paa";
};
class UGL_FlareGreen_F : UGL_FlareWhite_F
{
ammo = "F_40mm_Green_Illumination";
descriptionShort = "Type: Green Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M661 Star (Green) Grenade"; 
displayNameShort = "Star (Green)";
initSpeed = 76.2;
mass = 4.9;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M661_CA.paa";
};
class UGL_FlareYellow_F : UGL_FlareWhite_F // If I can't find an official in-service or in-testing Ammo, I will use products of Arsenal Bulgaria.
{
ammo = "F_40mm_Yellow_Illumination";
descriptionShort = "Type: Yellow Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 RLV-ILL-YS Star (Yellow) Grenade"; 
displayNameShort = "Star (Yellow)";
initSpeed = 76.2;
mass = 5.6658;
picture = "\A3RO_A3\Textures\UI\gear_40x46_RLV_ILL_YS_CA.paa";
};
// HE 
class 1Rnd_HE_Grenade_shell : CA_Magazine
{
descriptionShort = "Type: High Explosive<br />Rounds: 1<br />Arming Range: 2.4 - 3 Meters<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M441 HE Grenade"; 
displayNameShort = "High Explosive";
initSpeed = 76.2; 
mass = 5.03;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M441_CA.paa";
};
// Smokes
class 1Rnd_Smoke_Grenade_shell : 1Rnd_HE_Grenade_shell
{
descriptionShort = "Type: White Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M680 Smoke (White) Grenade"; 
displayNameShort = "Smoke (White)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M680_CA.paa";
};
class 1Rnd_SmokeBlue_Grenade_shell : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: Blue Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 RLV-SMK-B Smoke (Blue) Grenade"; 
displayNameShort = "Smoke (Blue)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_RLV_SMK_B_CA.paa";
};
class 1Rnd_SmokeGreen_Grenade_shell : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: Experimental Green Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 XM679 Smoke (Green) Grenade"; 
displayNameShort = "Smoke (Green)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_XM679_CA.paa";
};
class 1Rnd_SmokeOrange_Grenade_shell : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: Orange Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 RLV-SMK-O Smoke (Orange) Grenade"; 
displayNameShort = "Smoke (Orange)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_RLV_SMK_O_CA.paa";
};
class 1Rnd_SmokePurple_Grenade_shell : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: Experimental Violet Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 XM681 Smoke (Violet) Grenade"; 
displayNameShort = "Smoke (Violet)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_XM681_CA.paa";
};
class 1Rnd_SmokeRed_Grenade_shell : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: Red Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M682 Smoke (Red) Grenade"; 
displayNameShort = "Smoke (Red)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M682_CA.paa";
};
class 1Rnd_SmokeYellow_Grenade_shell : 1Rnd_Smoke_Grenade_shell
{
descriptionShort = "Type: Yellow Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M676 Smoke (Yellow) Grenade"; 
displayNameShort = "Smoke (Yellow)";
initSpeed = 76.2; 
mass = 4.8;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M676_CA.paa";
};


// 3GL. Basing Values off of real 40mm US Grenades. The 3GL only ever had HE, but a flyer claimed it supported all standard Warheads...
// Flares
class 3Rnd_UGL_FlareGreen_F : UGL_FlareGreen_F // M661 / RLV-ILL-GS
{
ammo = "F_40mm_Green_Illumination";
descriptionShort = "Type: Green Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL"; 
displayName = "40x46 3Rnd 3GL Star (Green) Grenade"; 
displayNameShort = "Star (Green)";
initSpeed = 76.2; 
mass = 14.7; // 1 is 4.9
picture = "\A3RO_A3\Textures\UI\gear_3GL_Flare_Green_CA.paa";
};
class 3Rnd_UGL_FlareCIR_F : UGL_FlareCIR_F // M992 
{
ammo = "F_40mm_Cir_Illumination";
descriptionShort = "Type: Infra-Red Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Star (IR) Grenade";
displayNameShort = "Star (IR)";
initSpeed = 76.2;
mass = 14.7;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Flare_IR_CA.paa";
};
class 3Rnd_UGL_FlareRed_F : UGL_FlareRed_F // M662 / RLV-ILL-RS
{
ammo = "F_40mm_Red_Illumination";
descriptionShort = "Type: Red Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Star (Red) Grenade";
displayNameShort = "Star (Red)";
initSpeed = 76.2;
mass = 14.7;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Flare_Red_CA.paa";
};
class 3Rnd_UGL_FlareWhite_F : UGL_FlareWhite_F // M583 / RLV-ILL-WS
{
ammo = "F_40mm_White_Illumination";
descriptionShort = "Type: White Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Star (White) Grenade";
displayNameShort = "Star (White)";
initSpeed = 76.2;
mass = 14.7;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Flare_White_CA.paa";
};
class 3Rnd_UGL_FlareYellow_F : UGL_FlareYellow_F // RLV-ILL-YS
{
ammo = "F_40mm_Yellow_Illumination";
descriptionShort = "Type: Yellow Star<br />Rounds: 3<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Star (Yellow) Grenade";
displayNameShort = "Star (Yellow)";
initSpeed = 76.2;
mass = 14.7;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Flare_Yellow_CA.paa";
};
// Smokes
class 3Rnd_SmokeBlue_Grenade_shell : 1Rnd_SmokeBlue_Grenade_shell // RLV-SMK-B
{
descriptionShort = "Type: Blue Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (Blue) Grenade";
displayNameShort = "Smoke (Blue)";
initSpeed = 76.2;
mass = 14.4; // 1 is 4.8
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_Blue_CA.paa";
};
class 3Rnd_SmokeGreen_Grenade_shell : 1Rnd_SmokeGreen_Grenade_shell // RLV-SMK-G
{
descriptionShort = "Type: Green Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (Green) Grenade";
displayNameShort = "Smoke (Green)";
initSpeed = 76.2;
mass = 14.4;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_Green_CA.paa";
};
class 3Rnd_SmokeOrange_Grenade_shell : 1Rnd_SmokeOrange_Grenade_shell // RLV-SMK-O
{
descriptionShort = "Type: Orange Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (Orange) Grenade";
displayNameShort = "Smoke (Orange)";
initSpeed = 76.2;
mass = 14.4;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_Orange_CA.paa";
};
class 3Rnd_SmokePurple_Grenade_shell : 1Rnd_SmokePurple_Grenade_shell // RLV-SMK-P
{
descriptionShort = "Type: Violet Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (Violet) Grenade";
displayNameShort = "Smoke (Violet)";
initSpeed = 76.2;
mass = 14.4;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_Violet_CA.paa";
};
class 3Rnd_SmokeRed_Grenade_shell : 1Rnd_SmokeRed_Grenade_shell // M682 / RLV-SMK-R
{
descriptionShort = "Type: Red Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (Red) Grenade";
displayNameShort = "Smoke (Red)";
initSpeed = 76.2;
mass = 14.4;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_Red_CA.paa";
};
class 3Rnd_Smoke_Grenade_shell : 1Rnd_Smoke_Grenade_shell // M680 / RLV-SMK-W
{
descriptionShort = "Type: White Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (White) Grenade";
displayNameShort = "Smoke (White)";
initSpeed = 76.2;
mass = 14.4;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_White_CA.paa";
};
class 3Rnd_SmokeYellow_Grenade_shell : 1Rnd_SmokeYellow_Grenade_shell // M676 / RLV-SMK-Y
{
descriptionShort = "Type: Yellow Smoke<br />Rounds: 3<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Smoke (Yellow) Grenade";
displayNameShort = "Smoke (Yellow)";
initSpeed = 76.2;
mass = 14.4;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Smoke_Yellow_CA.paa";
};
// HE
class 3Rnd_HE_Grenade_shell : 1Rnd_HE_Grenade_shell // M441
{
descriptionShort = "Type: High Explosive<br />Rounds: 3<br />Arming Range: 2.4 - 3 Meters<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL HE Grenade";
displayNameShort = "High Explosive";
initSpeed = 76.2;
mass = 15.09; // 1 is 5.03
picture = "\A3RO_A3\Textures\UI\gear_3GL_HE_CA.paa";
};
// Creating 2Rnd and 1Rnd Variants of 3GL Ammo. 2Rnd 
// Flares
class 2Rnd_3GL_FlareGreen_F : 3Rnd_UGL_FlareGreen_F
{
count = 2;
descriptionShort = "Type: Green Star<br />Rounds: 2<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL"; 
displayName = "40x46 2Rnd 3GL Star (Green) Grenade"; 
displayNameShort = "Star (Green)";
initSpeed = 76.2; 
mass = 9.8;
};
class 2Rnd_3GL_FlareCIR_F : 3Rnd_UGL_FlareCIR_F
{
ammo = "F_40mm_Cir_Illumination";
count = 2;
descriptionShort = "Type: Infra-Red Star<br />Rounds: 2<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Star (IR) Grenade";
displayNameShort = "Star (IR)";
initSpeed = 76.2;
mass = 9.8;
};
class 2Rnd_3GL_FlareRed_F : 3Rnd_UGL_FlareRed_F
{
count = 2;
descriptionShort = "Type: Red Star<br />Rounds: 2<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Star (Red) Grenade";
displayNameShort = "Star (Red)";
initSpeed = 76.2;
mass = 9.8;
};
class 2Rnd_3GL_FlareWhite_F : 3Rnd_UGL_FlareWhite_F
{
count = 2;
descriptionShort = "Type: White Star<br />Rounds: 2<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Star (White) Grenade";
displayNameShort = "Star (White)";
initSpeed = 76.2;
mass = 9.8;
};
class 2Rnd_3GL_FlareYellow_F : 3Rnd_UGL_FlareYellow_F
{
count = 2;
descriptionShort = "Type: Yellow Star<br />Rounds: 2<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Star (Yellow) Grenade";
displayNameShort = "Star (Yellow)";
initSpeed = 76.2;
mass = 9.8;
};
// Smokes
class 2Rnd_3GL_SmokeBlue_F : 3Rnd_SmokeBlue_Grenade_shell
{
count = 2;
descriptionShort = "Type: Blue Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (Blue) Grenade";
displayNameShort = "Smoke (Blue)";
initSpeed = 76.2;
mass = 9.6;
};
class 2Rnd_3GL_SmokeGreen_F : 3Rnd_SmokeGreen_Grenade_shell
{
count = 2;
descriptionShort = "Type: Green Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (Green) Grenade";
displayNameShort = "Smoke (Green)";
initSpeed = 76.2;
mass = 9.6;
};
class 2Rnd_3GL_SmokeOrange_F : 3Rnd_SmokeOrange_Grenade_shell
{
count = 2;
descriptionShort = "Type: Orange Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (Orange) Grenade";
displayNameShort = "Smoke (Orange)";
initSpeed = 76.2;
mass = 9.6;
};
class 2Rnd_3GL_SmokePurple_F : 3Rnd_SmokePurple_Grenade_shell
{
count = 2;
descriptionShort = "Type: Violet Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (Violet) Grenade";
displayNameShort = "Smoke (Violet)";
initSpeed = 76.2;
mass = 9.6;
};
class 2Rnd_3GL_SmokeRed_F : 3Rnd_SmokeRed_Grenade_shell
{
count = 2;
descriptionShort = "Type: Red Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (Red) Grenade";
displayNameShort = "Smoke (Red)";
initSpeed = 76.2;
mass = 9.6;
};
class 2Rnd_3GL_SmokeWhite_F : 3Rnd_Smoke_Grenade_shell
{
count = 2;
descriptionShort = "Type: White Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (White) Grenade";
displayNameShort = "Smoke (White)";
initSpeed = 76.2;
mass = 9.6;
};
class 2Rnd_3GL_SmokeYellow_F : 3Rnd_SmokeYellow_Grenade_shell
{
count = 2;
descriptionShort = "Type: Yellow Smoke<br />Rounds: 2<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Smoke (Yellow) Grenade";
displayNameShort = "Smoke (Yellow)";
initSpeed = 76.2;
mass = 9.6;
};
// HE
class 2Rnd_3GL_HE_F : 3Rnd_HE_Grenade_shell
{
count = 2;
descriptionShort = "Type: High Explosive<br />Rounds: 2<br />Arming Range: 2.4 - 3 Meters<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL HE Grenade";
mass = 10.06;
};
// 1Rnd
// Flares
class 1Rnd_3GL_FlareGreen_F : 3Rnd_UGL_FlareGreen_F
{
count = 1;
descriptionShort = "Type: Green Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL"; 
displayName = "40x46 1Rnd 3GL Star (Green) Grenade"; 
displayNameShort = "Star (Green)";
initSpeed = 76.2; 
mass = 4.9;
};
class 1Rnd_3GL_FlareCIR_F : 3Rnd_UGL_FlareCIR_F
{
ammo = "F_40mm_Cir_Illumination";
count = 1;
descriptionShort = "Type: Infra-Red Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Star (IR) Grenade";
displayNameShort = "Star (IR)";
initSpeed = 76.2;
mass = 4.9;
};
class 1Rnd_3GL_FlareRed_F : 3Rnd_UGL_FlareRed_F
{
count = 1;
descriptionShort = "Type: Red Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Star (Red) Grenade";
displayNameShort = "Star (Red)";
initSpeed = 76.2;
mass = 4.9;
};
class 1Rnd_3GL_FlareWhite_F : 3Rnd_UGL_FlareWhite_F
{
count = 1;
descriptionShort = "Type: White Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Star (White) Grenade";
displayNameShort = "Star (White)";
initSpeed = 76.2;
mass = 4.9;
};
class 1Rnd_3GL_FlareYellow_F : 3Rnd_UGL_FlareYellow_F
{
count = 1;
descriptionShort = "Type: Yellow Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Star (Yellow) Grenade";
displayNameShort = "Star (Yellow)";
initSpeed = 76.2;
mass = 4.9;
};
// Smokes
class 1Rnd_3GL_SmokeBlue_F : 3Rnd_SmokeBlue_Grenade_shell
{
count = 1;
descriptionShort = "Type: Blue Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (Blue) Grenade";
displayNameShort = "Smoke (Blue)";
initSpeed = 76.2;
mass = 4.8;
};
class 1Rnd_3GL_SmokeGreen_F : 3Rnd_SmokeGreen_Grenade_shell
{
count = 1;
descriptionShort = "Type: Green Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (Green) Grenade";
displayNameShort = "Smoke (Green)";
initSpeed = 76.2;
mass = 4.8;
};
class 1Rnd_3GL_SmokeOrange_F : 3Rnd_SmokeOrange_Grenade_shell
{
count = 1;
descriptionShort = "Type: Orange Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (Orange) Grenade";
displayNameShort = "Smoke (Orange)";
initSpeed = 76.2;
mass = 4.8;
};
class 1Rnd_3GL_SmokePurple_F : 3Rnd_SmokePurple_Grenade_shell
{
count = 1;
descriptionShort = "Type: Violet Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (Violet) Grenade";
displayNameShort = "Smoke (Violet)";
initSpeed = 76.2;
mass = 4.8;
};
class 1Rnd_3GL_SmokeRed_F : 3Rnd_SmokeRed_Grenade_shell
{
count = 1;
descriptionShort = "Type: Red Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (Red) Grenade";
displayNameShort = "Smoke (Red)";
initSpeed = 76.2;
mass = 4.8;
};
class 1Rnd_3GL_SmokeWhite_F : 3Rnd_Smoke_Grenade_shell
{
count = 1;
descriptionShort = "Type: White Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (White) Grenade";
displayNameShort = "Smoke (White)";
initSpeed = 76.2;
mass = 4.8;
};
class 1Rnd_3GL_SmokeYellow_F : 3Rnd_SmokeYellow_Grenade_shell
{
count = 1;
descriptionShort = "Type: Yellow Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~90 Seconds<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Smoke (Yellow) Grenade";
displayNameShort = "Smoke (Yellow)";
initSpeed = 76.2;
mass = 4.8;
};
// HE
class 1Rnd_3GL_HE_F : 3Rnd_HE_Grenade_shell
{
count = 1;
descriptionShort = "Type: High Explosive<br />Rounds: 1<br />Arming Range: 2.4 - 3 Meters<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL HE Grenade";
initSpeed = 76.2;
mass = 5.03;
};

// Creating new Grenade Magazine Classes
// 3GL
// HEDP
class 3Rnd_3GL_HEDP_F : 3Rnd_HE_Grenade_shell
{
ammo = "G_40mm_HEDP";
descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 3<br />Arming Range: 14 - 27 Meters<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL HEDP Grenade";
displayNameShort = "HE Dual Purpose";
mass = 15.21; // 1 is 5.07
picture = "\A3RO_A3\Textures\UI\gear_3GL_HEDP_CA.paa";
};
class 2Rnd_3GL_HEDP_F : 3Rnd_3GL_HEDP_F
{
count = 2;
descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 2<br />Arming Range: 14 - 27 Meters<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL HEDP Grenade";
mass = 10.14;
};
class 1Rnd_3GL_HEDP_F : 3Rnd_3GL_HEDP_F
{
count = 1;
descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Arming Range: 14 - 27 Meters<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL HEDP Grenade";
mass = 5.07;
};
// HEAB
class 3Rnd_3GL_HEAB_F : 3Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_HE_Airburst";
descriptionShort = "Type: High Explosive Airburst<br />Rounds: 3<br />Arming Range: 14 - 27 Meters<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL HE AB Grenade";
displayNameShort = "HE Airburst";
mass = 15.3;
picture = "\A3RO_A3\Textures\UI\gear_3GL_HEAB_CA.paa";
};
class 2Rnd_3GL_HEAB_F : 3Rnd_3GL_HEAB_F
{
count = 2;
descriptionShort = "Type: High Explosive Airburst<br />Rounds: 2<br />Arming Range: 14 - 27 Meters<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL HE AB Grenade";
mass = 10.2;
};
class 1Rnd_3GL_HEAB_F : 3Rnd_3GL_HEAB_F
{
count = 1;
descriptionShort = "Type: High Explosive Airburst<br />Rounds: 1<br />Arming Range: 14 - 27 Meters<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL HE AB Grenade";
mass = 5.1;
};
// Practice
class 3Rnd_3GL_Practice_F : 3Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_Practice";
descriptionShort = "Type: Practice<br />Rounds: 3<br />Orange Chalk<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL Practice Grenade";
displayNameShort = "Practice";
mass = 13.557;
picture = "\A3RO_A3\Textures\UI\gear_3GL_Practice_CA.paa";
};
class 2Rnd_3GL_Practice_F : 3Rnd_3GL_Practice_F
{
count = 2;
descriptionShort = "Type: Practice<br />Rounds: 2<br />Orange Chalk<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL Practice Grenade";
mass = 9.038;
};
class 1Rnd_3GL_Practice_F : 3Rnd_3GL_Practice_F
{
count = 1;
descriptionShort = "Type: Practice<br />Rounds: 1<br />Orange Chalk<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL Practice Grenade";
mass = 4.519;
};
// Less Lethal
class 3Rnd_3GL_LessLethal_F : 3Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_LessLethal";
descriptionShort = "Type: Less-Lethal<br />Rounds: 3<br />Rubber<br />Used in: 3GL";
displayName = "40x46 3Rnd 3GL LL Grenade";
displayNameShort = "Less-Lethal";
mass = 4.5;
picture = "\A3RO_A3\Textures\UI\gear_3GL_LessLethal_CA.paa";
};
class 2Rnd_3GL_LessLethal_F : 3Rnd_3GL_LessLethal_F
{
count = 2;
descriptionShort = "Type: Less-Lethal<br />Rounds: 2<br />Rubber<br />Used in: 3GL";
displayName = "40x46 2Rnd 3GL LL Grenade";
mass = 3;
};
class 1Rnd_3GL_LessLethal_F : 3Rnd_3GL_LessLethal_F
{
count = 1;
descriptionShort = "Type: Less-Lethal<br />Rounds: 1<br />Rubber<br />Used in: 3GL";
displayName = "40x46 1Rnd 3GL LL Grenade";
mass = 1.5;
};

// Every other 40x46 GL
// HEDP
class 1Rnd_HEDP_Grenade_shell : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_HEDP";
descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Arming Range: 14 - 27 Meters<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M433 HEDP Grenade";
displayNameShort = "HE Dual Purpose";
initSpeed = 76.2;
mass = 5.07;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M433_CA.paa";
};
// Practice
class 1Rnd_Practice_Grenade_shell : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_Practice";
descriptionShort = "Type: Practice<br />Rounds: 1<br />Orange Chalk<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M781 Practice Grenade";
displayNameShort = "Practice";
initSpeed = 76.2;
mass = 4.519;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M781_CA.paa";
};
// Buckshot
class 1Rnd_Buckshot_Grenade_shell : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_Buckshot";   
descriptionShort = "Type: Buckshot<br />Rounds: 1<br />Aim For The Feet!<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M576 Buckshot Grenade";
displayNameShort = "Buckshot";
initSpeed = 269.139;
mass = 2.54;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M576_CA.paa";
};
// Crowd Dispersal
class 1Rnd_CrowdDispersal_Grenade_shell : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_CrowdDispersal";   
descriptionShort = "Type: Crowd Dispersal Cartridge<br />Rounds: 1<br />Aim For The Feet!<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M1029 CDC Grenade";
displayNameShort = "Crowd Dispersal";
initSpeed = 374.904;
mass = 4.7;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M1029_CA.paa";
};
// Airburst
class 1Rnd_Airburst_Grenade_shell : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_HE_Airburst";
descriptionShort = "Type: High Explosive Airburst<br />Rounds: 1<br />Arming Range: 14 - 27 Meters<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M397A1 HE AB Grenade";
displayNameShort = "HE Airburst";
initSpeed = 76.2;
mass = 5.1;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M397A1_CA.paa";
};
// Less Lethal
class 1Rnd_LessLethal_Grenade_shell : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_UGL_LessLethal";
descriptionShort = "Type: Less-Lethal<br />Rounds: 1<br />Rubber<br />Used in: FN40GL®, GL1, GLM, GP, GLX160, M203A1, ML40 mk1";
displayName = "40x46 M1006 LL Grenade";
displayNameShort = "Less-Lethal";
initSpeed = 76.2;
mass = 1.5;
picture = "\A3RO_A3\Textures\UI\gear_40x46_M1006_CA.paa";
};

// Creating GP-25 Grenades
class 1Rnd_GP25_VOG25M_Grenade : 1Rnd_HE_Grenade_shell
{
ammo = "G_40mm_GP25_VOG25M";
author = "NeroTheHero111";
descriptionShort = "Type: High Explosive Fragmentation<br />Rounds: 1<br />Arming Range: 10 - 40 Meters<br />Maximum Airtime: 14 - 19 Seconds<br />Used in: GP-25";
displayName = "40x107 VOG-25M HEF Grenade";
displayNameShort = "HE Fragmentation";
initSpeed = 76.505;
mass = 6.01862; // Taking RLV Weights as they are more available, trustworthy and MOST LIKELY the same.
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_VOG25M_CA.paa";
};
class 1Rnd_GP25_VOG25PM_Grenade : 1Rnd_GP25_VOG25M_Grenade
{
ammo = "G_40mm_GP25_VOG25PM";
descriptionShort = "Type: High Explosive Fragmentation Airburst<br />Rounds: 1<br />Arming Range: 10 - 40 Meters<br />Maximum Airtime: 14 - 19 Seconds<br />Used in: GP-25";
displayName = "40x107 VOG-25PM HEF AB Grenade";
displayNameShort = "HEF Airburst";
mass = 6.1289;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_VOG25PM_CA.paa";
};
class 1Rnd_GP25_VG40TB_Grenade : 1Rnd_GP25_VOG25M_Grenade
{
ammo = "G_40mm_GP25_VG40TB";
descriptionShort = "Type: Thermobaric<br />Rounds: 1<br />Arming Range: 10 - 40 Meters<br />Maximum Airtime: 14 - 19 Seconds<br />Used in: GP-25";
displayName = "40x122 VG-40TB Thermobaric Grenade";
displayNameShort = "Thermobaric";
mass = 5.5997;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_VG40TB_CA.paa";
};
class 1Rnd_GP25_VUS25_Grenade : 1Rnd_GP25_VOG25M_Grenade
{
ammo = "G_40mm_GP25_VUS25";
descriptionShort = "Type: Practice Grenade<br />Rounds: 1<br />Red-Orange Chalk<br />Used in: GP-25";
displayName = "40x107 VUS-25 Practice Grenade";
displayNameShort = "Practice";
mass = 6.1289;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_VOG25PM_CA.paa";
};
class 1Rnd_GP25_RLV_HEDP_Grenade : 1Rnd_GP25_VOG25M_Grenade
{
ammo = "G_40mm_GP25_RLV_HEDP";
descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Arming Range: 10 - 40 Meters<br />Maximum Airtime: 14 - 19 Seconds<br />Used in: GP-25";
displayName = "40x107 RLV-HEDP Grenade";
displayNameShort = "HE Dual Purpose";
mass = 6.0627;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_HEDP_CA.paa";
};
class 1Rnd_GP25_VDG25_Grenade : 1Rnd_GP25_VOG25M_Grenade
{
ammo = "G_40mm_GP25_VDG25";
descriptionShort = "Type: Smoke Screen<br />Rounds: 1<br />Ignition: On Impact<br />Burn Time: ~20 Seconds<br />Used in: GP-25";
displayName = "40x122 VDG-25 Smoke (White) Grenade";
displayNameShort = "Smoke Screen";
mass = 6.1729;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_VDG25_CA.paa";
};
class UGL_FlareWhite_GP25_F : UGL_FlareWhite_F
{
ammo = "F_40mm_GP25_FlareWhite";
descriptionShort = "Type: White Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~25 Seconds<br />Used in: GP-25";
displayName = "40x122 RLV-ILL-WS Star (White) Grenade"; 
displayNameShort = "Star (White)";
initSpeed = 76.2;
mass = 5.2911;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_Flare_White_CA.paa";
};
class UGL_FlareRed_GP25_F : UGL_FlareWhite_GP25_F
{
ammo = "F_40mm_GP25_FlareRed";
descriptionShort = "Type: Red Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~25 Seconds<br />Used in: GP-25";
displayName = "40x122 RLV-ILL-RS Star (Red) Grenade"; 
displayNameShort = "Star (Red)";
mass = 5.9525;
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_Flare_Red_CA.paa";
};
class UGL_FlareGreen_GP25_F : UGL_FlareWhite_GP25_F
{
ammo = "F_40mm_GP25_FlareGreen";
descriptionShort = "Type: Green Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~25 Seconds<br />Used in: GP-25";
displayName = "40x122 RLV-ILL-GS Star (Green) Grenade"; 
displayNameShort = "Star (Green)";
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_Flare_Green_CA.paa";
};
class UGL_FlareYellow_GP25_F : UGL_FlareWhite_GP25_F
{
ammo = "F_40mm_GP25_FlareYellow";
descriptionShort = "Type: Yellow Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~25 Seconds<br />Used in: GP-25";
displayName = "40x122 RLV-ILL-YS Star (Yellow) Grenade"; 
displayNameShort = "Star (Yellow)";
picture = "\A3RO_A3\Textures\UI\gear_40mmCL_Flare_Yellow_CA.paa";
};

// Creating QLG-10A Grenades
class 1Rnd_QGL10A_DFS10_Grenade : 1Rnd_HE_Grenade_shell
{
ammo = "G_35mm_QLG10A_DFS10";
author = "NeroTheHero111";
descriptionShort = "Type: High Explosive Fragmentation<br />Rounds: 1<br />Arming Range: 10 - 30 Meters<br />Maximum Airtime: 12 - 16 Seconds<br />Used in: QLG-10A";
displayName = "35x90 DFS-10 HEF Grenade";
displayNameShort = "HE Fragmentation";
initSpeed = 78.029;
mass = 3.7258;
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfs10_CA.paa";
};
class 1Rnd_QGL10A_DFS10A_Grenade : 1Rnd_QGL10A_DFS10_Grenade
{
ammo = "G_35mm_QLG10A_DFS10A";
descriptionShort = "Type: High Explosive Fragmentation Airburst<br />Rounds: 1<br />Arming Range: 10 - 30 Meters<br />Maximum Airtime: 12 - 16 Seconds<br />Used in: QLG-10A";
displayName = "35x90 DFS-10A HEF AB Grenade";
displayNameShort = "HEF Airburst";
mass = 3.7940;
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfs10a_CA.paa";
};  
class 1Rnd_QGL10A_DFJ10_Grenade : 1Rnd_QGL10A_DFS10_Grenade
{
ammo = "G_35mm_QLG10A_DFS10";
descriptionShort = "Type: High Explosive Dual Purpose<br />Rounds: 1<br />Arming Range: 10 - 30 Meters<br />Maximum Airtime: 12 - 16 Seconds<br />Used in: QLG-10A";
displayName = "35x95 DFJ-10 HEDP Grenade";
displayNameShort = "HE Dual Purpose";
mass = 3.7531;
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfj10_CA.paa";
};
class 1Rnd_QGL10A_DFX10_Grenade : 1Rnd_QGL10A_DFS10_Grenade
{
ammo = "G_35mm_QLG10A_DFX10";
descriptionShort = "Type: Trajectory Marker<br />Rounds: 1<br />Ignition: ~100m From Muzzle<br />Yellow Smoke<br />Used in: QLG-10A";
displayName = "35x95 DFX-10 TM Grenade";
displayNameShort = "Trajectory Marker";
mass = 3.2848;
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfx10_CA.paa";
};
class 1Rnd_QGL10A_DFD10_White_Grenade : 1Rnd_QGL10A_DFS10_Grenade
{
ammo = "G_35mm_QLG10A_DFD10_White";
descriptionShort = "Type: White Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~60 Seconds<br />Used in: QLG-10A";
displayName = "35x90 DFD-10 Smoke (White) Grenade";
displayNameShort = "Smoke (White)";
mass = 3.814;
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfd10_white_CA.paa";
};
class 1Rnd_QGL10A_DFD10_Red_Grenade : 1Rnd_QGL10A_DFD10_White_Grenade
{
ammo = "G_35mm_QLG10A_DFD10_Red";
descriptionShort = "Type: Red Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~60 Seconds<br />Used in: QLG-10A";
displayName = "35x90 DFD-10 Smoke (Red) Grenade";
displayNameShort = "Smoke (Red)";
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfd10_red_CA.paa";
};
class 1Rnd_QGL10A_DFD10_Green_Grenade : 1Rnd_QGL10A_DFD10_White_Grenade
{
ammo = "G_35mm_QLG10A_DFD10_Green";
descriptionShort = "Type: Green Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~60 Seconds<br />Used in: QLG-10A";
displayName = "35x90 DFD-10 Smoke (Green) Grenade";
displayNameShort = "Smoke (Green)";
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfd10_green_CA.paa";
};
class 1Rnd_QGL10A_DFD10_Yellow_Grenade : 1Rnd_QGL10A_DFD10_White_Grenade
{
ammo = "G_35mm_QLG10A_DFD10_Yellow";
descriptionShort = "Type: Yellow Smoke<br />Rounds: 1<br />Ignition Delay: 2 Seconds<br />Burn Time: ~60 Seconds<br />Used in: QLG-10A";
displayName = "35x90 DFD-10 Smoke (Yellow) Grenade";
displayNameShort = "Smoke (Yellow)";
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfd10_yellow_CA.paa";
};
class 1Rnd_QGL10A_DFP10_Grenade : 1Rnd_QGL10A_DFS10_Grenade // I can't find the actual designation.
{
ammo = "G_35mm_QLG10A_DFP10";
descriptionShort = "Type: Practice Grenade<br />Rounds: 1<br />Yellow-Orange Chalk<br />Used in: QLG-10A";
displayName = "35x95 DFP-10 Practice Grenade";
displayNameShort = "Practice";
mass = 3.7531;
picture = "\A3RO_A3\Textures\UI\gear_35mmCL_dfp10_CA.paa";
};

// Hiding newly added Illumination Flares. We already have Flares at home.
class UGL_FlareGreen_Illumination_F : UGL_FlareGreen_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: Green Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 M661 Star (Green) Grenade";
displayNameShort = "Star (Green)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1; 
};
class UGL_FlareRed_Illumination_F : UGL_FlareRed_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: Red Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 M662 Star (Red) Grenade";
displayNameShort = "Star (Red)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class UGL_FlareWhite_Illumination_F : UGL_FlareWhite_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: White Star<br />Rounds: 1<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 M583A1 Star (White) Grenade";
displayNameShort = "Star (White)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class UGL_FlareYellow_Illumination_F : UGL_FlareYellow_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: Yellow Star<br />Rounds: 1<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 RLV-ILL-YS Star (Yellow) Grenade";
displayNameShort = "Star (Yellow)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class 3rnd_UGL_FlareGreen_Illumination_F : 3Rnd_UGL_FlareGreen_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: Green Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 3Rnd 3GL Star (Green) Grenade";
displayNameShort = "Star (Green)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class 3rnd_UGL_FlareRed_Illumination_F : 3Rnd_UGL_FlareRed_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: Red Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 3Rnd 3GL Star (Red) Grenade";
displayNameShort = "Star (Red)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class 3rnd_UGL_FlareWhite_Illumination_F : 3Rnd_UGL_FlareWhite_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: White Star<br />Rounds: 3<br />Ignition Delay: 4 - 5 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 3Rnd 3GL Star (White) Grenade";
displayNameShort = "Star (White)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class 3rnd_UGL_FlareYellow_Illumination_F : 3Rnd_UGL_FlareYellow_F
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Type: Yellow Star<br />Rounds: 3<br />Ignition Delay: 4.1 - 4.9 Seconds<br />Illumination Time: ~40 Seconds<br />Used in: ?";
displayName = "[ A3RO INCOMPATIBLE ] 40x46 3Rnd 3GL Star (Yellow) Grenade";
displayNameShort = "Star (Yellow)";
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};

// Adjusting XM307 Magazine
class 200Rnd_20mm_G_belt : VehicleMagazine
{
ammo = "G_25mm_XM307_HE";
descriptionShort = "Calibre: 25x59mm HV<br />Rounds: 200<br />Tracers: None<br />Used in: Grenade Launcher";
displayName = "25x59 200Rnd Belt";
initSpeed = 424.892;
};
class 40Rnd_20mm_G_belt : 200Rnd_20mm_G_belt
{
descriptionShort = "Calibre: 25x59mm HV<br />Rounds: 40<br />Tracers: None<br />Used in: XM307";
displayName = "25x59 40Rnd XM307 Belt";
displayNameShort = "High Explosive";
};


// Mines
class ClaymoreDirectionalMine_Remote_Mag : CA_Magazine
{
descriptionShort = "Type: Directional Anti-Personnel Mine<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Ejects 500 Steel Balls out to ~100 Meters in a 30° Arc at high velocity on Command or Timer Expiration<br />Effective against: Personnel";
displayName = "MM-1";
displayNameShort = "MM-1";
mass = 11.6667;
picture = "\A3RO_A3\Textures\UI\gear_mine_AP_miniclaymore_CA.paa";
};
class ATMine_Range_Mag : CA_Magazine
{
descriptionShort = "Type: Anti-Tank Mine<br />Rounds: 1<br />Activation: Pressure Fuze<br />Behaviour: Detonates at ~159 - 340Kg of Pressure<br />Effective against: Vehicles up to and uncluding IFVs";
displayName = "M15";
displayNameShort = "M15";
mass = 314.6;
picture = "\A3RO_A3\Textures\UI\gear_mine_AT_CA.paa";
};
class SatchelCharge_Remote_Mag : CA_Magazine
{
descriptionShort = "Type: Demolition-Satchel Charge<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Detonates on Command or Timer Expiration<br />Effective against: Fortifications";
displayName = "M183";
displayNameShort = "M183";
mass = 200;
picture = "\A3RO_A3\Textures\UI\gear_satchel_CA.paa";
};
class DemoCharge_Remote_Mag : SatchelCharge_Remote_Mag
{
descriptionShort = "Type: Demolition Blocks<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Detonates on Command or Timer Expiration<br />Effective against: Buildings";
displayName = "M112 (4x)";
displayNameShort = "M112 (4x)";
mass = 51.3677;
picture = "\A3RO_A3\Textures\UI\gear_c4_charge_small_CA.paa";
};
class APERSMineDispenser_Mag : SatchelCharge_Remote_Mag
{
descriptionShort = "Type: Fictional Anti-Personnel Command Munitions System<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Ejects 14 mines to form a linear minefield infront of the device<br />Effective against: Personnel";
displayName = "M8 Tarantula (Dispenser)";
displayNameShort = "M8 Tarantula (Dispenser)";
mass = 61.7294;
picture = "\A3RO_A3\Textures\UI\gear_APERSmineDispenser_CA.paa";
};
class IEDUrbanBig_Remote_Mag : DemoCharge_Remote_Mag
{
descriptionShort = "Type: Improvised Explosive Device<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Detonates on Command or Timer Expiration<br />Effective against: Vehicles up to and uncluding IFVs";
displayName = "IED (Urban, Large)";
displayNameShort = "IED (Urban, Large)";
mass = 658.7412;
picture = "\A3RO_A3\Textures\UI\gear_IED_large_urban_CA.paa";
};
class IEDLandBig_Remote_Mag : IEDUrbanBig_Remote_Mag
{
descriptionShort = "Type: Improvised Explosive Device<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Detonates on Command or Timer Expiration<br />Effective against: Vehicles up to and uncluding IFVs";
displayName = "IED (Dug-In, Large)";
displayNameShort = "IED (Dug-In, Large)";
mass = 640.2224;
picture = "\A3RO_A3\Textures\UI\gear_IED_large_dugin_CA.paa";
};
class IEDUrbanSmall_Remote_Mag : DemoCharge_Remote_Mag
{
descriptionShort = "Type: Improvised Explosive Device<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Detonates on Command or Timer Expiration<br />Effective against: Vehicles up to and uncluding IFVs";
displayName = "IED (Urban, Small)";
displayNameShort = "IED (Urban, Small)";
mass = 178.5744;
picture = "\A3RO_A3\Textures\UI\gear_IED_small_urban_CA.paa";
};
class IEDLandSmall_Remote_Mag : IEDUrbanSmall_Remote_Mag
{
descriptionShort = "Type: Improvised Explosive Device<br />Rounds: 1<br />Activation: Timer / Firing Device<br />Behaviour: Detonates on Command or Timer Expiration<br />Effective against: Vehicles up to and uncluding IFVs";
displayName = "IED (Dug-In, Medium)";
displayNameShort = "IED (Dug-In, Medium)";
mass = 480.1668;
picture = "\A3RO_A3\Textures\UI\gear_IED_small_dugin_CA.paa";
};
class APERSBoundingMine_Range_Mag : ATMine_Range_Mag
{
descriptionShort = "Type: Bounding Anti-Personnel Mine<br />Rounds: 1<br />Activation: Pressure Fuze / Tripwire<br />Behaviour: Detonates at ~6 - 13Kg of Pressure or when the Tripwire is pulled, leaping ~2 Meters into the air beforehand<br />Effective against: Personnel";
displayName = "M26";
displayNameShort = "M26";
mass = 22;
picture = "\A3RO_A3\Textures\UI\gear_mine_AP_bouncing_CA.paa";
};
class SLAMDirectionalMine_Wire_Mag : ATMine_Range_Mag
{
descriptionShort = "Type: Selectable Lightweight Attack Munition<br />Rounds: 1<br />Activation: Infrared Sensor<br />Behaviour: Detonates upon detecting a change in Background Temperature<br />Effective against: Light Vehicles";
displayName = "M4 SLAM";
displayNameShort = "M4 SLAM";
mass = 22;
picture = "\A3RO_A3\Textures\UI\gear_mine_SLAM_directional_CA.paa";
};
class APERSTripMine_Wire_Mag : ATMine_Range_Mag
{
ammo = "APERSTripMine_Wire_Ammo_Init";
descriptionShort = "Type: Anti-Personnel Tripwire Mine<br />Rounds: 1<br />Activation: Tripwire<br />Behaviour: Detonates when the Tripwire is pulled<br />Effective against: Personnel";
displayName = "PMR-3";
displayNameShort = "PMR-3";
mass = 44.0925;
picture = "\A3RO_A3\Textures\UI\gear_mine_AP_tripwire_CA.paa";
};
class APERSMine_Range_Mag : ATMine_Range_Mag
{
descriptionShort = "Type: Anti-Personnel Mine<br />Rounds: 1<br />Activation: Pressure Fuze<br />Behaviour: Detonates at ~6 - 13Kg of Pressure<br />Effective against: Personnel";
displayName = "VS-50";
displayNameShort = "VS-50";
mass = 4.07855;
picture = "\A3RO_A3\Textures\UI\gear_mine_AP_CA.paa";
};
class TrainingMine_Mag : APERSMine_Range_Mag
{
descriptionShort = "Type: Dummy Mine<br />Rounds: 1<br />Activation: Pressure Fuze<br />Behaviour: Simulates detionation at ~6 to 13Kg of Pressure with an Audio-Visual Spectacle<br />Effective against: Trainees' Calves";
displayName = "Training Mine";
displayNameShort = "Training Mine";
mass = 55.1156;
picture = "\A3RO_A3\Textures\UI\gear_TrainingMine_CA.paa";
};
// New Rake from Gamefiles
class RakeMine_Mag : APERSBoundingMine_Range_Mag
{
ammo = "RakeMine_Ammo";
descriptionShort = "Type: Gardening Tool<br />Rounds: 1<br />Activation: Careless Footwork<br />Behaviour: Bonk<br />Effective against: The Blind";
displayName = "Rake";
displayNameShort = "Rake";
mass = 16.4906;
model = "\A3\Weapons_F\mines\rake";
picture = "\A3RO_A3\Textures\UI\gear_mine_Rake_CA.paa";
};
// Tripwire Flare Mine from Gamefiles. Seems loosely based off of M48, but there is no Parachute Tube. Creating Fictional newer version with stats based off of M49A1
class FlareTripMine_Mag : APERSTripMine_Wire_Mag
{
ammo = "FlareTripMine_Wire_Ammo_Init";
descriptionShort = "Type: Fictional Illumination Flare Tripwire Mine<br />Rounds: 1<br />Activation: Tripwire<br />Behaviour: Ignites a Flare which burns for a minimum of 55 seconds when the Tripwire is pulled<br />Effective against: Intrusion";
displayName = "M50A1";
displayNameShort = "M50A1";
mass = 7.5;
model = "\A3\Weapons_F\explosives\Flare_tripwire_i";
picture = "\A3RO_A3\Textures\UI\gear_mine_flare_tripwire_CA.paa";
};
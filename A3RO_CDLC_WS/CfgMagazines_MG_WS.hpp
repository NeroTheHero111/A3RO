// SS77 Pouches. Ammocount to 50
class 100Rnd_762x51_S77_Red_lxWS : 150Rnd_762x54_Box
{
count = 50;
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 50<br />Tracers: Last 4 Rounds<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Reload Tracer (Red) SS77 Pouch";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
initSpeed = 843.077;
mass = 36.6362;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_RRT_SS77_lxws_CA.paa";
};
class 100Rnd_762x51_S77_Yellow_lxWS : 100Rnd_762x51_S77_Red_lxWS
{
displayName = "7.62x51 50Rnd Reload Tracer (Yellow) SS77 Pouch";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_YRT_SS77_lxws_CA.paa";
};
class 100Rnd_762x51_S77_Green_lxWS : 100Rnd_762x51_S77_Red_lxWS
{
displayName = "7.62x51 50Rnd Reload Tracer (Green) SS77 Pouch";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_GRT_SS77_lxws_CA.paa";
};
class 100Rnd_762x51_S77_Red_Tracer_lxWS : 100Rnd_762x51_S77_Red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 50<br />Tracers: Every Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer (Red) SS77 Pouch";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 50;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_RT_SS77_lxws_CA.paa";
tracersEvery = 1;
};
class 100Rnd_762x51_S77_Yellow_Tracer_lxWS : 100Rnd_762x51_S77_Yellow_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 50<br />Tracers: Every Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer (Yellow) SS77 Pouch";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 50;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_YT_SS77_lxws_CA.paa";
tracersEvery = 1;
};
class 100Rnd_762x51_S77_Green_Tracer_lxWS : 100Rnd_762x51_S77_Green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 50<br />Tracers: Every Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer (Green) SS77 Pouch";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 50;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_GT_SS77_lxws_CA.paa";
tracersEvery = 1;
};
// Adding Tracer, T4 Yellow and tracerless Pouch
class 100Rnd_762x51_S77_lxWS : 100Rnd_762x51_S77_Red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 50<br />Tracers: None<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd SS77 Pouch";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxWS\weapons_1_f_lxws\Machineguns\s77\data\ui\m_100Rnd_762x51_S77_Red_lxWS_CA.paa";
};
class 100Rnd_762x51_S77_RT4_lxWS : 100Rnd_762x51_S77_Red_Tracer_lxWS
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 50<br />Tracers: Every 4th Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer Every 4 (Red) SS77 Pouch";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_RT4_SS77_lxws_CA.paa";
tracersEvery = 4;
};
class 100Rnd_762x51_S77_YT4_lxWS : 100Rnd_762x51_S77_RT4_lxWS
{
ammo = "B_762x51_Tracer_Yellow";
displayName = "7.62x51 50Rnd Tracer Every 4 (Yellow) SS77 Pouch";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_YT4_SS77_lxws_CA.paa";
};
class 100Rnd_762x51_S77_GT4_lxWS : 100Rnd_762x51_S77_RT4_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 50Rnd Tracer Every 4 (Green) SS77 Pouch";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_GT4_SS77_lxws_CA.paa";
};
// IR
class 100Rnd_762x51_S77_IRT_lxWS : 100Rnd_762x51_S77_Red_Tracer_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 50Rnd Tracer (IR-DIM) SS77 Pouch";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_IRT_SS77_lxws_CA.paa";
};
class 100Rnd_762x51_S77_IRT4_lxWS : 100Rnd_762x51_S77_RT4_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 50Rnd Tracer Every 4 (IR-DIM) SS77 Pouch";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_IRT4_SS77_lxws_CA.paa";
};

// Hiding Unused Pylon Magazines presumably originally used for the AP-5 Bustard
class lxWS_Pylon_LMG_Zafir_F : 150Rnd_762x54_Box
{     
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: Negev NG-7";
displayName = "[ A3RO INCOMPATIBLE ] 7.62x51 100Rnd Reload Tracer (Green) NG-7 Box";
mass = 67.0725;
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class lxWS_Pylon_arifle_MX_SW_F : 100Rnd_65x39_caseless_mag
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Calibre: 6.5x39mm<br />Rounds: 60<br />Tracers: Last 4 Rounds<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";
displayName = "[ A3RO INCOMPATIBLE ] 6.5x39 60Rnd Reload Tracer (Red) Sand Mag";
mass = 26.5235;
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class lxWS_Pylon_LMG_Mk200_black_F : 200Rnd_65x39_cased_Box
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: Stoner 96";
displayName = "[ A3RO INCOMPATIBLE ] 5.56x45 100Rnd Reload Tracer (Yellow) Stoner 96 Box";
mass = 34.4092;
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
class lxWS_Pylon_LMG_Mk200_F : 200Rnd_65x39_cased_Box
{
descriptionShort = "[ ONLY REPORT IF THIS ITEM MISSING BREAKS YOUR LOADOUT, ELSE JUST REMOVE ] Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: Stoner 96";
displayName = "[ A3RO INCOMPATIBLE ] 5.56x45 100Rnd Reload Tracer (Yellow) Stoner 96 Box";
mass = 34.4092;
picture = "\A3RO_A3\Textures\UI\a3ro_incompatible_item.paa";
scope = 1;
};
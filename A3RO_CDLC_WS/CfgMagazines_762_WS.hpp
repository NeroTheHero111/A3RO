// Renaming AK Old Magazine
class 30Rnd_762x39_Mag_worn_lxWS : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: None<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd AKM Rusty Mag";
displaynameshort = "";
initSpeed = 718;
picture = "\lxWS\weapons_1_f_lxws\Rifles\Galat\Data\ui\30Rnd_762x39_Mag_worn_lxWS.paa";
};
// Creating Rusty Tracer, RT, T4
class 30Rnd_762x39_Mag_worn_RT_lxWS : 30Rnd_762x39_Mag_worn_lxWS
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Reload Tracer (Yellow) AKM Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30rnd_762x39_YRT_mag_worn_lxws.paa";
};
class 30Rnd_762x39_Mag_worn_Tracer_lxWS : 30Rnd_762x39_Mag_worn_lxWS
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Tracer (Yellow) AKM Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 30;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30rnd_762x39_YT_mag_worn_lxws.paa";
tracersEvery = 1;
};
class 30Rnd_762x39_Mag_worn_T4_lxWS : 30Rnd_762x39_Mag_worn_lxWS
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Tracer Every 4 (Yellow) AKM Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30rnd_762x39_YT4_mag_worn_lxws.paa";
tracersEvery = 4;
};

// SLR Magazines. Changing: Name. Description. Tracers
// 20Rnd
class 20Rnd_762x51_slr_lxWS : 20Rnd_762x51_Mag
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: None<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd FAL Mag";
mass = 15.6789;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_20Rnd_slr_ca.paa";
};
class 20Rnd_762x51_slr_reload_tracer_green_lxWS : 20Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Reload Tracer (Green) FAL Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GRT_FAL_CA.paa";
scope = 2; // RFB Compat
};
class 20Rnd_762x51_slr_tracer_green_lxWS : 20Rnd_762x51_slr_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer (Green) FAL Mag";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 20;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GT_FAL_CA.paa";
scope = 2;
};
class 20Rnd_762x51_slr_T4_green_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (Green) FAL Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GT4_FAL_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_desert_lxWS : 20Rnd_762x51_slr_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: None<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd FAL Desert Mag";
};
class 20Rnd_762x51_slr_desert_reload_tracer_green_lxWS : 20Rnd_762x51_slr_desert_lxWS
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Reload Tracer (Green) FAL Desert Mag";
displaynameshort = "Rel. Tr. (Green)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GRT_Desert_FAL_CA.paa";
};
class 20Rnd_762x51_slr_desert_tracer_green_lxWS : 20Rnd_762x51_slr_desert_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer (Green) FAL Desert Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GT_Desert_FAL_CA.paa";
};
class 20Rnd_762x51_slr_desert_T4_green_lxWS : 20Rnd_762x51_slr_desert_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (Green) FAL Desert Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GT4_Desert_FAL_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS : 20Rnd_762x51_slr_desert_lxWS
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Reload Tracer (Red) FAL Snake Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RRT_Snake_FAL_CA.paa";
};
class 20Rnd_762x51_slr_Snake_tracer_Red_lxWS : 20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer (Red) FAL Snake Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT_Snake_FAL_CA.paa";
};
class 20Rnd_762x51_slr_Snake_T4_Red_lxWS : 20Rnd_762x51_slr_Snake_tracer_Red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) FAL Snake Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT4_Snake_FAL_CA.paa";
tracersEvery = 4;
};
// 30Rnd
class 30Rnd_762x51_slr_lxWS : 20Rnd_762x51_Mag
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: None<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd FAL Mag";
mass = 23.5447;
};
class 30Rnd_762x51_slr_reload_tracer_green_lxWS : 30Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Reload Tracer (Green) FAL Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GRT_FAL_CA.paa";
};
class 30Rnd_762x51_slr_tracer_green_lxWS : 30Rnd_762x51_slr_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Tracer (Green) FAL Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GT_FAL_CA.paa";
};
class 30Rnd_762x51_slr_desert_lxWS : 30Rnd_762x51_slr_lxWS
{
displayName = "7.62x51 30Rnd FAL Desert Mag";
};
class 30Rnd_762x51_slr_desert_reload_tracer_green_lxWS : 30Rnd_762x51_slr_desert_lxWS
{
ammo = "B_762x51_Tracer_Green";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Reload Tracer (Green) FAL Desert Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GRT_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_desert_tracer_green_lxWS : 30Rnd_762x51_slr_desert_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Tracer (Green) FAL Desert Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GT_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS : 30Rnd_762x51_slr_desert_lxWS
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Last 4 Rounds<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Reload Tracer (Red) FAL Tan Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RRT_Tan_FAL_CA.paa";
};
class 30Rnd_762x51_slr_Snake_tracer_Red_lxWS : 30Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Every Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Tracer (Red) FAL Tan Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT_Tan_FAL_CA.paa";
};

// Unhiding Tracerless Galat Mags.
class 35Rnd_556x45_Velko_lxWS : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: None<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Galil Mag";
displaynameshort = "";
mass = 16.0499;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_35rnd_velko_ca.paa";
scope = 2;
scopeCurator = 2;
};
class 35Rnd_556x45_Velko_snake_lxWS : 35Rnd_556x45_Velko_lxWS
{
displayName = "5.56x45 35Rnd Galil Snake Mag";
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_35rnd_velko_snake_ca.paa";
scope = 2;
scopeCurator = 2;
};
class 50Rnd_556x45_Velko_lxWS : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: None<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Galil Mag";
displaynameshort = "";
mass = 22.3214;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_50rnd_velko_ca.paa";
scope = 2;
scopeCurator = 2;
};
class 50Rnd_556x45_Velko_snake_lxWS : 50Rnd_556x45_Velko_lxWS
{
displayName = "5.56x45 50Rnd Galil Snake Mag";
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_50rnd_velko_snake_ca.paa";
scope = 2;
scopeCurator = 2;
}; 

// Galat Magazines. Changing: Name. Description
// 35Rnd
class 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS : 35Rnd_556x45_Velko_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Reload Tracer (Yellow) Galil Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YRT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_reload_tracer_green_lxWS : 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 35Rnd Reload Tracer (Green) Galil Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_GRT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_reload_tracer_red_lxWS : 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 35Rnd Reload Tracer (Red) Galil Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_RRT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_tracer_yellow_lxWS : 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Yellow) Galil Mag";
displaynameshort = "Tracer (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_tracer_green_lxWS : 35Rnd_556x45_Velko_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Green) Galil Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_GT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_tracer_red_lxWS : 35Rnd_556x45_Velko_reload_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Red) Galil Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_RT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS : 35Rnd_556x45_Velko_snake_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Reload Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YRT_Velko_Snake_CA.paa";
};
class 35Rnd_556x45_Velko_snake_reload_tracer_green_lxWS : 35Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 35Rnd Reload Tracer (Green) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_GRT_Velko_Snake_CA.paa";
};
class 35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS : 35Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 35Rnd Reload Tracer (Red) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_RRT_Velko_Snake_CA.paa";
};
class 35Rnd_556x45_Velko_snake_tracer_yellow_lxWS : 35Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Tracer (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT_Velko_Snake_CA.paa";
};
class 35Rnd_556x45_Velko_snake_tracer_green_lxWS : 35Rnd_556x45_Velko_snake_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Green) Galil Snake Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_GT_Velko_Snake_CA.paa";
};
class 35Rnd_556x45_Velko_snake_tracer_red_lxWS : 35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Red) Galil Snake Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_RT_Velko_Snake_CA.paa";
};
// 50Rnd
class 50Rnd_556x45_Velko_reload_tracer_yellow_lxWS : 50Rnd_556x45_Velko_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Reload Tracer (Yellow) Galil Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YRT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_reload_tracer_green_lxWS : 50Rnd_556x45_Velko_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 50Rnd Reload Tracer (Green) Galil Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_GRT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_reload_tracer_red_lxWS : 50Rnd_556x45_Velko_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 50Rnd Reload Tracer (Red) Galil Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_RRT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_tracer_yellow_lxWS : 50Rnd_556x45_Velko_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Yellow) Galil Mag";
displaynameshort = "Tracer (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_tracer_green_lxWS : 50Rnd_556x45_Velko_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Green) Galil Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_GT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_tracer_red_lxWS : 50Rnd_556x45_Velko_reload_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Red) Galil Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_RT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS : 50Rnd_556x45_Velko_snake_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Reload Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YRT_Velko_Snake_CA.paa";
};
class 50Rnd_556x45_Velko_snake_reload_tracer_green_lxWS : 50Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 50Rnd Reload Tracer (Green) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_GRT_Velko_Snake_CA.paa";
};
class 50Rnd_556x45_Velko_snake_reload_tracer_red_lxWS : 50Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS
{
displayName = "5.56x45 50Rnd Reload Tracer (Red) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_RRT_Velko_Snake_CA.paa";
};
class 50Rnd_556x45_Velko_snake_tracer_yellow_lxWS : 50Rnd_556x45_Velko_snake_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Tracer (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT_Velko_Snake_CA.paa";
};
class 50Rnd_556x45_Velko_snake_tracer_green_lxWS : 50Rnd_556x45_Velko_snake_reload_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Green) Galil Snake Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_GT_Velko_Snake_CA.paa";
};
class 50Rnd_556x45_Velko_snake_tracer_red_lxWS : 50Rnd_556x45_Velko_snake_reload_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Red) Galil Snake Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_RT_Velko_Snake_CA.paa";
};

// Mk14 Magazines. Name. Also Changing to Red Tracer.
class 10Rnd_Mk14_762x51_Mag_blk_lxWS : 10Rnd_Mk14_762x51_Mag
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 5Rnd Black Mag";
};
class 10Rnd_Mk14_762x51_Mag_snake_lxWS : 10Rnd_Mk14_762x51_Mag
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 5Rnd Snake Mag";
};
class 20Rnd_762x51_Mag_blk_lxWS : 20Rnd_762x51_Mag
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Black Mag";
};
class 20Rnd_762x51_Mag_snake_lxWS : 20Rnd_762x51_Mag
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Snake Mag";
};

// Galil 35Rnd Magazines. Adding T4, IRT, and IRT4 Tracers
// Plain
// T4
class 35Rnd_556x45_Velko_T4_yellow_lxWS : 35Rnd_556x45_Velko_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Yellow) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT4_Velko_CA.paa";
tracersEvery = 4;
};
class 35Rnd_556x45_Velko_T4_green_lxWS : 35Rnd_556x45_Velko_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Green) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_GT4_Velko_CA.paa";
tracersEvery = 4;
};
class 35Rnd_556x45_Velko_T4_red_lxWS : 35Rnd_556x45_Velko_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Red) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_RT4_Velko_CA.paa";
tracersEvery = 4;
};
// IR-DIM
class 35Rnd_556x45_Velko_IRT_lxWS : 35Rnd_556x45_Velko_tracer_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 35Rnd Tracer (IR-DIM) Galil Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_IRT_Velko_CA.paa";
};
class 35Rnd_556x45_Velko_IRT4_lxWS : 35Rnd_556x45_Velko_T4_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 35Rnd Tracer Every 4 (IR-DIM) Galil Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_IRT4_Velko_CA.paa";
};
// Snakeskin
// T4
class 35Rnd_556x45_Velko_snake_T4_yellow_lxWS : 35Rnd_556x45_Velko_snake_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Yellow) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
class 35Rnd_556x45_Velko_snake_T4_green_lxWS : 35Rnd_556x45_Velko_snake_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Green) Galil Snake Mag";   
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_GT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
class 35Rnd_556x45_Velko_snake_T4_red_lxWS : 35Rnd_556x45_Velko_snake_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Red) Galil Snake Mag";  
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_RT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
// IR-DIM
class 35Rnd_556x45_Velko_snake_IRT_lxWS : 35Rnd_556x45_Velko_snake_tracer_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 35Rnd Tracer (IR-DIM) Galil Snake Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_IRT_Velko_Snake_CA.paa";
};
class 35Rnd_556x45_Velko_snake_IRT4_lxWS : 35Rnd_556x45_Velko_snake_T4_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 35Rnd Tracer Every 4 (IR-DIM) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_IRT4_Velko_Snake_CA.paa";
};

// Galil 50Rnd Magazines. Adding Tracer Every 4, Tracerless and IR-DIM Tracers
// Plain
// T4
class 50Rnd_556x45_Velko_T4_yellow_lxWS : 50Rnd_556x45_Velko_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Yellow) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT4_Velko_CA.paa";
tracersEvery = 4;
};
class 50Rnd_556x45_Velko_T4_green_lxWS : 50Rnd_556x45_Velko_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Green) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_GT4_Velko_CA.paa";
tracersEvery = 4;
};
class 50Rnd_556x45_Velko_T4_red_lxWS : 50Rnd_556x45_Velko_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Red) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Red)";  
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_RT4_Velko_CA.paa";
tracersEvery = 4;
};
// IR-DIM
class 50Rnd_556x45_Velko_IRT_lxWS : 50Rnd_556x45_Velko_tracer_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 50Rnd Tracer (IR-DIM) Galil Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_IRT_Velko_CA.paa";
};
class 50Rnd_556x45_Velko_IRT4_lxWS : 50Rnd_556x45_Velko_T4_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 50Rnd Tracer Every 4 (IR-DIM) Galil Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_IRT4_Velko_CA.paa";
};
// Snakeskin
// T4
class 50Rnd_556x45_Velko_snake_T4_yellow_lxWS : 50Rnd_556x45_Velko_snake_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Yellow) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)"; 
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
class 50Rnd_556x45_Velko_snake_T4_green_lxWS : 50Rnd_556x45_Velko_snake_tracer_green_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Green) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (Green)";   
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_GT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
class 50Rnd_556x45_Velko_snake_T4_red_lxWS : 50Rnd_556x45_Velko_snake_tracer_red_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Red) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (Red)"; 
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_RT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
// IR-DIM
class 50Rnd_556x45_Velko_snake_IRT_lxWS : 50Rnd_556x45_Velko_snake_tracer_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 50Rnd Tracer (IR-DIM) Galil Snake Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_IRT_Velko_Snake_CA.paa";
};
class 50Rnd_556x45_Velko_snake_IRT4_lxWS : 50Rnd_556x45_Velko_snake_T4_yellow_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 50Rnd Tracer Every 4 (IR-DIM) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_IRT4_Velko_Snake_CA.paa";
};

// Creating new Rusty Mags. No IR
// 35Rnd
class 35Rnd_556x45_Velko_worn_lxWS : 35Rnd_556x45_Velko_lxWS
{
ammo = "B_556x45_Ball_Tracer_Yellow";
displayName = "5.56x45 35Rnd Galil Rusty Mag";   
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\magazines_worn_co.paa"};
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_Velko_Rusty_CA.paa";
};
class 35Rnd_556x45_Velko_worn_T4_yellow_lxWS : 35Rnd_556x45_Velko_worn_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer Every 4 (Yellow) Galil Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT4_Velko_Rusty_CA.paa";
tracersEvery = 4;
};
class 35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS : 35Rnd_556x45_Velko_worn_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Reload Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YRT_Velko_Rusty_CA.paa";
lastRoundsTracer = 4;
};
class 35Rnd_556x45_Velko_worn_tracer_yellow_lxWS : 35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 35Rnd Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT_Velko_Rusty_CA.paa";
tracersEvery = 1;
};
// 50Rnd
class 50Rnd_556x45_Velko_worn_lxWS : 50Rnd_556x45_Velko_lxWS
{
ammo = "B_556x45_Ball_Tracer_Yellow";
displayName = "5.56x45 50Rnd Galil Rusty Mag";   
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\magazines_worn_co.paa"};
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_Velko_Rusty_CA.paa";
};
class 50Rnd_556x45_Velko_worn_T4_yellow_lxWS : 50Rnd_556x45_Velko_worn_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer Every 4 (Yellow) Galil Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT4_Velko_Rusty_CA.paa";
tracersEvery = 4;
};
class 50Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS : 50Rnd_556x45_Velko_worn_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Reload Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YRT_Velko_Rusty_CA.paa";
};
class 50Rnd_556x45_Velko_worn_tracer_yellow_lxWS : 50Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = "5.56x45 50Rnd Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 50;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT_Velko_Rusty_CA.paa";
tracersEvery = 1;
};

// Creating 35Rnd .223 Remington Galil Magazines
// Plain
class 35Rnd_223REM_Velko_lxWS : 35Rnd_556x45_Velko_lxWS
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: None<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Galil Mag";
displaynameshort = "";
lastRoundsTracer = 0;
mass = 15.6499;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_35rnd_velko_ca.paa";
};
class 35Rnd_223REM_Velko_T4_yellow_lxWS : 35Rnd_223REM_Velko_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Tracer Every 4 (Yellow) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT4_Velko_CA.paa";
tracersEvery = 4;
};
class 35Rnd_223REM_Velko_reload_tracer_yellow_lxWS : 35Rnd_223REM_Velko_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Reload Tracer (Yellow) Galil Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YRT_Velko_CA.paa";
};
class 35Rnd_223REM_Velko_tracer_yellow_lxWS : 35Rnd_223REM_Velko_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Tracer (Yellow) Galil Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT_Velko_CA.paa";
tracersEvery = 1;
};
// Snakeskin
class 35Rnd_223REM_Velko_snake_lxWS : 35Rnd_223REM_Velko_lxWS
{
ammo = "B_223REM_Ball";
displayName = ".223 35Rnd Galil Snake Mag";
hiddenSelectionsMaterials[] = {"\lxws\weapons_1_f_lxws\rifles\velkor5\data\magazines_snake.rvmat"};
hiddenSelectionsTextures[] = {"\lxws\weapons_1_f_lxws\rifles\velkor5\data\magazines_snake_co.paa"};
lastRoundsTracer = 0;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_35rnd_velko_snake_ca.paa";
};
class 35Rnd_223REM_Velko_snake_T4_yellow_lxWS : 35Rnd_223REM_Velko_snake_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Tracer Every 4 (Yellow) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
class 35Rnd_223REM_Velko_snake_reload_tracer_yellow_lxWS : 35Rnd_223REM_Velko_snake_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Reload Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YRT_Velko_Snake_CA.paa";
};
class 35Rnd_223REM_Velko_snake_tracer_yellow_lxWS : 35Rnd_223REM_Velko_snake_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT_Velko_Snake_CA.paa";
tracersEvery = 1;
};
// Rusty
class 35Rnd_223REM_Velko_worn_lxWS : 35Rnd_223REM_Velko_lxWS
{
ammo = "B_223REM_Ball";
displayName = ".223 35Rnd Galil Rusty Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\magazines_worn_co.paa"};
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_Velko_Rusty_CA.paa";
};
class 35Rnd_223REM_Velko_worn_T4_yellow_lxWS : 35Rnd_223REM_Velko_worn_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Tracer Every 4 (Yellow) Galil Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT4_Velko_Rusty_CA.paa";
tracersEvery = 4;
};
class 35Rnd_223REM_Velko_worn_reload_tracer_yellow_lxWS : 35Rnd_223REM_Velko_worn_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Reload Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YRT_Velko_Rusty_CA.paa";
};
class 35Rnd_223REM_Velko_worn_tracer_yellow_lxWS : 35Rnd_223REM_Velko_worn_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 35<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 35Rnd Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_35Rnd_YT_Velko_Rusty_CA.paa";
tracersEvery = 1;
};

// Creating 50Rnd .223 Remington Galil Magazines
// Plain
class 50Rnd_223REM_Velko_lxWS : 50Rnd_556x45_Velko_lxWS
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: None<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 50Rnd Galil Mag";
lastRoundsTracer = 0;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_50rnd_velko_ca.paa";
mass = 21.7499;
};
class 50Rnd_223REM_Velko_T4_yellow_lxWS : 50Rnd_223REM_Velko_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 50Rnd Tracer Every 4 (Yellow) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT4_Velko_CA.paa";
tracersEvery = 4;
};
class 50Rnd_223REM_Velko_reload_tracer_yellow_lxWS : 50Rnd_223REM_Velko_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4"; 
displayName = ".223 50Rnd Reload Tracer (Yellow) Galil Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YRT_Velko_CA.paa";
};
class 50Rnd_223REM_Velko_tracer_yellow_lxWS : 50Rnd_223REM_Velko_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4"; 
displayName = ".223 50Rnd Tracer (Yellow) Galil Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT_Velko_CA.paa";
tracersEvery = 1;
};
// Snakeskin
class 50Rnd_223REM_Velko_snake_lxWS : 50Rnd_223REM_Velko_lxWS
{
ammo = "B_223REM_Ball";
displayName = ".223 50Rnd Galil Snake Mag";
hiddenSelectionsMaterials[] = {"\lxws\weapons_1_f_lxws\rifles\velkor5\data\magazines_snake.rvmat"};
hiddenSelectionsTextures[] = {"\lxws\weapons_1_f_lxws\rifles\velkor5\data\magazines_snake_co.paa"};
lastRoundsTracer = 0;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_50rnd_velko_snake_ca.paa";
};
class 50Rnd_223REM_Velko_snake_T4_yellow_lxWS : 50Rnd_223REM_Velko_snake_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 50Rnd Tracer Every 4 (Yellow) Galil Snake Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT4_Velko_Snake_CA.paa";
tracersEvery = 4;
};
class 50Rnd_223REM_Velko_snake_reload_tracer_yellow_lxWS : 50Rnd_223REM_Velko_snake_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4"; 
displayName = ".223 50Rnd Reload Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YRT_Velko_Snake_CA.paa";
};
class 50Rnd_223REM_Velko_snake_tracer_yellow_lxWS : 50Rnd_223REM_Velko_snake_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4"; 
displayName = ".223 50Rnd Tracer (Yellow) Galil Snake Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT_Velko_Snake_CA.paa";
tracersEvery = 1;
};
// Rusty
class 50Rnd_223REM_Velko_worn_lxWS : 50Rnd_223REM_Velko_lxWS
{
ammo = "B_223REM_Ball";
displayName = ".223 50Rnd Galil Rusty Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\magazines_worn_co.paa"};
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_Velko_Rusty_CA.paa";
};
class 50Rnd_223REM_Velko_worn_T4_yellow_lxWS : 50Rnd_223REM_Velko_worn_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Every 4th Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4";
displayName = ".223 50Rnd Tracer Every 4 (Yellow) Galil Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT4_Velko_Rusty_CA.paa";
tracersEvery = 4;
};
class 50Rnd_223REM_Velko_worn_reload_tracer_yellow_lxWS : 50Rnd_223REM_Velko_worn_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Last 4 Rounds<br />Used in: Galil ARM/SAR, Vektor R4/LM4"; 
displayName = ".223 50Rnd Reload Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YRT_Velko_Rusty_CA.paa";
};
class 50Rnd_223REM_Velko_worn_tracer_yellow_lxWS : 50Rnd_223REM_Velko_worn_reload_tracer_yellow_lxWS
{
descriptionShort = "Calibre: .223 Remington<br/>Rounds: 50<br/>Tracers: Every Round<br />Used in: Galil ARM/SAR, Vektor R4/LM4"; 
displayName = ".223 50Rnd Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 35;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_50Rnd_YT_Velko_Rusty_CA.paa";
tracersEvery = 1;
};

// Creating Galil Model 323 7.62x51 Magazines
// 25Rnd
// Plain
class 25Rnd_762x51_Galil_lxWS : 30Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Red";
count = 25;
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: None<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Galil Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_mag_co.paa"};
mass = 17.7798;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_30Rnd_slr_ca.paa";
};
class 25Rnd_762x51_Galil_Tracer_lxWS : 25Rnd_762x51_Galil_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Tracer (Red) Galil Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 25;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT_FAL_CA.paa";
tracersEvery = 1;
};
class 25Rnd_762x51_Galil_RT_lxWS : 25Rnd_762x51_Galil_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Reload Tracer (Red) Galil Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RRT_FAL_CA.paa";
};
class 25Rnd_762x51_Galil_T4_lxWS : 25Rnd_762x51_Galil_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: Every 4th Round<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Tracer Every 4 (Red) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT4_FAL_CA.paa";
tracersEvery = 4;
};
// Worn
class 25Rnd_762x51_Galil_Worn_lxWS : 25Rnd_762x51_Galil_lxWS
{
displayName = "7.62x51 25Rnd Galil Rusty Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_worn_mag_co.paa"};
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_Galil_Rusty_CA.paa";
};
class 25Rnd_762x51_Galil_Tracer_Worn_lxWS : 25Rnd_762x51_Galil_Worn_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Tracer (Red) Galil Rusty Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 25;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_RT_Galil_Rusty_CA.paa";
tracersEvery = 1;
};
class 25Rnd_762x51_Galil_RT_Worn_lxWS : 25Rnd_762x51_Galil_Worn_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Reload Tracer (Red) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_RRT_Galil_Rusty_CA.paa";
};
class 25Rnd_762x51_Galil_T4_Worn_lxWS : 25Rnd_762x51_Galil_Worn_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 25<br/>Tracers: Every 4th Round<br />Used in: Galil Model 323";
displayName = "7.62x51 25Rnd Tracer Every 4 (Red) Galil Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_RT4_Galil_Rusty_CA.paa";
tracersEvery = 4;
};
// 11Rnd
// Plain
class 11Rnd_762x51_Galil_lxWS : 20Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Red";
count = 11;
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 11<br/>Tracers: None<br />Used in: Galil Model 323";
displayName = "7.62x51 11Rnd Galil Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_mag_co.paa"};
initSpeed = 850;
mass = 10.0497;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_20Rnd_slr_ca.paa";
};
class 11Rnd_762x51_Galil_Tracer_lxWS : 11Rnd_762x51_Galil_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 11<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = "7.62x51 11Rnd Tracer (Red) Galil Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 11;
tracersEvery = 1;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT_FAL_CA.paa";
};
class 11Rnd_762x51_Galil_RT_lxWS : 11Rnd_762x51_Galil_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 11<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = "7.62x51 11Rnd Reload Tracer (Red) Galil Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RRT_FAL_CA.paa";
};
// Worn
class 11Rnd_762x51_Galil_Worn_lxWS : 11Rnd_762x51_Galil_lxWS
{
displayName = "7.62x51 11Rnd Galil Rusty Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_worn_mag_co.paa"};
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_Galil_Rusty_CA.paa";
};
class 11Rnd_762x51_Galil_Tracer_Worn_lxWS : 11Rnd_762x51_Galil_Worn_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 11<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = "7.62x51 11Rnd Tracer (Red) Galil Rusty Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 11;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_RT_Galil_Rusty_CA.paa";
tracersEvery = 1;
};
class 11Rnd_762x51_Galil_RT_Worn_lxWS : 11Rnd_762x51_Galil_Worn_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 11<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = "7.62x51 11Rnd Reload Tracer (Red) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_RRT_Galil_Rusty_CA.paa";
};

// Creating .308 25Rnd Galil Model 323 Magazines
// Regular. (Not doing Camo versions of SLR)
// 25Rnd
class 25Rnd_308WIN_Galil_lxWS : 30Rnd_762x51_slr_lxWS
{
ammo = "B_308WIN_Ball";
count = 25;
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: None<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Galil Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_mag_co.paa"};
initSpeed = 886.6632;
mass = 17.3614;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_30Rnd_slr_ca.paa";
};
class 25Rnd_308WIN_Galil_Tracer_lxWS : 25Rnd_308WIN_Galil_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Tracer (Yellow) Galil Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 25;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_YT_Galil_CA.paa";
tracersEvery = 1;
};
class 25Rnd_308WIN_Galil_RT_lxWS : 25Rnd_308WIN_Galil_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Reload Tracer (Yellow) Galil Mag";
displaynameshort = "Rel. Tr. (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_YRT_Galil_CA.paa";
lastRoundsTracer = 4;
};
class 25Rnd_308WIN_Galil_T4_lxWS : 25Rnd_308WIN_Galil_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: Every 4th Round<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Tracer Every 4 (Yellow) Galil Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_YT4_Galil_CA.paa";
tracersEvery = 4;
};
// 11Rnd
class 11Rnd_308WIN_Galil_lxWS : 20Rnd_762x51_slr_lxWS
{
ammo = "B_308WIN_Ball";
count = 11;
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 11<br/>Tracers: None<br />Used in: Galil Model 323";
displayName = ".308 11Rnd Galil Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_mag_co.paa"};
initSpeed = 886.6632;
mass = 9.8656;
picture = "\lxWS\weapons_f_lxWS\data\UI\icon_20Rnd_slr_ca.paa";
};
class 11Rnd_308WIN_Galil_Tracer_lxWS : 11Rnd_308WIN_Galil_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 11<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = ".308 11Rnd Tracer (Yellow) Galil Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 11;
tracersEvery = 1;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_YT_Galil_CA.paa";
};
class 11Rnd_308WIN_Galil_RT_lxWS : 11Rnd_308WIN_Galil_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 11<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = ".308 11Rnd Reload Tracer (Yellow) Galil Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_YRT_Galil_CA.paa";
};
// Rusty
// 25Rnd
class 25Rnd_308WIN_Galil_Rusty_lxWS : 30Rnd_762x51_slr_lxWS
{
ammo = "B_308WIN_Ball";
count = 25;
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: None<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Galil Rusty Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_worn_mag_co.paa"};
initSpeed = 886.6632;
mass = 17.3614;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_Galil_Rusty_CA.paa";
};
class 25Rnd_308WIN_Galil_Rusty_Tracer_lxWS : 25Rnd_308WIN_Galil_Rusty_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 25;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_YT_Galil_Rusty_CA.paa";
tracersEvery = 1;
};
class 25Rnd_308WIN_Galil_Rusty_RT_lxWS : 25Rnd_308WIN_Galil_Rusty_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Reload Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_YRT_Galil_Rusty_CA.paa";
};
class 25Rnd_308WIN_Galil_Rusty_T4_lxWS : 25Rnd_308WIN_Galil_Rusty_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 25<br/>Tracers: Every 4th Round<br />Used in: Galil Model 323";
displayName = ".308 25Rnd Tracer Every 4 (Yellow) Galil Rusty Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_25Rnd_YT4_Galil_Rusty_CA.paa";
tracersEvery = 4;
};
// 11Rnd
class 11Rnd_308WIN_Galil_Rusty_lxWS : 20Rnd_762x51_slr_lxWS
{
ammo = "B_308WIN_Ball";
count = 11;
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 11<br/>Tracers: None<br />Used in: Galil Model 323";
displayName = ".308 11Rnd Galil Rusty Mag";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galil_worn_mag_co.paa"};
initSpeed = 886.6632;
mass = 9.8656;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_Galil_Rusty_CA.paa";
};
class 11Rnd_308WIN_Galil_Rusty_Tracer_lxWS : 11Rnd_308WIN_Galil_Rusty_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 11<br/>Tracers: Every Round<br />Used in: Galil Model 323";
displayName = ".308 11Rnd Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 11;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_YT_Galil_Rusty_CA.paa";
tracersEvery = 1;
};
class 11Rnd_308WIN_Galil_Rusty_RT_lxWS : 11Rnd_308WIN_Galil_Rusty_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br/>Rounds: 11<br/>Tracers: Last 4 Rounds<br />Used in: Galil Model 323";
displayName = ".308 11Rnd Reload Tracer (Yellow) Galil Rusty Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_11Rnd_YRT_Galil_Rusty_CA.paa";
};

// 75Rnd Stanag Mags. Changing: Name. Description. Ammocount to 60
class 75Rnd_556x45_Stanag_lxWS : 30Rnd_556x45_Stanag
{
count = 60;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Last 4 Rounds<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
mass = 23.7152;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YRT_Stanag_CA.paa";
};
class 75Rnd_556x45_Stanag_green_lxWS : 75Rnd_556x45_Stanag_lxWS
{
displayName = "5.56x45 60Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_GRT_Stanag_CA.paa";
};
class 75Rnd_556x45_Stanag_red_lxWS : 75Rnd_556x45_Stanag_lxWS
{
displayName = "5.56x45 60Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_RRT_Stanag_CA.paa";
};

// 60Rnd Stanag Magazines. Adding Variants
class 60Rnd_556x45_Stanag_NT_lxWS : 75Rnd_556x45_Stanag_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Mag";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxWS\weapons_f_lxWS\Data\UI\icon_75rnd_stanag_CA.paa";
};
class 60Rnd_556x45_Stanag_tracer_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (Yellow) Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT_Stanag_CA.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_T4_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT4_Stanag_CA.paa";
tracersEvery = 4;
};
class 60Rnd_556x45_Stanag_tracer_green_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_556x45_Ball_tracer_Green";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (Green) Mag";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_GT_Stanag_CA.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_T4_green_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_556x45_Ball_tracer_Green";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_GT4_Stanag_CA.paa";
tracersEvery = 4;
};
class 60Rnd_556x45_Stanag_tracer_red_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_556x45_Ball_tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (Red) Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_RT_Stanag_CA.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_T4_red_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_556x45_Ball_tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (Red) Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_RT4_Stanag_CA.paa";
tracersEvery = 4;
};
class 60Rnd_556x45_Stanag_IRT_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_556x45_Ball_IR";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (IR-DIM) Mag";
displaynameshort = "Tracer (IR-DIM)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_IRT_Stanag_CA.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_IRT4_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_556x45_Ball_IR";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (IR-DIM) Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_IRT4_Stanag_CA.paa";
tracersEvery = 4;
};

// 60Rnd Stanag .223 Remington Magazines
class 60Rnd_223REM_Stanag_lxWS : 60Rnd_556x45_Stanag_NT_lxWS
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 60Rnd Mag";
picture = "\lxWS\weapons_f_lxWS\Data\UI\icon_75rnd_stanag_CA.paa";
mass = 23.0295;
};
class 60Rnd_223REM_Stanag_RT_lxWS : 60Rnd_223REM_Stanag_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: Last 4 Rounds<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 60Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YRT_Stanag_CA.paa";
};
class 60Rnd_223REM_Stanag_tracer_lxWS : 60Rnd_223REM_Stanag_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 60Rnd Tracer (Yellow) Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT_Stanag_CA.paa";
tracersEvery = 1;
};
class 60Rnd_223REM_Stanag_T4_lxWS : 60Rnd_223REM_Stanag_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 60Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT4_Stanag_CA.paa";
tracersEvery = 4;
};

// .308 Black and Snakeskin Magazines
// 10Rnd
// Black. NT and Tracer
class 10Rnd_Mk14_308WIN_Mag_blk_lxWS : 10Rnd_Mk14_762x51_Mag_blk_lxWS
{
ammo = "B_308WIN_Ball";
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 5<br />Tracers: None<br />Used in: M1A ACLS, MR308 A3-28 20''";
displayName = ".308 5Rnd Black Mag";
mass = 5.1918;
};
class 10Rnd_Mk14_308WIN_Mag_T_blk_lxWS : 10Rnd_Mk14_308WIN_Mag_blk_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 5<br />Tracers: Every Round<br />Used in: M1A ACLS, MR308 A3-28 20''";
displayName = ".308 5Rnd Tracer (Yellow) Black Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 10;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_10Rnd_762x51_YT_Black_Mag_CA.paa";
tracersEvery = 1;
};
// Snakeskin
class 10Rnd_Mk14_308WIN_Mag_snake_lxWS : 10Rnd_Mk14_762x51_Mag_snake_lxWS
{
ammo = "B_308WIN_Ball";
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 5<br />Tracers: None<br />Used in: M1A ACLS, MR308 A3-28 20''";
displayName = ".308 5Rnd Snake Mag";
mass = 5.1918;
};
class 10Rnd_Mk14_308WIN_Mag_T_snake_lxWS : 10Rnd_Mk14_308WIN_Mag_snake_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 5<br />Tracers: Every Round<br />Used in: M1A ACLS, MR308 A3-28 20''";
displayName = ".308 5Rnd Tracer (Yellow) Snake Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 10;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_10Rnd_762x51_YT_Snake_Mag_CA.paa";
tracersEvery = 1;
};
// 20Rnd
// Black
class 20Rnd_Mk14_308WIN_Mag_blk_lxWS : 20Rnd_762x51_Mag_blk_lxWS
{
ammo = "B_308WIN_Ball";
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: None<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Black Mag";
mass = 15.7630;
};
class 20Rnd_Mk14_308WIN_Mag_T_blk_lxWS : 20Rnd_Mk14_308WIN_Mag_blk_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer (Yellow) Black Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 10;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_YT_Black_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_Mk14_308WIN_Mag_RT_blk_lxWS : 20Rnd_Mk14_308WIN_Mag_blk_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Reload Tracer (Yellow) Black Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_YRT_Black_Mag_CA.paa";
};
class 20Rnd_Mk14_308WIN_Mag_T4_blk_lxWS : 20Rnd_Mk14_308WIN_Mag_blk_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) Black Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_YT4_Black_Mag_CA.paa";
tracersEvery = 4;
};
// Snakeskin
class 20Rnd_Mk14_308WIN_Mag_snake_lxWS : 20Rnd_762x51_Mag_snake_lxWS
{
ammo = "B_308WIN_Ball";
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: None<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Snake Mag";
mass = 15.7630;
};
class 20Rnd_Mk14_308WIN_Mag_T_snake_lxWS : 20Rnd_Mk14_308WIN_Mag_snake_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer (Yellow) Snake Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 10;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_YT_Snake_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_Mk14_308WIN_Mag_RT_snake_lxWS : 20Rnd_Mk14_308WIN_Mag_snake_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Reload Tracer (Yellow) Snake Mag";
displaynameshort = "Rel. Tr. (Yellow)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_YRT_Snake_Mag_CA.paa";
};
class 20Rnd_Mk14_308WIN_Mag_T4_snake_lxWS : 20Rnd_Mk14_308WIN_Mag_snake_lxWS
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M1A ACLS";
displayName = ".308 20Rnd Tracer Every 4 (Yellow) Snake Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_YT4_Snake_Mag_CA.paa";
tracersEvery = 4;
};

// 7.62 Black and Snakeskin Magazines
// 10Rnd
// Black. Tracer and IRT
class 10Rnd_Mk14_762x51_Mag_T_blk_lxWS : 10Rnd_Mk14_762x51_Mag_blk_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd Tracer (Red) Black Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 5;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_10Rnd_762x51_RT_Black_Mag_CA.paa";
tracersEvery = 1;
};
class 10Rnd_Mk14_762x51_Mag_IRT_blk_lxWS : 10Rnd_Mk14_762x51_Mag_T_blk_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 5Rnd Tracer (IR-DIM) Black Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_10Rnd_762x51_IRT_Black_Mag_CA.paa";
};
// Snakeskin
class 10Rnd_Mk14_762x51_Mag_T_snake_lxWS : 10Rnd_Mk14_762x51_Mag_snake_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 5<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 5Rnd Tracer (Red) Snake Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 5;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_10Rnd_762x51_RT_Snake_Mag_CA.paa";
tracersEvery = 1;
};
class 10Rnd_Mk14_762x51_Mag_IRT_snake_lxWS : 10Rnd_Mk14_762x51_Mag_T_snake_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 5Rnd Tracer (IR-DIM) Snake Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_10Rnd_762x51_IRT_Snake_Mag_CA.paa";
};
// 20Rnd
// Black
class 20Rnd_762x51_Mag_T_blk_lxWS : 20Rnd_762x51_Mag_blk_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer (Red) Black Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 10;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_RT_Black_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_Mag_RT_blk_lxWS : 20Rnd_762x51_Mag_blk_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Reload Tracer (Red) Black Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_RRT_Black_Mag_CA.paa";
};
class 20Rnd_762x51_Mag_T4_blk_lxWS : 20Rnd_762x51_Mag_blk_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) Black Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_RT4_Black_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_Mag_IRT_blk_lxWS : 20Rnd_762x51_Mag_T_blk_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) Black Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_IRT_Black_Mag_CA.paa";
};
class 20Rnd_762x51_Mag_IRT4_blk_lxWS : 20Rnd_762x51_Mag_T4_blk_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) Black Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_IRT4_Black_Mag_CA.paa";
};
// Snakeskin
class 20Rnd_762x51_Mag_T_snake_lxWS : 20Rnd_762x51_Mag_snake_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer (Red) Snake Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 10;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_RT_Snake_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_762x51_Mag_RT_snake_lxWS : 20Rnd_762x51_Mag_snake_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Reload Tracer (Red) Snake Mag";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_RRT_Snake_Mag_CA.paa";
};
class 20Rnd_762x51_Mag_T4_snake_lxWS : 20Rnd_762x51_Mag_snake_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) Snake Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_RT4_Snake_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_Mag_IRT_snake_lxWS : 20Rnd_762x51_Mag_T_snake_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) Snake Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_IRT_Snake_Mag_CA.paa";
};
class 20Rnd_762x51_Mag_IRT4_snake_lxWS : 20Rnd_762x51_Mag_T4_snake_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) Snake Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_762x51_IRT4_Snake_Mag_CA.paa";
};

// Adjusting WS Shotgun Ammo
// 6Rnd Drum
class 11Rnd_45ACP_Mag;
class 6rnd_HE_Mag_lxWS : 11Rnd_45ACP_Mag
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Arming Range: 3 Meters<br />Used in: SIX12";
displayName = "12GA 6Rnd FRAG12 Mag";
displaynameshort = "FRAG12";
fuseDistance = 3.001;
initSpeed = 298.17;
mass = 11.6183;
};
class 6rnd_Smoke_Mag_lxWS : 11Rnd_45ACP_Mag
{
descriptionShort = "Gauge: 12<br />Rounds: 6<br />Burn Time: ~20 Seconds<br />Used in: SIX12";
displayName = "12GA 6Rnd Smoke Mag";
displaynameshort = "Smoke (White)";
initSpeed = 487.68; // Using Speed of Slug
mass = 10.6924;
};

// 2Rnd
class 2rnd_HE_Mag_lxWS : 6rnd_HE_Mag_lxWS
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Arming Range: 3 Meters<br />Used in: 690 Field";
displayName = "12GA 2Rnd FRAG12";
displaynameshort = "FRAG12";
mass = 1.8518;
};
class 2rnd_Smoke_Mag_lxWS : 6rnd_Smoke_Mag_lxWS
{
descriptionShort = "Gauge: 12<br />Rounds: 2<br />Burn Time: ~20 Seconds<br />Used in: 690 Field";
displayName = "12GA 2Rnd Smoke";
displaynameshort = "Smoke";
mass = 1.5432;
};

// AA-12 Magazines. Changing: Name. Description
class 2Rnd_12Gauge_Pellets;
class 2Rnd_12Gauge_Slug;
class 20Rnd_12Gauge_AA40_HE_lxWS : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Arming Range: 3 Meters<br />Used in: AA-12 CQB";
displayName = "12GA 20Rnd FRAG12 Mag";
displaynameshort = "FRAG12";
initSpeed = 298.17;
mass = 49.91266;
};
class 20Rnd_12Gauge_AA40_HE_Snake_lxWS : 20Rnd_12Gauge_AA40_HE_lxWS
{
displayName = "12GA 20Rnd FRAG12 Snake Mag";
};
class 20Rnd_12Gauge_AA40_HE_Tan_lxWS : 20Rnd_12Gauge_AA40_HE_lxWS
{
displayName = "12GA 20Rnd FRAG12 Tan Mag";
};
class 20Rnd_12Gauge_AA40_Pellets_lxWS : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";
displayName = "12GA 20Rnd #00 Buckshot Mag";
mass = 48.8939;
};
class 20Rnd_12Gauge_AA40_Pellets_Snake_lxWS : 20Rnd_12Gauge_AA40_Pellets_lxWS
{
displayName = "12GA 20Rnd #00 Buckshot Snake Mag";
};
class 20Rnd_12Gauge_AA40_Pellets_Tan_lxWS : 20Rnd_12Gauge_AA40_Pellets_lxWS
{
displayName = "12GA 20Rnd #00 Buckshot Tan Mag";
};
class 20Rnd_12Gauge_AA40_Slug_lxWS : 2Rnd_12Gauge_Slug
{
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Used in: AA-12 CQB";    
displayName = "12GA 20Rnd Slug Mag";
mass = 48.8963;
};
class 20Rnd_12Gauge_AA40_Slug_Snake_lxWS : 20Rnd_12Gauge_AA40_Slug_lxWS
{
displayName = "12GA 20Rnd Slug Snake Mag";
};
class 20Rnd_12Gauge_AA40_Slug_Tan_lxWS : 20Rnd_12Gauge_AA40_Slug_lxWS
{
displayName = "12GA 20Rnd Slug Tan Mag";
};
class 20Rnd_12Gauge_AA40_Smoke_lxWS : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 20<br />Burn Time: ~20 Seconds<br />Used in: AA-12 CQB";
displayName = "12GA 20Rnd Smoke Mag";
displaynameshort = "Smoke (White)";
initSpeed = 487.68;
mass = 46.8261;
};
class 20Rnd_12Gauge_AA40_Smoke_Snake_lxWS : 20Rnd_12Gauge_AA40_Smoke_lxWS
{
displayName = "12GA 20Rnd Smoke Snake Mag";
};
class 20Rnd_12Gauge_AA40_Smoke_Tan_lxWS : 20Rnd_12Gauge_AA40_Smoke_lxWS
{
displayName = "12GA 20Rnd Smoke Tan Mag";
};
class 8Rnd_12Gauge_AA40_HE_lxWS : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 8<br />Arming Range: 3 Meters<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd FRAG12 Mag";
displaynameshort = "FRAG12";
initSpeed = 298.17;
mass = 16.90946;
};
class 8Rnd_12Gauge_AA40_HE_Snake_lxWS : 8Rnd_12Gauge_AA40_HE_lxWS
{
displayName = "12GA 8Rnd FRAG12 Snake Mag";
};
class 8Rnd_12Gauge_AA40_HE_Tan_lxWS : 8Rnd_12Gauge_AA40_HE_lxWS
{
displayName = "12GA 8Rnd FRAG12 Tan Mag";
};
class 8Rnd_12Gauge_AA40_Pellets_lxWS : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 8<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd #00 Buckshot Mag";
mass = 16.5019;
};
class 8Rnd_12Gauge_AA40_Pellets_Snake_lxWS : 8Rnd_12Gauge_AA40_Pellets_lxWS
{
displayName = "12GA 8Rnd #00 Buckshot Snake Mag";
};
class 8Rnd_12Gauge_AA40_Pellets_Tan_lxWS : 8Rnd_12Gauge_AA40_Pellets_lxWS
{
displayName = "12GA 8Rnd #00 Buckshot Tan Mag";
};
class 8Rnd_12Gauge_AA40_Slug_lxWS : 2Rnd_12Gauge_Slug
{
descriptionShort = "Gauge: 12<br />Rounds: 8<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd Slug Mag";
mass = 16.5029;
};
class 8Rnd_12Gauge_AA40_Slug_Snake_lxWS : 8Rnd_12Gauge_AA40_Slug_lxWS
{
displayName = "12GA 8Rnd Slug Snake Mag";
};
class 8Rnd_12Gauge_AA40_Slug_Tan_lxWS : 8Rnd_12Gauge_AA40_Slug_lxWS
{
displayName = "12GA 8Rnd Slug Tan Mag";
};
class 8Rnd_12Gauge_AA40_Smoke_lxWS : 2Rnd_12Gauge_Pellets
{
descriptionShort = "Gauge: 12<br />Rounds: 8<br />Burn Time: ~20 Seconds<br />Used in: AA-12 CQB";
displayName = "12GA 8Rnd Smoke Mag";
displaynameshort = "Smoke (White)";
initSpeed = 487.68;
mass = 15.6748;
};
class 8Rnd_12Gauge_AA40_Smoke_Snake_lxWS : 8Rnd_12Gauge_AA40_Smoke_lxWS
{
displayName = "12GA 8Rnd Smoke Snake Mag";
};
class 8Rnd_12Gauge_AA40_Smoke_Tan_lxWS : 8Rnd_12Gauge_AA40_Smoke_lxWS
{
displayName = "12GA 8Rnd Smoke Tan Mag";
};

// FAL Magazines. 
// Adding missing Snake Tracerless
class 20Rnd_762x51_slr_Snake_lxWS : 20Rnd_762x51_slr_lxWS
{
displayName = "7.62x51 20Rnd FAL Snake Mag";
hiddenSelectionsMaterials[] = {"\lxws\weapons_f_lxws\rifles\slr\data\slr_mat.rvmat"};
hiddenSelectionsTextures[] = {"\lxws\weapons_1_f_lxws\Rifles\Slr\data\fal_mag_snake_co.paa"};
picture = "\lxws\weapons_1_f_lxws\Rifles\Slr\data\ui\icon_20Rnd_slr_snake_ca.paa";
};
class 30Rnd_762x51_slr_Tan_lxWS : 30Rnd_762x51_slr_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 30Rnd FAL Tan Mag";
hiddenSelectionsMaterials[] = {"\lxws\weapons_f_lxws\rifles\slr\data\slr_mat.rvmat"};
hiddenSelectionsTextures[] = {"\lxws\weapons_1_f_lxws\Rifles\Slr\data\fal_mag_tan_co.paa"};
picture = "\lxws\weapons_1_f_lxws\Rifles\Slr\data\ui\icon_30Rnd_slr_snake_ca.paa";
};
// 20 Rnd. Adding IRT, IRT4
class 20Rnd_762x51_slr_IRT_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 20Rnd Tracer (IR-DIM) FAL Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_IRT_FAL_CA.paa";
};
class 20Rnd_762x51_slr_desert_IRT_lxWS : 20Rnd_762x51_slr_desert_tracer_green_lxWS
{
ammo = "B_762x51_Ball_IR";  
displayName = "7.62x51 20Rnd Tracer (IR-DIM) FAL Desert Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_IRT_Desert_FAL_CA.paa";
};
class 20Rnd_762x51_slr_Snake_IRT_lxWS : 20Rnd_762x51_slr_Snake_tracer_Red_lxWS
{
ammo = "B_762x51_Ball_IR";  
displayName = "7.62x51 20Rnd Tracer (IR-DIM) FAL Snake Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_IRT_Snake_FAL_CA.paa";
};
class 20Rnd_762x51_slr_IRT4_lxWS : 20Rnd_762x51_slr_IRT_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) FAL Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_IRT_FAL_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_desert_IRT4_lxWS : 20Rnd_762x51_slr_desert_IRT_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) FAL Desert Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_IRT_Desert_FAL_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_Snake_IRT4_lxWS : 20Rnd_762x51_slr_Snake_IRT_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (IR-DIM) FAL Snake Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_IRT_Snake_FAL_CA.paa";
tracersEvery = 4;
};
// 30Rnd. Adding T4, IRT, IRT4
class 30Rnd_762x51_slr_T4_lxWS : 30Rnd_762x51_slr_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Tracer Every 4 (Green) FAL Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GT4_FAL_CA.paa";
tracersEvery = 4;
};
class 30Rnd_762x51_slr_desert_T4_lxWS : 30Rnd_762x51_slr_desert_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Tracer Every 4 (Green) FAL Desert Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GT4_Desert_FAL_CA.paa";
tracersEvery = 4;
};
class 30Rnd_762x51_slr_Tan_T4_lxWS : 30Rnd_762x51_slr_Tan_lxWS
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 30<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 30Rnd Tracer Every 4 (Red) FAL Tan Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT4_Tan_FAL_CA.paa";
tracersEvery = 4;
};
class 30Rnd_762x51_slr_IRT_lxWS : 30Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Ball_IR";  
displayName = "7.62x51 30Rnd Tracer (IR-DIM) FAL Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_IRT_FAL_CA.paa";
};
class 30Rnd_762x51_slr_desert_IRT_lxWS : 30Rnd_762x51_slr_desert_tracer_green_lxWS
{
ammo = "B_762x51_Ball_IR";  
displayName = "7.62x51 30Rnd Tracer (IR-DIM) FAL Desert Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_IRT_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_Snake_IRT_lxWS : 30Rnd_762x51_slr_Snake_tracer_Red_lxWS
{
ammo = "B_762x51_Ball_IR";  
displayName = "7.62x51 30Rnd Tracer (IR-DIM) FAL Tan Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_IRT_Tan_FAL_CA.paa";
};
class 30Rnd_762x51_slr_IRT4_lxWS : 30Rnd_762x51_slr_T4_lxWS
{
ammo = "B_762x51_Ball_IR";   
displayName = "7.62x51 30Rnd Tracer Every 4 (IR-DIM) FAL Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_IRT4_FAL_CA.paa";
};
class 30Rnd_762x51_slr_desert_IRT4_lxWS : 30Rnd_762x51_slr_desert_T4_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 30Rnd Tracer Every 4 (IR-DIM) FAL Desert Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_IRT4_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_Tan_IRT4_lxWS : 30Rnd_762x51_slr_Tan_T4_lxWS
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62x51 30Rnd Tracer Every 4 (IR-DIM) FAL Tan Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_IRT4_Tan_FAL_CA.paa";
};

// Snake / Tan Mags Green Tracer / T4
// 20
class 20Rnd_762x51_slr_Snake_reload_tracer_Green_lxWS : 20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 20Rnd Reload Tracer (Green) FAL Snake Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GRT_Snake_FAL_CA.paa";
};
class 20Rnd_762x51_slr_Snake_tracer_Green_lxWS : 20Rnd_762x51_slr_Snake_tracer_Red_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 20Rnd Tracer (Green) FAL Snake Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GT_Snake_FAL_CA.paa";
};
class 20Rnd_762x51_slr_Snake_T4_Green_lxWS : 20Rnd_762x51_slr_Snake_tracer_Green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (Green) FAL Snake Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_GT4_Snake_FAL_CA.paa";
tracersEvery = 4;
};
// 30
class 30Rnd_762x51_slr_Snake_reload_tracer_Green_lxWS : 30Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 30Rnd Reload Tracer (Green) FAL Tan Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GRT_Tan_FAL_CA.paa";
};
class 30Rnd_762x51_slr_Snake_tracer_Green_lxWS : 30Rnd_762x51_slr_Snake_tracer_Red_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 30Rnd Tracer (Green) FAL Tan Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GT_Tan_FAL_CA.paa";
};
class 30Rnd_762x51_slr_Tan_T4_Green_lxWS : 30Rnd_762x51_slr_Tan_T4_lxWS
{
ammo = "B_762x51_Tracer_Green";
displayName = "7.62x51 30Rnd Tracer Every 4 (Green) FAL Tan Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_GT4_Tan_FAL_CA.paa";
};

// Plain / Desert Mags Red Tracer
class 20Rnd_762x51_slr_desert_reload_tracer_red_lxWS : 20Rnd_762x51_slr_desert_reload_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Reload Tracer (Red) FAL Desert Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RRT_Desert_FAL_CA.paa";
};
class 20Rnd_762x51_slr_desert_tracer_red_lxWS : 20Rnd_762x51_slr_desert_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Tracer (Red) FAL Desert Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT_Desert_FAL_CA.paa";
};
class 20Rnd_762x51_slr_desert_T4_red_lxWS : 20Rnd_762x51_slr_desert_tracer_red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) FAL Desert Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT4_Desert_FAL_CA.paa";
tracersEvery = 4;
};
class 20Rnd_762x51_slr_reload_tracer_red_lxWS : 20Rnd_762x51_slr_reload_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Reload Tracer (Red) FAL Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RRT_FAL_CA.paa";
};
class 20Rnd_762x51_slr_tracer_red_lxWS : 20Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 20Rnd Tracer (Red) FAL Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT_FAL_CA.paa";
};
class 20Rnd_762x51_slr_T4_red_lxWS : 20Rnd_762x51_slr_tracer_red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Tracers: Every 4th Round<br />Used in: StG 58, SA58™ Carbine 16'', SA58™ OSW 11'', RFB";
displayName = "7.62x51 20Rnd Tracer Every 4 (Red) FAL Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_20Rnd_RT4_FAL_CA.paa";
tracersEvery = 4;
};
class 30Rnd_762x51_slr_desert_reload_tracer_red_lxWS : 30Rnd_762x51_slr_desert_reload_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 30Rnd Reload Tracer (Red) FAL Desert Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RRT_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_desert_tracer_red_lxWS : 30Rnd_762x51_slr_desert_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 30Rnd Tracer (Red) FAL Desert Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_desert_T4_red_lxWS : 30Rnd_762x51_slr_desert_T4_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 30Rnd Tracer Every 4 (Red) FAL Desert Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT4_Desert_FAL_CA.paa";
};
class 30Rnd_762x51_slr_reload_tracer_red_lxWS : 30Rnd_762x51_slr_reload_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 30Rnd Reload Tracer (Red) FAL Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RRT_FAL_CA.paa";
};
class 30Rnd_762x51_slr_tracer_red_lxWS : 30Rnd_762x51_slr_tracer_green_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 30Rnd Tracer (Red) FAL Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT_FAL_CA.paa";
};
class 30Rnd_762x51_slr_T4_red_lxWS : 30Rnd_762x51_slr_T4_lxWS
{
ammo = "B_762x51_Tracer_Red";
displayName = "7.62x51 30Rnd Tracer Every 4 (Red) FAL Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_RT4_FAL_CA.paa";
};

// SS77 Pouches. Ammocount to 50
class 100Rnd_762x51_S77_Red_lxWS : 150Rnd_762x54_Box
{
count = 50;
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Reload Tracer (Red) SS77 Pouch";
displaynameshort = "Rel. Tr. (Red)";
lastRoundsTracer = 4;
initSpeed = 843.0768;
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
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Every Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer (Red) SS77 Pouch";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 100;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_RT_SS77_lxws_CA.paa";
tracersEvery = 1;
};
class 100Rnd_762x51_S77_Yellow_Tracer_lxWS : 100Rnd_762x51_S77_Yellow_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Every Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer (Yellow) SS77 Pouch";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 100;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_YT_SS77_lxws_CA.paa";
tracersEvery = 1;
};
class 100Rnd_762x51_S77_Green_Tracer_lxWS : 100Rnd_762x51_S77_Green_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Every Round<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd Tracer (Green) SS77 Pouch";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 100;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_100Rnd_762x51_GT_SS77_lxws_CA.paa";
tracersEvery = 1;
};
// Adding Tracer, T4 Yellow and tracerless Pouch
class 100Rnd_762x51_S77_lxWS : 100Rnd_762x51_S77_Red_lxWS
{
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: None<br />Used in: SS77 Mk1, SS77 Compact";
displayName = "7.62x51 50Rnd SS77 Pouch";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxWS\weapons_1_f_lxws\Machineguns\s77\data\ui\m_100Rnd_762x51_S77_Red_lxWS_CA.paa";
};
class 100Rnd_762x51_S77_RT4_lxWS : 100Rnd_762x51_S77_Red_Tracer_lxWS
{
ammo = "B_762x51_Tracer_Red";
descriptionShort = "Calibre: 7.62x51mm NATO<br/>Rounds: 100<br />Tracers: Every 4th Round<br />Used in: SS77 Mk1, SS77 Compact";
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



// Striped Mags. Changing: Name
class 30Rnd_556x45_Stanag_green_camo_lxWS : 30Rnd_556x45_Stanag_Sand_green
{
displayName = "5.56x45 30Rnd Reload Tracer (Green) Stripes Mag";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_GRT_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_red_camo_lxWS : 30Rnd_556x45_Stanag_Sand_red
{
displayName = "5.56x45 30Rnd Reload Tracer (Red) Stripes Mag";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_RRT_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_camo_lxWS : 30Rnd_556x45_Stanag_Sand
{
displayName = "5.56x45 30Rnd Reload Tracer (Yellow) Stripes Mag";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_YRT_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_Tracer_Green_camo_lxWS : 30Rnd_556x45_Stanag_Sand_Tracer_Green
{
displayName = "5.56x45 30Rnd Tracer (Green) Stripes Mag";
displaynameshort = "Tracer (Green)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_GT_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_Tracer_Red_camo_lxWS : 30Rnd_556x45_Stanag_Sand_Tracer_Red
{
displayName = "5.56x45 30Rnd Tracer (Red) Stripes Mag";
displaynameshort = "Tracer (Red)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_RT_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_Tracer_Yellow_camo_lxWS : 30Rnd_556x45_Stanag_Sand_Tracer_Yellow
{
displayName = "5.56x45 30Rnd Tracer (Yellow) Stripes Mag";
displaynameshort = "Tracer (Yellow)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_YT_Stanag_Camo_ca.paa";
};
class 75Rnd_556x45_Stanag_green_camo_lxWS : 75Rnd_556x45_Stanag_green_lxWS
{
displayName = "5.56x45 60Rnd Reload Tracer (Green) Stripes Mag";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_GRT_Stanag_Camo_ca.paa";
};
class 75Rnd_556x45_Stanag_red_camo_lxWS : 75Rnd_556x45_Stanag_red_lxWS
{
displayName = "5.56x45 60Rnd Reload Tracer (Red) Stripes Mag";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_RRT_Stanag_Camo_ca.paa";
};
class 75Rnd_556x45_Stanag_camo_lxWS : 75Rnd_556x45_Stanag_lxWS
{
displayName = "5.56x45 60Rnd Reload Tracer (Yellow) Stripes Mag";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YRT_Stanag_Camo_ca.paa";
};

// Creating Striped 5.56 Tracer Every 4, IRT, IRT4 and NT. Also RT for 60Rnd
// 30Rnd
class 30Rnd_556x45_Stanag_T4_Green_camo_lxWS : 30Rnd_556x45_Stanag_Tracer_Green_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer Every 4 (Green) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_GT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 30Rnd_556x45_Stanag_T4_Red_camo_lxWS : 30Rnd_556x45_Stanag_Tracer_Red_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer Every 4 (Red) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_RT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 30Rnd_556x45_Stanag_T4_Yellow_camo_lxWS : 30Rnd_556x45_Stanag_Tracer_Yellow_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer Every 4 (Yellow) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_YT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 30Rnd_556x45_Stanag_IRT_Green_camo_lxWS : 30Rnd_556x45_Stanag_Tracer_Green_camo_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 30Rnd Tracer (IR-DIM) Stripes Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_IRT_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_IRT4_Green_camo_lxWS : 30Rnd_556x45_Stanag_T4_Green_camo_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_IRT4_Stanag_Camo_ca.paa";
};
class 30Rnd_556x45_Stanag_green_NT_camo_lxWS : 30Rnd_556x45_Stanag_green_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Stripes Mag";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxws\weapons_f_lxws\data\UI\icon_30rnd_556x45_stanag_camo_ca.paa";
};
// 60Rnd
class 60Rnd_556x45_Stanag_green_Tracer_camo_lxWS : 75Rnd_556x45_Stanag_green_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (Green) Stripes Mag";
displaynameshort = "Tracer (Green)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_GT_Stanag_Camo_ca.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_red_Tracer_camo_lxWS : 75Rnd_556x45_Stanag_red_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (Red) Stripes Mag";
displaynameshort = "Tracer (Red)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_RT_Stanag_Camo_ca.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_Tracer_camo_lxWS : 75Rnd_556x45_Stanag_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer (Yellow) Stripes Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 60;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT_Stanag_Camo_ca.paa";
tracersEvery = 1;
};
class 60Rnd_556x45_Stanag_green_T4_camo_lxWS : 75Rnd_556x45_Stanag_green_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (Green) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_GT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 60Rnd_556x45_Stanag_red_T4_camo_lxWS : 75Rnd_556x45_Stanag_red_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (Red) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_RT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 60Rnd_556x45_Stanag_T4_camo_lxWS : 75Rnd_556x45_Stanag_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Tracer Every 4 (Yellow) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 60Rnd_556x45_Stanag_IRT_green_camo_lxWS : 60Rnd_556x45_Stanag_tracer_green_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 60Rnd Tracer (IR-DIM) Stripes Mag";
displaynameshort = "Tracer (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_IRT_Stanag_Camo_ca.paa";
};
class 60Rnd_556x45_Stanag_IRT4_green_T4_camo_lxWS : 60Rnd_556x45_Stanag_green_T4_camo_lxWS
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 60Rnd Tracer Every 4 (IR-DIM) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_IRT4_Stanag_Camo_ca.paa";
};
class 60Rnd_556x45_Stanag_green_NT_camo_lxWS : 75Rnd_556x45_Stanag_green_camo_lxWS
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 60<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 60Rnd Stripes Mag";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxws\weapons_f_lxws\data\UI\icon_75Rnd_stanag_camo_CA.paa";
};

// .223 Variants
// 30Rnd
class 30Rnd_223REM_Stanag_RT_camo_lxWS : 30Rnd_556x45_Stanag_camo_lxWS
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Reload Tracer (Yellow) Stripes Mag";
initSpeed = 1007.67;
mass = 13.6422;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_YRT_Stanag_Camo_ca.paa";
};
class 30Rnd_223REM_Stanag_Tracer_camo_lxWS : 30Rnd_223REM_Stanag_RT_camo_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Tracer (Yellow) Stripes Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 30;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_YT_Stanag_Camo_ca.paa";
tracersEvery = 1;
};
class 30Rnd_223REM_Stanag_T4_camo_lxWS : 30Rnd_223REM_Stanag_Tracer_camo_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_30Rnd_556x45_YT4_Stanag_Camo_ca.paa";
tracersEvery = 4;
};
class 30Rnd_223REM_Stanag_NT_camo_lxWS : 30Rnd_223REM_Stanag_RT_camo_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Stripes Mag";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxws\weapons_f_lxws\data\UI\icon_30rnd_556x45_stanag_camo_ca.paa";
};
// 60Rnd
class 60Rnd_223REM_Stanag_RT_camo_lxWS : 75Rnd_556x45_Stanag_green_camo_lxWS
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 60Rnd Reload Tracer (Yellow) Stripes Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.67;
mass = 23.0295;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YRT_Stanag_Camo_CA.paa";
};
class 60Rnd_223REM_Stanag_Tracer_camo_lxWS : 60Rnd_223REM_Stanag_RT_camo_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 60Rnd Tracer (Yellow) Stripes Mag";
displaynameshort = "Tracer (Yellow)";
lastRoundsTracer = 60;
tracersEvery = 1;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT_Stanag_Camo_CA.paa";
};
class 60Rnd_223REM_Stanag_T4_camo_lxWS : 60Rnd_223REM_Stanag_Tracer_camo_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 60Rnd Tracer Every 4 (Yellow) Stripes Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_CDLC_WS\Textures\UI\icon_60Rnd_YT4_Stanag_Camo_CA.paa";
tracersEvery = 4;
};
class 60Rnd_223REM_Stanag_NT_camo_lxWS : 60Rnd_223REM_Stanag_RT_camo_lxWS
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 60<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 60Rnd Stripes Mag";
displaynameshort = "";
lastRoundsTracer = 0;
picture = "\lxws\weapons_f_lxws\data\UI\icon_75Rnd_stanag_camo_CA.paa";
};

// Hiding Unused Pylon Magazines presumably originally used for the AP-5 Bustard
class lxWS_Pylon_LMG_Zafir_F : 150Rnd_762x54_Box
{
displayName = "7.62x51 100Rnd Reload Tracer (Green) NG-7 Box";
mass = 67.0725;
scope = 1;
};
class lxWS_Pylon_arifle_MX_SW_F : 100Rnd_65x39_caseless_mag
{
displayName = "6.5x39 60Rnd Reload Tracer (Red) Sand Mag";
mass = 26.5235;
scope = 1;
};
class lxWS_Pylon_LMG_Mk200_black_F : 200Rnd_65x39_cased_Box
{
displayName = "5.56x45 100Rnd Reload Tracer (Yellow) Stoner 96 Box";
mass = 34.4092;
scope = 1;
};
class lxWS_Pylon_LMG_Mk200_F : 200Rnd_65x39_cased_Box
{
displayName = "5.56x45 100Rnd Reload Tracer (Yellow) Stoner 96 Box";
mass = 34.4092;
scope = 1;
};

// ZGLA-85 Ammo
class 1Rnd_ZGL_Grenade_F : 1Rnd_HE_Grenade_shell
{
ammo = "G_ZGLA_85";
descriptionShort = "Type: Precision Munition<br />Rounds: 1<br />Effective Range: 5 Meters<br />Used in: ZGL-40 Mk. II";
displayName = "ZGLA-85";
displayNameShort = "Precision Munition";
mass = 440.9245;
picture = "\A3RO_Vanilla\Textures\UI\gear_40x46_M441_CA.paa"; 
};
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
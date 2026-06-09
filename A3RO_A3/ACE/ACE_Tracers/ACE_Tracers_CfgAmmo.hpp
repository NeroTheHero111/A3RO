// Reducing Tracer Scale by 1/3rd compared to A3RO_A3 to take larger Tracer Models into account
class B_10mmA_Ball_Red : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
tracerScale = 1.1893;
};
class B_223REM_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 0.6666;
};
class B_300WM_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 0.9179;
};
class B_308WIN_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 0.9179;
};
class B_338_Ball : BulletBase
{
tracerScale = 1.0068;
};
class B_338_NM_Ball : BulletBase
{
tracerScale = 1.0056;
};
class B_357M_Ball_Yellow : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 1.0665;
};
class B_375_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 1.1132;
};
class B_380Auto_Ball_Yellow : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 1.0571;
};
class B_408_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 1.1132;
};
class B_40SW_Ball_Green : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
tracerScale = 1.1893;
};
class B_45ACP_Ball : BulletBase
{
tracerScale = 1.3425;
};
class B_45Colt_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
tracerScale = 1.3541;
};
class B_460x30_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
tracerScale = 0.5437;
};
class B_50BW_Ball_F : BulletBase
{
tracerScale = 1.4910;
};
class B_545x39_Ball_F : BulletBase 
{
tracerScale = 0.6548;
};
class B_56x15_dual : BulletBase
{
tracerScale = 0.6689;
};
class B_556x45_Ball : BulletBase // To White
{
model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";
tracerScale = 0.6666;
};
class B_556x45_dual : B_556x45_Ball
{
model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
tracerScale = 0.6666;
};
class B_570x28_Ball : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";
tracerScale = 0.6666;
};
class B_570x28_Ball_Red : B_570x28_Ball
{
model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
};
class B_580x42_Ball_F : BulletBase
{
tracerScale = 0.7016;
};
class B_65x39_Caseless : BulletBase
{
tracerScale = 0.7835;
};
class B_65x39_Case : B_65x39_Caseless
{
tracerScale = 0.7835;
};
class B_65x39_Case_IR : B_65x39_Case
{
model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";
};
class B_65x39_Minigun_Caseless : SubmunitionBullet
{
model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";
tracerScale = 0.7835;
};
class B_65x39_Minigun_Caseless_Red_splash : B_65x39_Caseless
{
tracerScale = 0.7835;
};
class B_762x39_Ball_F : BulletBase
{
tracerScale = 0.9261;
};
class B_762x51_Ball : BulletBase
{
tracerScale = 0.9179;
};
class B_762x51_Minigun_Tracer_Red : SubmunitionBullet // From Regular 7.62
{
tracerScale = 0.9179;
};
class B_762x54_Ball : B_762x51_Ball
{
model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";
tracerScale = 0.9261;
};
class B_9x18_Ball_Green : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
tracerScale = 1.0840;
};
class B_9x19_Ball_Green : BulletBase
{
model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
tracerScale = 1.0560;
};
class B_9x19_Ball_Red : B_9x19_Ball_Green
{
model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
};
class B_9x19_Ball_Yellow : B_9x19_Ball_Green
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
};
class B_9x21_Ball : BulletBase
{
tracerScale = 1.0560;
};
class B_93x64_Ball : BulletBase
{
tracerScale = 1.0875;
};
class B_127x54_Ball : BulletBase
{
tracerScale = 1.5200;
};
class B_127x108_Ball : BulletBase
{
tracerScale = 1.5179;
};
class B_127x99_Ball : BulletBase
{
tracerScale = 1.4910;
};
class B_127x99_SLAP : B_127x99_Ball
{
tracerScale = 0.8911;
};
class Sh_120mm_HEAT_MP : ShellBase // Missed by ACE
{
model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";
};
class Sh_120mm_HEAT_MP_T_Green : Sh_120mm_HEAT_MP
{
model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
};
class Sh_120mm_HEAT_MP_T_Red : Sh_120mm_HEAT_MP
{
model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
};
class Sh_120mm_HEAT_MP_T_Yellow : Sh_120mm_HEAT_MP
{
model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
};
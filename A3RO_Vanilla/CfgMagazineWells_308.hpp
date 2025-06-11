// Adding 7.62x51 mm NATO Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines to Magwell
class M14_762x51
{
A3RO_Magazines[] += 
    {
    "10Rnd_Mk14_762x51_Tracer_Mag",
    "10Rnd_Mk14_762x51_IRT_Mag",
    "20Rnd_762x51_Tracer_Mag",
    "20Rnd_762x51_T4_Mag",
    "20Rnd_762x51_RT_Mag",
    "20Rnd_762x51_IRT_Mag",
    "20Rnd_762x51_IRT4_Mag"
    };
};
class CBA_762x51_M14
{
A3RO_Magazines[] += 
    {
    "10Rnd_Mk14_762x51_Mag",
    "10Rnd_Mk14_762x51_Tracer_Mag",
    "10Rnd_Mk14_762x51_IRT_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Tracer_Mag",
    "20Rnd_762x51_T4_Mag",
    "20Rnd_762x51_RT_Mag",
    "20Rnd_762x51_IRT_Mag",
    "20Rnd_762x51_IRT4_Mag"
    };
};
class CBA_762x51_M14_L
{
A3RO_Magazines[] += 
    {
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Tracer_Mag",
    "20Rnd_762x51_T4_Mag",
    "20Rnd_762x51_RT_Mag",
    "20Rnd_762x51_IRT_Mag",
    "20Rnd_762x51_IRT4_Mag"
    };
};
class CBA_762x51_M14_XL
{
A3RO_Magazines[] += 
    {
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Tracer_Mag",
    "20Rnd_762x51_T4_Mag",
    "20Rnd_762x51_RT_Mag",
    "20Rnd_762x51_IRT_Mag",
    "20Rnd_762x51_IRT4_Mag"
    };
};
class CBA_762x51_MkI_EMR
{
A3RO_Magazines[] += 
    {
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Tracer_Mag",
    "20Rnd_762x51_T4_Mag",
    "20Rnd_762x51_RT_Mag",
    "20Rnd_762x51_IRT_Mag",
    "20Rnd_762x51_IRT4_Mag"
    };
};

// Creating New .308 M14 Magwells and adding Magazines to them
class M14_308WIN_L
{
 A3RO_Magazines[] += 
    {
    "20Rnd_308WIN_Mag",
    "20Rnd_308WIN_Tracer_Mag",
    "20Rnd_308WIN_T4_Mag",
    "20Rnd_308WIN_RT_Mag",
    };   
};
class M14_308WIN_S
{
 A3RO_Magazines[] += 
    {
    "10Rnd_308WIN_Mag",
    "10Rnd_308WIN_Tracer_Mag",
    };   
};

// Adding MR308 A3-28 .308 Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines to Magwell
class MR308_308WIN
{
A3RO_Magazines[] += 
    {
    "20Rnd_308WIN_HK_Mag",
    "20Rnd_308WIN_YT_HK_Mag",
    "20Rnd_308WIN_YT4_HK_Mag",
    "20Rnd_308WIN_YRT_HK_Mag",
    };
};
// Adding MR308 A3-28 .308 7.62x51 Magazines to Magwell
class CBA_762x51_HK417
{
A3RO_Magazines[] = 
    {
    "20Rnd_762x51_HK_Mag",
    "20Rnd_762x51_RT_HK_Mag",
    "20Rnd_762x51_RT4_HK_Mag",
    "20Rnd_762x51_RRT_HK_Mag",
    "20Rnd_762x51_IRT_HK_Mag",
    "20Rnd_762x51_IRT4_HK_Mag",
    };
};

// Creating AK-308 Magwell and adding Magzines to it.
class AK308_762x51
{
A3RO_Magazines[] += 
    {
    "20Rnd_762x51_AK_Mag_RT_F",
    "20Rnd_762x51_AK_Mag_Tracer_F",
    "20Rnd_762x51_AK_Mag_IRT_F",
    "20Rnd_762x51_AK_Mag_IRT4_F",
    "20Rnd_762x51_AK_Mag_T4_F",
    "20Rnd_762x51_AK_Mag_NT_F"
    };
};
class AK308_308WIN
{
A3RO_Magazines[] += 
    {
    "20Rnd_308WIN_AK_Mag_RT_F",
    "20Rnd_308WIN_AK_Mag_Tracer_F",
    "20Rnd_308WIN_AK_Mag_T4_F",
    "20Rnd_308WIN_AK_Mag_NT_F"
    };
};

// Creating .300 Winchester Magnum Magwell
class CBA_300WM_BadNews
{
A3RO_Magazines[] += 
    {
    "10Rnd_300WM_Ball",
    };
};

// Adding Soft Compat to DLC Magazines by adding "new" Magazines with the same Classname to avoid duplicates
class CBA_762x51_FAL
{
lxWS_Magazines[] += {"20Rnd_762x51_slr_lxWS"};
A3RO_WS_Magazines[] += 
    {
    "20Rnd_762x51_slr_reload_tracer_red_lxWS",
    "20Rnd_762x51_slr_IRT_lxWS",
    "20Rnd_762x51_slr_tracer_red_lxWS",
    "20Rnd_762x51_slr_IRT4_lxWS",
    "20Rnd_762x51_slr_T4_red_lxWS",
    };
};
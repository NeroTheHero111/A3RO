// GLX Base Class. Changing: Name. Description
class glaunch_GLX_base_lxWS : Rifle_Base_F
{
descriptionShort = "Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "GLX160 - standalone Base Class";
initSpeed = 76.2; // In a manner I am unable to comprehend in this flesh form, setting the initSpeed to 75 like with every other GL makes the Shotgun round super slow (75ms). On UGLs this behavior does not exist. Fair enough? Raising the value back up, however, does not increase the speed of the Grenades on the GLX though. Hooray? Update: You can set the Submunition Initspeed manually.
magazineWell[] = {"UGL_40x36","CBA_40mm_M203"}; // Pike doesn't fit
};
// GLX160 Patterns. Changing: Name.
class glaunch_GLX_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone";
};
class glaunch_GLX_camo_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Camo)";
};
class glaunch_GLX_ghex_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Green Hex)";
};
class glaunch_GLX_hex_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Hex)";
};
class glaunch_GLX_tan_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Tan)";
};
class glaunch_GLX_snake_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Snake)";
};

// RPG-42
class launch_RPG32_tan_lxWS : launch_RPG32_F
{
displayName = "RPG-32 (Sand)";
};

// Creating ZGL-40
class glaunch_ZGL40_lxWS : glaunch_GLX_base_lxWS
{
author = "NeroTheHero111";
baseWeapon = "glaunch_ZGL40_lxWS";
descriptionShort = "Grenade Launcher<br />Calibre: Very Small";
displayName = "ZGL-40 Mk. II";
DLC = "ws";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\zgl_body_co"};
magazines[] = {"1Rnd_ZGL_Cluster_F"};
magazineWell[] = {"ZGL_Boom"};
picture = "\lxWS\weapons_1_f_lxws\Rifles\GLX\data\ui\icon_glaunch_GLX_lxWS_CA.paa";
scope = 2;
};
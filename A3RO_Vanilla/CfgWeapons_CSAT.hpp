// Katiba Base Class. Enabling Bullet Casings for the Weapon. Adding 3 Round Burst. Fixing Mode Order. Changing Calibre to 5.56. Changing Texture to reflect Firemodes.
class arifle_Katiba_Base_F : Rifle_Base_F
{
caseless[] = {"",0,0,0};
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KH-2002 Base Class";
hiddenSelectionsMaterials[] = {"\A3RO_Vanilla\Textures\Khaybar_01.rvmat","A3\Weapons_F\Rifles\Khaybar\data\Khaybar_02.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_Vanilla\Textures\Khaybar_01_CO.paa","A3\Weapons_F\Rifles\Khaybar\data\Khaybar_02_CO.paa"};
magazines[] = {"30Rnd_65x39_caseless_green"};
magazineWell[] = {"Katiba_65x39","KH2002_223Rem"};
	class EGLM : UGL_F
	{
	cameraDir = "OP_look";
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistance[] = {50,75,100,150,200,250,300,350,400};
	discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
	discreteDistanceInitIndex = 0; 
	displayName = "ML40 mk1";	
	reloadAction = "GestureReloadKatibaUGL";
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",0.794328,1,10};
	useExternalOptic = 0;
	useModelOptics = 0;
	};
};

// Katiba Variants. Changing: Name. Description. Grenade Launcher Name
class arifle_Katiba_F : arifle_Katiba_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KH-2002";
initSpeed = 950;
};
class arifle_Katiba_C_F : arifle_Katiba_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "KH-2002 Carbine";
initSpeed = 900;
};
class arifle_Katiba_GL_F : arifle_Katiba_Base_F
{
descriptionShort = "Assault Rifle<br />Calibre: 5.45x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "KH-2002 ML40 mk1";
initSpeed = 950;
};

// Type 115 Base Class. Changing: Description. Adding Magazinewell to Integrated .50BW. Fixing Mode Order
class arifle_ARX_base_F : Rifle_Base_F
{	
descriptionShort = "Fictional Assault Rifle<br />Calibre: 5.56x45mm NATO / .50 Beowulf";
magazines[] = {"30Rnd_65x39_caseless_green"};
magazineWell[] = {"Katiba_65x39","KH2002_223Rem"};
	class Secondary : Rifle_Base_F
	{
	magazineWell[] = {"Type115_50BW"};
	};
};

// Type 115 Patterns. Changing: Name. Underbarrel Name
class arifle_ARX_blk_F : arifle_ARX_base_F
{
displayName = "Type 115";
	class Secondary : Secondary
	{
	displayName = "Integrated .50 BW";
	};
};
class arifle_ARX_ghex_F : arifle_ARX_base_F
{
displayName = "Type 115 (Green Hex)";
	class Secondary : Secondary
	{
	displayName = "Integrated .50 BW";
	};
};
class arifle_ARX_hex_F : arifle_ARX_base_F
{
displayName = "Type 115 (Hex)";
	class Secondary : Secondary
	{
	displayName = "Integrated .50 BW";
	};
};

// Adding hidden Compact NVG Black Reskin
class O_NVGoggles_hex_F : NVGoggles
{
	class ItemInfo;
}
class O_NVGoggles_blk_F : O_NVGoggles_hex_F
{
_generalMacro = "O_NVGoggles_blk_F";
displayName = "Compact NVG (Black)";
model = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
picture = "\a3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_blk_F_ca.paa";
	class ItemInfo : ItemInfo
	{
	modelOff = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_off_F.p3d";
	uniformModel = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
	};
};
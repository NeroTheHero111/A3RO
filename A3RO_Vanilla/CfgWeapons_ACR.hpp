// MX Base Class. Changing: Description. Enabling Bullet Casings for the Weapon. Adjusting RoF for MX and MX 3GL. Fixing Mode Order
class arifle_MX_Base_F : Rifle_Base_F
{
displayName = "ACR Carbine Base Class";
caseless[] = {"",0,0,0};
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
initSpeed = 822.96;
	class GL_3GL_F : UGL_F
	{
	descriptionShort = "Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
	discreteDistanceInitIndex = 0; 
	displayName = "3GL";
	};
};

// MX. Changing: Name
class arifle_MX_F : arifle_MX_Base_F
{	
displayName = "ACR Carbine (Sand)";
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
initSpeed = 822.96;
};
class arifle_MX_Black_F : arifle_MX_F
{
displayName = "ACR Carbine";
magazines[] = {"30Rnd_65x39_caseless_black_mag"};
};
class arifle_MX_khk_F : arifle_MX_Black_F
{
displayName = "ACR Carbine (Khaki)";
magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
};

// MX 3GL. Changing: Name
class arifle_MX_GL_F : arifle_MX_Base_F
{		
displayName = "ACR Carbine 3GL (Sand)";
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
initSpeed = 822.96;
};
class arifle_MX_GL_Black_F : arifle_MX_GL_F
{
displayName = "ACR Carbine 3GL";
magazines[] = {"30Rnd_65x39_caseless_black_mag"};
};
class arifle_MX_GL_khk_F : arifle_MX_GL_Black_F
{
displayName = "ACR Carbine 3GL (Khaki)";
magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
};

// MX SW. Changing: Name. Fixing Mode Order
class arifle_MX_SW_F : arifle_MX_Base_F
{		
displayName = "ACR HB (Sand)";
descriptionShort = "Light Machine Gun<br />Calibre: 6.5x39mm";
initSpeed = 835.152;
magazines[] = {"100Rnd_65x39_T4_mag"};
};
class arifle_MX_SW_Black_F : arifle_MX_SW_F
{		
displayName = "ACR HB";
magazines[] = {"100Rnd_65x39_T4_black_mag"};
};
class arifle_MX_SW_khk_F : arifle_MX_SW_Black_F
{		
displayName = "ACR HB (Khaki)";
magazines[] = {"100Rnd_65x39_T4_khaki_mag"};
};

// MXM. Changing: Name. Magazines Fix on Sand for ACE
class arifle_MXM_F : arifle_MX_Base_F
{		
displayName = "ACR SPR (Sand)";
descriptionShort = "Marksman Rifle<br />Calibre: 6.5x39mm";
initSpeed = 841.5528;
magazines[] = {"30Rnd_65x39_NT_mag"};
};
class arifle_MXM_Black_F : arifle_MXM_F
{	
displayName = "ACR SPR";
magazines[] = {"30Rnd_65x39_NT_black_mag"};
};
class arifle_MXM_khk_F : arifle_MXM_Black_F
{		
displayName = "ACR SPR (Khaki)";
magazines[] = {"30Rnd_65x39_NT_khaki_mag"};
};

// MXC. Changing: Name
class arifle_MXC_F : arifle_MX_Base_F
{		
descriptionShort = "Assault Rifle<br />Calibre: 6.5x39mm";
displayName = "ACR Entry Carbine (Sand)";
initSpeed = 796.7472;
};
class arifle_MXC_Black_F : arifle_MXC_F
{		
displayName = "ACR Entry Carbine";
magazines[] = {"30Rnd_65x39_caseless_black_mag"};
};
class arifle_MXC_khk_F : arifle_MXC_Black_F
{		
displayName = "ACR Entry Carbine (Khaki)";
magazines[] = {"30Rnd_65x39_caseless_khaki_mag"};
};

// Creating ACR with MOS scope for Unit Replacement
class arifle_MXM_MOS_LP_BI_F : arifle_MXM_F
{
scope = 1;	
	class LinkedItems
	{
		class LinkedItemsAcc
		{
		item = "acc_pointer_IR";
		slot = "PointerSlot";
		};
		class LinkedItemsOptic
		{
		item = "optic_SOS";
		slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
		item = "bipod_01_F_snd";
		slot = "UnderBarrelSlot";		
		};
	};	
};
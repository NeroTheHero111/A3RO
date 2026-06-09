// Adjusting WS Ammo with ACE Ballistic Balancing taken into account. Adding ACE Parameters

// Adjusting WS Rifle Grenades
class G_40mm_HE;
class lxWS_G_40mm_HE : G_40mm_HE
{
ace_frag_charge = 80;
ace_frag_classes[] = {"ACE_frag_tiny","ace_frag_tiny_HD","ACE_frag_small","ace_frag_small_HD"};
ace_frag_gurney_c = 2700; // Comp B
ace_frag_gurney_k = 0.5;
ace_frag_metal = 500;
ace_vehicle_damage_incendiary = 0.6;
};

class lxWS_G_50mm_AT : lxWS_G_40mm_HE
{
ace_frag_charge = 100; // Guess
ace_frag_classes[] = {"ACE_frag_tiny","ace_frag_tiny_HD","ACE_frag_small","ace_frag_small_HD"};
ace_frag_gurney_c = 2700; // Comp B
ace_frag_gurney_k = 0.5;
ace_frag_metal = 537;
ace_vehicle_damage_incendiary = 0.9;
};
class CfgPatches
{
	class 41_Legion
	{
		units[]=
		{
			"Desire"
		};
		weapons[]=
		{
			"41_HelmetP12_Desire"
		};
	};
	author="41 Unit RU/EN";
	requiredAddons[]=
	{
		"SWLB_clones"
	};
};
class CfgFactionClasses
{
	class Desire_Faction
	{
		displayName="Desire";
	};
};
class CfgEditorSubcategories
{
	class 41_Legion
	{
		displayName="41st Legion";
	};
};
class CfgWeapons
{
	class H_HelmetO_ViperSP_hex_F;
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_nvg_spec_nco;
	class SWLB_clone_commando_nvg_antenna;
	class SWLB_clone_commando_nvg;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_P15_helmet;
	class SDT_Hazard_Helmet;
	class SDT_stealth_helmet;
	class Scout_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_commando_helmet_k1;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_mc_uniform;
	class SWLB_clone_commander_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_commando_eod_armor_k1;
	class SWLB_clone_commando_sniper_armor_k1;
	class SWLB_clone_commando_sl_armor_k1;
	class SWLB_clone_commando_tech_armor_k1;
	class SWLB_clone_uniform;
	class SWLB_clone_commando_uniform_k1;
	class SWLA_BL_Sergeant_Vest;
	class SWLB_mando_og_helmet;
	class SWLB_mando_og_armor;
	class SWLB_mando_rangefinder;
	class SWLB_mando_uniform;
	class UniformItem;
	class HeadgearItem;
	class SDT_pilot_p1_helmet;
	class SWLB_P1_Pilot_Helmet;
	class SWLB_CEE_Hazard_Helmet;
	class SWLB_clone_arc_armor;
	class 41_HelmetP12_Desire: SWLB_clone_P1_2_helmet
	{
		author="Desire";
		displayName="41st Clone Trooper P1-2(Desire)";
		hiddenSelectionsTextures[]=
		{
			"AddonDesire2\Data\41_Helmet_P1-2.paa"
		};
	};
	
	class 501_Uniform_Desire: SWLB_clone_uniform
	{
		author="Desire";
		displayName="501st Clone Trooper Uniform (Desire)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Desire";
			containerClass="Supply150";
			mass=40;
		};
	};
class CfgVehicles
{
	class SWLB_clone_commando_base;
	class SWLB_clone_commando_backpack_k2;
	class SWLB_clone_commando_backpack_k2_rto;
	class SWLB_clone_commando_backpack_k2_eod;
	class SWLB_clone_base_P2;
	class SWLB_clone_base_P1;
	class SWLB_clone_assault_base_P2;
	class SWLB_clone_cfr_base_P2;
	class SWLB_clone_medic_base_P2;
	class SWLB_clone_RTO_base_P2;
	class SWLB_clone_recon_base_P2;
	class SWLB_clone_recon_nco_base_P2;
	class SWLB_clone_recon_officer_base_P2;
	class SWLB_clone_airborne_base_P2;
	class SWLB_clone_airborne_nco_base_P2;
	class SWLB_clone_lieutenant_base_P2;
	class SWLB_clone_captain_base_P2;
	class SWLB_clone_commander_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_arc_base_P2;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_sniper_base_P2;
	class SWLB_clone_sg_base_P2;
	class SWLB_clone_at_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_eod;
	class SWLB_clone_backpack_heavy;
	class SWLB_mando_base_assault;
	class SWLB_clone_backpack_RTO;
	class SWLB_mando_rangefinder;
	class SWLB_clone_rangefinder;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_uniform;
	class Desire: SWLB_clone_base_P2
	{
		author="Desire Solus";
		displayName="501st Clone Trooper (Desire)";
		faction="LW_Faction";
		editorSubcategory="501_Legion";
		uniformclass="Desire";
		hiddenSelectionsTextures[]=
		{
			"AddonDesire2\data\501_Armor1_Desire.paa",
			"AddonDesire2\data\501_Armor2_Desire.paa"
		};
		linkedItems[]=
		{
			"501_HelmetP12_Desire",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"501_HelmetP12_Desire",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
};

class cfgMods
{
	author="Desire Solus";
	timepacked="1594648166";
};
};

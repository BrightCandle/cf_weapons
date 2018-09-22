class CfgPatches
{
	class CF_Weapons_NIA_M14
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"hlcweapons_m14"};
		units[] = {};
		weapons[] = {};
	};
};

class asdg_OpticRail;	// External class reference
class asdg_OpticRail1913 : asdg_OpticRail {};
class asdg_OpticRail1913_short : asdg_OpticRail1913 {
	class compatibleItems;
};

class CfgWeapons {
	
	class Rifle;	// External class reference
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class hlc_M14_base: Rifle_Base_F {
		magazines[]=
		{
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m993_Mag",
			"rhsusf_20Rnd_762x51_m62_Mag",
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20Rnd_762x51_Barrier_M14",
			"hlc_20Rnd_762x51_mk316_M14",
			"hlc_20Rnd_762x51_T_M14",
			"hlc_20Rnd_762x51_Mdim_M14",
			"hlc_20Rnd_762x51_Tdim_M14",
			"hlc_50Rnd_762x51_B_M14",
			"hlc_20Rnd_762x51_S_M14",
			"hlc_50Rnd_762x51_MDIM_M14",
			"20Rnd_762x51_Mag"
		};
	};
	
	class hlc_rifle_M21: hlc_M14_base {};
	class hlc_rifle_m14dmr: hlc_rifle_M21 {};
	
	class hlc_rifle_M14dmr_Rail: hlc_rifle_m14dmr {
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass=116;
			class CowsSlot: asdg_OpticRail1913_short {
				class compatibleItems : compatibleItems {
					rhsusf_acc_LEUPOLDMK4 = 1;
					rhsusf_acc_LEUPOLDMK4_2 = 1;
					rhsusf_acc_LEUPOLDMK4_2_d = 1;
					rhsusf_acc_premier = 1;
					rhsusf_acc_premier_low = 1;
					rhsusf_acc_premier_anpvs27 = 1;
					rhsusf_acc_ACOG_anpvs27 = 1;
					rhsusf_acc_M8541 = 1;
					rhsusf_acc_M8541_low = 1;
					rhsusf_acc_M8541_low_d = 1;
					rhsusf_acc_M8541_low_wd = 1;
					rhsusf_acc_SpecterDR_pvs27 = 1;
				};
			};
		};
	};
};

class CfgPatches
{
	class CF_Weapons_RHS_USF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"rhsusf_c_weapons", "rhsusf_c_heavyweapons","asr_ai3_rhs_c"};
		units[] = {};
		weapons[] = {};
	};
};

class Mode_Burst;
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;

class CfgWeapons {
	
	class Pistol_Base_F;
	class Rifle_Base_F;
	class arifle_MX_Base_F : Rifle_Base_F {};
	class UGL_F;
	class LMG_Mk200_F;
	class srifle_EBR_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F {};
	class GM6_base_F : Rifle_Long_Base_F {};
	class SMG_01_Base;
	class SMG_01_F : SMG_01_Base {};
	class Launcher_Base_F;
	class GMG_20mm;
	class acc_pointer_IR;
	class MGunCore;
	class M134_minigun : MGunCore {};
	class LMG_RCWS;
	class optic_Holosight;				   
	
// Small Arms
	
	class rhs_weap_M320_Base_F : Pistol_Base_F {
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 25;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			aiRateOfFire = 6;	// delay between shots at given distance
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.55;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		
		class single_medium_optics1 : Single {
			aiRateOfFire = 6;	// delay between shots at given distance
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.55;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		
		class single_far_optics2 : single_medium_optics1 {
			aiRateOfFire = 6;	// delay between shots at given distance
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.55;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
		
	class rhs_weap_XM2010_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 4;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class far_optic1 : Single {
			aiDispersionCoefY = 0.6;
			aiDispersionCoefX = 0.6;
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
		};
		
		class medium_optic2 : Single {
			aiDispersionCoefY = 0.6;
			aiDispersionCoefX = 0.6;
			showToPlayer = 0;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 600;
		};
		
		class far_optic2 : far_optic1 {
			aiDispersionCoefY = 0.5;
			aiDispersionCoefX = 0.5;
			showToPlayer = 0;
			requiredOpticType = 2;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1100;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 1100;
		};
	};
	
	class rhs_weap_m4_Base : arifle_MX_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "Burst"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
	
		class FullAuto : Mode_FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class fullauto_medium : FullAuto {
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.45;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
		
		class M203_GL : UGL_F {
			aiDispersionCoefX = 25;
			aiDispersionCoefY = 25;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.25;
			opticsZoomInit = 0.75;
		
			class Single : Mode_SemiAuto {
				aiRateOfFire = 6;	// delay between shots at given distance
				aiRateOfFireDistance = 250;
				aiRateOfFireDispersion = 2;
				minRange = 60;
				minRangeProbab = 0.5;
				midRange = 250;
				midRangeProbab = 0.55;
				maxRange = 400;
				maxRangeProbab = 0.2;
			};
		};
		
		class M320_GL : M203_GL {
			aiDispersionCoefX = 25;
			aiDispersionCoefY = 25;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.25;
			opticsZoomInit = 0.75;
		
			class Single : Mode_SemiAuto {
				aiRateOfFire = 6;	// delay between shots at given distance
				aiRateOfFireDistance = 250;
				aiRateOfFireDispersion = 2;
				minRange = 60;
				minRangeProbab = 0.5;
				midRange = 250;
				midRangeProbab = 0.55;
				maxRange = 400;
				maxRangeProbab = 0.2;
			};
		};
	};
	
	class rhs_weap_m4a1 : rhs_weap_m4_Base {
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
	};
		
	class rhs_weap_hk416d10 : rhs_weap_m4a1 {
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
	};
		
	class rhs_weap_m27iar : rhs_weap_m4a1 {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class rhs_weap_M249_base : LMG_Mk200_F {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class FullAuto : Mode_FullAuto {};
		
		class close : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 650;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
		
	class rhs_weap_saw_base : Rifle_Base_F {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class FullAuto : Mode_FullAuto {};
		
		class close : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 650;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
	
	class rhs_weap_lmg_minimipara : rhs_weap_saw_base {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class FullAuto : Mode_FullAuto {};
		
		class close : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 650;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
	
	//M240 doesn't have FullAuto, only manual for some reason
	class rhs_weap_m240_base : rhs_weap_M249_base {
		modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class manual : Mode_FullAuto {};
		
		class close : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = 0;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 650;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
	
	class rhs_weap_m14ebrri : srifle_EBR_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;

		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_close_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 350;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 450;
		};
		
		class single_medium_optics1 : single_close_optics1 {
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
		};
		
		class single_far_optics1 : single_medium_optics1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 600;
		};
	};
	
	class rhs_weap_sr25 : rhs_weap_m14ebrri {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;

		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_close_optics1 : Single {
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 350;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 450;
		};
		
		class single_medium_optics1 : single_close_optics1 {
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
		};
		
		class single_far_optics1 : single_medium_optics1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 600;
		};
	};
	
	class rhs_weap_M107_Base_F : GM6_base_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 4;
	};
	
	class rhs_weap_m32_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 25;
		aiDispersionCoefX = 25;
	};
	
	class rhsusf_weap_MP7A1_base_f : SMG_01_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class rhs_weap_smaw : Launcher_Base_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 14;
		aiDispersionCoefX = 14;

		aiRateOfFire = 7.0;	// delay between shots at given distance
		aiRateOfFireDistance = 600;
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 400;
		midRangeProbab = 0.8;
		maxRange = 600;
		maxRangeProbab = 0.2;
		
		class Single : Mode_SemiAuto {
			aiRateOfFire = 7.0;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
	};
	
	class rhs_weap_smaw_SR : Launcher_Base_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 14;
		aiDispersionCoefX = 14;

		aiRateOfFire = 7.0;	// delay between shots at given distance
		aiRateOfFireDistance = 600;
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 400;
		midRangeProbab = 0.8;
		maxRange = 600;
		maxRangeProbab = 0.2;
	};
	
	class rhs_weap_M136 : Launcher_Base_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 15;
		aiDispersionCoefX = 15;
		
		class OpticsModes {
			class ironsight {
				opticsZoomMin = 0.255;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
			};
		};
	};
	
	class rhs_weap_m72a7 : rhs_weap_M136 {
		aiDispersionCoefY = 14;
		aiDispersionCoefX = 14;
		
		class OpticsModes {
			class ironsight {
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
			};
		};
	};
	
	class rhsusf_acc_sniper_base : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class pso1_scope {
					visionMode[] = {"Normal", NVG};
					discreteDistance[] = {100};
				};
			};
		};
	};
	
	class hgun_ACPC2_F;	// External class reference
	class hgun_P07_F;	// External class reference
	
	class rhsusf_weap_m1911a1 : hgun_ACPC2_F {
		class Single : Mode_SemiAuto {
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};
	
	class rhsusf_acc_compm4 : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					cameraDir = "";
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticview";
					opticsDisablePeripheralVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsBlur1"};										 
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	
	class rhsusf_acc_eotech_xps3 : optic_Holosight {
		class ItemInfo : InventoryOpticsItem_Base_F {
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
				mountAction = "MountOptic";
				muzzleEnd = "konec hlavne";
				muzzlePos = "usti hlavne";
			optics = 1;
				scope = 0;
				type = 201;
				unmountAction = "DismountOptic";
			class OpticsModes {
				class ACO {
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					useModelOptics = 0;
					visionMode[] = {};
					
				};
			};
		};
	};
	
// Heavy Weapons

	class LMG_M200 : LMG_RCWS {
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	
	class rhs_weap_m240veh : LMG_M200 {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : manual {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : close {
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.7;
		};
		
		class short : short {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : medium {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : far {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};

	};
	
	class rhs_weap_m134_minigun_1 : M134_minigun {};

	class RHS_M134x2_MELB : rhs_weap_m134_minigun_1 {
		aiDispersionCoefY = 14;
		aiDispersionCoefX = 14;
	};

	class RHS_MK19 : GMG_20mm {
		aiDispersionCoefY = 11;
		aiDispersionCoefX = 11;
	};	
};
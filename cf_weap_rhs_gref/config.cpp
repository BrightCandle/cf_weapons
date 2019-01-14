class CfgPatches
{
	class CF_Weapons_RHS_GREF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"rhsgref_c_weapons","asr_ai3_rhs_c"};
		units[] = {};
		weapons[] = {};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;


class CfgWeapons {
	class UGL_F;
	class GP25_Base : UGL_F {};
	class SMG_01_Base;
	class SMG_01_F : SMG_01_Base {};
	
	class RifleGrenade_Base : GP25_Base {
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
	
	class Rifle_Base_F;
	
	class rhs_weap_kar98k_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 4;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.6;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
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
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1100;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
		};
	};
	
	class rhs_weap_m38_Base_F : Rifle_Base_F {
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
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
		};
	};
	
	class rhs_weap_m38 : rhs_weap_m38_Base_F {};
	
	class rhs_weap_m38_rail : rhs_weap_m38 {};
	
	class rhs_weap_mosin_sbr : rhs_weap_m38_rail {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 4;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.6;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
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
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
		};
	};

	class rhs_weap_m70_base : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 250;
		};
	
		class FullAuto : Mode_FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 250;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = 0;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
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
	};
	
	class rhs_weap_m76 : rhs_weap_m70_base {
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
	
	class rhs_weap_m21_base : rhs_weap_m70_base {
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
	
	class rhs_weap_savz58_base : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
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
	};
	
	class rhs_weap_vhs2_base : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
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
	};
	
	class rhs_weap_stgw57_base : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
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
	};
	
	class rhs_weap_savz61 : SMG_01_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class rhs_weap_MP44_base : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
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
	};
	
	class rhs_weap_pya; // External class reference
	
	class rhs_weap_tt33 : rhs_weap_pya {
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
};
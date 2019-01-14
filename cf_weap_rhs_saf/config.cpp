class CfgPatches
{
	class CF_Weapons_RHS_SAF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"rhssaf_c_weapons","asr_ai3_rhs_c"};
		units[] = {};
		weapons[] = {};
	};
};

class Mode_Burst;
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;

class CfgWeapons {
	
	class Rifle;
	class Rifle_Base_F : Rifle {};
	class Rifle_Long_Base_F : Rifle_Base_F {};
	class UGL_F;
	class GP25_Base : UGL_F {};
	
	// Small Arms
	
	class PBG40_Base : GP25_Base {
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
		
	class rhs_weap_m70_base : Rifle_Base_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 450;
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
	
	class rhs_weap_ag36_base : UGL_F {
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
	
	class rhs_weap_g36_base : Rifle_Base_F {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium", "Burst"};
		
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
	
	class rhs_weap_g36c : rhs_weap_g36_base {
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium", "Burst"};
		
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
	
	class rhs_weap_m84 : Rifle_Long_Base_F {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class FullAuto : Mode_FullAuto {
			showToPlayer = true;
		};
		
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
			aiRateOfFireDistance = 500;
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
};
	

		
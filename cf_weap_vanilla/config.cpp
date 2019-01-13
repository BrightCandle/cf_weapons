class CfgPatches
{
	class CF_Weapons_Vanilla
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"A3_Functions_F", "A3_Weapons_F", "asr_ai3_main"};
		units[] = {};
		weapons[] = {};
	};
};

class Mode_Burst;
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;

class CfgWeapons {
	class Default;
	class HMG_01;
	class LMG_RCWS;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class MGun;
	
	class LauncherCore : Default {
		aiDispersionCoefX = 14;
		aiDispersionCoefY = 14;
		minRange = 20;
		minRangeProbab = 0.7;
		midRange = 250;
		midRangeProbab = 0.5;
		maxRange = 400;
		maxRangeProbab = 0.15;
	};
	
	class Launcher : LauncherCore {
		aiDispersionCoefX = 14;
		aiDispersionCoefY = 14;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.5;
		maxRange = 400;
		maxRangeProbab = 0.15;
	};
	
	class GrenadeLauncher : Default {
		aiRateOfFire = 6;	// delay between shots at given distance
		aiRateOfFireDistance = 60;
		aiRateOfFireDispersion = 2;
		minRange = 60;
		minRangeProbab = 0.5;
		midRange = 400;
		midRangeProbab = 0.55;
		maxRange = 500;
		maxRangeProbab = 0.2;
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 25;
	};
	
	class UGL_F : GrenadeLauncher {
		aiRateOfFire = 6;	// delay between shots at given distance
		aiRateOfFireDistance = 350;
		aiRateOfFireDispersion = 2;
		minRange = 60;
		minRangeProbab = 0.5;
		midRange = 350;
		midRangeProbab = 0.55;
		maxRange = 500;
		maxRangeProbab = 0.2;
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 25;
		
		class Single : Mode_SemiAuto {
			aiRateOfFire = 6;	// delay between shots at given distance
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 350;
			midRangeProbab = 0.55;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
	};
	
	class arifle_AK12_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 5;
		aiDispersionCoefX = 6;
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
			showToPlayer = false;
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
			showToPlayer = false;
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
			showToPlayer = false;
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
	
	class arifle_AKM_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		modes[] = {"Single", "FullAuto", "FullAuto_medium"};
		
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
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
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
	
	class arifle_AKS_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		modes[] = {"Single", "FullAuto", "FullAuto_medium"};
		
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
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
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
	
	class LMG_03_base_F : Rifle_Long_Base_F {
		modes[] = {"FullAutoSlow", "close", "short", "medium", "far_optic1", "far_optic2", "FullAutoFast"};
		aiDispersionCoefX = 9;
		aiDispersionCoefY = 9;
		
		class FullAutoSlow : Mode_FullAuto {};
		class FullAutoFast : FullAutoSlow {};
		
		class close : FullAutoFast {
			showToPlayer = false;
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
			showToPlayer = false;
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
		
		class medium : FullAutoSlow {
			showToPlayer = false;
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
			showToPlayer = false;
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
			showToPlayer = false;
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
	
	class HMG_127 : LMG_RCWS {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
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
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
	
	class HMG_M2 : HMG_01 {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
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
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
	
	class HMG_NSVT : HMG_127 {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
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
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
	
	class HMG_static : HMG_01 {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
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
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
};

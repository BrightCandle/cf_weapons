class CfgPatches
{
	class CF_Weapons_PO
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"po_factions_me", "po_vehicles","asr_ai3_popfor_c"};
		units[] = {};
		weapons[] = {};
	};
};

// Small Arms - po_factions_me

class Mode_SemiAuto;
class LMG_M200;

class CfgWeapons {
	
	class srifle_EBR_F;
	class MGun;
	
	class LOP_Weap_LeeEnfield : srifle_EBR_F {
		aiDispersionCoefY = 5;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.6;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
		};
		
		class far_optic1 : Single {
			aiDispersionCoefY = 0.6;
			aiDispersionCoefX = 0.6;
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class medium_optic2 : Single {
			aiDispersionCoefY = 0.6;
			aiDispersionCoefX = 0.6;
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 500;
		};
		
		class far_optic2 : far_optic1 {
			aiDispersionCoefY = 0.5;
			aiDispersionCoefX = 0.5;
			showToPlayer = false;
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
	
// Heavy Weapons - po_vehicles

	class LOP_PKT : LMG_M200 {
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;

		modes[] = {"manual", "close", "short", "medium", "far"};
		
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
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 850;
			midRangeProbab = 0.7;
			maxRange = 1100;
			maxRangeProbab = 0.4;
		};
	};
};

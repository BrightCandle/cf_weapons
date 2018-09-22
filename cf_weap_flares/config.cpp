class CfgPatches
{
	class CF_Weapons_Flares
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"A3_Weapons_F"};
		units[] = {};
		weapons[] = {};
	};
};

class Default; // External class reference

class CfgAmmo {
	
	class GrenadeCore: Default {};
	class FlareCore: GrenadeCore {};
	class FlareBase: FlareCore {};
	
	class F_40mm_White: FlareBase {};
	class F_40mm_Green: F_40mm_White {};
	class F_40mm_Red: F_40mm_White {};
	class F_40mm_Yellow: F_40mm_White {};
	class F_40mm_Cir: F_40mm_White {};
	
	class CF_F_40mm_White: F_40mm_White {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1500000;
	};
	
	class CF_F_40mm_Green: F_40mm_Green {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1500000;
	};
	
	class CF_F_40mm_Yellow: F_40mm_Yellow {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1500000;
	};
	
	class CF_F_40mm_Red: F_40mm_Red {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1500000;
	};
	
	class CF_F_40mm_Cir: F_40mm_Cir {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1500000;
	};
	
    class F_20mm_White: FlareBase {};
	class F_20mm_Green: F_20mm_White {};
	class F_20mm_Red: F_20mm_White {};
	class F_20mm_Yellow: F_20mm_White {};
	class F_20mm_Cir: F_20mm_White {};
	
	
	class CF_F_20mm_White: F_20mm_White {
		timeToLive = 40;
        brightness = 200;
        intensity  = 1200000;
	};
	
	class CF_F_20mm_Green: F_20mm_Green {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1200000;
	};
	
	class CF_F_20mm_Yellow: F_20mm_Yellow {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1200000;
	};
	
	class CF_F_20mm_Red: F_20mm_Red {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1200000;
	};
	
	class CF_F_20mm_Cir: F_20mm_Cir {
		access = 1;
		timeToLive = 40;
        brightness = 200;
        intensity  = 1200000;
	};
};

class CfgMagazines {
	
	class CA_Magazine: Default {};
	
	class UGL_FlareWhite_F: CA_Magazine {
		ammo = "CF_F_40mm_White";
	};
	
	class UGL_FlareGreen_F: UGL_FlareWhite_F {
		ammo = "CF_F_40mm_Green";
	};
	
	class UGL_FlareYellow_F: UGL_FlareWhite_F {
		ammo = "CF_F_40mm_Yellow";
	};
	
	class UGL_FlareRed_F: UGL_FlareWhite_F {
		ammo = "CF_F_40mm_Red";
	};
	
	class UGL_FlareCIR_F: UGL_FlareWhite_F {
		ammo = "CF_F_40mm_CIR";
	};
	
	class FlareWhite_F: CA_Magazine {
		ammo = "CF_F_20mm_White";
	};
	
	class FlareGreen_F: CA_Magazine {
		ammo = "CF_F_20mm_Green";
	};
	
	class FlareRed_F: CA_Magazine {
		ammo = "CF_F_20mm_Red";
	};
	
	class FlareYellow_F: CA_Magazine {
		ammo = "CF_F_20mm_Yellow";
	};
};
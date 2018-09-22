class CfgPatches
{
	class CF_Weapons_NIA_AK
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"hlcweapons_aks"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons {
	
	class Rifle_Base_F;
	
	
	class hlc_ak_base : Rifle_Base_F {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class hlc_rifle_ak74 : hlc_ak_base {};
	class hlc_rifle_ak74m_MTK : hlc_ak_base {};
	
	class hlc_rifle_aks74 : hlc_rifle_ak74 {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class hlc_rifle_rpk : hlc_ak_base {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class hlc_rifle_rpk74n : hlc_ak_base {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class hlc_rifle_RK62 : hlc_ak_base {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class hlc_rifle_ak74m : hlc_rifle_ak74 {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	
	class hlc_rifle_aks74_MTK : hlc_rifle_ak74m_MTK {
		opticszoommin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
};
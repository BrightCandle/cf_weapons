class CfgPatches
{
	class CF_Weapons
	{
		// Meta information for editor
		name = "CF_Weapons";
		author = "Shock";
		url = "http://www.charliefoxtrotops.eu/";
 
		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.76; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Functions_F", "A3_Weapons_F", "asr_ai3_main"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};
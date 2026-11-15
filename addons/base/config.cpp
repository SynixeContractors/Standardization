#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "ace_realisticnames",
	    "A3_Air_F_Orange_UAV_06",
        };
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgGlasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

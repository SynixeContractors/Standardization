#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
        };
        skipWhenMissingDependencies = 1;
        authors[] = {"Synixe Contractors"};
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgWeapons.hpp"

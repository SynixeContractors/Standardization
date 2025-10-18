#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "eo_gear"
        };
        skipWhenMissingDependencies = 1;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgWeapons.hpp"

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "timmy_gen_civ"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgWeapons.hpp"

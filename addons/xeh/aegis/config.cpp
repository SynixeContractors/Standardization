#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Atlas_Weapons_F_Atlas",
            "A3_Atlas_Characters_F_Atlas",
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

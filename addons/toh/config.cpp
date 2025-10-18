#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "HSim_Characters_Woman_H_Uniforms",
        };
        skipWhenMissingDependencies = 1;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgWeapons.hpp"

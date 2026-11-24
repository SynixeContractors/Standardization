#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",

            "A3_Soft_F_Offroad_01",
            "A3_Soft_F_Enoch_Offroad_01",
        };
        skipWhenMissingDependencies = 1;
        author = "Synixe Contractors";
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgVehicles.hpp"

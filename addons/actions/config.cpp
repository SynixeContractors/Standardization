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
    };
};

#include "CfgVehicles.hpp"

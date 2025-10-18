#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "ace_compat_ws_realisticnames",
            "data_f_lxWS_Loadorder",
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

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
        };
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgGlasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

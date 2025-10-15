#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "ace_compat_aegis_realisticnames",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Atlas_Weapons_F_Atlas",
            "A3_Atlas_Characters_F_Atlas_RF_Vests",
            // Backpacks
            "A3_Aegis_Supplies_F_Aegis_Bags",
            // Strider
            "A3_Atlas_Soft_F_Atlas_MRAP_03",
            // Marshall
            "A3_Aegis_Armor_F_Aegis_APC_Wheeled_01",
            "Vehicles_F_lxWS_APC_Wheeled_01",
            // Ram 1500
            "A3_Aegis_Soft_F_Aegis_RF_Pickup_01",
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgGlasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"

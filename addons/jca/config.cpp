#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_standardization_main",
            "Weapons_F_JCA_IA_LongRangeRifles_M107",
            "Weapons_F_JCA_IA_Rifles_HK433",
            "Weapons_F_JCA_IA_Rifles_HK437",
            "Weapons_F_JCA_IA_Rifles_M16A4",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_SR10",
            "Weapons_F_JCA_IA_Rifles_SR25",
            "Weapons_F_JCA_IA_SMGs_MP5",
            "Weapons_F_JCA_IA_SMGs_UMP",
        };
        skipWhenMissingDependencies = 1;
        authors[] = {"Synixe Contractors"};
        VERSION_CONFIG;
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgWeapons.hpp"

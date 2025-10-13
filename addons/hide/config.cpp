#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "A3_Characters_F_Exp",
            "A3_Opf_Characters_F_Opf",
            "A3_Atlas_Characters_F_Atlas",
            "A3_Aegis_Characters_F_Aegis",
            "A3_Atlas_Characters_F_Atlas_RF",
            "MU_islam",
            "MU_LIV",
            "MU_MILITIA",
            "Characters_f_lxWS",
            "MU_mercs",
            "tacs_units",
            "ace_dragon",
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"

class CfgWeapons {
    #include "CfgWeapons_Helmets.hpp"
    #include "CfgWeapons_Rifles.hpp"

    // Vortex Spitfire Prism
    class ItemCore;
    class optic_VRCO_RF: ItemCore {
        displayName = "Vortex Spitfire Prism (Black)";
    };

    // Desert Eagle
    class Pistol_Base_F;
    class hgun_DEagle_RF: Pistol_Base_F {
        displayName = "Desert Eagle Mark XIX L5 (Black)";
    };

    // Glock 19X
    class hgun_Glock19_RF: Pistol_Base_F {
        displayName = "Glock 19X (Black)";
    };
    class hgun_Glock19_khk_RF: hgun_Glock19_RF {
        displayName = "Glock 19X (Olive)";
    };
    class hgun_Glock19_Tan_RF: hgun_Glock19_RF {
        displayName = "Glock 19X (Tan)";
    };
    class hgun_Glock19_auto_RF: hgun_Glock19_RF {
        displayName = "Glock 19X Auto (Black)";
    };
    class hgun_Glock19_auto_khk_RF: hgun_Glock19_auto_RF {
        displayName = "Glock 19X Auto (Olive)";
    };
    class hgun_Glock19_auto_Tan_RF: hgun_Glock19_auto_RF {
        displayName = "Glock 19X Auto (Tan)";
    };

    // PSRL-1
    class launch_PSRL1_base_RF;
    class launch_PSRL1_digi_RF: launch_PSRL1_base_RF {
        displayName = "PSRL-1 (DAP Green)";
    };
    class launch_PSRL1_geo_RF: launch_PSRL1_base_RF {
        displayName = "PSRL-1 (Geo Woodland)";
    };
    class launch_PSRL1_PWS_base_RF;
    class launch_PSRL1_PWS_digi_RF: launch_PSRL1_PWS_base_RF {
        displayName = "PSRL-1 PWS (DAP Green)";
    };
    class launch_PSRL1_PWS_geo_RF: launch_PSRL1_PWS_base_RF {
        displayName = "PSRL-1 PWS (Geo Woodland)";
    };

    // Sound Suppressor
    class muzzle_snds_H;
    class suppressor_127x55_small_RF: muzzle_snds_H {
        displayName = "Sound Suppressor (12.7 mm, Black)";
    };
    class suppressor_127x55_big_RF: muzzle_snds_H {
        displayName = "Large Sound Suppressor (12.7 mm, Black)";
    };
};

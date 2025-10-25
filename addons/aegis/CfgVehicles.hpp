class CfgVehicles {
    #include "CfgVehicles_Backpacks.hpp"

    // M-ATV
    class MRAP_03_base_F;
    class Atlas_B_A_MRAP_03_F: MRAP_03_base_F {
        displayName = "M-ATV";
    };
    class Atlas_B_G_MRAP_03_F: MRAP_03_base_F {
        displayName = "M-ATV";
    };

    // M-ATV (GMG)
    class MRAP_03_gmg_base_F;
    class Atlas_B_A_MRAP_03_gmg_F: MRAP_03_gmg_base_F {
        displayName = "M-ATV (GMG)";
    };
    class Atlas_B_G_MRAP_03_gmg_F: MRAP_03_gmg_base_F {
        displayName = "M-ATV (GMG)";
    };

    // M-ATV (HMG)
    class MRAP_03_hmg_base_F;
    class Atlas_B_A_MRAP_03_hmg_F: MRAP_03_hmg_base_F {
        displayName = "M-ATV (HMG)";
    };
    class Atlas_B_G_MRAP_03_hmg_F: MRAP_03_hmg_base_F {
        displayName = "M-ATV (HMG)";
    };

    // Ram 1500
    class Pickup_01_aat_base_rf;
    class Aegis_Pickup_01_AT_base_RF: Pickup_01_aat_base_rf {
        displayName = "Ram 1500 (AT)";
    };
    class Pickup_covered_base_rf;
    class Atlas_B_G_Pickup_covered_MP_rf: Pickup_covered_base_rf {
        displayName = "Ram 1500 (MP)";
    };
};

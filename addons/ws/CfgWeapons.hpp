class CfgWeapons {
    #include "CfgWeapons_Headgear.hpp"
    #include "CfgWeapons_Helmets.hpp"
    #include "CfgWeapons_Rifles.hpp"
    #include "CfgWeapons_Uniforms.hpp"

    // Saber Light
    class acc_flashlight;
    class saber_light_lxWS: acc_flashlight {
        displayName = "Saber Light (Black)";
    };
    class saber_light_ir_lxWS: saber_light_lxWS {
        displayName = "Saber Light IR (Black)";
    };

    // Sound Suppressor
    class muzzle_snds_B;
    class suppressor_h_lxWS: muzzle_snds_B {
        displayName = "Stubby Sound Suppressor (7.62 mm, Black)";
    };
    class muzzle_snds_H;
    class suppressor_m_lxWS: muzzle_snds_H {
        displayName = "Stubby Sound Suppressor (6.5 mm, Black)";
    };
    class muzzle_snds_M;
    class suppressor_l_lxWS: muzzle_snds_M {
        displayName = "Stubby Sound Suppressor (5.56 mm, Black)";
    };
    class muzzle_snds_12Gauge_lxWS: muzzle_snds_H {
        displayName = "Sound Suppressor (12 Gauge, Black)";
    };
};

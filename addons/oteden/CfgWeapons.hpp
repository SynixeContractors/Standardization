class CfgWeapons {
    #include "CfgWeapons_Gear.hpp"
    #include "CfgWeapons_Headgear.hpp"
    #include "CfgWeapons_Uniforms.hpp"
    #include "CfgWeapons_Vests.hpp"

    class launch_RPG32_F;
    class launch_RPG32A1_hex: launch_RPG32_F {
        scopeArsenal = 1;
        scope = 1;
    };

    class SMG_01_9mm_Base;
    class SMG_01_9mm: SMG_01_9mm_Base {
        scope = 1;
    };

    // Heli Pilot Helmet
    class H_HelmetB;
    class H_PilotHelmetHeli_B_visorUp: H_HelmetB {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_PilotHelmetHeli_I_visorUp: H_PilotHelmetHeli_B_visorUp {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_PilotHelmetHeli_O_visorUp: H_PilotHelmetHeli_B_visorUp {
        scope = 1;
        scopeArsenal = 1;
    };

    // Light Combat Helmet
    class H_HelmetB_light;
    class H_HelmetB_LightEmpty: H_HelmetB_light {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_HelmetB_LightEmpty_black: H_HelmetB_LightEmpty {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_HelmetB_LightEmpty_grass: H_HelmetB_LightEmpty {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_HelmetB_LightEmpty_sand: H_HelmetB_LightEmpty {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_HelmetB_LightEmpty_snakeskin: H_HelmetB_LightEmpty {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_HelmetB_LightEmpty_tna: H_HelmetB_LightEmpty {
        scope = 1;
        scopeArsenal = 1;
    };
    class H_HelmetB_LightEmpty_wdl: H_HelmetB_LightEmpty {
        scope = 1;
        scopeArsenal = 1;
    };

    // Beret
    class H_Beret_02;
    class H_Beret_Colonel_eagle: H_Beret_02 {
        scope = 1;
        scopeArsenal = 1;
    };
};

class CfgWeapons {
    #include "CfgWeapons_Rifles.hpp"
    #include "CfgWeapons_Headgear.hpp"
    #include "CfgWeapons_Helmets.hpp"
    #include "CfgWeapons_Uniforms.hpp"

    class hgun_P07_F;
    class tacs_Walther_P99: hgun_P07_F {
        scope = 1;
    };
    class tacs_Walther_P99_Tan: tacs_Walther_P99 {
        scope = 1;
    };

    class launch_MRAWS_green_rail_F;
    class tacs_MRAWS_Black_Rail_F: launch_MRAWS_green_rail_F {
        displayName = "MAAWS Mk4 Mod 0 (Grey)";
    };
    class launch_MRAWS_green_F;
    class tacs_MRAWS_Black_F: launch_MRAWS_green_F {
        displayName = "MAAWS Mk4 Mod 1 (Grey)";
    };
};

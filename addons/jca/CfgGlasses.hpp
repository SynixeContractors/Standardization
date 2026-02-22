#define GLASSES ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa"

class CfgGlasses {
    class None;

    class JCA_G_shemagh_01_base_F;
    class JCA_G_shemagh_01_glasses_base_F: JCA_G_shemagh_01_base_F {
        TINT_TACTICAL;
        GLASSES;
    };
    class JCA_G_shemagh_01_headset_base_F: JCA_G_shemagh_01_base_F {
        ACE_HEARING_PELTOR;
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_shemagh_01_headset_glasses_base_F: JCA_G_shemagh_01_base_F {
        TINT_TACTICAL;
        ACE_HEARING_PELTOR;
        GLASSES;
        scope = 1;
        scopeArsenal = 1;
    };

    class JCA_G_balaclava_01_base_F: None {
        ace_smoke_breathing_protection = 0.4;
    };
    class JCA_G_balaclava_01_glasses_base_F: JCA_G_balaclava_01_base_F {
        TINT_TACTICAL;
        GLASSES;
    };
    class JCA_G_balaclava_01_headset_base_F: JCA_G_balaclava_01_base_F {
        ACE_HEARING_PELTOR;
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_balaclava_01_headset_glasses_base_F: JCA_G_balaclava_01_base_F {
        TINT_TACTICAL;
        ACE_HEARING_PELTOR;
        GLASSES;
        scope = 1;
        scopeArsenal = 1;
    };

    class JCA_G_Glasses_Tactical_base_F: None {
        TINT_TACTICAL;
        GLASSES;
    };

    #define OVERLAY \
        ACE_Overlay = "a3\ui_f_enoch\data\objects\data\optics_apr_ca.paa"; \
        ACE_Overlay_Angle = 180; \
        ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
        ACE_OverlayCracked = ""; \
        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa"; \
        ACE_Resistance = 1; \
        ace_smoke_breathing_protection = 1; \
        ace_smoke_eyes_protection = 1; \
        ACE_Color[] = {0, 0, 0}

    class JCA_G_AirPurifyingRespirator_03_base_F: None {
        OVERLAY;
    };
    class JCA_G_AirPurifyingRespirator_03_black_tinted_F: JCA_G_AirPurifyingRespirator_03_base_F {
        TINT_TACTICAL;
    };
    class JCA_G_AirPurifyingRespirator_03_olive_tinted_F: JCA_G_AirPurifyingRespirator_03_base_F {
        TINT_TACTICAL;
    };
    class JCA_G_AirPurifyingRespirator_03_sand_tinted_F: JCA_G_AirPurifyingRespirator_03_base_F {
        TINT_TACTICAL;
    };
    class JCA_G_AirPurifyingRespirator_04_base_F: None {
        OVERLAY;
    };
    class JCA_G_AirPurifyingRespirator_04_black_tinted_F: JCA_G_AirPurifyingRespirator_04_base_F {
        TINT_TACTICAL;
    };
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_F: JCA_G_AirPurifyingRespirator_04_base_F {
        TINT_TACTICAL;
    };
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_F: JCA_G_AirPurifyingRespirator_04_base_F {
        TINT_TACTICAL;
    };

    class JCA_G_Headset_Combat_01_base_F: None {
        scope = 1;
        scopeArsenal = 1;
    };

    class JCA_G_Glasses_Tactical_amber_black_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_clear_black_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_faded_black_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_amber_olive_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_clear_olive_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_faded_olive_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_amber_sand_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_clear_sand_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
    class JCA_G_Glasses_Tactical_faded_sand_F: JCA_G_Glasses_Tactical_base_F {
        scope = 1;
        scopeArsenal = 1;
    };
};

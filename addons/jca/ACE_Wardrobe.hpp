class ace_wardrobe {
    class ace_wardrobe_base;
    class GVAR(wipe): ace_wardrobe_base {
        gesture = "GestureWipeFace";
    };

    #define AMCH_CLASS(COLOR) JCA_H_HelmetHBK_##COLOR##_F
    #define AMCH_HEADSET_CLASS(COLOR) JCA_H_HelmetHBK_headset_##COLOR##_F
    #define BERET_CLASS(COLOR) JCA_H_Beret_01_##COLOR##_F
    #define BERET_HEADSET_CLASS(COLOR) JCA_H_Beret_01_headset_##COLOR##_F
    #define HEADSET_CLASS(COLOR) JCA_H_Headset_Combat_01_##COLOR##_F

    #define COLOR black
    #include "wardrobe/AMCH.hpp"
    #include "wardrobe/Beret.hpp"
    #include "wardrobe/Headset.hpp"
    #undef COLOR
    #define COLOR olive
    #include "wardrobe/AMCH.hpp"
    #include "wardrobe/Beret.hpp"
    #include "wardrobe/Headset.hpp"
    #undef COLOR
    #define COLOR sand
    #include "wardrobe/AMCH.hpp"
    #include "wardrobe/Beret.hpp"
    #include "wardrobe/Headset.hpp"
    #undef COLOR
};

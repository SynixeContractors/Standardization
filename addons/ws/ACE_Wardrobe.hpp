class ace_wardrobe {
    #define CN(version,color) lxWS_H_turban_##version##_##color

    #define COLORGROUP(COLOR)\
    class CN(01,COLOR): ace_wardrobe_turban {\
        class modifiableTo {\
            class CN(02,COLOR) {};\
            class CN(03,COLOR) {};\
            class CN(04,COLOR) {};\
        };\
    };\
    class CN(02,COLOR): ace_wardrobe_turban {\
        class modifiableTo {\
            class CN(01,COLOR) {};\
            class CN(03,COLOR) {};\
            class CN(04,COLOR) {};\
        };\
    };\
    class CN(03,COLOR): ace_wardrobe_turban {\
        class modifiableTo {\
            class CN(01,COLOR) {};\
            class CN(02,COLOR) {};\
            class CN(04,COLOR) {};\
        };\
    };\
    class CN(04,COLOR): ace_wardrobe_turban {\
        class modifiableTo {\
            class CN(01,COLOR) {};\
            class CN(02,COLOR) {};\
            class CN(03,COLOR) {};\
        };\
    }

    class ace_wardrobe_turban;
    COLORGROUP(orange);
};

class BERET_CLASS(COLOR) {
    class modifiableTo {
        class BERET_HEADSET_CLASS(COLOR) {
            displayName = "Add Headset";
        };
    };
    components[] = {QUOTE(BERET_CLASS(COLOR))};
};
class BERET_HEADSET_CLASS(COLOR) {
    class modifiableTo {
        class BERET_CLASS(COLOR) {
            displayName = "Remove Headset";
        };
    };
    components[] = {QUOTE(BERET_CLASS(COLOR)), QUOTE(HEADSET_CLASS(COLOR))};
};

class AMCH_CLASS(COLOR) {
    class modifiableTo {
        class AMCH_HEADSET_CLASS(COLOR) {
            displayName = "Add Headset";
        };
    };
    components[] = {QUOTE(AMCH_CLASS(COLOR))};
};
class AMCH_HEADSET_CLASS(COLOR) {
    class modifiableTo {
        class AMCH_CLASS(COLOR) {
            displayName = "Remove Headset";
        };
    };
    components[] = {QUOTE(AMCH_CLASS(COLOR)), QUOTE(HEADSET_CLASS(COLOR))};
};

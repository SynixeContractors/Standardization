class CfgVehicles {
    class Car_F;
    class Offroad_01_base_F: Car_F {
        class UserActions {
            class beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hidePolice' < 0.5 OR this animationPhase 'hideServices' < 0.5} AND {this animationSourcePhase 'Beacons' < 0.5}";
            };
            class beacons_stop: beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hidePolice' < 0.5 OR this animationPhase 'hideServices' < 0.5} AND {this animationSourcePhase 'Beacons' > 0.5}";
            };
            class siren_start: beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hidePolice' < 0.5 OR this animationPhase 'hideServices' < 0.5} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
            };
            class siren_stop: siren_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hidePolice' < 0.5 OR this animationPhase 'hideServices' < 0.5} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
            };
        };
    };

    class Offroad_01_military_base_F: Offroad_01_base_F {
        class UserActions;
    };
    class Offroad_01_military_covered_base_F: Offroad_01_military_base_F {
        class UserActions: UserActions {
            class beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hidePolice' < 0.5 OR this animationPhase 'HideBeacon' < 0.5} AND {this animationSourcePhase 'Beacons' < 0.5}";
            };
            class beacons_stop: beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hidePolice' < 0.5 OR this animationPhase 'HideBeacon' < 0.5} AND {this animationSourcePhase 'Beacons' > 0.5}";
            };
        };
    };
};

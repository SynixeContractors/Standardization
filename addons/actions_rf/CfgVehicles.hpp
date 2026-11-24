class CfgVehicles {
    class Offroad_01_base_F;
    class Pickup_01_base_rf: Offroad_01_base_F {
        class UserActions {
            class close_hatch_L {
                condition = "(driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])) AND {this animationSourcePhase 'armor_move_window_armor_door_F_L' > 0.5} AND {this animationSourcePhase 'window_armor_hatch_L_rot' > 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_front' < 0.5}";
            };
            class close_hatch_R: close_hatch_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 0) AND {this animationSourcePhase 'armor_move_window_armor_door_F_R' > 0.5} AND {this animationSourcePhase 'window_armor_hatch_R_rot' > 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_front' < 0.5}";
            };
            class close_side_F_L: close_hatch_L {
                condition = "(driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])) AND {this animationSourcePhase 'armor_move_window_armor_door_F_L' > 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_L' < 0.5}";
            };
            class close_side_F_R: close_side_F_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 0) AND {this animationSourcePhase 'armor_move_window_armor_door_F_R' > 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_R' < 0.5}";
            };
            class close_side_R_L: close_side_F_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 2) AND {this animationSourcePhase 'armor_move_window_armor_door_R_L' > 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_L' < 0.5}";
            };
            class close_side_R_R: close_side_F_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 1) AND {this animationSourcePhase 'armor_move_window_armor_door_R_R' > 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_R' < 0.5}";
            };
            class open_hatch_L: close_hatch_L {
                condition = "(driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])) AND {this animationSourcePhase 'armor_move_window_armor_door_F_L' > 0.5} AND {this animationSourcePhase 'window_armor_hatch_L_rot' < 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_front' < 0.5}";
            };
            class open_hatch_R: open_hatch_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 0) AND {this animationSourcePhase 'armor_move_window_armor_door_F_R' > 0.5} AND {this animationSourcePhase 'window_armor_hatch_R_rot' < 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_front' < 0.5}";
            };
            class open_side_F_L: close_side_F_L {
                condition = "(driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])) AND {this animationSourcePhase 'armor_move_window_armor_door_F_L' < 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_L' < 0.5}";
            };
            class open_side_F_R: open_side_F_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 0) AND {this animationSourcePhase 'armor_move_window_armor_door_F_R' < 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_R' < 0.5}";
            };
            class open_side_R_L: open_side_F_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 2) AND {this animationSourcePhase 'armor_move_window_armor_door_R_L' < 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_L' < 0.5}";
            };
            class open_side_R_R: open_side_F_L {
                condition = "(this getCargoIndex (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) == 1) AND {this animationSourcePhase 'armor_move_window_armor_door_R_R' < 0.5} AND {this animationSourcePhase 'hide_armor_window_armor_F_R' < 0.5}";
            };
            class Rear_Open {
                condition = "this doorPhase 'trunk_door_open' < 0.5 AND Alive(this) && {((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) in [this turretUnit [0], this turretUnit [1]])} && {gunner this != (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])} && {this animationPhase 'hide_trunk_door' < 0.5} && {((this getVariable ['bis_disabled_rearDoors',0]) != 1)}";
            };
            class Rear_Closed: Rear_Open {
                condition = "this doorPhase 'trunk_door_open' > 0.5 AND Alive(this) && {((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) in [this turretUnit [0], this turretUnit [1]])} && {gunner this != (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])} && {this animationPhase 'hide_trunk_door' < 0.5} && {((this getVariable ['bis_disabled_rearDoors',0]) != 1)}";
            };
            class spotlights_on {
                condition = "isLightOn this AND driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hide_rack_spotlights' < 0.5} AND {this animationSourcePhase 'hide_rack_spotlights_light' > 0.5}";
            };
            class spotlights_off: spotlights_on {
                condition = "isLightOn this AND driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hide_rack_spotlights' < 0.5} AND {this animationSourcePhase 'hide_rack_spotlights_light' < 0.5}";
            };
        };
    };
    class Pickup_service_base_old_rf: Pickup_01_base_rf {
        class UserActions: UserActions {
            class beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hide_Police' < 0.5 OR this animationPhase 'hide_Services' < 0.5} AND {this animationSourcePhase 'Beacons' < 0.5}";
            };
            class beacons_stop: beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hide_Police' < 0.5 OR this animationPhase 'hide_Services' < 0.5} AND {this animationSourcePhase 'Beacons' > 0.5}";
            };
            class siren_start: beacons_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hide_Police' < 0.5 OR this animationPhase 'hide_Services' < 0.5} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
            };
            class siren_stop: siren_start {
                condition = "driver this == (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) AND {this animationPhase 'hide_Police' < 0.5 OR this animationPhase 'hide_Services' < 0.5} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
            };
            class Rear_Open: Rear_Open {
                condition = "(this doorPhase 'trunk_door_open' < 0.5 OR this doorPhase 'box_door_open' < 0.5) AND Alive(this) && {((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) in [this turretUnit [0], this turretUnit [1]])} && {gunner this != (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])} && {this animationPhase 'hide_trunk_door' < 0.5} && {((this getVariable ['bis_disabled_rearDoors',0]) != 1)}";
            };
            class Rear_Closed: Rear_Open {
                condition = "(this doorPhase 'trunk_door_open' > 0.5 OR this doorPhase 'box_door_open' > 0.5) AND Alive(this) && {((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) in [this turretUnit [0], this turretUnit [1]])} && {gunner this != (missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player])} && {this animationPhase 'hide_trunk_door' < 0.5} && {((this getVariable ['bis_disabled_rearDoors',0]) != 1)}";
            };
        };
    };
};

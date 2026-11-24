class CfgVehicles {
    class Helicopter_Base_F;
    class UAV_06_base_F: Helicopter_Base_F {
        fuelCapacity = 30; //AR-2 Darter has 19
        EMPTY_VEHICLE_INVENTORY;
    };

    #include "CfgVehicles_Backpacks.hpp"
};

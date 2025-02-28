#include <stdio.h>
#include "Building.h"
#include "Elevator.h"
#include "Passenger.h"

int main() {
    // 初始化建筑物
    Building building;
    init_building(&building);

    // 初始化电梯
    Elevator elevator;
    init_elevator(&elevator);

    // 初始化乘客
    Passenger passenger;
    init_passenger(&passenger, 1, 5, 0);

    printf("%d %d %d", building.total_floors, elevator.height, passenger.id);

    return 0;
}

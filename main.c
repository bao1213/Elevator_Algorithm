#include <stdio.h>
#include "Building.h"
#include "Elevator.h"
#include "Passenger.h"

int main() {
    // ��ʼ��������
    Building building;
    init_building(&building);

    // ��ʼ������
    Elevator elevator;
    init_elevator(&elevator);

    // ��ʼ���˿�
    Passenger passenger;
    init_passenger(&passenger, 1, 5, 0);

    printf("%d %d %d", building.total_floors, elevator.height, passenger.id);

    return 0;
}

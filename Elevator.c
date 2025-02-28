#include <stdio.h>
#include "Elevator.h"

// 初始化电梯
void init_elevator(Elevator* elevator) {
    elevator->height = 0;
    elevator->speed = 3;
    elevator->acc = 3;
    elevator->acc_time = 1;
    elevator->state = 0;
    elevator->direction = 0;
    *elevator->carried = NULL;
    elevator->current_passager = 0;
    elevator->max_passager = 15;
    elevator->door_time = 2;
    elevator->passenger_time = 2;
}

// 设置电梯参数
void set_elevator(Elevator* elevator,
    float height,
    float speed,
    float acc,
    int state,
    int direction,
    Passenger* carried[MAX_PASSENGERS],
    int current_passager,
    int max_passager,
    int door_time,
    int passenger_time) {
    elevator->height = height;
    elevator->speed = speed;
    elevator->acc = acc;
    elevator->acc_time = speed/acc;
    elevator->state = state;
    elevator->direction = direction;
    *elevator->carried = carried;
    elevator->current_passager = current_passager;
    elevator->max_passager = max_passager;
    elevator->door_time = door_time;
    elevator->passenger_time = passenger_time;
}

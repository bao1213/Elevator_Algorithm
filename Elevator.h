#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "Passenger.h"

#define MAX_PASSENGERS 100

// 电梯结构体
typedef struct {
    float height;  // 当前高度
    float speed;  // 电梯的匀速运行速度(米/秒)
    float acc; // 电梯加减速时的加速度
    int state;  // 电梯状态，取值0-7，0：空闲，1：停机，2：移动，3：转向，4：开门，5：上乘客，6：下乘客，7：关门
    int direction;  // 电梯的方向：0表示停止，1表示上行，-1表示下行
    Passenger* carried[MAX_PASSENGERS];  // 存储当前电梯内的乘客
    int current_passager;  // 当前电梯内的乘坐人数
    int max_passager;  // 电梯乘坐最大人数
    int door_time;  // 开门/关门时间
    int passenger_time; //上下乘客时间
    int acc_time; //电梯加减速时长
} Elevator;

// 初始化电梯
void init_elevator(Elevator* elevator);

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
                    int passenger_time);

#endif


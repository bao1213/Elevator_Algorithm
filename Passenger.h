#ifndef PASSENGER_H
#define PASSENGER_H

// 乘客结构体
typedef struct {
    int id;  // 乘客编号
    int req_floor;  // 请求的楼层
    int arr_floor;  // 到达楼层
    int direction;  // 方向：-1表示下行，1表示上行
    int req_time;  // 请求时间
    int ser_time;  // 服务时间
    int arr_time;  // 到达时间
} Passenger;

// 初始化乘客
void init_passenger(Passenger* passenger, int req_floor, int arr_floor, int req_time);

#endif

#ifndef BUILDING_H
#define BUILDING_H

#include "Elevator.h"

#define MAX_ELEVATORS 10
#define MAX_FLOORS 100


// 建筑物结构体
typedef struct {
    int total_floors;  // 总楼层数
    int blind_floors_matrix[MAX_FLOORS][MAX_ELEVATORS];  // 盲层矩阵，b[i][j]表示第i层楼对第j号电梯是否是盲层，值为1表示是，0表示不是
    int elevator_count;  // 电梯数量
    float floor_heights[MAX_FLOORS];  // 每层楼的楼高
    int select[MAX_FLOORS]; //第i层是否安装选层器，为1是安装，为0没安装
} Building;

// 初始化建筑物
void init_building(Building* building);

// 设置建筑物基本信息
void set_building(int total_floors, int blind_floors_matrix[MAX_ELEVATORS][MAX_FLOORS], int elevator_count, float floor_heights[MAX_FLOORS], int select[MAX_FLOORS]);


#endif
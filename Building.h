#ifndef BUILDING_H
#define BUILDING_H

#include "Elevator.h"

#define MAX_ELEVATORS 10
#define MAX_FLOORS 100


// ������ṹ��
typedef struct {
    int total_floors;  // ��¥����
    int blind_floors_matrix[MAX_FLOORS][MAX_ELEVATORS];  // ä�����b[i][j]��ʾ��i��¥�Ե�j�ŵ����Ƿ���ä�㣬ֵΪ1��ʾ�ǣ�0��ʾ����
    int elevator_count;  // ��������
    float floor_heights[MAX_FLOORS];  // ÿ��¥��¥��
    int select[MAX_FLOORS]; //��i���Ƿ�װѡ������Ϊ1�ǰ�װ��Ϊ0û��װ
} Building;

// ��ʼ��������
void init_building(Building* building);

// ���ý����������Ϣ
void set_building(int total_floors, int blind_floors_matrix[MAX_ELEVATORS][MAX_FLOORS], int elevator_count, float floor_heights[MAX_FLOORS], int select[MAX_FLOORS]);


#endif
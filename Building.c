#include <stdio.h>
#include "Building.h"

// ��ʼ��������
void init_building(Building* building) {
    building->total_floors = 20;
    building->elevator_count = 4;
    for (int i = 0; i < 20; i++) {
        building->floor_heights[i] = 3.0;  // ����ÿ��¥��3��
        building->select[i] = 0; // Ĭ��û��ѡ����
        for (int j = 0; j < 4; j++) {
            building->blind_floors_matrix[i][j] = 0;  // Ĭ��û��ä��
        }
    }
}

// ���ý����������Ϣ
void set_building(Building* building,int total_floors, int blind_floors_matrix[MAX_ELEVATORS][MAX_FLOORS], int elevator_count, float floor_heights[MAX_FLOORS], int select[MAX_FLOORS]) {
    building->total_floors = total_floors;
    building->elevator_count = elevator_count;
    for (int i = 0; i < total_floors; i++) {
        building->floor_heights[i] = floor_heights[i]; 
        building->select[i] = select[i];
        for (int j = 0; j < elevator_count; j++) {
            building->blind_floors_matrix[i][j] = blind_floors_matrix[i][j];  
        }
    }
}

#ifndef PASSENGER_H
#define PASSENGER_H

// �˿ͽṹ��
typedef struct {
    int id;  // �˿ͱ��
    int req_floor;  // �����¥��
    int arr_floor;  // ����¥��
    int direction;  // ����-1��ʾ���У�1��ʾ����
    int req_time;  // ����ʱ��
    int ser_time;  // ����ʱ��
    int arr_time;  // ����ʱ��
} Passenger;

// ��ʼ���˿�
void init_passenger(Passenger* passenger, int req_floor, int arr_floor, int req_time);

#endif

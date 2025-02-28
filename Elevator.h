#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "Passenger.h"

#define MAX_PASSENGERS 100

// ���ݽṹ��
typedef struct {
    float height;  // ��ǰ�߶�
    float speed;  // ���ݵ����������ٶ�(��/��)
    float acc; // ���ݼӼ���ʱ�ļ��ٶ�
    int state;  // ����״̬��ȡֵ0-7��0�����У�1��ͣ����2���ƶ���3��ת��4�����ţ�5���ϳ˿ͣ�6���³˿ͣ�7������
    int direction;  // ���ݵķ���0��ʾֹͣ��1��ʾ���У�-1��ʾ����
    Passenger* carried[MAX_PASSENGERS];  // �洢��ǰ�����ڵĳ˿�
    int current_passager;  // ��ǰ�����ڵĳ�������
    int max_passager;  // ���ݳ����������
    int door_time;  // ����/����ʱ��
    int passenger_time; //���³˿�ʱ��
    int acc_time; //���ݼӼ���ʱ��
} Elevator;

// ��ʼ������
void init_elevator(Elevator* elevator);

// ���õ��ݲ���
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


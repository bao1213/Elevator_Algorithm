#ifndef CHANGESIGNAL_H
#define CHANGESIGNAL_H
#include <stdio.h>

//ChangeSignal �ṹ��
typedef struct {
    int idBefore;  // ֮ǰ����ĵ��ݱ��
    int idAfter;   // ֮�����ĵ��ݱ��
    int floor;     // ���ź�����¥��
    int dir;       // ���źŵķ������� 1 �������У�-1 �������У�
} ChangeSignal;

#endif

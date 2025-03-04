#ifndef CHANGESIGNAL_H
#define CHANGESIGNAL_H
#include <stdio.h>

//ChangeSignal 结构体
typedef struct {
    int idBefore;  // 之前分配的电梯编号
    int idAfter;   // 之后分配的电梯编号
    int floor;     // 该信号所在楼层
    int dir;       // 该信号的方向（例如 1 代表上行，-1 代表下行）
} ChangeSignal;

#endif

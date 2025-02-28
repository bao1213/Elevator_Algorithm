#include <stdio.h>
#include "Passenger.h"

// ³õÊ¼»¯³Ë¿Í
void init_passenger(Passenger* passenger, int req_floor, int arr_floor, int req_time) {
    static int passenger_id = 1;
    passenger->id = passenger_id++;
    passenger->req_time = req_time;
    passenger->ser_time = 0;
    passenger->arr_time = 0;
    passenger->req_floor = req_floor;
    passenger->arr_floor = arr_floor;
    passenger->direction = (req_floor > arr_floor) ? -1 : 1;
}

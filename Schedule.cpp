#include "Schedule.h"

void Schedule::makeBillboard() {
    cout << "Cartelera de este mes: " << endl;
   
    struct tm startTime = { 0 };
    startTime.tm_hour = 3;
    startTime.tm_min = 0;

    for (int i = 0; i < 8; i++) {
        startTime.tm_hour += 1; 
        cout << "Comienza a las: " << startTime.tm_hour << ":" << startTime.tm_min << endl;
    }
}

#include "Schedule.h"
#include <iostream>

Schedule::Schedule() {
	
}

 void Schedule::order(int hours) {
	
    int hourOrder[8];
	hourOrder[0] = 300;
	hourOrder[1] = 310;
	hourOrder[2] = 330;
	hourOrder[3] = 520;
	hourOrder[4] = 525;
	hourOrder[5] = 740;
	hourOrder[6] = 750;
	hourOrder[7] = 810;

	for (int i = 0; i < 8; i++) {
		hourOrder[i] = i+2;
	}
	for (int i = 0; i < 8; i++) {
		cout << getName() << "Comienza a las: " << hourOrder[i];
	}
}
void Schedule::makeBillboard() {
	cout << "Cartelera de este mes: " << endl;

}




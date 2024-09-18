// ProyectoAvance_Sebastian_Monge_Bonilla.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include "Information.h"
#include "Theatres.h"
#include "Schedule.h"
using namespace std;

int main()
{
	int opt, opt2;
 
	do {

		cout << "Archivo. " << endl;
		cout << "Mantenimiento. " << endl;
		cout << "Reserva. " << endl;
		cout << "Venta. " << endl;
		cin >> opt;
		
		switch (opt) {
		case 1:
			cout << "Acerca de " << endl;
		    cout << "Salir " << endl;
			cin >> opt2;
			if (opt2 == 1) {
				cout << "Acerca de " << endl;
				Information* I = new Information();
				I->Info();
				return main();
			}
			else {
				return main();
			}
			break;

		case 2:
			cout << "Peliculas " << endl;
			cout << "Salas " << endl;
			cout << "Horarios " << endl;
			cin >> opt2;
			break;
			if (opt2 == 1) {
				Movies* M = new Movies();
				M->getName();
				return main();
			}
			if(opt2 == 2) {
				Theatres* T = new Theatres();
				T->showTheatres();
				return main();
			}
			if (opt2 == 3) {
				Schedule* S = new Schedule();
				S->getName();
				return main();
			}
			break;

		case 3:
			Movies * M = new Movies();
			return main();
			break;

		case 4:
			Movies * M = new Movies();
			return main();
			break;
		}

	} while (opt != 4);
	system("pause");
	return main();

}


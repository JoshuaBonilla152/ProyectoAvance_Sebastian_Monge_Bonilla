#include <iostream>
#include <cstdlib>
#include "Information.h"
#include "Theatres.h"
#include "Schedule.h"
#include "Movies.h"

using namespace std;

int main() {
    int opt = 0, opt2 = 0;
    double price = 0.0;

    do {
        cout << "1. Archivo\n";
        cout << "2. Mantenimiento\n";
        cout << "3. Reserva\n";
        cout << "4. Venta\n";
        cout << "Seleccione una opcion: ";
        cin >> opt;

        switch (opt) {
        case 1:
            cout << "1. Acerca de\n";
            cout << "2. Salir\n";
            cout << "Seleccione una opcion: ";
            cin >> opt2;
            if (opt2 == 1) {
                Information I;
                I.Info();
            }
            else if (opt2 == 2) {
                cout << "Saliendo...\n";
            }
            else {
                cout << "Opción no valida.\n";
            }
            break;

        case 2:
            cout << "1. Peliculas\n";
            cout << "2. Salas\n";
            cout << "3. Horarios\n";
            cout << "Seleccione una opción: ";
            cin >> opt2;
            switch (opt2) {
            case 1: {
                Movies M;
                M.displayMovies();
                break;
            }
            case 2: {
                Theatres t;
                t.showTheatres();
                break;
            }
            case 3: {
                Schedule S;
                S.makeBillboard();
                break;
            }
            default:
                cout << "Opción no valida.\n";
            }
            break;

        case 3:
            cout << "Reserva de entradas.\n";
            {
                Theatres t; 
                t.reserveSeats(0,0);
            }
            break;

        case 4:
            cout << "Son 7500 colones, Señor(a)" << endl;
            cout << "Ingrese el monto: ";
            cin >> price;
            if (price >= 7500) {
                cout << "¿Cual pelicula quiere ver? " << endl;
                Movies M;
                M.chooseMovies();
            }
            else {
                cout << "Monto insuficiente.\n";
            }
            break;

        default:
            cout << "Opcion no válida.\n";
        }

    } while (opt != 2); 

    system("pause");
    return 0;
}


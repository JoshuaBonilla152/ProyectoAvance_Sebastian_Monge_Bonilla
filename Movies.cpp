#include "Movies.h"

Movies::Movies() : quantity(5) { }
Movies::Movies(string n) : name(n), quantity(5) { }

void Movies::setName(string n) {
    name = n;
}

void Movies::displayMovies() {
	Movies* movie1 = new Movies("Deadpool y Wolverine +18");
	cout << movie1->getName() << endl;
	Movies* movie2 = new Movies("Mi Villano Favorito 4");
	cout << movie2->getName() << endl;
	Movies* movie3 = new Movies("Beetlejuice 2");
	cout << movie3->getName() << endl;
}

void Movies::chooseMovies() {

	int pel;
	
		Movies* movie1 = new Movies("Deadpool y Wolverine +18");
		cout << movie1->getName() << endl;
		Movies* movie2 = new Movies("Mi Villano Favorito 4");
		cout << movie2->getName() << endl;
		Movies* movie3 = new Movies("Beetlejuice 2");
		cout << movie3->getName() << endl;

		
		cout << "Elija... 1, 2, 3 ";
		cin >> pel;
		if (pel == 1) {
			
			cout << "Deadpool y Wolverine +18" << endl;
		}
		if (pel == 2) {
			cout << "Mi Villano Favorito 4" << endl;
		}
		if (pel == 3) {
			
			cout << "Beetlejuice 2" << endl;
		}
		if(pel>3) {
			cout << "No hay mas peliculas este mes\n";
			return chooseMovies();
		} 
		
	
}
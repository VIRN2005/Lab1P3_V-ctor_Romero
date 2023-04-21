#include <iostream>
using namespace std;

int main() {
	cout << "Victor I. Romero N. - 12211079" << endl
		<< "Lab 1 - Programacion 3" << endl << endl;

	int opcion = 0;

	do {
		cout << "------- MENU ------- \n"
			<< "1) Error Numerico \n"
			<< "2) Division de 2 entradas \n\n"

			<< "0) SALIDA \n\n";

		cout << ">> Ingrese una opcion del menu: ";
		cin >> opcion;

		cout << "La opcion escojida es :" << opcion;

		switch (opcion) {
		case 0: {
			cout << "Gracias por participar!\n";

		}
			  break;

		case 1: {
			cout << " - 1) ERROR NUMERICO - \n";

		}
			  break;

		case 2: {
			cout << " - 2) DIVISION DE 2 ENTRADAS - \n";
		}
			  break;

		default: {
			cout << "Valor digitado no es valido\n";
		}
			   break;

		}

	} while (opcion != 0);

}


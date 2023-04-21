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

		cout << "La opcion escojida es :" << opcion << endl << endl;

		switch (opcion) {
		case 0: {
			cout << "Gracias por participar!\n"
				<< "Feliz dia :D";
		}
			  break;

		case 1: {
			cout << "- 1) ERROR NUMERICO - \n";

			double N;
			cout << "Ingrese el valor de N :";
			cin >> N;

			float XF = 1 / (float)N;
			double XD = 1 / (double)N;
			long double XL = 1 / (long double)N;

			float SF = 0;
			double SD = 0;
			long double SL = 0;

			for (size_t i = 0; i < N; i++){
				SF += XF;
				SD += XD;
				SL += XL;
			}
			
			float EF = 1.0 - SF;
			double ED = 1.0 - SD;
			long double EL = 1.0 - SL;

			if (EF < 0) {
				EF *= -1;
			}
			else if (ED < 0) {
				ED *= -1;
			}
			else if (EL < 0) {
				EL *= -1;
			}

			if (EF > 0 && ED > 0 && EL > 0) {
				EF = 1.0 - SF;
				ED = 1.0 - SD;
				EL = 1.0 - SD;
			}

			cout << "Valor usando DOUBLE: " << ED << endl;
			cout << "Valor usando FLOAT: " << EF << endl;
			cout << "Valor usando LONG DOUBLE: " << EL << endl;

		}
			  break;

		case 2: {
			cout << "- 2) DIVISION DE 2 ENTRADAS - \n";

			int P;
			cout << "> Ingrese el valor de P: ";
			cin >> P;

			int A;
			cout << "> Ingrese el valor de A: ";
			cin >> A;

			int B;
			cout << "> Ingrese el valor de B: ";
			cin >> B;

			int sum=0;

				for (int i = 0; i < P; i++) {
					if (B > 0) {
						sum += A / B;
						B--;
					}
				}
			
			cout << "M = " << sum << endl << endl;

		}
			  break;

		default: {
			cout << "Valor digitado no es valido\n";
		}
			   break;

		}

	} while (opcion != 0);

}


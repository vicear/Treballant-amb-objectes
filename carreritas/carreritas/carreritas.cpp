// carreritas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#pragma once
#include "lanchas.h"
#include <iostream>
using namespace std;
//INDICA QUE HEREDA DE LA CLASE ENEMIGO Y QUE HAY VISIBILIDAD A LA HORA DE 
//INSTANCIAR LOS OBJETOS GRACIAS A PUBLIC
int main() {
	srand(time(NULL));
	string nombreCorredor;
	cout << "Inserta el nombre del corredor 1\n";
	cin >> nombreCorredor;
	Lancha lancha1 = Lancha(0, nombreCorredor, 0, 1);


	
	string nombreCorredor2;
	cout << "Inserta el nombre del corredor 2\n";
	cin >> nombreCorredor2;
	Lancha lancha2 = Lancha(0, nombreCorredor2, 0, 1);

	int dice;

	for (int i = 0; i < 5; ++i) {
		srand(time(0));
		 dice = lancha1.throwDice();

		cout << "El numero que le ha salido a "<< lancha1.getName() << " es: "<< dice <<"\n";
		lancha1.calculateSpeed(dice);
		lancha1.calculateDistance(lancha1.getDistRecorrida(), lancha1.getVelocidad());
		cout << "La velocidad actual es de :" << lancha1.getVelocidad() << "\n";

		cout << "El corredor/a " << lancha1.getName() << " "<< lancha1.getDistRecorrida() << "\n";
		
		if (lancha1.getNitro() > 0) {
			char opcion;
			cout << "Quieres utilizar el nitro?\n" << "Si o No ";
			cin >> opcion;

			if (opcion == 'Si' || opcion == 'si'|| opcion == 's' || opcion == 'S')
			{
				cout << "Has escogido usar el nitro \n";
				lancha1.calcularNitro();
			}
			else if (opcion == 'no' || opcion == 'No' || opcion == 'n' || opcion == 'N')
			{
			}
		}
		






		//Lancha 2
		 dice = lancha2.throwDice();

		cout << "El numero que le ha salido a " << lancha2.getName() << " es: " << dice << "\n";
		
		lancha2.calculateSpeed(dice);
		lancha2.calculateDistance(lancha2.getDistRecorrida(), lancha2.getVelocidad());
		cout << "La velocidad actual es de :" << lancha2.getVelocidad() << "\n";

		cout << "El corredor/a " << lancha2.getName() << " " << lancha2.getDistRecorrida() << "\n";


		if (lancha2.getNitro() > 0) {
			char opcion;
			cout << "Quieres utilizar el nitro?\n" << "Si o No ";
			cin >> opcion;

			if (opcion == 'Si' || opcion == 'si' || opcion == 's' || opcion == 'S')
			{
				cout << "Has escogido usar el nitro \n";
				lancha2.calcularNitro();
			}
			else if (opcion == 'no' || opcion == 'No' || opcion == 'n' || opcion == 'N')
			{
			}
		}

		system("pause");

	}


	
	//Bucle que se replica 5 turnos, que es lo que dura la carrera



	//Al terminar el bucle, hay que mostrar quien ha ganado o si han empatado.


	if (lancha1.getDistRecorrida() > lancha2.getDistRecorrida()){
		cout << "Ha ganado " << lancha1.getName()<< "!" << endl;
	}
	else if (lancha1.getDistRecorrida() == lancha2.getDistRecorrida()) {
		cout << "¡Empate!" << endl;
	}
	else if(lancha1.getDistRecorrida() < lancha2.getDistRecorrida()){
		cout << "¡Ha ganado " << lancha2.getName() << "!" << endl;
	}



	return 0;
	
}



// Determinar el resultado del juego
//if (calcularPuntaje(cartasJugador, numCartasJugador) > 21 ||
	//(calcularPuntaje(cartasCroupier, numCartasCroupier) <= 21 &&
		//calcularPuntaje(cartasCroupier, numCartasCroupier) >= calcularPuntaje(cartasJugador, numCartasJugador))) {
	//cout << "¡Has perdido!" << endl;
//}
//else if (calcularPuntaje(cartasJugador, numCartasJugador) == calcularPuntaje(cartasCroupier, numCartasCroupier)) {
//	cout << "¡Empate!" << endl;
//}
//else {
//	cout << "¡Has ganado!" << endl;
//}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

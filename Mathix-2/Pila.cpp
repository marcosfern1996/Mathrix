#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int pilas(int pila, int puntajeTotal, char nombreActual[10], char calculadora[18], int contSuma, int contResta, int  contMultiplicaciones, int contDiviciones, int contResto) {
	if (pila == 3) {
		pila = 2;
		setBackgroundColor(CYAN);
	}
	else if (pila == 2) {
		setBackgroundColor(DARKGREY);
		pila = 1;
	}
	else 	if (pila == 1) {

		pila = 0;
		locate(64, 17);
		cout << "game over..." << endl;
		system("pause");
		setBackgroundColor(GREY);
		cls();
		locate(25, 4);
		cout << "Jugador: " << nombreActual;
		locate(25, 5);
		cout << "puntacion total: " << puntajeTotal << endl;
		locate(1, 1);
		cout << "has utilisado: " << endl << contSuma << " sumas" << endl << contResta << " restas." << endl << contMultiplicaciones << " multiplicaciones" << endl;
		cout << contDiviciones << " diviciones" << endl << contResto << " modulos";
		puntuacion(nombreActual, puntajeTotal, 8, calculadora);


		mmenu();
	}
	if (pila == 0) {
		puntuacion(NULL, NULL, NULL, NULL);
	}
	return pila;
}


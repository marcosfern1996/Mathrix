#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;


void coordenada(int matriz[6][6], char nombreActual[30], int pila, int puntaje, char calculadora[18], int inicio) {
	int fila;

	do {
		setColor(RED);
		if (pila == 1) {
			setColor(RED);
		};
		locate(1, 5);
		cout << "ingrese la fila: ";
		locate(29, 5);
		cin >> fila;
		setColor(BLACK);
		switch (fila) {
		case 1:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		case 2:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		case 3:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		case 4:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		case 5:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		case 6:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		case 0:logica(matriz, nombreActual, pila, puntaje, fila, calculadora, inicio);
			break;
		}
	} while (fila >= 6 || fila < 0);
}
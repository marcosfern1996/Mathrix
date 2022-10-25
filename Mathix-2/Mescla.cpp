#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int matriz[6][6];

int aleatorio();

void mescla(char nombre[10], char calculadora[18], int pila, int puntos, int inicio) {
	int c, n;
	int numero;
	srand(time(NULL));
	char nombreactual[30];



	for (n = 0; n < 30; n++) {
		nombreactual[n] = nombre[n];
	}



	for (c = 0; c < 6; c++) {
		for (n = 0; n < 6; n++) {
			numero = aleatorio();
			matriz[c][n] = numero;
		}
	}

	mathrix(matriz, nombreactual, pila, puntos, calculadora, inicio);
}

int aleatorio() {
	int numero;
	numero = rand() % 9 + 1;
	return numero;
}
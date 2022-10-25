#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

void contador1(int matriz[6][6], int fila1, int columna1, int fila2, int columna2, int fila3, int columna3) {

	int primeraFila, primeraColumna;


	primeraFila = fila1;
	primeraColumna = columna1;
	nuevaFuncion(matriz, primeraFila, primeraColumna, fila2, columna2, fila3, columna3, 1);

	return;

}

void contador2(int matriz[6][6], int fila1, int columna1, int fila2, int columna2, int fila3, int columna3) {

	int segundaColumna, segundaFila;

	segundaFila = fila1;
	segundaColumna = columna1;
	nuevaFuncion(matriz, fila1, columna1, segundaFila, segundaColumna, fila3, columna3, 2);

	return;
}

void nuevaFuncion(int matriz[6][6], int fila1, int columna1, int fila2, int columna2, int fila3, int columna3, int cont) {

	int segundaFila, segundaColumna, primeraFila, primeraColumna;


	primeraFila = fila1;
	primeraColumna = columna1;

	segundaFila = fila2;
	segundaColumna = columna2;


	if (cont == 5) {

		matriz[primeraFila][primeraColumna] = 0;
		matriz[segundaFila][segundaColumna] = 0;
		matriz[fila3][columna3] = 0;

	}
	return;
}
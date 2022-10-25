#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int contSuma = 0, contResta = 0, contMultiplicaciones = 0, contDiviciones = 0, contResto = 0;

void logica(int matriz[6][6], char nombreActual[10], int pila, int puntaje, int fila, char calculadora[18], int inicio) {
	int columna;
	int ecuacionA, ecuacionB, ecuacionC = 0, resultado = 0;
	int segundaFila, segundaColumna, primeraFila, primeraColumna, tercerFila, tercerColumna, puntajeTotal;
	int pilasActuales;
	char r;

	if (inicio == 0) {
		contSuma = 0, contResta = 0, contMultiplicaciones = 0, contDiviciones = 0, contResto = 0;
		inicio++;
	}

	setColor(BLUE);
	locate(1, 6);
	cout << "ingrese columna: ";
	locate(29, 6);
	cin >> columna;

	if (fila == 0 || columna == 0) {
		pilasActuales = pilas(pila, puntaje, nombreActual, calculadora, contSuma, contResta, contMultiplicaciones, contDiviciones, contResto);
		mescla(nombreActual, calculadora, pilasActuales, puntaje, inicio);

	}

	setColor(BLACK);
	fila = fila - 1;
	columna = columna - 1;
	primeraFila = fila;
	primeraColumna = columna;
	ecuacionA = matriz[fila][columna];
	contador1(matriz, primeraFila, primeraColumna, 0, 0, 0, 0);
	mathrixEstatica(matriz, nombreActual, pila, puntaje, calculadora);
	locate(49, 17);
	cout << ecuacionA;
	r = operaciones(matriz, nombreActual, pila);
	locate(51, 17);
	cout << r;
	mathrixEstatica(matriz, nombreActual, pila, puntaje, calculadora);
	locate(49, 17);
	cout << ecuacionA;
	locate(51, 17);
	cout << r;
	ecuacionB = direccion(fila, columna);

	if (ecuacionB == 4) {
		columna--;
		ecuacionB = matriz[fila][columna];
		segundaFila = fila;
		segundaColumna = columna;
		contador2(matriz, primeraFila, primeraColumna, segundaFila, segundaColumna, 0, 0);
		columna--;
		ecuacionC = matriz[fila][columna];
	}
	if (ecuacionB == 6) {
		columna++;
		ecuacionB = matriz[fila][columna];
		segundaFila = fila;
		segundaColumna = columna;
		contador2(matriz, primeraFila, primeraColumna, segundaFila, segundaColumna, 0, 0);
		columna++;
		ecuacionC = matriz[fila][columna];
	}
	if (ecuacionB == 2) {
		fila++;
		ecuacionB = matriz[fila][columna];
		segundaFila = fila;
		segundaColumna = columna;
		contador2(matriz, primeraFila, primeraColumna, segundaFila, segundaColumna, 0, 0);
		fila++;
		ecuacionC = matriz[fila][columna];
	}
	if (ecuacionB == 8) {
		fila--;
		ecuacionB = matriz[fila][columna];
		segundaFila = fila;
		segundaColumna = columna;
		contador2(matriz, primeraFila, primeraColumna, segundaFila, segundaColumna, 0, 0);
		fila--;
		ecuacionC = matriz[fila][columna];
	}

	if (r == '+') {
		contSuma++;
		resultado = ecuacionA + ecuacionB;
	}
	if (r == '-') {
		contResta++;
		resultado = ecuacionA - ecuacionB;
	}
	if (r == '*') {
		contMultiplicaciones++;
		resultado = ecuacionA * ecuacionB;
	}
	if (r == '/') {
		contDiviciones++;
		resultado = ecuacionA / ecuacionB;
	}
	if (r == '%') {
		contResto++;
		resultado = ecuacionA % ecuacionB;
	}
	locate(53, 17);
	cout << ecuacionB;
	locate(55, 17);
	cout << "=";
	locate(57, 17);
	cout << resultado;

	locate(1, 16);
	system("pause");

	if (ecuacionC == resultado) {
		locate(64, 17);
		if (ecuacionA == 0 || ecuacionB == 0 || ecuacionC == 0) {
			cout << "invalidos ";
		}
		else {
			cout << "exelente!!" << endl;
		}
		puntajeTotal = puntajes(ecuacionA, ecuacionB, ecuacionC, puntaje);
		tercerColumna = columna;
		tercerFila = fila;
		nuevaFuncion(matriz, primeraFila, primeraColumna, segundaFila, segundaColumna, tercerFila, tercerColumna, 5);
		locate(1, 16);
		system("pause");
		mathrix(matriz, nombreActual, pila, puntajeTotal, calculadora, inicio);

	}
	if (ecuacionC != resultado) {
		locate(64, 17);
		if (ecuacionA == 0 || ecuacionB == 0 || ecuacionC == 0) {
			cout << "invalidos ";
		}
		else { cout << "Fallaste... " << endl; }
		locate(1, 16);
		system("pause");
		pilasActuales = pilas(pila, puntaje, nombreActual, calculadora, contSuma, contResta, contMultiplicaciones, contDiviciones, contResto);
		mathrix(matriz, nombreActual, pilasActuales, puntaje, calculadora, inicio);
	}
	system("pause");
}
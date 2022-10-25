#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

void mathrix(int matriz[6][6], char nombreActual[10], int pila, int puntajes, char calculadora[18], int inicio) {
	int fila[6] = { 1,2,3,4,5,6 }, columna[6] = { 1,2,3,4,5,6 };

	cls();
	int n, c;
	int x = 38, y = 1;

	cout << "jugador: " << nombreActual << endl;
	if (pila == 3) {
		cout << "cantidad de pilas: ";
		setColor(GREEN);
		printf("%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178);
		cout << endl;
		setColor(BLACK);
	}
	if (pila == 2) {
		cout << "cantidad de pilas: ";
		setColor(BROWN);
		printf("%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178);
		cout << endl;
		setColor(BLACK);
	}
	if (pila == 1) {

		cout << "cantidad de pilas: ";
		setColor(RED);
		printf("%c%c%c", 178, 178, 178);
		cout << endl;
		setColor(BLACK);
	}
	cout << "puntaje total: " << puntajes;


	locate(54, 15);
	cout << calculadora;


	locate(19, 1);
	printf("%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(19, 2);
	printf("%c", 186);
	locate(28, 2);
	printf("%c", 186);
	locate(19, 3);
	printf("%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 188);



	locate(47, 16);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(47, 17);
	printf("%c", 186);
	locate(61, 17);
	printf("%c", 186);
	locate(47, 18);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);


	locate(63, 16);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(77, 17);
	printf("%c", 186);
	locate(63, 17);
	printf("%c", 186);
	locate(63, 18);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

	locate(42, 19);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
	locate(78, 18);
	printf("%c", 179);
	locate(78, 17);
	printf("%c", 179);
	locate(78, 16);
	printf("%c", 179);
	locate(78, 15);
	printf("%c", 179);
	locate(42, 18);
	printf("%c", 179);
	locate(42, 17);
	printf("%c", 179);
	locate(42, 16);
	printf("%c", 179);
	locate(42, 15);
	printf("%c", 179);


	locate(1, 4);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196);
	locate(35, 1);
	printf("%c", 179);
	locate(35, 2);
	printf("%c", 179);
	locate(35, 3);
	printf("%c", 179);
	locate(35, 4);
	printf("%c", 217);

	for (n = 0; n < 6; n++) {

		setColor(BLUE);

		locate(x = x + 6, y);
		cout << columna[n];
		setColor(BLACK);
	}
	cout << endl;
	locate(39, 2);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 180);
	y = 2;
	x = 40;
	for (c = 0; c < 6; c++) {
		y++;
		setColor(RED);
		locate(39, y);
		cout << fila[c];
		setColor(BLACK);
		locate(42, y);
		printf("%c", 179);
		for (n = 0; n < 6; n++) {
			if (matriz[c][n] == 0 && pila == 3) {
				printf("%c%c%c%c%c", 16, 16, 16, 17, 17);
				setColor(WHITE);
			}
			else if (matriz[c][n] == 0 && pila == 2) {
				printf("%c%c%c%c%c", 16, 16, 16, 17, 17);
				setColor(CYAN);
			}
			else if (matriz[c][n] == 0 && pila == 1) {
				printf("%c%c%c%c%c", 16, 16, 16, 17, 17);
				setColor(DARKGREY);
			}
			x = x + 5;
			locate(x, y);
			cout << matriz[c][n];

			setColor(BLACK);
			if (n == 0) {
				locate(x = x + 3, y);
				printf("%c", 179);
				x = x - 3;
			}
			else {
				locate(x = x + 3, y);
				printf("%c", 179);
				x = x - 3;
			}
			x++;

		}
		x = 40;
		cout << endl;
		y++;
		locate(x = x - 1, y);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 180);
		x = x + 1;

	}
	cout << endl;
	coordenada(matriz, nombreActual, pila, puntajes, calculadora, inicio);



}


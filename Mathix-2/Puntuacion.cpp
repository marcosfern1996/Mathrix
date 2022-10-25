#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int puesto1;
int puesto2;
int puesto3;
int puesto4;
int puesto5;

char calculadora1[18] = { "*********" };
char calculadora2[18] = { "*********" };
char calculadora3[18] = { "*********" };
char calculadora4[18] = { "*********" };
char calculadora5[18] = { "*********" };

char nombre1[10] = { "---------" };
char nombre2[10] = { "---------" };
char nombre3[10] = { "---------" };
char nombre4[10] = { "---------" };
char nombre5[10] = { "---------" };


void puntuacion(char nombreActua[10], int puntaje, int cont, char calculadora[18]) {

	int x, n;


	if (puntaje > puesto1) {
		puesto5 = puesto4;
		puesto4 = puesto3;
		puesto3 = puesto2;
		puesto2 = puesto1;
		puesto1 = puntaje;
		for (x = 0; x < 10; x++) {
			nombre5[x] = nombre4[x];
		}
		for (x = 0; x < 10; x++) {
			nombre4[x] = nombre3[x];
		}
		for (x = 0; x < 10; x++) {
			nombre3[x] = nombre2[x];
		}
		for (x = 0; x < 10; x++) {
			nombre2[x] = nombre1[x];
		}
		for (x = 0; x < 10; x++) {
			nombre1[x] = nombreActua[x];
		}


		for (x = 0; x < 18; x++) {
			calculadora5[x] = calculadora4[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora4[x] = calculadora3[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora3[x] = calculadora2[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora2[x] = calculadora1[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora1[x] = calculadora[x];
		}
	}
	else 	if (puntaje > puesto2) {
		puesto5 = puesto4;
		puesto4 = puesto3;
		puesto3 = puesto2;
		puesto2 = puntaje;
		for (x = 0; x < 10; x++) {
			nombre5[x] = nombre4[x];
		}
		for (x = 0; x < 10; x++) {
			nombre4[x] = nombre3[x];
		}
		for (x = 0; x < 10; x++) {
			nombre3[x] = nombre2[x];
		}
		for (x = 0; x < 10; x++) {
			nombre2[x] = nombreActua[x];
		}

		for (x = 0; x < 18; x++) {
			calculadora5[x] = calculadora4[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora4[x] = calculadora3[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora3[x] = calculadora2[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora2[x] = calculadora[x];
		}

	}
	else	if (puntaje > puesto3) {
		puesto5 = puesto4;
		puesto4 = puesto3;
		puesto3 = puntaje;
		for (x = 0; x < 10; x++) {
			nombre5[x] = nombre4[x];
		}
		for (x = 0; x < 10; x++) {
			nombre4[x] = nombre3[x];
		}
		for (x = 0; x < 10; x++) {
			nombre3[x] = nombreActua[x];
		}

		for (x = 0; x < 18; x++) {
			calculadora5[x] = calculadora4[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora4[x] = calculadora3[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora3[x] = calculadora[x];
		}

	}
	else	if (puntaje > puesto4) {
		puesto5 = puesto4;
		puesto4 = puntaje;
		for (x = 0; x < 10; x++) {
			nombre5[x] = nombre4[x];
		}
		for (x = 0; x < 10; x++) {
			nombre4[x] = nombreActua[x];
		}

		for (x = 0; x < 18; x++) {
			calculadora5[x] = calculadora4[x];
		}
		for (x = 0; x < 18; x++) {
			calculadora4[x] = calculadora[x];
		}
	}
	else
		if (puntaje > puesto5) {
			puesto5 = puntaje;
			for (x = 0; x < 10; x++) {
				nombre5[x] = nombreActua[x];
			}

			for (x = 0; x < 18; x++) {
				calculadora5[x] = calculadora[x];
			}
		}



	locate(15, 6);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(18, 7);
	cout << "Nombre";
	locate(48, 7);
	cout << "puntos";
	locate(16, 8);
	cout << nombre1;
	locate(48, 8);
	cout << puesto1;
	locate(16, 9);
	cout << nombre2;
	locate(48, 9);
	cout << puesto2;
	locate(16, 10);
	cout << nombre3;
	locate(48, 10);
	cout << puesto3;
	locate(16, 11);
	cout << nombre4;
	locate(48, 11);
	cout << puesto4;
	locate(16, 12);
	cout << nombre5;
	locate(48, 12);
	cout << puesto5;
	locate(28, 7);
	cout << "Calculadora";
	locate(28, 8);
	cout << calculadora1;
	locate(28, 9);
	cout << calculadora2;
	locate(28, 10);
	cout << calculadora3;
	locate(28, 11);
	cout << calculadora4;
	locate(28, 12);
	cout << calculadora5;
	locate(15, 13);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

	locate(15, 14);
	cout << "0 - menu Principal" << endl;
	n = getch();

	if (n == '0') {
		mmenu();
	}
}


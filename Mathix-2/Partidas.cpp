#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

void  partida() {
	int pilas = 3;
	int puntos = 0;
	int inicio = 0;

	int n;
	setBackgroundColor(WHITE);
	setColor(BLACK);
	cls();

	char nombreDelJugador[10];

	char modeloDeCalFav[18];
	locate(15, 8);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(15, 12);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

	locate(20, 9);
	cout << "nombre del jugador: ";
	cin >> nombreDelJugador;
	locate(20, 10);
	cout << "modelo de calculadora favorito: ";
	cin >> modeloDeCalFav;

	do {
		locate(20, 11);
		cout << "desea leer el tutorial? ";
		locate(20, 13);
		cout << "1-Tutorial  0-comenzar a jugar";
		locate(30, 15);
		n = getch();

		switch (n)
		{
		case '1':tutorial(nombreDelJugador, modeloDeCalFav, pilas, puntos, inicio);
			break;
		case '0':mescla(nombreDelJugador, modeloDeCalFav, pilas, puntos, inicio);
		}
	} while (n >= 0 || n <= 1);



}
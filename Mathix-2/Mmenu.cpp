#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>
#include <conio.h>

using namespace std;
using namespace rlutil;


void mmenu() {
	setBackgroundColor(GREY);
	setColor(BLACK);
	int menu;





	do {
		cls();
		locate(35, 7);
		cout << "MATHRIX";
		locate(15, 8);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		locate(21, 9);
		cout << "1 - Partida.";
		locate(21, 10);
		//cout << "2 - Estadisticas.";
		locate(21, 11);
		cout << "3 - Creditos.";
		locate(15, 12);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
		locate(35, 13);
		cout << "0 - SALIR";
		cout << endl;
		locate(35, 14);
		menu = getch();

		switch (menu)
		{
		case '1': partida();
			break;
		case '2': /*estadisticas()*/;
			break;
		case '3': creditos();
			break;
		case '0':exit(-1);
			break;
		default:
			break;
		}
	} while (menu < 0 || menu > 3);
}

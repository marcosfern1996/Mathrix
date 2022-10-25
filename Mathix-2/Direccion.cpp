#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int direccion(int fila, int columna) {

	int direccionCuenta;


	do {

		locate(15, 8);
		printf("%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 255, 205, 205, 205, 205, 187);
		locate(14, 9);
		printf("%c", 17);
		locate(26, 9);
		printf("%c", 16);
		locate(20, 7);
		printf("%c", 30);
		locate(20, 11);
		printf("%c", 31);
		locate(15, 10);
		printf("%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 255, 205, 205, 205, 205, 188);

		locate(16, 9);
		cout << "direccion";
		locate(11, 9);
		cout << "4";
		locate(29, 9);
		cout << "6";
		locate(20, 6);
		cout << "8";
		locate(20, 12);
		cout << "2";
		locate(20, 13);
		cin >> direccionCuenta;
		switch (direccionCuenta)
		{
		case 4:direccionCuenta = 4;
			return direccionCuenta;
			break;
		case 6:direccionCuenta = 6;
			return direccionCuenta;
			break;
		case 2:direccionCuenta = 2;
			return direccionCuenta;
			break;
		case 8:direccionCuenta = 8;
			return direccionCuenta;
			break;
		default:
			break;
		}
	} while (direccionCuenta != 2 || direccionCuenta != 4 || direccionCuenta != 6 || direccionCuenta != 8);

}

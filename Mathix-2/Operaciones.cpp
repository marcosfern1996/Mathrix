#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int operaciones(int matriz[6][6], char nombreActual[10], int pila) {
	char operacion;
	do {
		locate(1, 7);
		cout << "que operacion decea hacer?: " << endl;
		locate(1, 8);
		cout << "seleccione una: " << endl << " +  -  *  /  % " << endl;
		locate(29, 7);
		cin >> operacion;
		switch (operacion)
		{
		case '+':return operacion;
			break;
		case '-':return operacion;
			break;
		case '*':return operacion;
			break;
		case '/':return operacion;
			break;
		case '%':return operacion;
			break;
		}
	} while (operacion != '+' || operacion != '-' || operacion != '*' || operacion != '/' || operacion != '%');
}
#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

int puntajes(int ecuacionA, int ecuacionB, int ecuacionC, int puntajes) {

	int puntos;
	puntajes += ecuacionA + ecuacionB + ecuacionC;
	return puntajes;



}
#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>

using namespace std;
using namespace rlutil;

void tutorial(char nombreDelJugador[10], char calculadora[18], int pila, int puntos, int inicio) {

	cls();

	locate(15, 4);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(15, 14);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

	locate(35, 5);
	cout << "tutorial:";
	locate(10, 6);
	cout << "El objetivo general del juego es sumar la mayor cantidad";
	locate(10, 7);
	cout << "de puntos en el transcurso de las";
	locate(10, 8);
	cout << "rondas hasta quedarse sin pilas.";
	locate(10, 9);
	cout << "El juego comienza con un total de tres pilas.";
	locate(10, 10);
	cout << "En el transcurso de una ronda,";
	locate(10, 10);
	cout << "el jugador debe ingresar la coordenada del primer numero";
	locate(10, 11);
	cout << "con el que desea elaborar una ecuacion.";
	locate(10, 12);
	system("pause");
	cls();

	locate(15, 4);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(15, 15);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

	locate(35, 5);
	cout << "tutorial:";
	locate(10, 6);
	cout << "Luego de este paso, debe elegir el operador matematico necesario";
	locate(10, 7);
	cout << " para la ecuacion: ";
	locate(10, 8);
	cout << "Por ultimo, debe elegir la direccion hacia donde ";
	locate(10, 9);
	cout << "se resuelve la ecuacion. Los valores pueden ser:  ";
	locate(10, 10);
	cout << "Arriba 8,abajo 2,Izquierda 4,Derecha 6 El juego debe  ";
	locate(10, 11);
	cout << "intentar resolver la ecuacion teniendo en cuenta ";
	locate(10, 12);
	cout << "los valores ingresados por elusuario, partiendo de la ";
	locate(10, 13);
	cout << "celda seleccionada y utilizando las ";
	locate(10, 14);
	system("pause");
	cls();

	locate(15, 4);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(15, 14);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);


	locate(35, 5);
	cout << "tutorial:";
	locate(10, 6);
	cout << "celdas adyacentes que se encuentren en la direccion elegida.";
	locate(10, 7);
	cout << "Toda ecuacion se formula de la siguiente manera: A +- B = C";
	locate(10, 8);
	cout << "Por lo tanto, si el usuario ingresa:- Fila: 5 - Columna : 3";
	locate(10, 9);
	cout << "Luego, la operacion: + (Suma)";
	locate(10, 10);
	cout << "Y por ultimo, ingresa: 4 (izquierda)";
	locate(10, 11);
	cout << "El juego verificara si la ecuacion da un";
	locate(10, 12);
	cout << " resultado correcto de la siguiente manera: ";
	locate(10, 13);
	system("pause");
	cls();

	locate(15, 4);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	locate(15, 14);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

	locate(35, 5);
	cout << "tutorial:";
	locate(10, 6);
	cout << "Siendo:	A => 5; B => 4; C => 9";
	locate(10, 7);
	cout << "A + B = C";
	locate(10, 8);
	cout << "5 + 4 = 9 ";
	locate(10, 9);
	cout << "Como la ecuacion es correcta, el usuario obtendra como";
	locate(10, 10);
	cout << "o puntaje de esa ronda el equivalente a la suma";
	locate(10, 11);
	cout << "de los tres numeros que intervinieron en la cuenta";
	locate(10, 12);
	system("pause");
	cls();

	mescla(nombreDelJugador, calculadora, pila, puntos, inicio);




}
#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"
#include <fstream>
#include <time.h>


using namespace std;
using namespace rlutil;

void creditos() {




	setBackgroundColor(GREY);
	int n = 0, y, x;
	do {
		cls();
		locate(28, 9);
		cout << "Creado Por:";
		locate(28, 11);
		cout << "24498 , Fernandez Marcos";
		setColor(RED);
		y = 9;
		x = 15;
		for (n = 0; n < 6; n++) {
			locate(x, y);
			printf("%c", 186);
			cout << endl;
			y++;
		}
		y = 9;
		x = 59;
		for (n = 0; n < 6; n++) {
			locate(x, y);
			printf("%c", 186);
			cout << endl;
			y++;
		}
		locate(26, 16);
		printf("%c", 186);
		locate(26, 17);
		printf("%c", 186);
		locate(48, 16);
		printf("%c", 186);
		locate(48, 17);
		printf("%c", 186);
		locate(26, 18);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

		locate(15, 8);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		locate(15, 10);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
		locate(15, 15);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
		locate(28, 16);
		setColor(BLACK);
		cout << "0 - menu Principal";
		locate(28, 17);
		n = getch();
		if (n == '0') {
			mmenu();
		}
	} while (n != 0);

}

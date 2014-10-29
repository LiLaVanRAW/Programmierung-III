/*
Uebung: 2 ASCII-Tabelle
Autor: Alexandra Mueller
Studiengang: Informatik
Bearbeitungdatum: 17.10.2007
*/

#include <stdio.h>
#include "initials.h"

void drawAM()
{
	char a = 65, m = 77;
	printf("\n%7c%4c%4c", a, m, m);
	printf("\n%6c%2c%3c%c%2c%c", a, a, m, m, m, m);
	printf("\n%5c%4c%2c%2c%2c", a, a, m, m, m);
	printf("\n%5c%c%c%c%c%2c%4c", a, a, a, a, a, m, m);
	printf("\n%5c%4c%2c%4c", a, a, m, m);
	printf("\n%5c%4c%2c%4c", a, a, m, m);
}

void drawAZM()
{
	char a = 65,z = 90, m = 77;
	printf("\n%7c%4c%c%c%c%c%4c%4c", a, z, z ,z ,z ,z , m, m);
	printf("\n%6c%2c%6c%5c%c%2c%c", a, a, z, m, m, m, m);
	printf("\n%5c%4c%4c%6c%2c%2c", a, a, z, m, m, m);

	printf("\n%5c%c%c%c%c%3c%7c%4c", a, a, a, a, a, z, m, m);
	printf("\n%5c%4c%2c%8c%4c", a, a, z, m, m);
	printf("\n%5c%4c%2c%c%c%c%c%4c%4c", a, a, z, z, z, z, z, m, m);
}
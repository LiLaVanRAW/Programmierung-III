/*
Uebung: 2 ASCII-Tabelle
Autor: Alexandra Mueller
Studiengang: Informatik
Bearbeitungdatum: 14.10.2007
*/

#include <stdio.h>
#include "ASCII.h"

void drawHead()
{
	/* Deklarationsteil*/
	short int eckelo = 218, eckero = 170, horizontal = 196, vertikal = 179;
	char status = 0, status1 = 0;

	/*Zeichne Erste Zeile*/
	printf("\n%c", eckelo);
	while(status1 <= 2)
	{
		status = 0;
		while(status <=17)
		{
			printf("%c", horizontal);
			status = status + 1;
		}
		printf("%c", 194);
		status1 = status1 + 1;
	}
	status = 0;
	while(status <=17)
	{
		printf("%c", horizontal);
		status = status + 1;
	}
	printf("%c", 191);

	/*Zeichne Zweite Zeile*/
	printf("\n%c  dez   hex   z   %c  dez   hex   z   %c  dez   hex   z   %c  dez   hex   z   %c", 179, 179, 179, 179, 179);
	

	/*Zeichne Dritte Zeile*/
	printf("\n%c", 195);
	status1 = 0;
	while(status1 <= 2)
	{
		status = 0;
		while(status <=17)
		{
			printf("%c", horizontal);
			status = status + 1;
		}
		printf("%c", 197);
		status1 = status1 + 1;
	}
	status = 0;
	while(status <=17)
	{
		printf("%c", horizontal);
		status = status + 1;
	}
	printf("%c", 180);
}

void drawBody()
{
	char status = 0;
	short int zahl = 32;
	while(status <= 55)
	{
		printf("\n%c %4d %4x %4c %3c", 179, zahl, zahl, zahl, 179);
		printf("%4d %4x %4c %4c", zahl+1, zahl+1, zahl+1, 179);
		printf("%4d %4x %4c %4c", zahl+2, zahl+2, zahl+2, 179);
		printf("%4d %4x %4c %4c", zahl+3, zahl+3, zahl+3, 179);
		zahl = zahl + 4;
		status = status + 1;
	}
}


void drawTail()
{
	short int eckelu = 192, eckeru = 170, horizontal = 196;
	char status = 0, status1 = 0;
	printf("\n%c", eckelu);
	while(status1 <= 2)
	{
		status = 0;
		while(status <=17)
		{
			printf("%c", horizontal);
			status = status + 1;
		}
		printf("%c", 193);
		status1 = status1 + 1;
	}
	status = 0;
	while(status <=17)
	{
		printf("%c", horizontal);
		status = status + 1;
	}
	printf("%c", 217);
}

void drawASCII()
{
	drawHead();
	drawBody();
	drawTail();
}
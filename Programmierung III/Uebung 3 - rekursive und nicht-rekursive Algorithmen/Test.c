/*
 * Uebung: 3
 * Autor: Alexandra Mueller
 * Studiengang: B Informatik
 * Bearbeitungsdatum: 30.10.2014
 */

#include "Potenzfunktion.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	double b = 5, e = 5;
	printf("\neigene Berechnung nicht rekursiv: %5.0f \nBerechnung rekursiv: %5.0f \npow Funktion: %5.0f\n", potenzNR(b,e), potenzR(b,e), pow(b,e));
	system("pause");
}
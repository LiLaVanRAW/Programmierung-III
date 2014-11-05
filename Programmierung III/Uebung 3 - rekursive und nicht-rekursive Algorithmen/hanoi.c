/*
 * Uebung: 3
 * Autor: Alexandra Mueller
 * Studiengang: B Informatik
 * Bearbeitungsdatum: 04.11.2014
 */

#include <stdio.h>
#include "Hanoi.h"

void hanoi(int n, char a, char b, char c)
{
	if(n == 1)
	{
		printf("\nvon %c nach %c", a, c);
	}
	else
	{
		hanoi(n-1, a, c, b);
		printf("\nvon %c nach %c", a, c);
		hanoi(n-1, b, a, c);
	}
}
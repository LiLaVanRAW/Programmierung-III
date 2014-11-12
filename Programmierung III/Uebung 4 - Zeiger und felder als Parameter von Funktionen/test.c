/*
 * Uebung 4 Zeiger und Felder als Parameter von Funktionen
 * Author: Alexandra Mueller
 * Datum: 11.11.2014
 */

#include <stdio.h>
#include <stdlib.h>
#include "root.h"

int main(int argc, char * argv[])
{
	double x1 = 0, x2 = 0;
	int status = -1;
	status = roots(4.,16., 8., &x1, &x2);
/*	if(status == 0)
		printf("\n nichts passiert");
	else if(status == 1)
		printf("\n status = 1");
	else
		printf("\n fail");
*/	printf("\n x1= %f\n x2= %f", x1, x2);
	printf("\n");
	system("pause");
}
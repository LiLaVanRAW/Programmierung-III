/*
Uebung 1 - Finanzmathematik
Author: Alexandra Mueller
Studiengang: Informatik B.
Bearbeitungsdatum: 28.10.2014
*/

#include <stdio.h>
#include <stdlib.h>
#include "Finanzen.h"

int main(int argc, char* argv[])
{
	/*double sk = 10000., zins = 2.5 , tilgung = 1.;
	int jahre = 1;

	printf("\nStartkapital: %10.2f \nZins: %5.1f \nTilgung: %5.1f \nJahre: %3d \nRestschuld: %10.2f\n",
		sk, zins, tilgung, jahre, restschuld(sk,zins,tilgung,jahre));
	for(jahre = 2; jahre < 25; jahre++)
	{
		printf("\nStartkapital: %10.2f \nZins: %5.1f \nTilgung: %5.1f \nJahre: %3d \nRestschuld: %10.2f\n",
			sk, zins, tilgung, jahre, restschuld(sk,zins,tilgung,jahre));
	}*/
	double ak = 1000.,  zins = 0.8;
	int jahre = 3;

	printf("\nAnfangskapital: %10.2f \nZins: %5.1f \nJahre: %3d \nGuthaben: %10.2f\n", ak, zins, jahre, guthaben(ak, zins, jahre));

	system("pause");
	return 0;
}

//test datei ist nicht fuer ein/ausgabedialoge da
//nur zur testdokumentation
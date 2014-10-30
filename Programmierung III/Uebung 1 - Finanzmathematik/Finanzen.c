/*
* Berechnung des Guthabens
* Uebung 1 - Finanzmathematik
*/

			//K: double kann 14 dezimale stellen sauber kodieren ( 12 stellen, 2 stellen)
			//wechsel zu int (9 stellen) einstellige mio.-betraege
#include <stdio.h>
#include "Finanzen.h"
#include <math.h>

/*
startkapital, restschuld in Euro
zins, tilgung in %
*/
double restschuld(double startkapital, double zins, double tilgung, int jahre)
{
	int sk = (int) (100. * startkapital);			//multiplikation -> umwandeln, sonst verlust
	int rk, s, j;
	int z = (int) (10. * zins);
	int t = (int) (10. * tilgung);

	for(j = 1; j<= jahre; j++)
	{
		s = sk * (z + t) / 100;			// Formel muss angepasst werden
		rk = sk - (s - sk * z / 1000);	// Formel muss angepasst werden 
		sk = rk;
	}
	return rk/100.;
}

/*
guthaben, anfangskapital in Euro
zins in %
*/
double guthaben(double anfangskapital, double zins, int jahre)
{
	int ak = (int) (100. * anfangskapital);
	int gh, j;
	int z = (int) (10. * zins);
	double ze = 0;

	ze = pow ((1. + zins), jahre);
	gh = (ak * ze);

	return gh/100.;
}
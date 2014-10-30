/*
Header mit Berechnung des Guthabens
Uebung 1 - Finanzmathematik
*/

			//K: double kann 14 dezimale stellen sauber kodieren ( 12 stellen, 2 stellen)
#include <math.h>

/*
startkapital, restschuld in Euro
zins, tilgung in %
*/
double restschuld(double startkapital, double zins, double tilgung, int jahre);

/*
guthaben, anfangskapital in Euro
zins in %
*/
double guthaben(double anfangskapital, double zins, int jahre);
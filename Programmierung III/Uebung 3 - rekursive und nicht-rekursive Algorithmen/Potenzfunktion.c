/*
 * Uebung: 3
 * Autor: Alexandra Mueller
 * Studiengang: B Informatik
 * Bearbeitungsdatum: 30.10.2014
 */

#include "Potenzfunktion.h"
//#include <math.h>


/* gueltige Eingaben: b,e >= 0 */
double potenzNR(double b, double e)
{
	double y = b;
	int i;
	if(e == 0)
	{
		y = 1;
	}
	else if(b == 0)
	{
		y = 0;
	}
	else
	{
		for(i = 1; i < e; i++)
		{
			y *= b;
			if(y < 0)
			{
				i = e;
				y = -1;
			}
			else if(y > 9999999)
			{
				i = e;
				y = -1;
			}
		}
	}
	return y;
}

double potenzR(double b, double e)
{
	double y = b;
	e--;
	if(e+1 == 0)
	{
		y = 1;
	}
	else if(b == 0)
	{
		y = 0;
	}
	else if(e > 0) 
	{
		y = y * (potenzR(b, e));
	}
	return y;
}

double limits(double a, double b)
{
	return 0;
}
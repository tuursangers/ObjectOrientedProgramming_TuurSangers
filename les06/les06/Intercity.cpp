#include "Intercity.h"



Intercity::Intercity(int c, float km)
{
	capaciteit = 150 * c;
	kmTraject = km;
}

float Intercity::ticketPrijs() {
	float prijs;

	prijs = kmTraject * prijsPerKilometer;

	return prijs;
}


float Intercity::opbrengst()
{
	float opbrengst;

	opbrengst = capaciteit * ticketPrijs();

	return opbrengst;
}


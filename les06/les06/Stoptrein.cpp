#include "Stoptrein.h"



Stoptrein::Stoptrein(int c, float km)
{
	capaciteit = 150 * c;
	kmTraject = km;
}

float Stoptrein::ticketPrijs() {
	float prijs;

	prijs = kmTraject * prijsPerKilometer;

	return prijs;
}


float Stoptrein::opbrengst()
{
	float opbrengst;

	opbrengst = capaciteit * ticketPrijs();

	return opbrengst;
}

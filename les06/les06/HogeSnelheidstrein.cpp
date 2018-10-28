#include "HogeSnelheidstrein.h"



HogeSnelheidstrein::HogeSnelheidstrein()
{
}


float HogeSnelheidstrein::ticketPrijs() {
	float prijs;

	prijs = toeslag + (kmTraject * prijsPerKilometer);

	return prijs;
}


float HogeSnelheidstrein::opbrengst()
{
	float opbrengst;

	opbrengst = capaciteit * ticketPrijs();

	return opbrengst;
}
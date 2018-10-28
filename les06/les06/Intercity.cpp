#include "Intercity.h"



Intercity::Intercity(int coupes)
{
	capaciteit = 300 * coupes;
}


Intercity::~Intercity()
{
}

float Vervoermiddel::opbrengst(float kilometers)
{
	float opbrengst;

	opbrengst = capaciteit * (prijsPerKilometer * kilometers);

	return opbrengst;
}
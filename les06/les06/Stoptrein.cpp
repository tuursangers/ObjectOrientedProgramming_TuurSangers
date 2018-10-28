#include "Stoptrein.h"



Stoptrein::Stoptrein(int coupes)
{
	capaciteit = 150 * coupes;
}


Stoptrein::~Stoptrein()
{
}

float Vervoermiddel::opbrengst(float kilometers)
{
	float opbrengst;

	opbrengst = capaciteit * (prijsPerKilometer * kilometers);

	return opbrengst;
}
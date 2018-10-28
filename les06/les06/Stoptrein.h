#pragma once

#include "Vervoermiddel.h"

class Stoptrein : public Vervoermiddel {
public:
	Stoptrein(int coupes);

	float opbrengst(float kilometers) override;

private:
	int capaciteit = 0;
	
};
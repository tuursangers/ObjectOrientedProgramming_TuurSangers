#pragma once

#include "Vervoermiddel.h"

class Intercity : public Vervoermiddel {
public:
	Intercity(int coupes);

private:
	int capaciteit = 0;
};
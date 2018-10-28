#pragma once

#include "Trein.h"

class Intercity : public Trein {
public:
	Intercity(int c, float km);

	float ticketPrijs() override;
	float opbrengst() override;
};
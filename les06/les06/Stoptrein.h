#pragma once

#include "Trein.h"

class Stoptrein : public Trein {
public:
	Stoptrein(int c, float km);

	float ticketPrijs() override;
	float opbrengst() override;
	
};
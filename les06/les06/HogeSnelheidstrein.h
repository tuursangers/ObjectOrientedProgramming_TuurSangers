#pragma once

#include "Trein.h"


class HogeSnelheidstrein : public Trein {
public:
	HogeSnelheidstrein();

	float ticketPrijs() override;
	float opbrengst() override;

	float toeslag = 5.00;

};
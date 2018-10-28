#pragma once


class Trein {
public:
	Trein();
	~Trein();

	virtual float ticketPrijs() = 0;
	virtual float opbrengst() = 0;

	int capaciteit;
	float kmTraject;
	float prijsPerKilometer = 0.13f;

	
};

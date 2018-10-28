#pragma once


class Vervoermiddel {
public:
	Vervoermiddel();
	~Vervoermiddel();

	virtual float opbrengst(float kilometers) = 0;

private:
	int capaciteit = 0;
	float prijsPerKilometer = 0.13;
};

#pragma once

#include <string>

class Boek {
public:
	Boek();
	Boek(std::string type);

	std::string naam = "onbekend";
	bool uitleen = false;
	std::string bezitter = "niemand";
};

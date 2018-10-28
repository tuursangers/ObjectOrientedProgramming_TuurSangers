#pragma once


#include "Boek.h"

class Bibliotheek {
public:
	Bibliotheek();

	void toon();
	void voegToe(std::string type);
	void leenUit(std::string persoon);
	void terugbrengen();

private:
	Boek * boek = new Boek();
};
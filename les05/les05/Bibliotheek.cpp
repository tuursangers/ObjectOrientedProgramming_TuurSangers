#include <iostream>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {
}

void Bibliotheek::toon() {

	if (boek->uitleen == true) {
		std::cout << "   Bibliotheek bevat: " << boek->naam << "(uitgeleend aan:" << boek->bezitter << ")" << std::endl;
	}
	else {
		std::cout << "   Bibliotheek bevat: " << boek->naam << std::endl;
	}

	std::cout << "--------------------------------------------------------" << std::endl;
}

void Bibliotheek::voegToe(std::string type) {
	boek = new Boek(type);

}

void  Bibliotheek::leenUit(std::string persoon) {

	if (boek->uitleen == false) {
		//std::cout << "nieuwe situatie: " << std::endl;
		boek->uitleen = true;
		boek->bezitter = persoon;
		std::cout << "het boek (" << boek->naam << ") is nu uitgeleend aan:" << boek->bezitter << std::endl;
	}
	else {
		std::cout << "het boek is momenteel al uitgeleend door:" << boek->bezitter << std::endl;
		std::cout << "je kan het boek hierdoor momenteel niet lenen" << std::endl;
	}

	std::cout << "--------------------------------------------------------" << std::endl;

}
void  Bibliotheek::terugbrengen() {

	boek->uitleen = false;
	boek->bezitter = "niemand";

	std::cout << "het boek (" << boek->naam << ") is teruggebracht" << std::endl;

	std::cout << "--------------------------------------------------------" << std::endl;

}

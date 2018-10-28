#include "Boek.h"
#include <iostream>

Boek::Boek() {
	//std::cout << "Boek: default ctor" << std::endl;
}

Boek::Boek(std::string type) {
	//std::cout << "Boek: ctor" << std::endl;
	naam = type;
}
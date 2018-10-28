#include <iostream>
#include "Bibliotheek.h"



int main() {
	std::cout << "bieb wordt aangemaakt" << std::endl;
	Bibliotheek* bieb = new Bibliotheek();

	bieb->voegToe("De avonturen van c++");
	bieb->toon();

	std::cout << "boek uitlenen aan Edwin ..." << std::endl;
	bieb->leenUit("Edwin");

	std::cout << "boek uitlenen aan Pieter ..." << std::endl;
	bieb->leenUit("Pieter");

	bieb->terugbrengen();

	std::cout << "boek uitlenen aan Pieter ..." << std::endl;
	bieb->leenUit("Pieter");

	delete bieb;

	// wacht op een enter
	int c;
	std::cin >> c;

	return 0;
}
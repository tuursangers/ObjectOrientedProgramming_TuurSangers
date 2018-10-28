#include <iostream>
#include "Trein.h"
#include "Stoptrein.h"
#include "Intercity.h"
#include "Thalys.h"
#include "ICE.h"



int main() {
	Stoptrein* stoptrein_AlmereUtrecht = new Stoptrein(4, 50);
	std::cout << "de totale opbrengst van de stoptrein (Almere - Utrecht) bedraagt:" << stoptrein_AlmereUtrecht->opbrengst() << std::endl;

	Intercity* intercity_MaastrichtSchiphol = new Intercity(6, 200);
	std::cout << "de totale opbrengst van de Intercity (Maastricht - Schiphol) bedraagt:" << intercity_MaastrichtSchiphol->opbrengst() << std::endl;

	Thalys* Thalys_AmsterdamParijs = new Thalys(8, 500);
	std::cout << "de totale opbrengst van de Thalys (Amsterdam - Parijs) bedraagt:" << Thalys_AmsterdamParijs->opbrengst() << std::endl;

	ICE* ICE_AmsterdamLondon = new ICE(8, 500);
	std::cout << "de totale opbrengst van de ICE (Amsterdam - London) bedraagt:" << ICE_AmsterdamLondon->opbrengst() << std::endl;

	// wacht op een enter
	int c;
	std::cin >> c;

	return 0;
}
#include "KoffieAutomaat.h"



KoffieAutomaat::KoffieAutomaat()
{
}


KoffieAutomaat::~KoffieAutomaat()
{
}

void KoffieAutomaat::keuze() {

	if (saldo >= 150) {
		espresso = true;
		lungo = true;
		capuccino = true;
		cout << "de volgende dranken zijn beschikbaar:\n";
		cout << "espresso, lungo & cappucino" << endl;
	}
	else if (saldo >= 100) {
		espresso = true;
		lungo = true;
		capuccino = false;
		cout << "de volgende dranken zijn beschikbaar:\n";
		cout << "espresso & lungo\n" << endl;
	}
	else if (saldo >= 50) {
		espresso = true;
		lungo = false;
		capuccino = false;

		cout << "de volgende dranken zijn beschikbaar:\n";
		cout << "espresso\n" << endl;
	}


	cout << endl;
	cout << "gebruik de volgende optiecodes:\n" <<
		"0: nieuwe inworp | 1: espresso | 2: lungo | 3: capuccino\n";
	int inputCode;
	cin >> inputCode;

	switch (inputCode) {
	case (0):
		return;
		break;
	case(1):
		if (espresso == true)
		{ 
			BuyDrink(0); 
		}
		else
		{
			cout << "je saldo is te laag\n";
			cout << "huidig saldo is: " << saldo << endl;
			return;
		}
		break;
	case(2):
		if (lungo == true)
		{
			BuyDrink(1);
		}
		else
		{
			cout << "je saldo is te laag\n";
			cout << "huidig saldo is: " << saldo << endl;
			return;
		}
		break;
	case(3):
		if (capuccino == true)
		{
			BuyDrink(2);
		}
		else
		{
			cout << "je saldo is te laag\n";
			cout << "huidig saldo is: " << saldo << endl;
			return;
		}
		break;
	default:

		cout << "actie wordt niet herkend\n";
		return;

	}
	
	return;
}

void KoffieAutomaat::BuyDrink(int drinktype) {
	switch (drinktype) {
	case (0):
		if (koffieMuntInput == 0) 
		{saldo -= 50; }
		else { saldo -= 500; koffieMuntInput = 0; }

		cout << "hier komt je espresso :) \n";
		cout << "huidig saldo is: " << saldo << endl;
		return;
	case (1):
		if (koffieMuntInput == 0)
		{
			saldo -= 100;
		}
		else { saldo -= 500; koffieMuntInput = 0; }
		cout << "hier komt je lungo :) \n";
		cout << "huidig saldo is: " << saldo << endl;
		return;
	case (2):
		if (koffieMuntInput == 0)
		{
			saldo -= 150;
		}
		else { saldo -= 500; koffieMuntInput = 0; }
		cout << "hier komt je capuccino :) \n";
		cout << "huidig saldo is: " << saldo << endl;
		return;
	}
}

void KoffieAutomaat::Inworp(Cent50 a)
{
	cout << endl;
	saldo += 50;
	cout << "huidig saldo is: " << saldo << endl;

	keuze();

	return;
}
void KoffieAutomaat::Inworp(Euro1 b)
{
	cout << endl;
	saldo += 100;
	cout << "huidig saldo is: " << saldo << endl;

	keuze();

	return;
}

void KoffieAutomaat::Inworp(KoffieMunt c)
{
	cout << endl;
	saldo += 500;
	koffieMuntInput = 1;
	cout << "huidig saldo is: " << saldo << endl;

	keuze();

	return;
}

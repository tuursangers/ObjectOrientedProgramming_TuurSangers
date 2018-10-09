#pragma once
#include <iostream>
#include "MuntGeld.h"
#include "MuntGeld.h"
#include "Cent50.h"
#include "Euro1.h"
#include "KoffieMunt.h"

using namespace std;

class KoffieAutomaat
{
public:
	KoffieAutomaat();
	~KoffieAutomaat();

	void keuze();
	bool espresso = false;
	bool lungo = false;
	bool capuccino = false;

	void Inworp(Cent50 a);
	void Inworp(Euro1 b);
	void Inworp(KoffieMunt c);

	void BuyDrink(int drinktype);

private:
	int saldo = 0;
	int koffieMuntInput = 0;

};


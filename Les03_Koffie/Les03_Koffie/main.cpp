#include <iostream>
#include <string>
#include "KoffieAutomaat.h"
#include "Cent50.h"
#include "Euro1.h"
#include "KoffieMunt.h"


using namespace std;

enum inworpTypes { vijftig, honderd, koffiemunt, other };
inworpTypes inworp;
inworpTypes convert(const string& str)
{
	if (str == "vijftig" || str == "50") return vijftig;
	else if (str == "honderd" || str == "100") return honderd;
	else if (str == "koffiemunt") return koffiemunt;
	else return other;
};

int main() {

	KoffieAutomaat automaat;

	Cent50 inworp50;
	Euro1 inworp100;
	KoffieMunt inworpmunt;
	

	bool inputEnabled = false;
	while (inputEnabled == false) {

		cout << "Werp muntgeld in de automaat ...\n";

		string str;
		cin >> str;
		inworpTypes worp = convert(str);

		switch (worp)
		{
		case vijftig:
			cout << "Inworp: vijftig cent\n";
			
			automaat.Inworp(inworp50);
			break;
		case honderd:
			cout << "Inworp: honderd cent\n";

			automaat.Inworp(inworp100);
			break;
		case koffiemunt:
			cout << "Inworp: koffiemunt\n";

			automaat.Inworp(inworpmunt);
			break;
		default:
			cout << "deze munttype word niet herkend, probeer het opnieuw\n";
			break;
		}

	}


	


	//end of code
	cout << endl;
	system("pause");
	return 0;
}

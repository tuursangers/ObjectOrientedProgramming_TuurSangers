#include <iostream>
#include <string>
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"

using namespace std;

int main() {

	cout << "Wat is uw naam?";
	cout << endl;

	string studentNaam;
	cin >> studentNaam;
	cout << endl;

	string boolAddUser;
	int AddUserLoopcount = 0;
	while (boolAddUser != "ja") {
		switch (AddUserLoopcount) {
		case 0 :
			cout << "U staat nog niet in ons systeem, wilt u uzelf toevoegen?" << endl;
			AddUserLoopcount ++;
			break;
		case 1 :
			cout << "Helaas, U zult ja moeten antwoorden om verder te kunnen gaan." << endl;
			AddUserLoopcount++;
			break;
		case 2 :
			cout << "Probeer het nog een keer" << endl;
			AddUserLoopcount++;
			break;
		case 3 :
			cout << "En nog een keer" << endl;
			AddUserLoopcount++;
			break;
		default:
			cout << "typ ja" << endl;
			AddUserLoopcount++;
			break;
		}
		
		cin >> boolAddUser;
	}

	cout << endl;
	Student* User001 = new Student(21, studentNaam);
	cout << "Welkom in het lesrooster " << studentNaam << endl;
	cout << "We gaan nu het rooster voor u ophalen ... " << endl;

	//end of code
	cout << endl;
	system("pause");
	return 0;
}

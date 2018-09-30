#pragma once
#include <iostream>
#include <string>

using namespace std;

class Event
{
public:
	Event();
	~Event();

	//vind een event
	void findEvent();

	//voegt event toe 
	void addEvent(string Lesnaam, int tijdBegin, int tijdEinde, string locatie);

	//verander event
	void changeEvent();

	//verwijder event
	void removeEvent();
};


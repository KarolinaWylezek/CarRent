#pragma once
#include <iostream>
#include "Currency.h"

using namespace std;

template <class T>
class Car
{
public:
	Car(double fuel, double price, string model, string registration_number, bool availability)
	{
		Fuel = fuel;
		Model = model;
		Registration_number = registration_number;
		Availability = availability;

		
		

		Price = new T(price);
		//    ^  ^ to stworzy nowy obiekt klasy T
		//    ^ to sprobuje przypisac ten nowy obiekt do zmiennej Price ktore jest typu currency dlatego jezeli nasz typ
		// generyczny T nie jest klasa dizedziczaca po Currency kompilacja wyrzuci blad
	}

	double Fuel;
	Currency* Price;
	string Model;
	string Registration_number;
	bool Availability;
	



};



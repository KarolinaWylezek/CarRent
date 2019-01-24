#pragma once
#include <string>
#include "Car.h"
#include "PLN.h"

using namespace std;

class Client
{
public:
	Client(string name, string surname, double debt);
		
	string Name;
	string Surname;
	double Debt;
	Car<VLU>* RentedCar;
	
	~Client();
	void RentVehicle(Car<VLU>* h);
};



//poczytaæ o u¿ytych kolekcjach - do sprawka (wady i zalety)

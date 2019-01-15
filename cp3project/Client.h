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
	Car<PLN>* RentedCar;
	
	~Client();
	void RentVehicle(Car<PLN>* h);
};


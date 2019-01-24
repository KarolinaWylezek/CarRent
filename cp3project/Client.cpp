#include "stdafx.h"
#include "Client.h"
#include "Car.h"



Client::Client(string name, string surname, double debt)
{
	Name = name;
	Surname = surname;
	Debt = debt;
	RentedCar = NULL;
	
}



Client::~Client()
{
}

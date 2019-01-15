#include "stdafx.h"
#include "Client.h"


Client::Client(string name, string surname, double debt)
{
	Name = name;
	Surname = surname;
	Debt = debt;
	RentedCar = NULL;
	
}

void Client::RentVehicle(Car<PLN>* rentedCar) {
	RentedCar = rentedCar;
}

Client::~Client()
{
}

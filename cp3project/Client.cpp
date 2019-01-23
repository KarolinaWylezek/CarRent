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

void Client::RentVehicle(Car<VLU>* rentedCar) {
	RentedCar = rentedCar;
	rentedCar->Availability = NULL;

}

Client::~Client()
{
}

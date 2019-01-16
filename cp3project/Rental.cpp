#include "stdafx.h"
#include "Rental.h"
#include "Car.h"
#include <string>
#include "Client.h"



Rental::Rental()
{
}
string Rental::OutputCar()
{
	string result = "";
	int i = 1;
	for (list<Car<PLN>>::iterator it = carRepo.CarsList.begin(); it != carRepo.CarsList.end(); ++it)
	{
		
		if ((*it).Availability == 1) {
			result += std::to_string(i) + ". " + " Model: " + (*it).Model + " rejestracja: " + (*it).Registration_number +
				" Fuel: " + std::to_string((*it).Fuel) + " Price: " + std::to_string((*it).Price->Amount);
			i++;
			result += '\n';
		}


		else
			continue;
		
		
	}
	return result;

}

string Rental::OutputAllClients()
{
	string result = "";
	for (list <Client>::iterator it = clientsRepo.ClientsList.begin(); it != clientsRepo.ClientsList.end(); ++it)
	{

		result += "Name: " + (*it).Name + " Surname " + (*it).Surname +
			" Debt: " + std::to_string((*it).Debt);
		if ((*it).RentedCar == NULL)
			result += "Car is not rented";
		else
			result += "Rented car: " + (*it).RentedCar->Registration_number;

		result += '\n';

	}
	return result;

}

Rental::~Rental()
{
}

#include "stdafx.h"
#include "Rental.h"
#include "Car.h"
#include <string>
#include "Client.h"
#include "CarRepo.h"
#include <fstream> 
#include "ClientsRepo.h"



void Rental::RentCar(string registrationNumber)
{

	Car<VLU>* car = carRepo.FindCar(registrationNumber);
	if (car == NULL)
	{
		throw string("Wrong registration number");
		
	}
	double maxDebt = 1000;
	if (loggedClient->Debt >= maxDebt) {
		system("color C");
		throw string("Your dept is too height. Please take care of your finances.");
	}
	car->Availability = false;
	loggedClient->RentedCar = car;
	ofstream ofs;
	ofs.open("Log.txt", std::ios_base::app);
	ofs << loggedClient->Name <<" "<< loggedClient->Surname<<" " << "has rented: " << car->Model<<'\n';

}

void Rental::ReturnCar(string registrationNumber, string clientsName, string clientsSurname)
{

	Car<VLU>* car = carRepo.FindCar(registrationNumber);
	if (car == NULL)
	{
		throw string("Wrong registration number");

	}
	
	car->Availability = true;
	Client* client = clientsRepo.FindClient(clientsName, clientsSurname);
		if (client == NULL)
		{
			throw string("Wrong data");
		}
		client->RentedCar = NULL;

	
}
void Rental::Login(Client* client)
{
	loggedClient = client;
}

Rental::Rental()
{
	loggedClient = NULL;
}
string Rental::OutputCar()
{
	string result = "";
	int i = 1;
	for (list<Car<VLU>>::iterator it = carRepo.CarsList.begin(); it != carRepo.CarsList.end(); ++it)
	{
		
		if ((*it).Availability == 1) {
			result += std::to_string(i) + ". " + " Model: " + (*it).Model + " Registration number: " + (*it).Registration_number +
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

		result += "Name: " + (*it).Name + " Surname: " + (*it).Surname +
			" Debt: " + std::to_string((*it).Debt);
		if ((*it).RentedCar == NULL)
			result += " Car is not rented";
		else
			result += "Rented car: " + (*it).RentedCar->Registration_number;

		result += '\n';

	}
	return result;

}

Rental::~Rental()
{
}

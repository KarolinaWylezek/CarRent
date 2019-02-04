#pragma once
#include "CarRepo.h"
#include "ClientsRepo.h"

using namespace std;

class Rental
{
private:
	Client * loggedClient;
public:
	CarRepo carRepo;
	ClientsRepo clientsRepo;

	Rental();
	~Rental();

	void RentCar(string registrationNumber);
	void ReturnCar(string registrationNumber, string clientsName, string clientsSurname);
	void Login(Client*);
	string OutputCar();
	string OutputAllClients();
};


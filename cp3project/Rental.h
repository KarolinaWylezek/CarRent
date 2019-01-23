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
	void Login(Client*);
	string OutputCar();
	string OutputAllClients();
};


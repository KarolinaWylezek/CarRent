#pragma once
#include "CarRepo.h"
#include "ClientsRepo.h"

using namespace std;

class Rental
{
	
public:

	CarRepo carRepo;
	ClientsRepo clientsRepo;
	Rental();
	~Rental();
	string OutputCar();
	string OutputAllClients();
};


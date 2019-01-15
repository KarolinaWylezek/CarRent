#pragma once
#include "CarRepo.h"
#include "ClientsRepo.h"

using namespace std;

class Rental
{
	CarRepo carRepo;
	ClientsRepo clientsRepo;
	
public:
	Rental();
	~Rental();
	string OutputAllCars();
	string OutputAllClients();
};


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
	Car<VLU>* RentedCar;
	
	~Client();
	void RentVehicle(Car<VLU>* h);
};

//klient biznesowy i ind. 
//uprawnienia klienta
//logowanie sie
// wypożyczone auto - powiązanie z klientem (wolne i wypożyczone przez danego klienta)

//poczytać o użytych kolekcjach - do sprawka (wady i zalety)

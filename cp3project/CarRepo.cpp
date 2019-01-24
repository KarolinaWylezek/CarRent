#include "stdafx.h"

#include "CarRepo.h"
#include "Currency.h"
#include "Car.h"
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
CarRepo::CarRepo()
{
	
	CarsList = list<Car<VLU>>();
	Car<VLU> car = Car<VLU>(123.0, 34.0,"Toyota Corolla","A001", true);
	CarsList.push_back(car);
	Car<VLU> car2 = Car<VLU>(175.9, 34.0, "Honda Civic", "A002", true);
	CarsList.push_back(car2);
	Car<VLU> car3 = Car<VLU>(123.0, 34.0, "Fiat Panda", "A003", true);
	CarsList.push_back(car3);
	Car<VLU> car4 = Car<VLU>(123.0, 34.0, "Kia Sportage", "A004", true);
	CarsList.push_back(car4);
	
}

Car<VLU>* CarRepo :: FindCar(string number) {
	for (list<Car<VLU>>::iterator it = CarsList.begin(); it != CarsList.end(); ++it) {
		if (number == (*it).Registration_number)
			return &(*it);
		

	}
	return NULL;
}



CarRepo::~CarRepo()
{
}

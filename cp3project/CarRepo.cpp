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
	
	CarsList = list<Car<PLN>>();
	Car<PLN> car = Car<PLN>(123.0, 34.0,"adfs","adsf", true);
	CarsList.push_back(car);
	Car<PLN> car2 = Car<PLN>(175.9, 34.0, "uygwdioq", "uiwhio", false);
	CarsList.push_back(car2);
	Car<PLN> car3 = Car<PLN>(123.0, 34.0, "adfauhfis", "ahahahadsf", true);
	CarsList.push_back(car3);
	
}

Car<PLN>* CarRepo :: FindCar(string number) {
	for (list<Car<PLN>>::iterator it = CarsList.begin(); it != CarsList.end(); ++it) {
		if (number == (*it).Registration_number)
			return &(*it);
		

	}
	return NULL;
}



CarRepo::~CarRepo()
{
}

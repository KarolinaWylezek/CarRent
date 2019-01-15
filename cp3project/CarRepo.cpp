#include "stdafx.h"

#include "CarRepo.h"
#include "Currency.h"
#include "Car.h"

using namespace std;
CarRepo::CarRepo()
{
	CarsList = list<Car<PLN>>();
	Car<PLN> car = Car<PLN>(123.0, 34.0,"adfs","adsf", true);
	CarsList.push_back(car);
	Car<PLN> car2 = Car<PLN>(175.9, 34.0, "uygwdioq", "uiwhio", false);
	CarsList.push_back(car2);
	
}

	

CarRepo::~CarRepo()
{
}

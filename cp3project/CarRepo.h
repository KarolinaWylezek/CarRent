#pragma once
#include "Repo.h"
#include <list>
#include "Car.h"
#include "PLN.h"

using namespace std;


class CarRepo :
	public Repo
{
public:
	CarRepo();

	Car<PLN>* FindCar(string);
	
	~CarRepo();


	list<Car<PLN>> CarsList;
	


};


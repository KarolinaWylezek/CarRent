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
	~CarRepo();


	list<Car<PLN>> CarsList;
	


};


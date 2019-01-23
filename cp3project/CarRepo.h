#pragma once
#include "Repo.h"
#include <list>
#include "Car.h"
#include "PLN.h"
#include "stdafx.h"
using namespace std;


class CarRepo :
	public Repo
{
public:
	CarRepo();

	Car<VLU>* FindCar(string);
	
	~CarRepo();


	list<Car<VLU>> CarsList;
	


};


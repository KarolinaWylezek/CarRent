// cp3project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include "Car.h"
#include "Rental.h"
#include <Windows.h>
using namespace std;




int main()
{

	Rental rent= Rental();
	
	cout << rent.OutputAllCars() << endl;
	cout << rent.OutputAllClients() << endl;

	getchar();
    return 0;
}


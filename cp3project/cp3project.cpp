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
#include "Client.h"


using namespace std;




int main()
{

	Rental rent= Rental();
	
	cout << "Log in" << endl;
	cout << "Name:" << endl;
	string name;
	cin >> name;
	cout << "Surname:" << endl;
	string surname;
	cin >> surname;

	Client* client = rent.clientsRepo.FindClient(name, surname);
	if (client == NULL) {
		rent.clientsRepo.AddClient(name, surname, 10);
	}



	cout<<"choose car:"<<endl;
	cout << rent.OutputCar() << endl;

	cout << "Give registration number of chosen car:" << endl;
	string number;
	cin >> number;
	

		
	//rent.carRepo.CarsList[i]
	
	
	
	//cout << rent.OutputAllClients() << endl;

	



	

	getchar();
    return 0;
}


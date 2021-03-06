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
#include <typeinfo>


using namespace std;




int main()
{
	
	Rental rent = Rental();

	while (true) {
		start:

		cout << "Log in" << endl;
		cout << "Name:" << endl;
		string name;
		cin >> name;
		cout << "Surname:" << endl;
		string surname;
		cin >> surname;
		if (name == "Admin" && surname == "Admin") {
			cout << "Last rentals:" << endl;
			cout << rent.OutputAllClients() << endl;
			cout << "Available cars:" << endl;
			cout << rent.OutputCar() << endl;
			do {
				cout << "Give registration number of car that you want to return to the base" << endl;
				string num;
				cin >> num;
				cout << "Give name of client" << endl;
				string name;
				cin >> name;
				cout << "Give surname of client" << endl;
				cin >> surname;
				try {
					rent.ReturnCar(num, name, surname);
				}
				catch (std::string e)
				{
					cout << e << endl;
					continue;
				}
				break;
			} while (true);

		}
		else {
			Client* client = rent.clientsRepo.FindClient(name, surname);
			if (client == NULL) {
				client = rent.clientsRepo.AddClient(name, surname, 10);
			}

			rent.Login(client);

			system("cls");


			cout << "choose car:" << endl;
			cout << rent.OutputCar() << endl;

			do {
				cout << "Give registration number of chosen car:" << endl;
				string number;
				cin >> number;


				try
				{
					rent.RentCar(number);
				}
				catch (std::string e)
				{
					cout << e << endl;
					if (e == "Your dept is too height. Please take care of your finances.")
					{
						goto start;
					}


					continue;
				}
				break;
			} while (true);

			cout << "For how many days would you like to rent this car?" << endl;
			int days;

			cin >> days;

			while (1) {
				if (cin.fail())
				{
					cin.clear();

					cin.ignore();
					cout << "You have entered wrong input" << endl;
					cin >> days;
				}
				if (!cin.fail())
					break;

			}
			double price = client->RentedCar->Price->Amount *days;
			string currency = string(typeid(VLU).name()).substr(string(typeid(VLU).name()).find(" "), string(typeid(VLU).name()).length());
			cout << "You have to pay " << price << currency << " In dollars: " << client->RentedCar->Price->convert_to_dolars()*days << endl;
		}
		cout << "Loged out" << endl;
		system("PAUSE");
		system("cls");
		




	}

	return 0;
}


#include "stdafx.h"
#include "ClientsRepo.h"



ClientsRepo::ClientsRepo()
{
	ClientsList = list<Client>();
	Client client = Client("Adam", "Kowalski", 0);
	ClientsList.push_back(client);
	Client client2 = Client("Ania", "Kowalski", 200);
	ClientsList.push_back(client2);
}

Client* ClientsRepo::FindClient(string name, string surname) {
	for (list<Client>::iterator it = ClientsList.begin(); it != ClientsList.end(); ++it) {
		if (name == (*it).Name && surname == (*it).Surname)
			return &(*it);
	}
	return NULL;
}

void ClientsRepo::AddClient(string name, string surname, double debt)
{
	
	Client client = Client(name, surname, debt);
	ClientsList.push_back(client);
}
}


ClientsRepo::~ClientsRepo()
{
}

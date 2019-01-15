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



ClientsRepo::~ClientsRepo()
{
}

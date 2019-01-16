#pragma once
#include "Repo.h"
#include <list>
#include "Client.h"

class ClientsRepo :
	public Repo
{
public:
	ClientsRepo();
	Client* FindClient(string name, string surname);
	void AddClient(string name, string surname, double debt);
	~ClientsRepo();
	list <Client> ClientsList;

	
};


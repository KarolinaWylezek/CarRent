#pragma once
#include "Repo.h"
#include <list>
#include "Client.h"

class ClientsRepo :
	public Repo
{
public:
	ClientsRepo();
	~ClientsRepo();
	list <Client> ClientsList;

	
};


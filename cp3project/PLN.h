#pragma once
#include "Currency.h"
class PLN :
	public Currency
{
public:
	PLN(double);
	~PLN();

	double convert_to_dolars();
	


};



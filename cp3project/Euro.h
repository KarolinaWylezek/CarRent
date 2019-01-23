#pragma once
#include "Currency.h"
class Euro :
	public Currency
{
public:
	
	Euro(double amount);

	~Euro();
	double convert_to_dolars();
};


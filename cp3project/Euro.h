#pragma once
#include "Currency.h"
class Euro :
	public Currency
{
public:
	
	~Euro();
	double convert_to_dollars();
};


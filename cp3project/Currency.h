#pragma once
class Currency
{
public:
	Currency(double amount);
	~Currency();

	double Amount;
	virtual double convert_to_dolars() = 0;
	
};


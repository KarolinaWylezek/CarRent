#include "stdafx.h"
#include "PLN.h"

PLN::PLN(double amount) : Currency(amount)
{

}

PLN::~PLN()
{
}

double PLN::convert_to_dolars()
{
	return Amount * 3.6;
	
}

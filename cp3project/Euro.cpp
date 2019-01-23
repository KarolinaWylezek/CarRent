#include "stdafx.h"
#include "Euro.h"


Euro::Euro(double amount) : Currency(amount)
{
		
}

Euro::~Euro()
{
}

double Euro::convert_to_dolars()
{
	return Amount*1.4 ;
}

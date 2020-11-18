#include "Bar.h"



Bar::Bar()
{
	y = 0;
}


void Bar::set(double a)
{
	if (y + a > 100) throw Ex(a*y);
	else y = a;
//	std::cout << "y = " << y << std::endl;
}

#include "Circle.h"



Circle::Circle()
{
	m_radius = 0;
}

Circle::Circle(double r)
{
	m_radius = r;
}

double Circle::area()
{
	return 3.14 * m_radius * m_radius;
}


Circle::~Circle()
{
}

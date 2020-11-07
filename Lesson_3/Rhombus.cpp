#include "Rhombus.h"



Rhombus::Rhombus()
{
	m_height = 0;
	m_side = 0;
}

Rhombus::Rhombus(double s, double h)
{
	m_height = h;
	m_side = s;
}

double Rhombus::area()
{
	return m_height * m_side;
}


Rhombus::~Rhombus()
{
}

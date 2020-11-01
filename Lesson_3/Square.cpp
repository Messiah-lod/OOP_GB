#include "Square.h"



Square::Square()
{
	m_side = 0;
}

Square::Square(double s)
{
	m_side = s;
}

double Square::area()
{
	return m_side*m_side;
}


Square::~Square()
{
}

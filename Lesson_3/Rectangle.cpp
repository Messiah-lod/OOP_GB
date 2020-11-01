#include "Rectangle.h"



Rectangle::Rectangle()
{
	m_height = 0;
	m_side = 0;
}

Rectangle::Rectangle(double w, double h) {
	m_height = h;
	m_side = w;
}

double Rectangle::area()
{
	return m_side * m_height;
}


Rectangle::~Rectangle()
{
}

#include "Parallelogram.h"



Parallelogram::Parallelogram()
{
	m_height = 0;
	m_side = 0;
}

Parallelogram::Parallelogram(double s, double h):m_side(s), m_height(h) {}


double Parallelogram::area()
{
	return m_side*m_height;
}

Parallelogram::~Parallelogram()
{
}

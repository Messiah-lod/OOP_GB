#pragma once
#include "Figure.h"
class Circle :
	public Figure
{
protected:
	double m_radius;
public:
	Circle();
	Circle(double r);
	double area() override;
    ~Circle() override;
};


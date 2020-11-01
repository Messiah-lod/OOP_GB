#pragma once
#include "Parallelogram.h"
class Rhombus :
	public Parallelogram
{
public:
	Rhombus();
	Rhombus(double s, double h);
	virtual double area() override;
	~Rhombus();
};


#pragma once
#include "Parallelogram.h"
class Rectangle :
	public Parallelogram
{
public:
	Rectangle();
	Rectangle(double w, double h);
	virtual double area() override;
	~Rectangle();
};


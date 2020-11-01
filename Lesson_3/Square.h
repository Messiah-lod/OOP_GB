#pragma once
#include "Parallelogram.h"
class Square :
	public Parallelogram
{
public:
	Square();
	Square(double s);
	virtual double area() override;
	~Square();
};


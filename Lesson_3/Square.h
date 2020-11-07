#pragma once
#include "Parallelogram.h"
class Square :
	public Parallelogram
{
public:
	Square();
	Square(double s);
	double area() override;
	~Square();
};


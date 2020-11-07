#pragma once

#include <iostream>
#include <string>

class Car
{
protected:
	std::string company = "default company";
	std::string model = "default model";
public:
	Car();
	virtual std::string getCompany() const;
	virtual std::string getModel() const;
	~Car();
};


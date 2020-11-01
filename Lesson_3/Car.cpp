#include "Car.h"



Car::Car()
{
	std::cout << "Create Car: " << company << "  " << model << std::endl;
}

std::string Car::getCompany() const
{
	return company;
}

std::string Car::getModel() const
{
	return model;
}


Car::~Car()
{
	std::cout << "Delete Car" << std::endl;
}

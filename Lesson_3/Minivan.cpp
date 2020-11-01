#include "Minivan.h"



Minivan::Minivan()
{
	company = "Volkswagen";
	model = "Multivan";  
	std::cout << "Create Minivan: " << company << "  " << model << std::endl;
}


Minivan::~Minivan()
{
	std::cout << "Delete Minivan" << std::endl;
}

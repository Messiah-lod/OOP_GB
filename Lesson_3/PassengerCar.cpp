#include "PassengerCar.h"



PassengerCar::PassengerCar()
{
	company = "peugeot";
	model = "3008";
	std::cout << "Create PassengerCar: " << company << "  " << model << std::endl;

}


PassengerCar::~PassengerCar()
{
	std::cout << "Delete PassengerCar" << std::endl;
}

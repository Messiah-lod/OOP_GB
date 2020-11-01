#include "Bus.h"


Bus::Bus()
{
	company = "volgabus";
	model = "m243";
	std::cout << "Create Bus: " << company << "  " << model << std::endl;
}

Bus::~Bus()
{
	std::cout << "Delete Bus" << std::endl;
}

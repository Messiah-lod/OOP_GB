#include "robot.h"

robot::robot()
{
	
}

void robot::move(int direction)
{//1-left, 2-right,3-up, 4-down
	if (direction == 1) {
		if (x - 1 < 1) throw std::string ("OffTheField! Pos:" + std::to_string(x) + 
			"." + std::to_string(y) + " Direction: left");
		x--;
	}
	else if (direction == 2) {
		if (x + 1 > 10) throw std::string("OffTheField! Pos:" + std::to_string(x) +
			"." + std::to_string(y) + " Direction: right");
		x++;
	}
	else if (direction == 3) {
		if (y - 1 < 1) throw std::string("OffTheField! Pos:" + std::to_string(x) +
			"." + std::to_string(y) + " Direction: up");
		y--;
	} 
	else if (direction == 4) {
		if (y + 1 > 10) throw std::string("OffTheField! Pos:" + std::to_string(x) +
			"." + std::to_string(y) + " Direction: down");
		y++;
	}
	else throw std::string("IllegalCommand");
	printPosition();
}

void robot::printPosition() const

{
	std::cout << "New position: " << x << "." << y << std::endl;
}

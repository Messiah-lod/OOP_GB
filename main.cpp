/* Created by Maksim V. Chizhov
* IDE: VS
* Lesson 8 OOP
*/


#include <iostream>
#include "Bar.h"
#include "robot.h"

template <typename T>
T division(const T& par1, const T& par2) {
	if (par2 == 0) throw "DivisionByZero";
	return par1 / par2;
}


int main()
{
    std::cout << "***Task 8.1****" << std::endl;
	try
	{
		std::cout << division<double>(18, 14.6) << std::endl;
		std::cout << division(18, 0) << std::endl;
	}
	catch (const char* c)
	{
		std::cout << c << std::endl;
	}

	std::cout << "***Task 8.2****" << std::endl;
	Bar bar;
	int answer = 1;
	while (answer != 0)
	{
		std::cin >> answer;
		try
		{
			bar.set(answer);
		}
		catch (Ex &ex)
		{
			std::cerr << "exception Ex: " << ex.x << std::endl;
		}
	}


	std::cout << "***Task 8.3****" << std::endl;
	robot xiaomi;
	std::cout << "Move: 1-left, 2-right,3-up, 4-down, 0 - EXIT)";
	std::cin >> answer;
	while (answer != 0)
	{
		try
		{
			xiaomi.move(answer);
		}
		catch (std::string ex)
		{
			std::cout << ex << std::endl;
		}
		std::cout << "where to next?";
		std::cin >> answer;
	}

	



	system("pause");
    return 0;
}

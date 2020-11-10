/* Created by Maksim V. Chizhov
* IDE: VS
* Lesson 6 OOP
*/


#include <iostream>
#include <string>
#include <ostream>

//"***Task 6.1****"
bool isNumber(std::string input) {
	try {
		std::stoi(input);
	}
	catch (std::invalid_argument e) {
		return false;
	}
	return true;
}

void clear_scrn()//clear cin
{
	std::cin.clear();
	while (std::cin.get() != '\n');
}

//"***Task 6.2****"
std::ostream& endll(std::ostream& stream){
	return stream << std::endl << std::endl;
}


int main()
{
    std::cout << "***Task 6.1****" << std::endl;

	std::string number;
	char answer;
	int input = 0;

	do {
		answer = 'n';
		std::cout << "Enter a single number: ";
		std::cin >> number;//read up to the space
		clear_scrn();
		if (!isNumber(number)) {
			std::cout << "Error input!!! Continue? (y - yes, any - no)" << std::endl;
			std::cin >> answer;
			clear_scrn();
		}
		else input = std::stoi(number);
	} while (answer == 'y' || answer == 'Y');
	std::cout << "Integer: " << input << std::endl;

	std::cout << "***Task 6.2****" << std::endl;
	std::cout << "first string" << endll << "second string" << std::endl;


	system("pause");
    return 0;
}

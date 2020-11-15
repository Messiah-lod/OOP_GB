/* Created by Maksim V. Chizhov
* IDE: VS
* Lesson BlackJack
*/


#include <iostream>
#include <string>
#include "Game.h"


void clear_scrn()//clear cin
{
	std::cin.clear();
	while (std::cin.get() != '\n');
}

bool isNumber(std::string input) {
	try {
		std::stoi(input);
	}
	catch (std::invalid_argument e) {
		return false;
	}
	return true;
}

int main()
{
	std::string answer = "y";
	while (answer == "Y" || answer == "y") {

		std::cout << "How many players will play: ";
	
		int countPlayer = 0;
		std::cin >> answer;
		clear_scrn();
		if (!isNumber(answer)) {
			std::cout << "Error input!!! Continue? (y - yes, any - no)" << std::endl;
			std::cin >> countPlayer;
			clear_scrn();
		}
		else countPlayer = std::stoi(answer);
	   	  
		std::vector <std::string> players;
		for (size_t i = 0; i < countPlayer; i++)
		{
			std::cout << "Enter name " << std::to_string(i+1) << " player: ";
			std::cin >> answer;
			clear_scrn();
			players.push_back(answer);
		}
	
		Game blackJask(players);
		blackJask.Play();
		std::cout << "Game over! Once again? (y - yes, any - no)  ";
		std::cin >> answer;
	}

    return 0;
}

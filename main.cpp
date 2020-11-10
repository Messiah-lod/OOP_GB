/* Created by Maksim V. Chizhov
* IDE: qtcreator
* Lesson BlackJack
*/


#include <iostream>
#include "Hand.h"
#include "Card.h"
#include "Player.h"
#include "House.h"



int main()
{
	Card* cK = new Card(Card::value::K, Card::suit::chervi);
	Card* bA = new Card(Card::value::A, Card::suit::bubi);
	Card* t7 = new Card(Card::value::seven, Card::suit::trefi);

	Player play1("Maks");
	play1.Add(t7);
	std::cout << play1 << std::endl;
	if (play1.IsHitting()) std::cout << "more" << std::endl;


	House house1;
	house1.FlipFirstCard();
	house1.Add(cK);
	house1.Add(bA);
	house1.FlipFirstCard();
	std::cout << house1 << std::endl;

	system("pause");
    return 0;
}

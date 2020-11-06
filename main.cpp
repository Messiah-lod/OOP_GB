/* Created by Maksim V. Chizhov
* IDE: MS Visual Studio
* Lesson 4 OOP
*/


#include <iostream>
#include <vector>

#include "./Lesson_4/ArrayInt.h"
#include "./Lesson_4/Card.h"
#include "./Lesson_4/Hand.h"


int uniqueValue(std::vector<int> &vec)
{
	int count = 1;
	std::sort(vec.begin(), vec.end());
	for (size_t i = 1; i < vec.size(); i++)
		if (vec[i - 1] != vec[i]) count++;
	return count;
}


int main()
{
    std::cout << "***Task 4.1****" << std::endl;
	ArrayInt arrint(3);
	arrint[0] = 7;
	arrint[1] = 8;
	arrint[2] = 9;
	arrint.print();
	arrint.push_back(5);
	arrint.insertBefore(13,1);
	arrint.print();
	arrint.pop_back();
	arrint.resize(10);
	arrint.print();
	arrint.pop_front();
	arrint.print();
	arrint.sort();
	arrint.print();

	std::cout << "***Task 4.2****" << std::endl;
	std::vector<int> vec{ 0,6,5,84,6,4,5,0,7,33 };
	for (size_t i = 0; i < vec.size(); i++) std::cout << "[" << vec[i] << "] ";
	std::cout << std::endl << "Unique value " << uniqueValue(vec) << std::endl;

	std::cout << "***Task 4.3****" << std::endl;
	Card* ten = new Card(Card::ten, Card::chervi);
	Card* A = new Card(Card::A, Card::bubi);
	Card* six = new Card(Card::six, Card::piki);

	Hand hand;
	hand.Add(ten);
	hand.Add(A);
	hand.Add(six);
	std::cout << "The total points of the cards: " << hand.GetValue() << std::endl;
	hand.Clear();

	system("pause");
    return 0;
}

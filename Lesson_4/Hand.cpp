#include "Hand.h"

Hand::Hand()
{
}

Hand::~Hand()
{
}

void Hand::Add(Card* card)
{
	cards.push_back(card);
}

void Hand::Clear()
{
	cards.clear();
}

int Hand::GetValue() const
{
	int summ = 0;
	bool isA = false;//попалс ли туз в набор
	for (size_t i = 0; i < cards.size(); i++) {
		if (cards[i]->GetValue() == 1) { 
			isA = true; 
			summ += 10;
		}
		summ += cards[i]->GetValue();
		if (summ > 21 && isA) summ -= 10;
	}
	return summ;
}

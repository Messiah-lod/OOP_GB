#include "House.h"




House::House(std::string name)
{
	m_name = name;
}

bool House::IsHitting() const
{
	return  (!cards.empty()) ? (GetValue() <= 16) : false;
}

void House::FlipFirstCard()
{
	if(!cards.empty())	cards.front()->Flip();
}


House::~House()
{
}

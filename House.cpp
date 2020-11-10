#include "House.h"




House::House(std::string name)
{
	m_name = name;
}

bool House::IsHitting() const
{
	return (GetValue() <= 16);
}

void House::FlipFirstCard()
{
	if(!cards.empty())	cards.front()->Flip();
}


House::~House()
{
}

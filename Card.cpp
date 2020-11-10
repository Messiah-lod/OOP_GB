#include "Card.h"

Card::Card()
{
	std::cout << "Create Card" << std::endl;
}

void Card::Flip()
{
	m_position = !(m_position);
}

int Card::GetValue() const
{
	int valueCard[13] = {
	2,3,4,5,6,7,8,9,10,10,10,10,1};
	return valueCard[m_value];
}

std::string Card::GetSuit() const
{
	std::string su[4] = {
	"bubi", "trefi", "chervi", "piki" };
	return su[m_suit];
}

Card::~Card()
{
	std::cout << "Delete Card" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Card& c)
{
	if (c.m_position) out << c.GetSuit() << " " << c.GetValue();
	else out << "XX";
	return out;
}
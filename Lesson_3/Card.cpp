#include "Card.h"

Card::Card()
{
	std::cout << "Create Card" << std::endl;
}

void Card::Flip()
{
	(m_position) ? m_position = false : m_position = true;
}

int Card::GetValue()
{
	if (m_value == six) return 6;
	else if (m_value == seven) return 7;
	else if (m_value == eight) return 8;
	else if (m_value == nine) return 9;
	else if (m_value == ten ||
			m_value == J ||
			m_value == Q ||
			m_value == K) return 10;
	else if (m_value == A) return 1;
	else return 0;
}

Card::~Card()
{
	std::cout << "Delete Card" << std::endl;
}

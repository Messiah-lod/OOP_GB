#include "GenericPlayer.h"


bool GenericPlayer::IsBoosted() const
{
	return (GetValue() > 21 );
}

void GenericPlayer::Bust() const
{
	std::cout << m_name << ", A bit much!!!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const GenericPlayer& gp)
{
	out << gp.m_name << "\t";
	for (size_t i = 0; i < gp.cards.size(); i++)
	{
		out << "[" << *gp.cards[i] << "]\t";
	}
//	out << gp.GetValue();
	return out;
}

#include "GenericPlayer.h"




GenericPlayer::~GenericPlayer()
{
}



bool GenericPlayer::IsBoosted() const
{
	return (GetValue() > 21 );
}

void GenericPlayer::Bust() const
{
	std::cout << m_name << ", A bit much!!!" << std::endl;
}

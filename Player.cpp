#include "Player.h"




Player::Player(std::string name)
{
	m_name = name;
}

bool Player::IsHitting() const
{
	char answer;
	std::cout << m_name << ", more card? y - yes, any - no" << std::endl;
	std::cin >> answer;
	std::cin.clear();
	while (std::cin.get() != '\n');
	return (answer == 'Y' || answer == 'y');
}

void Player::Win() const
{
	std::cout << m_name << " is WIN!!!! Congratulate!!!" << std::endl;
}

void Player::Lose() const
{
	std::cout << m_name << " is LOSE!!!! Sory..." << std::endl;
}

void Player::Push() const
{
	std::cout << m_name << " is PUSH!!!!" << std::endl;
}

Player::~Player()
{
}

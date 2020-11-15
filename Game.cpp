#include "Game.h"



Game::Game(std::vector<std::string>& names)
{
	for (size_t i = 0; i < names.size(); i++)
		m_players.push_back(names[i]);

	m_deck.Populate();
	m_deck.Shuffle();
}

void Game::Play()
{
	//to deal over 2 cards
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < m_players.size(); j++)
			m_deck.Deal(m_players[j]);
		m_deck.Deal(m_house);
	}

	m_house.FlipFirstCard();

	for (size_t i = 0; i < m_players.size(); i++)
		std::cout << m_players[i] << std::endl;
	std::cout << m_house << std::endl;

	for (size_t i = 0; i < m_players.size(); i++) {
		m_deck.AddltionalCards(m_players[i]);
	}

	m_house.FlipFirstCard();

	while (m_house.IsHitting())
		m_deck.Deal(m_house);

	std::cout << "*********** Result *********" << std::endl;
	std::cout << "House point: " << m_house.GetValue() << std::endl;
	for (size_t i = 0; i < m_players.size(); i++) {
		if (m_players[i].IsBoosted()) {
			std::cout << m_players[i] << " " << m_players[i].GetValue() << "	";
			m_players[i].Bust();
		}
		else if (m_players[i].GetValue() == m_house.GetValue()) {
			std::cout << m_players[i] << " " << m_players[i].GetValue() << "	";
			m_players[i].Push();
		}
		else if (m_players[i].GetValue() > m_house.GetValue()) {
			std::cout << m_players[i] << " " << m_players[i].GetValue() << "	";
			m_players[i].Win();
		}
		else {
			std::cout << m_players[i] << " " << m_players[i].GetValue() << "	";
			m_players[i].Lose();
		}
	}

	for (size_t i = 0; i < m_players.size(); i++)
		m_players[i].Clear();
	m_house.Clear();


}


Game::~Game()
{
}

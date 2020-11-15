#pragma once

#include "Card.h"
#include "Player.h"
#include "House.h"
#include "Deck.h"



class Game
{
private:
	std::vector <Player> m_players;//������
	Deck m_deck;//������
	House m_house;//������

public:
	Game(std::vector<std::string>& names);
	void Play();
	~Game();
};

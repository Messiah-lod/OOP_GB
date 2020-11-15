#pragma once

#include "Card.h"
#include "Player.h"
#include "House.h"
#include "Deck.h"



class Game
{
private:
	std::vector <Player> m_players;//игроки
	Deck m_deck;//колода
	House m_house;//диллер

public:
	Game(std::vector<std::string>& names);
	void Play();
	~Game();
};

#pragma once

#include <iostream>
#include <string>

class Card
{
private:
	enum suit	{bubi, trefi, chervi, piki};
	enum value {six = 6, seven, eight, nine, ten, J=10 ,Q=10 ,K=10 ,A = 1};
	bool m_position = 0;//вверх рубашкой
	value m_value = six;
	suit m_suit = bubi;

public:
	Card();
	void Flip();
	int GetValue();
	~Card();
};
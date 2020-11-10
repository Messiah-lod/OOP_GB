#pragma once

#include <iostream>
#include <string>
#include <ostream>

class Card
{
public:
	enum suit { bubi, trefi, chervi, piki };
	enum value {
		two,
		three,
		four,
		five,
		six,
		seven,
		eight,
		nine,
		ten,
		J,
		Q,
		K,
		A
	};


	Card();
	Card(value val, suit su) : m_value(val), m_suit(su) {};
	void Flip();
	int GetValue() const;
	std::string GetSuit() const;
	~Card();
	friend std::ostream& operator<< (std::ostream& out, const Card& c);

private:

	bool m_position = false;//вверх рубашкой
	value m_value = two;
	suit m_suit = bubi;

};
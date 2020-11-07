#pragma once

#include <iostream>
#include <string>

class Card
{
private:
	enum suit	{bubi, trefi, chervi, piki};
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
		J ,
		Q ,
		K ,
		A };
	bool m_position = false;//вверх рубашкой
	value m_value = two;
	suit m_suit = bubi;

public:
	Card();
	void Flip();
	int GetValue() const;
	~Card();
};
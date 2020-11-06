#pragma once

#include "Hand.h"
#include <string>

class GenericPlayer :
	public Hand
{
protected:
	std::string m_name = "";
public:
	GenericPlayer(std::string name) : m_name(name) {};
	~GenericPlayer();

	virtual bool IsHitting() const = 0;//чисто виртуальна€ функци€, возвращает информацию, нужна ли игроку еще одна карта.
	bool IsBoosted() const; // -возвращает bool значение, есть ли у игрока перебор
	void Bust() const; // -выводит на экран им€ игрока и объ€вл€ет, что у него перебор.

};

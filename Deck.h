#pragma once


#include "Hand.h"
#include "GenericPlayer.h"

#include <algorithm> 
#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>

class Deck :
	public Hand
{
public:
	Deck();
	void Populate(); // -������� ����������� ������ �� 52 ����, ���������� �� ������������.
	void Shuffle(); // -�����, ������� ������ �����, ����� ������������ ������� �� ���������� STL random_shuffle
	void Deal(Hand& aHand); // -�����, ������� ������� � ���� ���� �����
	void AddltionalCards(GenericPlayer& aGenerlcPlayer); // -������� ������ �������������� ����� �� ��� ���, ���� �� ����� � ����� �� ��������
	~Deck();
};

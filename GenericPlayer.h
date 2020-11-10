#pragma once

#include "Hand.h"
#include <string>

class GenericPlayer :
	public Hand
{
protected:
	std::string m_name = "";
public:
	GenericPlayer() {};
	GenericPlayer(std::string name) : m_name(name) {};
	~GenericPlayer() {};

	virtual bool IsHitting() const = 0;//����� ����������� �������, ���������� ����������, ����� �� ������ ��� ���� �����.
	bool IsBoosted() const; // -���������� bool ��������, ���� �� � ������ �������
	void Bust() const; // -������� �� ����� ��� ������ � ���������, ��� � ���� �������.
	//���������� ��� ������ � ��� �����, � ����� ����� ����� ����� ��� ����.
	friend std::ostream& operator<< (std::ostream& out, const GenericPlayer& gp);
};

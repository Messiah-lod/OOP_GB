
#include "GenericPlayer.h"
class Player :
	public GenericPlayer
{
public:
	Player(std::string name);
	virtual bool IsHitting() const;// -���������� ����� ����������� ������� �������� ������.
	//����� ���������� � ������������, ����� �� ��� ��� ���� ����� � ���������� ����� ������������ � ���� true ��� false.
	void Win() const;// -������� �� ����� ��� ������ � ���������, ��� �� �������.
	void Lose() const;// -������� �� ����� ��� ������ � ���������, ��� �� ��������.
	void Push() const;// -������� �� ����� ��� ������ � ���������, ��� �� ������ ������.

	~Player();
};

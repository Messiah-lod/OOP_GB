
#include "GenericPlayer.h"
class House :
	public GenericPlayer
{
public:
	House(std::string name = "House");
	virtual bool IsHitting() const;// -����� ���������, ����� �� ������ ��� ���� �����.
				//���� � ������ �� ������ 16 �����, �� �� ����� ��� ���� �����.
	void FlipFirstCard();// -����� �������������� ������ ����� ������.

	~House();
};

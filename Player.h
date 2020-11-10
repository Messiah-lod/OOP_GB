
#include "GenericPlayer.h"
class Player :
	public GenericPlayer
{
public:
	Player(std::string name);
	virtual bool IsHitting() const;// -реализация чисто виртуальной функции базового класса.
	//Метод спрашивает у пользователя, нужна ли ему еще одна карта и возвращает ответ пользователя в виде true или false.
	void Win() const;// -выводит на экран имя игрока и сообщение, что он выиграл.
	void Lose() const;// -выводит на экран имя игрока и сообщение, что он проиграл.
	void Push() const;// -выводит на экран имя игрока и сообщение, что он сыграл вничью.

	~Player();
};

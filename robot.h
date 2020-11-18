#include <iostream>
#include <string>

class robot
{
public:
	robot();
	void move(int direction);
	void printPosition() const;
private:
	int x = 1;
	int y = 1;
};

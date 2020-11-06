/* Created by Maksim V. Chizhov
* IDE: qtcreator
* Lesson 5 OOP
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <array>


#include "./Lesson_5/pair1.h"
#include "./Lesson_5/pair.h"
#include "./Lesson_5/StringValuePair.h"


int main()
{
    std::cout << "***Task 5.1****" << std::endl;
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';



	std::cout << "***Task 5.2****" << std::endl;
	Pair<int, double> p3(6, 7.8);
	std::cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';

	const Pair<double, int> p4(3.4, 5);
	std::cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';


	std::cout << "***Task 5.3****" << std::endl;
	StringValuePair<int> svp("Amazing", 7);
//	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';



	system("pause");
    return 0;
}

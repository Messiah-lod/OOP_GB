/*
* я++. нно
*
* Created by Maksim V. Chizhov
* IDE: vs studio
*/

#include <iostream>
#include <string>

#include "./Lesson_3/Circle.h"
#include "./Lesson_3/Parallelogram.h"
#include "./Lesson_3/Rectangle.h"
#include "./Lesson_3/Square.h"
#include "./Lesson_3/Rhombus.h"

#include "./Lesson_3/Minivan.h"
#include "./Lesson_3/Car.h"
#include "./Lesson_3/PassengerCar.h"
#include "./Lesson_3/Bus.h"

#include "./Lesson_3/Fraction.h"

#include "./Lesson_3/Card.h"


int main()
{
	std::cout << "************ Task 3.1 ************" << std::endl;
	Circle circle(1);
	std::cout << "Area Circle: " << circle.area() << std::endl;

	Parallelogram paral(1, 2);
	std::cout << "Area Parallelogram: " << paral.area() << std::endl;

	Rectangle rect(2, 2);
	std::cout << "Area Rectangle: " << rect.area() << std::endl;

	Square square(7);
	std::cout << "Area Square: " << square.area() << std::endl;

	Rhombus rhombus(3, 8);
	std::cout << "Area Rhombus: " << rhombus.area() << std::endl;

	std::cout << "************ Task 3.2 ************" << std::endl;
	std::cout << "Create object CAR" << std::endl;
	Car car;
	std::cout << car.getCompany() << "   " << car.getModel() << std::endl << std::endl;
	std::cout << "Create object PassengerCar" << std::endl;
	PassengerCar passcar;
	std::cout << passcar.getCompany() << "   " << passcar.getModel() << std::endl << std::endl;
	std::cout << "Create object BUS" << std::endl;
	Bus bus;
	std::cout << bus.getCompany() << "   " << bus.getModel() << std::endl << std::endl;
	std::cout << "Create object MINIVAN" << std::endl;
	Minivan minivan;
	std::cout << minivan.getCompany() << "   " << minivan.getModel() << std::endl;

	std::cout << "************ Task 3.3 ************" << std::endl;
	Fraction fract1(3,7);
	std::cout << "f1= "; fract1.print();
	Fraction fract2(1,2);
	std::cout << "f2= "; fract2.print();

	std::cout << "Unary operator 'minus' ";
	Fraction fract3 = -fract2;
	fract3.print();

	std::cout << "Binary operator 'plus' ";
	fract3 = fract1 + fract2;
	fract3.print();
	std::cout << "Binary operator 'minus' ";
	fract3 = fract1 - fract2;
	fract3.print();
	std::cout << "Binary operator 'multiplication' ";
	fract3 = fract1 * fract2;
	fract3.print();
	std::cout << "Binary operator 'division' ";
	fract3 = fract1 / fract2;
	fract3.print();

	std::cout << "Binary operator 'equally' , result: ";
	(fract1 == fract2) ? std::cout << "equaly" << std::endl : std::cout << "not equaly" << std::endl;
	std::cout << "Binary operator 'not equal' , result: ";
	(fract1 != fract2) ? std::cout << "not equal" << std::endl : std::cout << "equaly" << std::endl;
	
	std::cout << "Binary operator 'less' , result: ";
	(fract1 < fract2) ? std::cout << "less" << std::endl : std::cout << "not less" << std::endl;
	std::cout << "Binary operator 'greater than or equal' , result: ";
	(fract1 >= fract2) ? std::cout << "greater than or equal" << std::endl : std::cout << "not greater than or equal" << std::endl;

	std::cout << "Binary operator 'more' , result: ";
	(fract1 < fract2) ? std::cout << "more" << std::endl : std::cout << "not more" << std::endl;
	std::cout << "Binary operator 'less than or equal' , result: ";
	(fract1 >= fract2) ? std::cout << "less than or equal" << std::endl : std::cout << "not less than or equal" << std::endl;

	std::cout << "************ Task 3.4 ************" << std::endl;
	Card card;
	std::cout << "Value card: " << card.GetValue() << std::endl;
	


	system("pause");
	return 0;
}

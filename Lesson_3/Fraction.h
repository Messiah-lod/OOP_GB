#pragma once

#include <iostream>

class Fraction 	
{
private:
	int m_numerator; //числитель
	int m_denominator; //знаменатель
	Fraction nod(int numerator, int denominator);//наибольший общий делитель
public:
	Fraction();
	Fraction(int n, int d);
	void print() const;
	//унарные
	Fraction operator-() const;
	//бинарные	+, -, *, /
	Fraction operator+(const Fraction &f);
	Fraction operator-(const Fraction &f);
	Fraction operator*(const Fraction &f);
	Fraction operator/(const Fraction &f);
	//логические ==, !=, <, >, <=, >=
	bool operator==(const Fraction &f);
	bool operator!=(const Fraction &f);
	bool operator<(const Fraction &f);
	bool operator>=(const Fraction &f);
	bool operator>(const Fraction &f);
	bool operator<=(const Fraction &f);

	~Fraction();
};
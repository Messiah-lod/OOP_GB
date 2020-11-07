#pragma once

#include <iostream>

class Fraction 	
{
private:
	int m_numerator; //���������
	int m_denominator; //�����������
	Fraction nod(int numerator, int denominator);//���������� ����� ��������
public:
	Fraction();
	Fraction(int n, int d);
	void print() const;
	//�������
	Fraction operator-() const;
	//��������	+, -, *, /
	Fraction operator+(const Fraction &f);
	Fraction operator-(const Fraction &f);
	Fraction operator*(const Fraction &f);
	Fraction operator/(const Fraction &f);
	//���������� ==, !=, <, >, <=, >=
	bool operator==(const Fraction &f);
	bool operator!=(const Fraction &f);
	bool operator<(const Fraction &f);
	bool operator>=(const Fraction &f);
	bool operator>(const Fraction &f);
	bool operator<=(const Fraction &f);

	~Fraction();
};
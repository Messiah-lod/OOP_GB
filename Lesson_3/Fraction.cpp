#include "Fraction.h"
#include <iostream>
#include "cmath"


Fraction Fraction::nod(int numerator, int denominator)
{
	int num = numerator, denom = denominator, rem;
	if (num < denom)
	{
		int temp = num;
		num = denom;
		denom = temp;
	}

	while (rem = num % denom)
	{
		num = denom;
		denom = rem;
	}
	int nod = abs(denom);
	return Fraction(numerator / nod, denominator / nod);
}

Fraction::Fraction()
{
}

Fraction::Fraction(int n, int d): m_numerator(n), m_denominator(d)
{
	if (d == 0) {
		m_denominator = 1;
		std::cout << "denominator is zero, change denominator = 1." << std::endl;
	}
}

void Fraction::print() const
{
	std::cout << m_numerator << "/" << m_denominator << std::endl;
}

Fraction Fraction::operator-() const
{
	return Fraction(m_numerator*(-1), m_denominator);
}

Fraction Fraction::operator+(const Fraction &f)
{
	int tmp_num = m_numerator * f.m_denominator + f.m_numerator*m_denominator;
	int tmp_den = f.m_denominator*m_denominator;

	return nod(tmp_num, tmp_den);
}

Fraction Fraction::operator-(const Fraction &f)
{
	int tmp_num = m_numerator * f.m_denominator - f.m_numerator*m_denominator;
	int tmp_den = f.m_denominator*m_denominator;
	if (tmp_num == 0) return Fraction(0,0);
	return nod(tmp_num, tmp_den);
}

Fraction Fraction::operator*(const Fraction &f)
{
	int tmp_num = m_numerator * f.m_numerator;
	int tmp_den = f.m_denominator*m_denominator;

	return nod(tmp_num, tmp_den);
}

Fraction Fraction::operator/(const Fraction &f)
{
	return Fraction(m_numerator, m_denominator)*Fraction(f.m_denominator, f.m_numerator);
}

bool Fraction::operator==(const Fraction & f)
{
	Fraction f1 = nod(m_numerator, m_denominator);
	Fraction f2 = nod(f.m_numerator, f.m_denominator);
	if (f1.m_numerator == f2.m_numerator && f1.m_denominator == f2.m_denominator)
		return true;
	else return false;
}

bool Fraction::operator!=(const Fraction & f)
{
	Fraction f1 = nod(m_numerator, m_denominator);
	Fraction f2 = nod(f.m_numerator, f.m_denominator);
	if (f1.m_numerator != f2.m_numerator || f1.m_denominator != f2.m_denominator)
		return true;
	else return false;
}

bool Fraction::operator<(const Fraction & f)
{
	int num_this = m_numerator * f.m_denominator;
	int num_f = f.m_numerator*m_denominator;
	if (num_this < num_f) return true;
	return false;
}

bool Fraction::operator>=(const Fraction & f)
{
	if (Fraction(m_numerator,m_denominator) < f) return false;
	return true;
}

bool Fraction::operator>(const Fraction & f)
{
	int num_this = m_numerator * f.m_denominator;
	int num_f = f.m_numerator*m_denominator;
	if (num_this > num_f) return true;
	return false;
}

bool Fraction::operator<=(const Fraction & f)
{
	if (Fraction(m_numerator, m_denominator) > f) return false;
	return true;
}

Fraction::~Fraction()
{
	
}
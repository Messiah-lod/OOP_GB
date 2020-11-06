#pragma once

#include <iostream>
#include <cassert>

template <typename T>
class Pair1
{
private:
	T m_a;
	T m_b;
public:
	Pair1(T a, T b) : m_a(a), m_b(b) {};

	~Pair1() {};
	T first() const { return (T)m_a; };
	T second() const { return (T)m_b; };
};


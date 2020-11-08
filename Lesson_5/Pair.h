#pragma once

#include <iostream>
#include <cassert>

template <typename T, typename S>
class Pair
{
protected:
	T m_a;
	S m_b;
public:
	Pair(T a, S b) : m_a(a), m_b(b) {};

	~Pair() {};
	T first() const { return (T)m_a; };
	S second() const { return (S)m_b; };
};


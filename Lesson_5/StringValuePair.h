#pragma once

#include <iostream>
#include <cassert>
#include <string>
#include "pair.h"

template <typename S>
class StringValuePair : public Pair<std::string, S>
{
public:
	StringValuePair(std::string a, S b){
		Pair::m_a = a;
		Pair::m_b = b;
	};

	~StringValuePair() {};

	std::string first() const { return m_a; };
	S second() const { return (S)m_b; };
};
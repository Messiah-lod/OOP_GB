#pragma once

#include <iostream>
#include <cassert>
#include <string>
#include "pair.h"

template <class U>
class StringValuePair: public Pair<std::string, U>
{
public:
	StringValuePair(std::string a, U b) : Pair<std::string, U>(a, b) {};

	~StringValuePair() {};

	std::string first() const { 
		return Pair<std::string, U>::m_a; 
	};

	U second() const { 
		return Pair<std::string, U>::m_b; 
	};
};
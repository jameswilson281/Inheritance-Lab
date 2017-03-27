#pragma once
#include "person.h"
class archer : public person
{
public:
	archer(std::string name);
	~archer();

	std::string Attack();
};


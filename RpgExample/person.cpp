#include "person.h"



person::person(std::string name) : _name(name)
{
}


person::~person()
{
}

bool person::TakeDamage(int amount)
{
	_life -= amount;
	return _life <= 0;
}

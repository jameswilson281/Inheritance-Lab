#include "archer.h"


archer::archer(std::string name) : person(name)
{
}


archer::~archer()
{
}

std::string archer::Attack()
{
	return getName() + " shoots an arrow!";
}

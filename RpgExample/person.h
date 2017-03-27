#pragma once
#include <string>
class person
{
private:
	std::string _name;
	int _life = 100;
public:
	person(std::string name);
	~person();

	std::string getName() { return _name; }
	bool TakeDamage(int amount);
};


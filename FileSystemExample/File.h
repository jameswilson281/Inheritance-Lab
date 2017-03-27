#pragma once
#include <string>
class File
{
private:
	std::string _name;
	std::string _extension;
public:
	File(std::string name, std::string extension);
	~File();
};


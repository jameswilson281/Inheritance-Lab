#pragma once
#include <vector>
#include "File.h"

class Folder
{
private:
	std::string _name;
	std::vector<Folder> _folders;
	std::vector<File> _files;
public:
	Folder(std::string name);
	~Folder();

	std::string getName() { return _name; }
};

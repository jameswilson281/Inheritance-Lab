#pragma once
#include <string>

enum FileType { Text = 1, Picture = 2, Code = 3};
class File
{
private:
	std::string _name;
	std::string _extension;
	FileType _fileType;
public:
	File(std::string name, std::string extension, FileType type);
	~File();

	std::string ToString();
};


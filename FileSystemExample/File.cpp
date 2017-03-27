#include "File.h"



File::File(std::string name, std::string extension, FileType type) : _name(name), _extension(extension), _fileType(type)
{
}


File::~File()
{
}

std::string File::ToString()
{
	return _name + "." + _extension;

}

#include "Folder.h"



Folder::Folder(std::string name) : _name(name)
{
}


Folder::~Folder()
{
}

std::string Folder::List()
{
	std::string output = "Contents of folder " + _name + ": \n";
	
	for (auto folder : _folders)
	{
		output += "\\" + folder->getName() + "\t\t\t(Folder)\n";
	}

	for (auto file : _files) 
	{
		output += file->ToString() + "\t\t\t(File)\n";
	}
	return output;
}

void Folder::AddFolder(Folder* newFolder) 
{
	_folders.push_back(newFolder);
}

void Folder::AddFile(File* newFile)
{
	_files.push_back(newFile);
}

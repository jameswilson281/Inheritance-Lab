#include <iostream>
#include "Folder.h"
using namespace std;

void CreateFileMenu(Folder *folder);
void CreateFolderMenu(Folder *folder);

int main()
{
	auto rootFolder = Folder("Root");
	Folder* currentFolder = &rootFolder;

	int choice = -1;
	while (choice != 0) {
		system("cls");
		cout << "Welcome to the " << rootFolder.getName() << " folder" << endl;
		cout << "**************************" << endl;
		cout << "1) Create Folder" << endl;
		cout << "2) Create File" << endl;
		cout << "3) List Folder Contents" << endl;
		cout << "0) Exit" << endl;

		cin >> choice;

		switch (choice)
		{
			case 1: CreateFolderMenu(currentFolder); break;
			case 2: CreateFileMenu(currentFolder); break;
			case 3: system("cls"); cout << (currentFolder->List()) << endl; break;
			default: break;
		}
		system("pause");
	}
	return 0;
}

void CreateFolderMenu(Folder *folder) 
{
	system("cls");
	cout << "Enter Folder Name: ";
	string name;
	cin >> name;

	system("cls");
	auto newFolder = new Folder(name);
	folder->AddFolder(newFolder);
}

void CreateFileMenu(Folder *folder)
{
	system("cls");
	cout << "Enter File Name: ";
	string name;
	cin >> name;

	system("cls");

	cout << "Enter File Extension: ";
	string ext;
	cin >> ext;

	system("cls");
	cout << "Enter File Type (1-Text, 2-Picture, 3-Code): ";
	int type;
	cin >> type;

	auto newFile = new File(name, ext, (FileType)type);
	system("cls");
	cout << "New file created!" << endl;
	system("pause");

	folder->AddFile(newFile);
}

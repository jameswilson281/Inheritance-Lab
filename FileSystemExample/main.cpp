#include <iostream>
#include "Folder.h"
using namespace std;
int main()
{		
	auto rootFolder = Folder("Root");	

	int choice = -1;
	while (choice != 0) {
		system("cls");
		cout << "Welcome to the " << rootFolder.getName() << " folder" << endl;
		cout << "**************************" << endl;
		cout << "1) Create Folder" << endl;
		cout << "2) Create File" << endl;
		cout << "0) Exit" << endl;

		cin >> choice;
	}
	return 0;
}
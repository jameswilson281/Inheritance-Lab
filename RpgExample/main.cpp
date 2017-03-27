#include <iostream>
#include "archer.h"

using namespace std;
int main()
{
	auto peasant = new person("nobody");
	auto legolas = new archer("legolas");

	cout << peasant->getName() << " has arrived" << endl;
	cout << legolas->getName() << " has arrived" << endl;
	
	system("pause");
	system("cls");

	cout << legolas->Attack() << endl;
	bool result = peasant->TakeDamage(5);
	cout << (result ? peasant->getName() + " is dead!" : peasant->getName() + " took damage but is still alive!") << endl;
	
	system("pause");
	return 0;
}
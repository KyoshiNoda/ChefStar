#include <iostream>
#include "Money.h"
#include "Menu.h"
#include "Recipe.h"
#include "Shopping.h"
using namespace std;
int main()
{
	Shopping display;
	int input;
	cout << "Welcome to Chef Star!" << endl;
	cout << "You currently have $500" << endl;
	cout << "What would you like to do?" << endl;
	displayMenu();
	cin >> input;
	takeInput(input);

}

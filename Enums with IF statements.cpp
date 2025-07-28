
#include <iostream>
using namespace std;

enum enScreenColor {Red=1,Blue=2,Green=3,Yellow=4};

int main()
{
	cout << "Pleas chose a color \n";
	cout << "********************\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "********************\n";
	cout << "Your choise?";

	int c;
	enScreenColor Color;

	cin >> c;
	Color = (enScreenColor)c;

	if (Color == enScreenColor::Red)
	{
		cout << system("color 4F");
	}

	else if (Color == enScreenColor::Blue)
	{
		cout << system("color 1F");
	}

	else if (Color == enScreenColor::Green)
	{
		cout << system("color 2F");
	}

	else if (Color == enScreenColor::Yellow)
	{
		cout << system("color 6F");
	}

	else
	{
		cout << system("color 9F");
	}


	return 0;
}


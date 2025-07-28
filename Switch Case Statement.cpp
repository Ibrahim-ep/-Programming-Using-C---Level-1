

#include <iostream>

using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

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

	switch (Color)
	{
	case enScreenColor::Red:
		cout << system("color 4F");
			break;

	case enScreenColor::Blue:
		cout << system("color 1F");
		break;

	case enScreenColor::Green:
		cout << system("color 2F");
			break;

	case enScreenColor::Yellow:
		cout << system("color 6F");
		break;

	default:
			cout << system("color 4F");
	}


	return 0;

}
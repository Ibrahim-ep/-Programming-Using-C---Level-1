
#include <iostream>

using namespace std;

int x = 100;

int y = 200;

int myfunction1()
{
	x = 120;
	return x;
};

int myfunction2()
{

	y = 220;
	return y;
};

int main()
{
	cout << ::x << "\n";
	cout << myfunction1() << "\n";
	cout << ::y << "\n";
	cout << myfunction2() << "\n";

}


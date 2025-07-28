

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st = "43.22" , st1 , st2 , st3;
	int N1 = 20 , Num1 , integer;
	double N2 = 33.5 ,Num2;
	float N3 = 55.23 , Num3;

	Num1 = stoi(st);
	Num2 = stod(st);
	Num3 = stof(st);

	st1 = to_string(N1);
	st2 = to_string(N2);
	st3 = to_string(N3);

	//integer = (int)N3;
	//integer = N3;
	integer = int(N3);

	cout << Num1 << "\n";
	cout << Num2 << "\n";
	cout << Num3 << "\n";
	cout << st1 << "\n";
	cout << st2 << "\n";
	cout << st3 << "\n";
	cout << integer << "\n";

	return 0;
}



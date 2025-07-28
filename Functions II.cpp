
#include <iostream>
#include <string>

using namespace std;

void MySumProcecural()
{
	int Num1, Num2;

	cout << "Pleas enter Number1\n";
	cin >> Num1;
	cout << "Pleas enter Number2\n";
	cin >> Num2;
	int sum = Num1 + Num2;
	cout << "*************\n\n";
	cout << sum;

}

int MySumFunction()
{
	int Num1, Num2 ;
	
	cout << "Pleas enter Number1\n";
	cin >> Num1;
	cout << "Pleas enter Number2\n";
	cin >> Num2;

	int sum = Num1 + Num2;

	return  sum;	
}

int main()
{
   
	MySumProcecural();
	
    cout << MySumFunction();


	return 0;

}


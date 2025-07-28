

#include <iostream>

using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void EnterInfo(stInfo& Info)
{

	cout << "Pleas enter your firist name \n";
	cin >> Info.FirstName;
	cout << "Pleas enter your last name \n";
	cin >> Info.LastName;
	cout << "Pleas enter your age \n";
	cin >> Info.Age;
	cout << "Pleas enter your phone number \n";
	cin >> Info.Phone;

};

void PrintInfo(stInfo Info)
{

	cout << "\n *****************\n";
	cout << Info.FirstName << "\n";
	cout << Info.LastName << "\n";
	cout << Info.Age << "\n";
	cout << Info.Phone << "\n";
	cout << " *****************\n";

}

int main()
{
	stInfo Person1;
	EnterInfo(Person1);
	PrintInfo(Person1);
   

	return 0;
}


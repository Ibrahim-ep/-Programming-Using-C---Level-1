

#include <iostream>
#include <string>

using namespace std;

int main()
{
   
	string string1, string2, string3;


	cout << "Pleas enter string1\n";
	getline(cin, string1);

	cout << "Pleas enter string2\n";
	cin >> string2;

	cout << "Pleas enter string3\n";
	cin >> string3;

	cout << "************************\n";
	cout << "The length of strin1 is : " << string1.length() << "\n";
	cout << "Characters at 0,2,4,8 are : " << string1[0] << "," << string1[2] << ',' << string1[4] << "," << string1[8] << "\n";
	cout << "Concatenating string2 and string3 = " << string2 + string3 << "\n";
	cout << "5*10 = " << stoi(string2) * stoi(string3) << "\n";

	return 0;
}


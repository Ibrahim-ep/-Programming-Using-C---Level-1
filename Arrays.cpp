

#include <iostream>
using namespace std;

void ReadGrades(float Grade[3])
{
	cout << "Pleas enter the first grade \n";
	cin >> Grade[0];
	cout << "Pleas enter the second grade \n";
	cin >> Grade[1];
	cout << "Pleas enter the thierd grade \n";
	cin >> Grade[2];
};

float AverageOfGrades(float Grade[3])
{

	return (Grade[0] + Grade[1] + Grade[2]) / 3;
};

int main()
{
	float Grades[3];
	
	ReadGrades(Grades);
	cout << "The Average of grades is : " << AverageOfGrades(Grades) << "\n";
	
	return 0;
}


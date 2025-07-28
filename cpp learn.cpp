

#include <iostream>
using namespace std;

int main()
{
   
    string name , city, country;
  unsigned short int age, months;
   float monthlysalary, yearlysalary;
    char gender;
    bool married;

    cout << "Pleas enter a name?\n";
    cin >> name;

    cout << "pleas enter an age?\n";
    cin >> age;

    cout << "pleas enter a city?\n";
    cin >> city;

    cout << "Pleas enter a country?\n";
    cin >> country;

    cout << "Pleas enter your monthly salary?\n";
    cin >> monthlysalary;

    cout << "Pleas enter your yearlysalary?\n";
    cin >> yearlysalary;

    cout << "Pleas enter your gender?\n";
    cin >> gender;

    cout << "Pleas enter 1 if you are married or 0 if you are not married?\n";
    cin >> married;

    
    
    cout << "*********************\n\n";
    cout << "Nmae: " << name << endl;
    cout << "Age : " << age << "years.\n";
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary : " << monthlysalary << endl;
    cout << "Yearly Salary: " << yearlysalary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married : " << married << endl;
    cout << "*********************\n";



    return 0;
}


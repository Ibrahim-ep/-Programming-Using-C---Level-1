

#include <iostream>
using namespace std;

enum enWeekDay {sunday=1,monday=2,tuesday=3,wednesday=4,thuresday=5,friday=6,saturday=7};

void ShowWeekDayMenu()
{
	cout << "**********************" << endl;
	cout << "       WEEK DAY       " << endl;
	cout << "**********************" << endl;
	cout << "1 for sunday\n";
	cout << "2 for monday\n";
	cout << "3 for tuesday\n";
	cout << "4 for wednesday\n";
	cout << "5 for thuresday\n";
	cout << "6 for friday\n";
	cout << "7 for saturday\n";
	cout << "**********************" << endl;
	cout << "You chose?";
}
enWeekDay ReadWeekDay()
{
	short wd;
	cin >> wd;
	return (enWeekDay)wd;
}
string GetWeekDayName(enWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDay::sunday:
		return "Sunday";
		break;

	case enWeekDay::monday:
		return "Monday";
		break;

	case enWeekDay::tuesday:
		return "Tuesday";
		break;

	case enWeekDay::wednesday:
		return "Wednesday";
		break;

	case enWeekDay::thuresday:
		return "Thuresday";
		break;

	case enWeekDay::friday:
		return "Friday";
		break;

	case enWeekDay::saturday:
		return "Saturday";
		break;

	default:
		"Not A Week Day";
	}

}
int main()
{
	ShowWeekDayMenu();
	cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;

		return 0;
}


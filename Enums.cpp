
#include <iostream>
using namespace std;

enum Color {Red,Green,Yellow,Blue};
enum Direction {Norty,South,East,West};
enum Week {Sat,Sun,Mon,Tue,Wed,Thu,Fri};
enum Gendor {Male , Female};
enum Statue {Single , Married};


int main()
{
 
	Color Mycolor;
	Direction MyDirection;
	Week Today;
	Statue Mystatue;

	Mycolor = Color::Green;
	MyDirection = Direction::Norty;
	Today = Week::Sun;
	Mystatue = Statue::Single;

	cout << Mycolor;


}


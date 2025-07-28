

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double X = 64;
    cout << sqrt(X) << endl; //sqrt means squer rout

    cout << sqrt(50) << endl;
    cout << round(sqrt(50)) << endl;

    cout << round(2.4) << endl; // round is to make the unmber without points and the value will depenton the number after the poin if it's .4 or lower it will take the lower value and if it's .5 or higher it will take the higher value 
    cout << round(2.5) << endl;
    cout << round(3.3) << endl;
    cout << round(3.7) << endl;

    int x = 2, y = 4;
    cout << "The power value : x^y = (2^4) : " << pow(x, y) << endl;
    cout << "The power value : x^y = (4^3) : " << pow(4, 3) << endl;

    cout << "The ceiling value of 2.9 is : " << ceil(2.9) << endl; // ceil is to make the number without points but it will take the higher value only
    cout << "The floor value of 2.9 is : " << floor(2.9) << endl; // floor is to make the number without points but it will take the lower value only

    cout << "The ceiling value of -2.9 is : " << ceil(-2.9) << endl;
    cout << "The floor value of -2.9 is : " << floor(-2.9) << endl;

    cout << "The Absolute Value of -10 is : " << abs(-10) << endl;
    cout << "The Absolute Value of 10 is : " << abs(10) << endl;








    return 0;
}


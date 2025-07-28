#include <iostream>
using namespace std;

int main()
{
    int Num;
    int sum=0;
    for (int i=1;i<=5;i++)
    {
        cout << "Pleas enter 5 Numbers\n";
        cin >> Num;

        if (Num > 50)
        {
            continue;
        }
        sum+=Num;
        
    }
    
    cout << sum << endl;

    return 0;
}
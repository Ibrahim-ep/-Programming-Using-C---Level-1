#include <iostream>
using namespace std;

int main()
{

    int Arr[10] = {10,20,44,55,33,22,99,88,99,100};
    int searchFor=20;

    for (int i=0;i<=10;i++)
    {
        cout << "We are at iteration " << i << endl;
        if (searchFor==Arr[i])
        {
            cout << searchFor << "found at " << i << endl;
            break;
        }
        
    }


    return 0;
}
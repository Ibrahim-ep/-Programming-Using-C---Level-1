

#include <iostream>
using namespace std;

void ReadArraydata(int Arr1[100],int &length)
{
    cout << "Pleas chose How many Numbers you want from 1 to 100\n";
    cin >> length;
    
    for (int i=0;i<=length-1;i++)
    {
        cout << "Pleas enter Number " << i+1 << endl;
        cin >> Arr1[i];
    }
}

void PrintArrayData(int Arr1[100],int length)
{
    for (int i=0;i<=length-1;i++)
    {
        cout << "Number["<<i+1<<"] : " << Arr1[i] << endl;
    }
}

int CalculateArraySum(int Arr1[100],int length)
{
    int sum=0;
    for (int i=0;i<=length-1;i++)
    {
        sum+=Arr1[i];
    }
    return sum;
}

float CalculateArrayAverage(int Arr1[100],int length)
{
    return (float)CalculateArraySum(Arr1,length)/length;
}

int main() {
    
    int Arr1[100],length=0;
    
    ReadArraydata(Arr1,length);
    PrintArrayData(Arr1,length);
    
    cout << "\n***********************\n";
    cout << "Sum = " << CalculateArraySum(Arr1,length) << endl;
    cout << "Average = " << CalculateArrayAverage(Arr1, length) << endl;;
    return 0;
}

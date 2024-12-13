#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number :";
    cin >> number;
    cout << endl;

    int i = 1;

    while(i <= 10)
    {
        cout << number << " x " << i << " = " << i*number << endl;
        i++;
    }

    return 0;
}
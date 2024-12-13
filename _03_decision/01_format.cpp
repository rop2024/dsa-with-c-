#include<iostream>
using namespace std;

int main()
{
    int x; // take a number as input
    cout << "Enter a number : ";
    cin >> x;

    if(x % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    cout << "Program executed !!" << endl;

    return 0;
}
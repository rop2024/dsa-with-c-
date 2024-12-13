#include<iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter 3 numbers : ";
    cin >> x >> y >> z;
    cout << endl;

    if(x > y && x > z)
    {
        cout << x << " is largest among all" << endl;
    }
    else if(y > x && y > z)
    {
        cout << y << " is largest among all" << endl;
    }
    else
    {
        cout << z << " is largest amoung all" << endl;
    }

    return 0;
}
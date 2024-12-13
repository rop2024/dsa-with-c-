#include<iostream>
using namespace std;

int main()
{
    cout << "[1] Add 2 number" << endl << "[2] Find the largest number" << endl;
    cout << "Enter choice: ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        int x,y;
        cout << "Enter 2 number: ";
        cin >> x >> y;

        cout << "Sum :" << x+y;

        break;
    
    case 2:
        int x2, y2;
        cout << "Enter 2 number: ";
        cin >> x2 >> y2;

        if (x2 >=y2)
        {
            cout << x2 << "(x) is largest" << endl;
        }
        else
        {
            cout << y2 << "(y) is largest" << endl;
        }
        break;

    default:
        cout << "Wrong choice !!";
        break;
    }
    cout << endl << "end" << endl;

    return 0;
}
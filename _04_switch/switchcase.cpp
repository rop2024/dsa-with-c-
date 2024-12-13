#include<iostream>
using namespace std;

int main()
{

    // in switchcase each option should be unique
    int day;
    cout << "Enter day in number :";
    cin >>  day;

    switch (day)
    {
    case 0:
        cout << "Sunday";
        break;
    
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    default:
        cout << "kya input kar rha hai bhai";
        break;
    } 
}
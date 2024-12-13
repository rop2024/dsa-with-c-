#include<iostream>
using namespace std;

int main()
{
    // in cpp ' ' is termination character hence if you input more in than one string in input only one would be accepted

    string names;
    cout << "Enter name : ";
    cin >> names;
    cout << names;
    cout << endl;
    //  to get more than one strings

    // this does not work as expected
    string name;
    cout << "Enter name again : ";
    
    getline(cin, name);
    cout << name;

    return 0;
}


#include<iostream>

using namespace std;

int main()
{
    string names[4] = {"Alice", "Bob", "Charlie", "Delta"};
    
    for(string name : names)
    {
        cout << name << " ";
    }
    cout << endl;

    // this would give error because both the sides should be of same datatype
    // for(char s : names)
    // {
    //     cout << s << " ";
    // }
    // cout << endl;

    return 0;
}
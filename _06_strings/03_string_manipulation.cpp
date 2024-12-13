#include<iostream>
// if you are not including <iostream> then for string include <string>
using namespace std;

int main()
{
    string f_name = "Alice";
    string s_name = "Elizabeth";

    string full_name = f_name + s_name;
    string full_name2 = f_name.append(s_name);

    // both full_name and full_name2 works same hence the results would always be true 
    if(full_name == full_name2)
    {
        cout << "same name" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }
    
    cout << "Length of strings : " << full_name.length();
    cout << "Element as index 5: " << full_name[0];

    return 0;
}
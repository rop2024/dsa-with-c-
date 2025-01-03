#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> names = {"Alice", "Bob", "Charlie", "Delta"};

    // adding new elements at the end(push)
    names.push_back("Epsilen");
    names.push_back("Foxtrot");

    names.pop_back();

    for(int i = 0; i < names.size(); i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // to create an array
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};


    for(string car : cars)
    {
        cout << car << ' ';
    }

    cout << endl;
    // using vector libraries
    cout << "First element is : "<<cars.front()<< endl;
    cout << "Last element is : "<< cars.back() << endl;

    cout << endl;
    return 0;
}
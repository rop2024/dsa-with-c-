#include<iostream>
using namespace std;

int main()
{
    string cars[] = {"Maruti" , "Suzuki", "Tata", "Mahindra"};
    for(string car : cars)
    {
        cout << car << " ";
    }
    cout << endl;
    cout << sizeof(cars) << endl;  // returns size in bytes
    cout << sizeof(cars)/ sizeof(cars[0])<< endl;

    return 0;
}
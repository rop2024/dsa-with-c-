#include<iostream>
using namespace std;
// if we write 'using' then we dont have to write std:: every single time

int main()
{
    int x = 0;
    int y = 0;
    cout << "Enter first number: ";
    cin >> x;
    cout << endl;

    cout << "Enter second number: ";
    cin >> y;
    cout << endl;

    cout << "Sum of both is " << x + y <<endl;

    return 0;

}
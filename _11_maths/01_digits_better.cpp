#include<iostream>
#include<math.h>

using namespace std;

int digit(int number);

int main()
{
    cout << "Enter a number :";
    int number;
    cin >> number;

    int x = digit(number);

    cout << number << " has " << x << " digits";
}

int digit(int number)
{
    // reduces the complexity to constant
    return log10(number) + 1;
}
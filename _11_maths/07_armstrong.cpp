#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int number);

int main()
{
    cout << "Enter a number: ";
    int input;
    cin >> input;

    if (armstrong(input))
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}

bool armstrong(int number)
{   
    int digit = 0;
    int copy1 = number;

    // Count digits
    while(copy1 > 0)
    {
        digit++;
        copy1 = copy1 / 10;
    }

    int copy = number;
    int sum = 0;

    // Calculate the sum of each digit raised to the power of the number of digits
    while(copy > 0)
    {
        int d = copy % 10;
        sum += round(pow(d, digit));  // Use round to avoid floating-point issues
        copy = copy / 10;
    }

    // Compare sum with original number
    return sum == number;
}

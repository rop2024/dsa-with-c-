#include<iostream>

using namespace std;

int optimized_gcd(int num1,int num2);
int min(int num1, int num2);

int main()
{
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    cout << endl;

    int gcd = optimized_gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0;
}

int optimized_gcd(int num1,int num2)
{
    int minimum = min(num1, num2);

    int gcd = 1;

    for(int i = minimum; i > 0; i--)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    return gcd;
}

int min(int num1, int num2)
{
    if(num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
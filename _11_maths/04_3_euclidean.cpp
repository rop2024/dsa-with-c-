#include<iostream>
using namespace std;

int euclidean(int num1, int num2);


int main()
{
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "GCD is " << euclidean(num1, num2);

    return 0;
}

int euclidean(int num1,int num2)
{
    int gcd = 1;

    while(num1 > 0 and num2 > 0)
    {
        if(num1 > num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }

        if (num1 == 0)
        {
            return num2;
        }
        else
        {
            return num1;
        }

    }
    return gcd;
}
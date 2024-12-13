#include<iostream>
using namespace std;

int divisors(int number);

int main()
{
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {  
        sum += divisors(i);
    }
    cout << sum;
    
}

int divisors(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
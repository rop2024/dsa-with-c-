#include<iostream>
using namespace std;

int sumN(int n);

int main()
{
    cout << "Sum of first 10 natural number is : " << sumN(10);
    return 0;
}

int sumN(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else 
    {
        return n + sumN(n-1);
    }
}
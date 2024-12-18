#include<iostream>
using namespace std;

int sum(int i, int n);
int sumint = 0;

int main()
{
    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << "Sum is :" << sum(1, n);
    return 0;
}

int sum(int i, int n)
{
    if(n == i)
    {
        sumint += n;
        return sumint;
    }   
    else
    {
        sumint += i;
        i += 1;
        sum(i, n);
    }
}
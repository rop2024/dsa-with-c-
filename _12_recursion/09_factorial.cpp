#include<iostream>
using namespace std;

int factorial1(int n);
int factorial2(int n, int pro);

// for factorial 3
int facto = 1;
int factorial3(int i, int n);

int main()
{
    int n = 8;

    cout << "Result 1 : " << factorial1(n) << endl;
    cout << "Result 2 : " << factorial2(n, 1) << endl;
    cout << "Result 3 : " << factorial3(1, n) << endl;

    return 0;
}

int factorial1(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial1(n-1);
    }
}

int factorial2(int n, int pro)
{
    if(n == 1)
    {
        return pro;
    }
    else
    {
        pro *= n;
        factorial2(n-1, pro);
    }
}

int factorial3(int i, int n)
{
    if(i >= n)
    {
        return facto * i;
    }
    else
    {
        facto *= i;
        factorial3(i+1, n);
    }
}
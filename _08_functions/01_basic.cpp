#include<iostream>
using namespace std;

void hello(int n);

int main()
{
    hello(3);
}

void hello(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << "hello" << endl;
        i++;
    }
    
}

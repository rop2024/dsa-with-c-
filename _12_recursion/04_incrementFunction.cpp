#include<iostream>
using namespace std;


// functions
int printN(int i, int n); 

int main()
{
    int n = 1;
    cout << "Enter n: ";
    cin >> n;

    printN(1, n);

    return 0;
}

int printN(int i, int n)
{
    if( i > n)
    {
        return 0;
    }
    cout << i <<endl;

    printN(i+1, n);
    
}
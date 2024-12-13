#include<iostream>

using namespace std;

// i submitted one gcp code but it was not effecient hence i have to upload another

long long gcp(long long a, long long b)
{
    long long temp = 0;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    long long g = a;

    long long hcf = g / a;

    return g
}


int main()
{
    cout << "Enter two number :";
    long long a, b;
    cin >> a >> b;
    cout << gcp(a, b);
}
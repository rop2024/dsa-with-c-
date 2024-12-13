#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    int j = 0;
    while(j <= 10)
    {
        cout << j << " ";
        j++;
    }
    cout << endl;

    int k = 0;
    do
    {
        cout << k << " ";
        k++;
    }
    while(k <=10);
    cout << endl;

    return 0;

}
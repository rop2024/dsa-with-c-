#include<iostream>
using namespace std;

int printNo(int number);
int i = 1;

int main()
{
    int number = 10;

    printNo(number);
    return 0;
}


int printNo(int number)
{
    if(i <= number)
    {
        cout << i << " ";
        i++;
        printNo(number);
    }
    else
    {
        return number;
    }
}   
#include<iostream>
using namespace std;

int printNo(int number);
int printer(int max, int number);

int main()
{
    int number = 10;
    printNo(number);
    return 0;
}


int printNo(int number)
{
    int i = 1;
    printer(number, i);
    return 0;
}   

int printer(int max, int number)
{
    if((max+1) == number)
    {
        return max;
    }  
    cout << number << ' ';
    return printer(max, number+1); 
}
#include<iostream>
using namespace std;

bool sort_check(int arary[], int size);

int main()
{
    return 0;
}

bool sort_check(int array[], int size)
{
    int previous = array[0];

    for(int i = 1; i < size; i++)
    {
        if(array[i] < previous)
        {
            return false;
        }
        else
        {
            previous = array[i];
        }
    }
    return true;
}
#include<iostream>
using namespace std;

bool sort_check(int arary[], int size);

int main()
{
    int array[] = {1,2,3,4,5};
    int array2[] = {1,0,4};

    cout << "For array 1 : " << sort_check(array, 5) << endl;
    cout << "For array 2 : " << sort_check(array2, 3) << endl;
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
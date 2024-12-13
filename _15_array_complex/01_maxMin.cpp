#include<iostream>
using namespace std;

int max(int array[], int size);
int min(int array[], int size);

int main()
{
    int arr[] = {1,23,44,53,32,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    int maximum_elem = max(arr, size);
    int minimum_elem = min(arr, size);

    cout << "Max elem is : " << maximum_elem << endl;
    cout << "Min elem is : " << minimum_elem << endl;

    return 0;
}

int max(int array[], int size)
{   
    int max = array[0];
    for(int i = 0; i < size; i++)
    {
        if(max <= array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int min(int array[], int size)
{
    int min = array[0];

    for(int i = 0; i < size; i++)
    {
        if(array[i] <=min)
        {
            min = array[i];
        }
    }
    return min;
}
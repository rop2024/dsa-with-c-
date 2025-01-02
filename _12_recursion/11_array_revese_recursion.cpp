#include<iostream>
using namespace std;

int ArrayReverse(int array[], int start, int end);
void printArray(int array[], int size);

int main()
{
    int array[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(array)/sizeof(array[0]);

    cout << "Before: ";
    printArray(array, size);

    ArrayReverse(array, 0, size-1);

    printArray(array, size);
    return 0;
}

int ArrayReverse(int array[], int start, int end)
{
    if(start < end)
    {
        swap(array[start], array[end]);
        ArrayReverse(array, start+1, end-1);
    }
    
    return 0;
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
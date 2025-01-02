#include<iostream>
using namespace std;

int reverseA(int array[], int size);
void printArray(int array[], int size);

int main()
{
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);

    cout << "Array before: ";
    printArray(array, size);
    reverseA(array, size);

    return 0;
}

int reverseA(int array[], int size)
{
    int point1 = 0;
    int point2 = size - 1;

    while(point1 < point2)
    {
        swap(array[point1], array[point2]);
        point1++;
        point2--;
    }

    printArray(array, size);
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

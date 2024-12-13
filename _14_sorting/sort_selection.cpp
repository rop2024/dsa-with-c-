#include<iostream>
using namespace std;

int main()
{
    int array[] = {5,1,22,12,24};
    int size = sizeof(array)/sizeof(array[0]);

    // applying selection sort
    for(int i = 0; i < size - 1; i++)
    {
        int small = i;
        for(int j = i+1; j < size; j++)
        {
            if(array[small] > array[j])
            {
                small = j;
            }
        }
        int temp = array[small];
        array[small] = array[i];
        array[i] = temp;
    }

    for(int i = 0; i < size; i++)
    {
        cout << array[i]<< " ";
    }
    cout << endl;
}
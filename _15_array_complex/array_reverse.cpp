#include<iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    int temp[size];
    
    for(int i = 0; i < size;i++)
    {
        temp[i] = array[size - 1- i];
    }

    for(int i = 0;i < size; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}
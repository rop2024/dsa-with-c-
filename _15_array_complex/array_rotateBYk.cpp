#include<iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    int temp[size];
    int k = 0;

    cout << "how much to rotate the array: ";
    cin >> k;
    cout << endl; 

    for(int j = 1; j <= k; j++)
    {
        for(int i = 1; i < size; i++)
    {
        temp[i-1] = array[i];
    }
    temp[size-1] = array[0];
    }


    cout << "Rotated array : ";
    for(int i = 0; i< size; i++)
    {
        cout << temp[i]<< " ";
    }
    cout << endl;
}
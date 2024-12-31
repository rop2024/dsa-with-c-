#include<iostream>
using namespace std;

int removeDuplicates(int array[], int size);

int main()
{
    int array[] = {1,1,1,1,2,2,2,3,4,4,5,6,3,5};
    int size = sizeof(array) / sizeof(array[0]);

    int unique_elem = removeDuplicates(array, size);

    cout << "Number of unique elements are :" << unique_elem << endl;

    return 0;
}

int removeDuplicates(int array[], int size)
{
    // you have to return the count of unique elements

    // declare 2 variables
    int i = 0;
    for(int j = 1; j < size; j++)
    {
        if(array[i] != array[j])
        {
            i++;
            array[i] = array[j];
        }
    }
    // if both i and j does not refer to same element then update i and and array i should point towards another element

    // return i + 1
    return i + 1;
}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(int array[], int size);

int main()
{
    int array[] = {1,1,1,2,2,2,3,4,4,4,3};
    int size = sizeof(array)/sizeof(array[0]);

    int new_size = removeDuplicates(array, size);

    cout << "New size:" << new_size << endl;

    return 0;
}

int removeDuplicates(int array[], int size)
{
    set <int> set;
    for(int i = 0; i < size; i++)
    {
        set.insert(array[i]);
    }

    int k = set.size();


    
    int j = 0;
    for (int x: set)
    {
    array[j++] = x;
    }
    return k;
}
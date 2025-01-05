#include<iostream>

using namespace std;

int main()
{
    int array[] = {1,2,1,1,3,4,6,2,2,6,6,6,1};
    int size = sizeof(array)/sizeof(array[0]);

    int max = array[0];

    for(int i : array)
    {
        if(i > max)
        {
            max = i;
        }
    }

    int hash_tab[max+1] = {0};
    // in hash_tab, we have all 0, traverse through array and update 

    for(int i = 0; i < size; i++)
    {   
        hash_tab[array[i]] += 1;
    }

    int hash_size = sizeof(hash_tab)/ sizeof(hash_tab[0]);

    for(int i = 0; i < hash_size; i++)
    {
        cout << i << " -> " << hash_tab[i]<< endl;
    }

    return 0;
}
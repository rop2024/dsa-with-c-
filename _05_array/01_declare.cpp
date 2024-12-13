#include<iostream>

using namespace std;

int main()
{   
    int array[4] = {1,2,3,4};
    
    // this would print memory address of array
    cout << array << endl;
    
    for(int i = 0; i < 4; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for(int i : array)
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;

}
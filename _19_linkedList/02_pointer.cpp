// pointer stores address of any varialbe

#include<iostream>
using namespace std;

int main()
{
    int x = 2;
    int *y = &x;

    // & -> address of
    // * -> declaring that the variable would store address
    cout << y << endl;

    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);


    // print value of array using just pointer
    
    int *ptr = array;
    int i = 0;
    while(i < size)
    {
        cout << *ptr << ' ';
        ptr++;
        i++;
    }
    cout << endl;

    return 0;
}
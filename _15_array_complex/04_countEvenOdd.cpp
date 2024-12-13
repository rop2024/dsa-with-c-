#include<iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);

    int even_count = 0;
    int odd_count = 0;

    for(int i = 0; i < size; i++)
    {
        if(array[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "Total even numbers are "<<even_count << "and odd numbers are "<<odd_count<< endl;
}

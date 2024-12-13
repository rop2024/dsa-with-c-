#include<iostream>
using namespace std;

int max_2nd(int array[], int size);
int min_2nd(int array[], int size);


int main()
{   
    int array[] = {2,3,5,64,432,1,255,7,64};
    int size = sizeof(array)/sizeof(array[0]);

    cout << "2nd max element is : " << max_2nd(array, size);
    cout << "2nd min element is : " << min_2nd(array, size);

    return 0;
}


int max_2nd(int array[], int size)
{   
    int max = array[0];
    int max2 = array[0];

    for(int i = 0; i < size; i++)
    {
        if(max <= array[i])
        {
            max2 = max;
            max = array[i];
        }
        else if (array[i] >= max2 && array[i] < max)
        {
            max2 = array[i];
        }
        
    }
    return max2;
}

int min_2nd(int array[], int size)
{
    int min = array[0];
    int min2 = min;

    for(int i = 0; i < size; i++)
    {
        if(min >= array[i])
        {
            min2 = min;
            min = array[i];
        }
        else if(min2 >= array[i] && array[i] > min)
        {
            min2 = array[i];
        }
    }
    return min2;
}
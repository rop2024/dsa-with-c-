#include<iostream>
using namespace std;

void rotate(int arr[], int size);

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    rotate(array, size);
    
}

void rotate(int arr[], int size)
{
    int temp[size];
    int i;
    for( i = 1; i < size; i++){
        temp[i-1] = arr[i];
    }
    temp[size-1] = arr[0];

    for(int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

}

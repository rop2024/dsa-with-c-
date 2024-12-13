// *****
// *****
// *****
// *****
// *****

#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter height of array : ";

    do
    {
        cin >> size;
        if(size < 0 || size > 9)
        {
            cout << "Size should be between 1 and 8"<< endl;
        }
        else
        {
            break;
        }

    }while(true);

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


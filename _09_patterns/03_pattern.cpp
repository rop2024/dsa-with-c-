// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    do
    {
        cout << "Enter height: ";
        cin >> size;
        if (size >=9 || size <= 0)
        {
            cout << "height should be between 0 and 8" << endl;
        }
        else
        {
            break;
        }
    }while(true);

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
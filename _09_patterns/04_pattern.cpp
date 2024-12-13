// 1
// 22
// 333
// 4444
// 55555

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
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    do
    {
        cout << "Enter a number : ";
        cin >> size;
        if(size >=9 || size <=0)
        {
            cout << "Number should be between 1 and 8"<< endl;
        }
        else{
            break;
        }
    }while(true);


    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
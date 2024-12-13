// *****
// ****
// ***
// **
// *


#include<iostream>
using namespace std;

int main()
{
    int height;
    do
    {
        cout << "Enter height: ";
        cin >> height;

        if(height >= 9 || height <= 0)
        {
            cout << "Height should be below 9 and above 0"<< endl;
        }
        else
        {
            break;
        }
    }
    while(true);
    
    for(int i = height; i >= 1; i--)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// Input Format: N = 3
// Result: 
// A B C
// A B
// A

#include<iostream>
using namespace std;

int main()
{
    int height = 0;
    do
    {
        cout << "Enter height : ";
        cin >> height;

        if(height <= 0 || height >=9)
        {
            cout << "Height should be above 0 and below 9" << endl;
        }
        else
        {
            break;
        }
    } while (true);
    
    for(int i = height; i >= 1; i--)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            if(stars == 1)
            {
                cout << 'A' << ' ';
            }
            else
            {
                cout << char('A'+stars - 1) << ' ';
            } 
        }
        cout << endl;
    }

    return 0;
}
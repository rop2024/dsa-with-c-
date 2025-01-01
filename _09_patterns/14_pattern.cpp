// Input Format: N = 3
// Result: 
// A
// A B
// A B C

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
    
    char ch = 'A';

    //downward ladder
    for(int i = 1; i <= height; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            if(stars == 1)
            {
                cout << ch << ' ';
            }
            else
            {
                cout << char(ch+stars) << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
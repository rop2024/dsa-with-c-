//   *
// * * *
//   *

// height is 2

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

    for(int i = 1; i <= height; i++)
    {
        // upward piramid
        for(int space = 0; space <= height - i; space++)
        {
            cout << ' ';
        }

        // for stars
        for(int stars = 1; stars < i; stars++)
        {
            cout << '*';
        }
        // middle lane
        cout << '*';

        // for stars
        for(int stars = 1; stars < i; stars++)
        {
            cout << '*';
        }

        cout << endl;
    }

    for(int i = 0; i <= (height * 2); i++)
    {
        // prints a line of values
        cout << '*';
    }
    cout << endl;

    for(int i = height; i >= 1; i--)
    {
        // prints downard pyramid

        // space for 
        for(int space = 0; space <= height - i; space++)
        {
            cout << ' ';
        }

        // stars for
        for(int stars = i-1; stars > 0; stars--)
        {
            cout << '*';
        }

        // middle lane
        cout << '*';

        // stars for
        for(int stars = i-1; stars > 0; stars--)
        {
            cout << '*';
        }

        cout << endl;
    }
    return 0;
}
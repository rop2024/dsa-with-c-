//   *  
//   **
//   ***  
//   **
//   *   

// when n is 2

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
    
    int height_utl = height - 1;

    // downward ladder
    for(int i = 1; i <= height_utl; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // middle lane
    for(int i = 1; i <= height; i++)
    {
        cout << '*';
    }
    cout << endl;

    // opposite downward stairs
    for(int i = height_utl; i >= 1; i--)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
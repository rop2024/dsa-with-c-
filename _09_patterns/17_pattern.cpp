// Input Format: N = 3
// Result: 
//   A  
//  ABA 
// ABCBA


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
        // space(height - i)
        for(int space = 1; space <= (height - i); space++)
        {
            cout << " ";
        }

        // forward ladder
        for(int stars = 1; stars < i; stars++)
        {
            if(stars == 1)
            {
                cout << 'A';
            }
            else
            {
                cout << char('A'+stars-1);
            }
        }

        // middle lane
        if(i == 1)
        {
            cout << 'A';
        }
        else
        {
            cout << char('A'+i-1);
        }

        // downward lane
        for(int stars = i - 1; stars > 0; stars--)
        {
            if(stars == 1)
            {
                cout << 'A';
            }
            else
            {
                cout << char('A'+stars- 1);
            }
        }

        // new line
        cout << endl;
    }

    return 0;
}
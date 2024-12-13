// *****
//  ***
//   *


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
        // space for
        for(int space = 1; space <= height - i; space++)
        {
            cout << ' ';
        }

        // stars for
        for(int stars = i - 1; stars > 0; stars--)
        {
            cout << '*';
        }
        // middle lane
        cout << "*";

        //  stars for
         for(int stars = i - 1; stars > 0; stars--)
        {
            cout << '*';
        }

        // new line 
        cout << endl;
    }
    
    return 0;
}
//   *
//  ***
// ***** 

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
    

    for(int i = 0;i < height; i++)
    {
        // for space 1
        for(int space1 = 1; space1 <= height - i; space1++)
        {
            cout << ' ';
        }

        // for star1, it should start from 0 start then go to 1 star
        for(int star1 = 0; star1 < i; star1 ++)
        {
            cout << "*";
        }

        // for middle '*'
        cout << '*';
        
        // same as star1 
        for(int star2 = 0; star2 < i; star2++)
        {
            cout << '*';
        }

        // for space 2
        // this is not necessary
        // for(int space2 = 1; space2 <= height - i; space2++)
        // {
        //     cout << ' ';
        // }
        // cout << endl;
    }
    return 0;
}
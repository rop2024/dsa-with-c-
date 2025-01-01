// when n = 6

// 1          1
// 12        21
// 12       321
// 1234    4321
// 12345  54321
// 123456654321

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
        // downward ladder
        for(int points = 1; points <= i; points++)
        {
            cout << points;
        }

        // space = (height - i)x 2
        for(int space = 1; space <= (height - i) * 2; space++)
        {
            cout << ' ';
        }
        
        // forward ladder(without space)
        for(int points = i; points >= 1; points--)
        {
            cout << points;
        }

        // next line
        cout << endl;
    }


    return 0;
}
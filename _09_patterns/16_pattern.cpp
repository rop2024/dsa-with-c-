// Input Format: N = 3
// Result: 
// A
// B B
// C C C


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
    


    //downward ladder
    for(int i = 1; i <= height; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            if(i == 1)
            {
                cout << 'A' << ' ';
            }
            else
            {
                cout << char('A'+ i - 1)<< ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
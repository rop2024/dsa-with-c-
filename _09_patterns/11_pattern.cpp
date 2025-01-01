// 1
// 01
// 010
// 1010

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
    
    int var = 0;

    //downward ladder
    for(int i = 1; i <= height; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            if(var == 0)
            {
                var = 1;
                cout << "1";
            }
            else
            {
                var = 0;
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
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
        for(int j = 1; j <= i; j++)
        {
            cout << char('A' + i - j) << ' ';
        }
        cout << endl;
    }

    return 0;
}
// 1
// 2 3
// 4 5 6

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
    
    int var = 1;

    //downward ladder
    for(int i = 1; i <= height; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            cout << var << " ";
            var++;
        }
        cout << endl;
    }

    return 0;
}
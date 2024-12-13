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
    int height = 3;

    for(int i = 1; i < height; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            cout << '*';
        }
        cout << endl;
    }

    for(int i = 1; i < height+1; i++)
    {
        cout << '*';
    }
    cout << endl;

    for(int i = height; i > 0; i++)
    {
        for(int stars = 1; stars <= i; stars++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
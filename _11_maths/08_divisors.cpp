#include<iostream>
#include<math.h>

using namespace std;

// wrong wrong
// does not return, few values, instead of returning, the number one by one, make a function and return a list

int main()
{
    // implement stacks
    int number;
    cout << "Enter a number :";
    cin >> number;
    
    int size = sqrt(number);

    for(int i = 1; i <= size; i++)
    {
        if(number % i == 0)
        {
            cout << i << " "; 

            if(number/i != i) 
            {
                cout << i << " ";
            }
        }
    }

    
}

#include<iostream>
using namespace std;


int main()
{
    int highest_factor = 0;
    // take 2 number inputs
    cout << "Enter 2 numbers :";
    int a, b;
    cin >> a >> b;
    
    // computing more value
    int more = 0;
    if(a >= b)
    {
        more = a;
    }
    else 
    {
        more = b;
    }

    // start a for loop
    for (int i = 1; i <= more/2; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            // store the highest last factor in highest_factor
            highest_factor = i;
        }
    }
    
    // print factor
    cout << "Highest factor is " << highest_factor << endl;
}
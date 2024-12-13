#include<iostream>
using namespace std;

int digit(int number);

int main()
{
    // take input, output
    int number;
    cout << "Enter a value :";
    cin >> number;
    int answer = digit(number);
    cout << "Number of digit " << answer << endl;
}

int digit(int number)
{
    int count = 0;
    while(number > 0 )
    {
        count++;
        number = number/10;
    }
    return count;
}


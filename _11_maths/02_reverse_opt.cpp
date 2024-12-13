#include<iostream>
using namespace std;

int reverse(int number);

int main()
{
    // take input, output
    int number;
    cout << "Enter a value :";
    cin >> number;
    int answer = reverse(number);
    cout << "Reversed digit is " << answer << endl;
}

int reverse(int number)
{
    int reverse = 0;
    while(number > 0 )
    {
        int d = number % 10;
        reverse = reverse * 10 + d;
        number = number/10;
    }
    return reverse;
}


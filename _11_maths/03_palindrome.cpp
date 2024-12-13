#include<iostream>

using namespace std;

int reverse(int number);
int pallindrome(int number, int reverse);

int main()
{
    // take input, output
    int number;
    cout << "Enter a value :";
    cin >> number;
    int answer = reverse(number);
    
    if (pallindrome(number, answer) == 1)
    {
        cout << "Pallindrome number" << endl;
    }
    else
    {
        cout << "Not a pallindrome number" << endl;
    }
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

int pallindrome(int number, int reverse)
{
    if (number == reverse)
    {
        return 1;
    }
    else{
        return 0;
    }
}

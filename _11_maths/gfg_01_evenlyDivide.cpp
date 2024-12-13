// if the number is 2446 then we should check for 2446/2 2446/4 and so on and returns the count of numbers that are divisible

#include<iostream>
using namespace std;

int evenlyDivides(int n);

int main()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    int num = evenlyDivides(number);

    cout << "Number of divisibles are " << num << endl;

    return 0;
}


int evenlyDivides(int n) {
        // code here
        int count = 0;
        int copy = n;
        
        while(copy != 0)
        {
            int last_digit = copy % 10;
            

            if(last_digit != 0 && n % last_digit == 0)
            {
                count++;
            }
            
            copy = copy / 10;
        }
        return count;
    }
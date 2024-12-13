#include<iostream>
using namespace std;

int reverse(int x);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rev = reverse(num);
    
    cout << "reverse number:" << rev << endl;
}


int reverse(int x) {
        int reverse = 0;
        int negative = 0; // false

        if(x < 0)
        {
            x = x * -1;
            negative = 1; // true
        }

        // passing only positive x value
      while(x > 0)
      {
        int d = x % 10;
        reverse = reverse * 10 + d;
        x = x/10;

      } 
      if(negative == 1)
      {
        return x * -1;
      }

      return reverse; 
    }
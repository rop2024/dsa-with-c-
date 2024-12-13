#include<iostream>
#include<cmath>

using namespace std;

int gcp(int a, int b);
int lcm(int a, int b, int factor);
int main()
{   
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    int one = gcp(num1, num2);
    // factor would be gcp value

    int two = lcm(num1, num2, one);

    cout << one << endl << two;

}

int gcp(int a, int b)
{
        // set highest_common_factor = 1
        int highest_common_factor = 1;
        
        // select the more value
        int more = 1;
        if(a >= b)
        {
            more = a;
        }
        else{
            more = b;
        }

        // start a loop from 1 to more
        for(int i = 1; i <= more; i++)
        {
            if((a % i == 0) && (b % i == 0))
            {
                // store the highest factor in highest_common_factor
                highest_common_factor = i;
            }
        }
        return highest_common_factor;
        // return factor

}

int lcm(int a, int b, int factor)
{
    return ((abs(a*b))/factor);
}
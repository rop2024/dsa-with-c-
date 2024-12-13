#include<iostream>
using namespace std;

class calculator
{
    private:
        int x, y;
        float x_float, y_float;
    
    public:
        // contructors
        calculator()
        {
            x = 0;
            y = 0;
        }

        calculator(int a, int b)
        {
            x = a;
            y = b;
        }

        calculator(float a, float b)
        {
            x_float = a;
            y_float = b;
        }

        // object functions
        int sum()
        {
            return x+y;
        }

        float sum_float()
        {
            return x_float + y_float;
        }

        int diff()
        {
            return x - y;
        }

        float diff_float()
        {
            return x_float - y_float;
        }
};

int main()
{
    cout << "Enter 2 number";
    int num1, num2;
    cin >> num1 >> num2;
    calculator a(num1, num2);
    int sum = a.sum();
    int differ = a.diff();
    cout << "sum is " << sum << "and difference is " << differ << endl; 
    
}
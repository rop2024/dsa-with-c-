#include<iostream>
using namespace std;
int add(int a, int b);

int main()
{
    int x, y;
    cin >> x >> y;
    int value = add(x, y);
    cout << "added value is " << value;
}

int add(int a, int b)
{
    return a + b;

}
#include<iostream>
using namespace std;

int main()
{
    cout << "Enter your age: ";
    int age = 0;
    cin >> age;

    if(age > 17)
    {
        cout << "you are an adult"<< endl;
    }
    else 
    {
        cout << "you are not an adult"<< endl;
    }
}
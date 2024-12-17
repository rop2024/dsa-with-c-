#include<iostream>
using namespace std;

int printN(string name,int i , int number);

int main()
{
    string name;
    cout << "Enter name to print n times: ";
    cin >> name;

    int n = 0;
    cout << "Enter n :";
    cin >> n;

    int i = 1;
    printN(name,i, n);

    return 0;
}

int printN(string name,int i , int number)
{
    if(i == number)
    {
        cout << name << endl;
        return 0;
    }
    else
    {
        cout << name << endl;
        i++;
        return printN(name, i, number);
    }
    return 0;
}
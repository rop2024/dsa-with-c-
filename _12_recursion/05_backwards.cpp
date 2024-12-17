#include<iostream>
using namespace std;

void printNos(int n);

int main()
{
    int n = 0;

    cout << "Enter digit: ";
    cin >> n;

    printNos(n);

    return 0;
}

void printNos(int N) {
        // code here
        if(N == 0)
        {
            return;
        }
        cout << N << " ";
        printNos(N-1);
    }
#include<iostream>
using namespace std;

int sum(int n, int sum);

int main()
{
    int n= 0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum is : "<< sum(n, 0) << endl;

    return 0;
}

int sum(int n, int ans)
{
    if(n <= 1)
    {
        ans += 1;
        return ans;
    }
    else
    {
        ans += n;
        sum(n-1, ans);
    }

}

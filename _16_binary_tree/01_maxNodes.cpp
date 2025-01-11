// return maximum nodes that could be in height i

#include<iostream>
#include<math.h>

using namespace std;

int nodesMax(int height);

int main()
{
    int height = 0;
    cout << "Enter height : ";
    cin >> height;

    cout << "Max nodes count :" << nodesMax(height);

    return 0;
}

int nodesMax(int height)
{
    return pow(2, height - 1);
}

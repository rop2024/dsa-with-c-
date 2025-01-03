// Initialization and Access:

// Create a vector of integers with the values {10, 20, 30, 40, 50}. Access and print the third element.
// Push and Pop:

// Create an empty vector. Add the numbers 1 to 5 using push_back. Remove the last element using pop_back.
// Iterators:

// Use an iterator to print all elements of a vector.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50};

    cout << nums[2] << endl;

    vector<int> nums2;

    for(int i = 1; i <= 5; i++)
    {
        nums2.push_back(i);
    }

    for(int i : nums2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
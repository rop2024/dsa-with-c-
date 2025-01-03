// Modify Elements:

// Create a vector with values {2, 4, 6, 8, 10}. Double each element using a for loop.
// Insert and Erase:

// Create a vector with values {1, 2, 3, 4, 5}. Insert 10 at the second position and erase the fourth element.
// Sorting:

// Create a vector with random numbers. Sort it in ascending order using std::sort.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> nums = {2,4,6,8,10};

    // nums x 2
    for(int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] * 2;
    }

    for(int i : nums)
    {
        cout << i << ' ';
    }
    cout << endl;

    // insert and erase
    nums[1] = 10;

    for(int i : nums)
    {
        cout << i << ' ';
    }
    cout << endl;

    // sorting
    vector<int> random; 
    int size = 0;

    cout << "Enter total number of elements you want in array :";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        random.push_back(rand() % 100);
    }

    for(int i : random)
    {
        cout << i << ' ';
    }
    cout << endl;

    sort(random.begin(), random.end());

    for(int i : random)
    {
        cout << i << ' ';
    }
    cout << endl;


    return 0;
}
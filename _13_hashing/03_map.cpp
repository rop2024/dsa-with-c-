#include<iostream>
#include<map>

using namespace std;

int main()
{
    int array[] = {1,2,3,1,1,2,3,2,1,5,6};
    int size = sizeof(array)/sizeof(array[0]);

    map<int, int> mp;
    for(int i = 0; i < size; i++)
    {
        mp[array[i]]++;
    }

    for(auto i : mp)
    {
        cout << i.first <<" -> "<< i.second << endl;
    }


    return 0;
}
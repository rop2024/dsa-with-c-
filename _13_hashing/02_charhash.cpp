#include<iostream>
using namespace std;

int main()
{
    string str = "aacz";

    int char_hash[256] = {0};

    // making hash-table
    for(int i = 0; i < str.size(); i++)
    {
        char_hash[str[i]]++;
    }

    // print element with highest frequency
    int high_freq = char_hash[0];
    char ch;
    for(int i = 0; i < 256; i++)
    {
        if(char_hash[i] > high_freq)
        {
            high_freq = char_hash[i];
            ch = char(i);
        }
    }

    cout << "Highest freq char : " << ch << endl;

    return 0;
}
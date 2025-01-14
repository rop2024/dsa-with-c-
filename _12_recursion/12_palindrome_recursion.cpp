#include<iostream>
#include<string>

using namespace std;

void reverse(string& word, int start, int end);
bool palindrome(string& input);

int main()
{
    string inp;
    cout << "Enter a word : ";
    cin >> inp;

    bool val = palindrome(inp);

    if(val == true)
    {
        cout << "Palindrome word" << endl;
    }
    else
    {
        cout << "Not palindrome word" << endl;
    }

    return 0;
}

bool palindrome(string& input)
{
    string copy = input;
    reverse(copy, 0, copy.size()-1);

    if(copy == input)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void reverse(string& word, int start, int end)
{
    // in place reverse
    if(start<end)
    {
        swap(word[start], word[end]);
        reverse(word, start+1, end-1);
    }
}
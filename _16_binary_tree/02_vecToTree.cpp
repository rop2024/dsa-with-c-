#include<iostream>
#include<vector>

using namespace std;

// make a node struct for each element
struct Node
{
    int data;
    struct Node* right;
    struct Node* left;

    Node(int val)
    {
        data = val;
        right = left = nullptr;
    }
};

// declare a function


int main()
{
    vector<int> array = {1,2,3,4,5,6,7};

    Node* root = new Node(array[1]);

    root ->left = new Node(array[2]);
    root ->right = new Node(array[3]);

    root -> left ->left = new Node(array[4]);
    root -> left -> right = new Node(array[5]);

    root -> right -> left = new Node(array[6]);
    root -> right -> right = new Node(array[7]);

    return 0;
}

// define the function
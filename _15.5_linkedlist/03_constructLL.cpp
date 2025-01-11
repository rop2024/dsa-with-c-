class Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    Node()
    {
        this->data = 0;
        this->next = nullptr;
    }
};

#include<iostream>
#include<vector>

using namespace std;

// function thats taked vector as input and retuns head of the linked list 
Node* llconstruct(vector<int> &array);
void lltraverse(Node* head);

int main()
{
    vector<int> array = {1,2,3,4,5,6};
    Node* head = llconstruct(array);

    lltraverse(head);

    return 0;
}

Node* llconstruct(vector<int> &array)
{
    // create a linked list through and input array and return the head of linked list
    if(array.size() == 0)
    {
        return nullptr;
    }

    Node* head = new Node(array[0]);
    Node* ptr = head;

    for(int i = 1; i < int(array.size()); i++)
    {
        ptr -> next = new Node(array[i]);
        ptr = ptr -> next;
    }
    return head; 
}

void lltraverse(Node* head)
{
    Node* ptr = head;

    while(ptr -> next != nullptr)
    {
        cout << ptr -> data << ' ';
        ptr = ptr -> next;
    }
    cout << endl;
}
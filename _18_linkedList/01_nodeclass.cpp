class Node
{
    public:
    int data;
    Node *next = nullptr;

    public:
    Node(int data, Node *next)
    {
        data = data;
        next = next;
    }
    Node(int data)
    {
        data = data;
        next = nullptr;
    }

};

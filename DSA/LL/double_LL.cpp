#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data, Node *next = nullptr, Node *prev = nullptr)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    // Node(int data)
    // {
    //     this->data = data;
    //     this->next = nullptr;
    //     this->prev = nullptr;
    // }
};

Node *dll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->prev = prev;
        prev->next = temp;
        prev = temp;
    }

    return head;
};

int main()
{
    vector<int> arr = {10, 2, 3, 4};
    Node *head = dll(arr);

    cout<< head->data;

    return 0;
};
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_a_tail(Node *&head, Node *&tail, int val) // Notice the & for reference
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode; // If the list was empty, head and tail point to the new node
        return;
    }

    tail->next = newNode;
    tail = newNode; // Update the tail to point to the new node
}

void Print_Linked_List(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_a_tail(head, tail, val);
    }
    Print_Linked_List(head);

    return 0;
}
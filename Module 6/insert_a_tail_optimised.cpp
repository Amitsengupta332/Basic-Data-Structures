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

    // Node *head = NULL;
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *tail = new Node(30);

    head->next = second;
    second->next = tail;

    insert_a_tail(head, tail, 40);
    insert_a_tail(head, tail, 100);
    insert_a_tail(head, tail, 200);
    insert_a_tail(head, tail, 300);
    Print_Linked_List(head);

    return 0;
}
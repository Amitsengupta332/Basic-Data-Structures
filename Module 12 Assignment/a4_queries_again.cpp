#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->next != NULL)
            cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->prev != NULL)
            cout << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int Size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{

    int size = Size(head);
    if (idx < 0 || idx > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(val);
    Node *current = head;
    Node *previous = NULL;
    for (int i = 0; i < idx; i++)
    {
        previous = current;
        current = current->next;
    }

    newNode->next = current;
    newNode->prev = previous;

    if (previous != NULL)
    {
        previous->next = newNode;
    }
    else
    {
        head = newNode;
    }
    if (current != NULL)
    {
        current->prev = newNode;
    }
    else
    {
        tail = newNode; // Inserting at the end (empty list or tail)
    }

    print_forward(head);
    print_backward(tail);
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
         int x,v;
         cin >> x >> v;
         insert_at_any_pos(head,tail,x,v);
    }
    

    return 0;
}
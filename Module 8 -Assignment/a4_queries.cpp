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

void insert_a_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = newNode;
    }
}


 
void insert_a_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void Print_Linked_List(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_at_index(Node *&head, Node *&tail, int idx)
{

    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL)
            tail = NULL;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < idx - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        return;

    Node *delNode = temp->next;
    temp->next = delNode->next;

    if (delNode == tail)
    {
        tail = temp;
    }

    delete delNode;
}

void deleteList(Node *head)
{
    while (head)
    {
        Node *next = head->next;
        delete head;
        head = next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_a_head(head, tail, v);   
    
        }
        else if (x == 1)
        {
            insert_a_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_index(head, tail, v);
        }

        Print_Linked_List(head);
    }

    return 0;
}

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
}

void remove_duplicates(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *prev = current;
        Node *tmp = current->next;

        while (tmp != NULL)
        {
            if (tmp->val == current->val)
            {
                Node *delNode = tmp;
                prev->next = tmp->next;
                tmp = tmp->next;
                delete delNode;
            }
            else
            {
                prev = tmp;
                tmp = tmp->next;
            }
        }
        current = current->next;
    }
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

    remove_duplicates(head);
    Print_Linked_List(head);
    deleteList(head);
    return 0;
}
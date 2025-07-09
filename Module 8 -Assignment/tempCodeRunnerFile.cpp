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

    int maxVal = head->val;
    int minVal = head->val;
    Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp->val > maxVal)
        {
            maxVal = temp->val;
        }
        if (temp->val < minVal)
        {
            minVal = temp->val;
        }
        temp = temp->next;
    }

    cout << (maxVal - minVal) << endl;

    // Free the allocated memory
    temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    return 0;
}
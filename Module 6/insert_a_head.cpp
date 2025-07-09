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

void insert_a_head(Node *&head, int val)  // Notice the & for reference
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;

    insert_a_head(head, 100);
    insert_a_head(head, 200);
    insert_a_head(head, 300);
    Print_Linked_List(head);

    return 0;
}
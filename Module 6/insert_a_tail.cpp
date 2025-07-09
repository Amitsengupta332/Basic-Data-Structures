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

void insert_a_tail(Node *&head, int val)  // Notice the & for reference
{

    Node* newNode = new Node(val);
    
    if (head == NULL)
    {
        head = newNode;
        return;
    }

     Node *temp = head;

    while (temp->next != NULL)
    {
        
        temp = temp->next;
    }

    temp->next = newNode;

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
    // Node *head = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);

    // head->next = second;
    // second->next = third;


    insert_a_tail(head, 40);
    insert_a_tail(head, 100);
    insert_a_tail(head, 200);
    insert_a_tail(head, 300);
    Print_Linked_List(head);

    return 0;
}
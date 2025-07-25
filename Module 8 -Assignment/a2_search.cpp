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

int find_Index_of_x(Node *head, int x)
{
    Node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
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
    int t;
    cin >> t;
    while (t--)
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

        int x;
        cin >> x;

        cout << find_Index_of_x(head, x) << endl;

        deleteList(head);
      
    }

    return 0;
}
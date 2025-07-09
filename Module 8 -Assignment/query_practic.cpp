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

void insert_a_any_pos(Node *&head, int idx, int val) // Notice the & for reference
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_a_head(Node *&head, int val) // Notice the & for reference
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int size_linked_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
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

    int idx;
    while (cin >> idx >> val)
    {
        int sz = size_linked_list(head);
        if (idx > sz)
        {
            cout << "Invalid\n";
        }
        else if (idx == sz)
        {
            insert_a_tail(head, tail, val);
        }
        else if (idx == 0)
        {
            insert_a_head(head, val);
        }
        else
        {
            insert_a_any_pos(head, idx, val);
        }

        // cout << val << " " << idx << endl;
    }
    Print_Linked_List(head);

    return 0;
}
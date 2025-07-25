#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

Node *find_node(Node *head, string target)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == target)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    string val;
    cin >> val;
    while (val != "end")
    {
        insert_at_tail(head, tail, val);
        cin >> val;
    }

    int q;
    cin >> q;
    cin.ignore();

    Node *current = head;

    // while (q--)
    // {
    //     string line;
    //     getline(cin, line);
    //     stringstream ss(line);
    //     string cmd, addr;
    //     ss >> cmd;
    // }

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;
            Node *temp = head;
            bool found = false;

            while (temp != NULL)
            {
                if (temp->val == address)
                {
                    current = temp;
                    cout << current->val << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
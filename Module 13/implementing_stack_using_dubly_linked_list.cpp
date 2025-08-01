// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// class myStack
// {
// public:
//     Node *head = NULL;
//     Node *tail = NULL;
//     int size = 0;
//     // list<int> l;

//     void push(int val) // complexity O(1)
//     {
//         size++;
//         Node *newNode = new Node(val);
//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         tail->next = newNode;
//         newNode->prev = tail;
//         tail = newNode;
//         // l.push_back(val);
//     }

//     void pop() // complexity O(1)
//     {
//         size--;
//         Node *deleteNode = tail;
//         tail = tail->prev;
//         delete deleteNode;
//         if (tail == NULL)
//         {
//             head = NULL;
//             return;
//         }
//         tail->next = NULL;
//         // l.pop_back();
//     }

//     int top() // complexity O(1)a
//     {
//         return tail->val;
//         // return l.back();
//     }

//     int size() // complexity O(1)
//     {
//         return size;
//         // return l.size();
//     }

//     bool empty()
//     {
//          return head == NULL;
//         // return l.empty();
//     }
// };
// int main()
// {
//     myStack st;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         st.push(x);
//     }

//     while (!st.empty())
//     {
//         cout << st.top() << endl;
//         st.pop();
//     }

//     // cout << st.top() ;
//     return 0;
// }

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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (empty()) return;
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
    }

    int top()
    {
        return tail->val;
    }

    int getSize()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}

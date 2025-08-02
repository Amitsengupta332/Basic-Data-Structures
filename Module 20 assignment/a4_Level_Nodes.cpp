#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        return NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node k niye kaj kora
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children k push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}
// 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1

void level_order(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *node = q.front().first;
        int curr_level = q.front().second;
        q.pop();
        // 2. oi node k niye kaj kora
        if (curr_level == level)
        {
            cout << node->val << " ";
            found = true;
        }
        //  3. children k push kora
        if (node->left)
            q.push({node->left, curr_level + 1});
        if (node->right)
            q.push({node->right, curr_level + 1});
    }

    if (!found)
    {

        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;
    level_order(root, level);

    return 0;
}
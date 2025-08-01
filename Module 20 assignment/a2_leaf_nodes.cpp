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
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
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

        // 3. children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void collect_leaf_nodes(Node *root, vector<int> &leaves)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        leaves.push_back(root->val);
        return;
    }

    collect_leaf_nodes(root->left, leaves);
    collect_leaf_nodes(root->right, leaves);
}

int main()
{
    Node *root = input_tree();

    vector<int> leaf;
    collect_leaf_nodes(root, leaf);

    sort(leaf.begin(), leaf.end());
    reverse(leaf.begin(), leaf.end());

    for (int val : leaf)
    {
        cout << val << " ";
    }

    return 0;
}

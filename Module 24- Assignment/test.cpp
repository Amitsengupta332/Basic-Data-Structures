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
void print_left(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left != NULL)
    {

        print_left(root->left);
    }
    else
    {

        print_left(root->right);
    }
    cout << root->val << " ";
}
void print_right(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    if (root->right != NULL)
    {
        print_right(root->right);
    }
    else
    {
        print_right(root->left);
    }
}
int main()
{

    return 0;
}

/*
void print_left(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left!=NULL)
    {

      print_left(root->left);

    }
    else
    {

       print_left(root->right);
    }
     cout << root->val << " ";



}
void print_right(Node* root)
{
    if (root == NULL)
    {
         return;
    }
    cout << root->val << " ";
    if (root->right!=NULL)
    {
      print_right(root->right);

    }
    else
    {
        print_right(root->left);
    }


}
*/

/*
void traverse_outer_left(Node* root) {
if (root == NULL)
return;
if (root->left)
traverse_outer_left(root->left);
else
traverse_outer_left(root->right);
cout << root->val << " ";
}
void traverse_outer_right(Node* root) {
if (root == NULL)
return;
while (root != NULL) {
cout << root->val << " ";
if (root->right)
root = root->right;
else
root = root->left;
}
}

Md.Mominur Rahman 10:25 PM
void print_right_boundary(Node<int> *node)
{
    if (node )
    {
        cout << node->val << " ";
        if (node->left || node->right)
        {
            print_right_boundary((node->right) ? node->right : node->left);
        }
    }
    return;
}
int main()
{
    Node<int> *root;
    input_tree(root);
    print_left_boundary(root->left);
    cout << root->val << " ";
    print_right_boundary(root->right);
    return 0;
}
*/

/**
 void traverse_outer_left(Node* root) {
if (root == NULL)
return;
if (root->left)
traverse_outer_left(root->left);
else
traverse_outer_left(root->right);
cout << root->val << " ";
}
void traverse_outer_right(Node* root) {
if (root == NULL)
return;
while (root != NULL) {
cout << root->val << " ";
if (root->right)
root = root->right;
else
root = root->left;
}
}

void print_right_boundary(Node<int> *node)
{
    if (node )
    {
        cout << node->val << " ";
        if (node->left || node->right)
        {
            print_right_boundary((node->right) ? node->right : node->left);
        }
    }
    return;
}
int main()
{
    Node<int> *root;
    input_tree(root);
    print_left_boundary(root->left);
    cout << root->val << " ";
    print_right_boundary(root->right);
    return 0;
}

 */

/**
 vector<int> outer;
void make_left_outer_vector(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // Take out the value from q;
        Node *f = q.front();
        q.pop();
        outer.push_back(f->data);
        //
        if (f->left)
            q.push(f->left);
        else if (f->right)
            q.push(f->right);
    }
}
void make_right_outer_vector(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // Take out the value from q;
        Node *f = q.front();
        q.pop();
        //
        outer.push_back(f->data);
        //
        if (f->right)
            q.push(f->right);
        else if (f->left)
            q.push(f->left);
    }
}
void make_outer_vector(Node *root)
{
    outer.push_back(root->data);
    if (root->left)
        make_left_outer_vector(root->left);
    reverse(outer.begin(), outer.end());
    if (root->right)
        make_right_outer_vector(root->right);
}

 */


/**
 #include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T val;
    Node<T> *left;
    Node<T> *right;
    Node(T val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void input_tree(Node<int> *&root)
{
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node<int>(val);
    queue<Node<int> *> Q;
    if (root)
        Q.push(root);
    while (!Q.empty())
    {
        Node<int> *p = Q.front();
        Q.pop();
        int l, r;
        cin >> l >> r;
        Node<int> *left = NULL, *right = NULL;
        if (l != -1)
            left = new Node<int>(l);
        if (r != -1)
            right = new Node<int>(r);
        p->left = left;
        p->right = right;
        if (p->left)
            Q.push(p->left);
        if (p->right)
            Q.push(p->right);
    }
}
void print_left_boundary(Node<int> *node)
{
    if (node)
    {
        if (node->left || node->right)
        {
            print_left_boundary((node->left) ? node->left : node->right);
        }
        cout << node->val << " ";
    }
    return;
}
void print_right_boundary(Node<int> *node)
{
    if (node)
    {
        cout << node->val << " ";
        if (node->left || node->right)
        {
            print_right_boundary((node->right) ? node->right : node->left);
        }
    }
    return;
}
int main()
{
    Node<int> *root;
    input_tree(root);
    if (root)
    {
        print_left_boundary(root->left);
        cout << root->val << " ";
        print_right_boundary(root->right);
        return 0;
    }
}

 */



/**
void left_sub_tree_outer(Node *leftNode)
{
    if (leftNode == NULL)
    {
        return;
    }
    if (leftNode->left)
    {
        left_sub_tree_outer(leftNode->left);
    }
    else if (leftNode->right)
    {
        left_sub_tree_outer(leftNode->right);
    }
    cout << leftNode->val << " ";
}
void right_sub_tree_outer(Node *rightNode)
{
    if (rightNode == NULL)
    {
        return;
    }
    cout << rightNode->val << " ";
    if (rightNode->right)
    {
        right_sub_tree_outer(rightNode->right);
    }
    else if (rightNode->left)
    {
        right_sub_tree_outer(rightNode->left);
    }
}
int main()
{
    Node *root = input_tree();
    // level_order(root);
    if (root == NULL)
        return 0;
    left_sub_tree_outer(root->left);
    cout << root->val << " ";
    right_sub_tree_outer(root->right);
    return 0;
}
 */
/**

 */

/**
 *
 */
/**
 *
 */
/**
 *
 */

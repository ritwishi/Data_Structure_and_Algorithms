// wrong

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *left;

    node *right;

    node(int data)
    {
        this->data = data;

        this->left = NULL;

        this->right = NULL;
    }
};

void inorder(node *root, vector<int> &v1)
{
    if (root != NULL)
    {
        inorder(root->left, v1);

        v1.push_back(root->data);

        cout << root->data << " ";

        inorder(root->right, v1);
    }
}

void set_BST(node *root, vector<int> &v2)
{
    set<int> s;

    if (root != NULL)
    {
        set_BST(root->left, v2);

        s.insert(root->data);

        set_BST(root->right, v2);
    }
 
    for (int x : s)
    {
        v2.push_back(x);

        cout << x << " ";
    }
}

bool check_BST(node *root)
{
    vector<int> v1, v2;

    inorder(root, v1);

    cout << endl;

    set_BST(root, v2);

    if (v1 == v2)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(8);

    root->right = new node(20);

    root->right->left = new node(13);

    root->right->right = new node(24);

    if (check_BST(root) == true)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}

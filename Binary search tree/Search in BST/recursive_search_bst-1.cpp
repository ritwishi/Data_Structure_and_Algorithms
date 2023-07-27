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

bool search(node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }

    else if (root->data == x)
    {
        return true;
    }

    else if (root->data > x)
    {
        return search(root->left, x);
    }

    else
    {
        return search(root->right, x);
    }
}

int main()
{
    node *root = new node(15);

    root->left = new node(5);

    root->right = new node(20);

    root->left->left = new node(3);

    root->right->left = new node(18);

    root->right->left->left = new node(16);

    root->right->right = new node(80);

    int x;

    cin >> x;

    if (search(root, x) == true)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}
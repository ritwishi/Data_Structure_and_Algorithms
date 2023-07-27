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

int balanced_tree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = balanced_tree(root->left);

    if (lh == -1)
    {
        return -1;
    }

    int rh = balanced_tree(root->right);

    if (rh == -1)
    {
        return -1;
    }

    if (abs(lh - rh) > 0)
    {
        return -1;
    }

    return max(lh, rh) + 1;
}

int main()
{
    node *root = new node(18);

    root->left = new node(4);

    root->right = new node(20);

    root->right->left = new node(3);

    root->right->right = new node(70);

    if (balanced_tree(root))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}
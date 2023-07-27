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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    else
    {
        return (1 + max(height(root->left), height(root->right)));
    }
}

bool balanced_tree(node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    int lh = height(root->left);

    int rh = height(root->right);

    return (abs(lh - rh) <= 1 && balanced_tree(root->left) && balanced_tree(root->right));
}

int main()
{
    node *root = new node(18);

    root->left = new node(4);

    root->right = new node(20);

    root->right->left = new node(3);

    root->right->right = new node(70);

    cout << balanced_tree(root) << endl;

    return 0;
}
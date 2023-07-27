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

bool check_BST(node *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }

    return (root->data > min && root->data < max && check_BST(root->left, min, root->data) && check_BST(root->right, root->data, max));
}

int main()
{
    node *root = new node(10);

    root->left = new node(8);

    root->right = new node(20);

    root->right->left = new node(13);

    root->right->right = new node(24);

    int min = INT_MIN;

    int max = INT_MAX;

    if (check_BST(root, min, max) == true)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}
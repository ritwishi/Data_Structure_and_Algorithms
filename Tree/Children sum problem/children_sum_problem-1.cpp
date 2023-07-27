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

bool isCSum(node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    int sum = 0;

    if (root->left != NULL)
    {
        sum = sum + (root->left->data);
    }

    if (root->right != NULL)
    {
        sum = sum + (root->right->data);
    }

    return (sum == root->data && isCSum(root->left) && isCSum(root->right));
}

int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(12);
    root->right->left = new node(3);
    root->right->right = new node(9);

    cout << isCSum(root);

    return 0;
}
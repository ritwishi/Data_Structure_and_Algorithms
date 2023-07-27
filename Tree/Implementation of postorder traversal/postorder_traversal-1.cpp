#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;

    node *left;

    node *right;

    node(int key)
    {
        this->key = key;

        this->left = NULL;

        this->right = NULL;
    }
};

void preorder(node *root)
{
    if (root != NULL)
    {
        preorder(root->left);

        preorder(root->right);

        cout << root->key << " ";
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->right = new node(30);

    root->right->left = new node(40);

    root->right->right = new node(50);

    preorder(root);

    return 0;
}
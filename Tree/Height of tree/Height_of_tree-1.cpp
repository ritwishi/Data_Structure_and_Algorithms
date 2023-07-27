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
        return max(height(root->left), height(root->right)) + 1;
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(8);

    root->right = new node(30);

    root->right->left = new node(40);

    root->right->right = new node(50);

    root->right->right->left = new node(60);

    cout << height(root) << endl;

    return 0;
}
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

int max_bin(node *root)
{

    if (root == NULL)
    {
        return INT_MIN;
    }

    else
    {
        return max(root->data, max(max_bin(root->left), max_bin(root->right)));
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(30);

    root->right = new node(40);

    root->left->left = new node(80);

    root->left->left->right = new node(70);

    root->right->left = new node(60);

    root->right->right = new node(20);

    cout << max_bin(root) << endl;

    return 0;
}
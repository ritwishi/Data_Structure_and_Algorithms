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

    return ((height(root->left) + height(root->right)) + 1);
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->right = new node(30);

    root->left->left = new node(40);

    root->left->right = new node(50);

    root->right->right = new node(60);

    root->right->right->left = new node(70);

    root->right->right->right = new node(80);

    cout << height(root) << endl;
    ;

    return 0;
}
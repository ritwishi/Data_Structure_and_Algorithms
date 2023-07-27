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

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

node *getSuccessor(node *root)
{
    node *curr = root->right;

    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

node *delNode(node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data > x)
    {
        root->left = delNode(root->left, x);
    }

    else if (root->data < x)
    {
        root->right = delNode(root->right, x);
    }

    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;

            delete root;

            return temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root->left;

            delete root;

            return temp;
        }

        else
        {
            node *succ = getSuccessor(root);

            root->data = succ->data;

            root->right = delNode(root->right, succ->data);
        }
    }

    return root;
}

int main()
{
    node *root = new node(50);

    root->left = new node(30);

    root->right = new node(70);

    root->left->left = new node(10);

    root->left->right = new node(40);

    root->right->left = new node(60);

    root->right->left->left = new node(55);

    root->right->right = new node(80);

    int x;

    cin >> x;

    root = delNode(root, x);

    inorder(root);
}
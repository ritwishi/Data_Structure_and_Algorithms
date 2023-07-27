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

void print(node *root1)
{
    if (root1 == NULL)
    {
        return;
    }

    cout << root1->data << " ";

    print(root1->left);

    print(root1->right);
}

node *insert(node *root, int x)
{
    node *temp = new node(x);

    node *curr = root;

    node *parent = NULL;

    while (curr != NULL)
    {
        parent = curr;

        if (root->data < x)
        {
            curr = curr->right;
        }

        else if (root->data > x)
        {
            curr = curr->left;
        }

        else
        {
            return root;
        }
    }

    if (parent == NULL)
    {
        return temp;
    }

    if (parent->data < x)
    {
        parent->right = temp;
    }

    else
    {
        parent->left = temp;
    }

    return root;
}

int main()
{
    node *root = new node(10);

    root->left = new node(5);

    root->right = new node(15);

    root->right->left = new node(12);

    root->right->right = new node(18);

    int x;

    cin >> x;

    node *root1 = insert(root, x);

    print(root1);

    return 0;
}
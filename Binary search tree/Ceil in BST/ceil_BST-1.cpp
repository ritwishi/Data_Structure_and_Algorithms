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

int ceilBST(node *root, int x)
{

    int res = -1;

    while (root != NULL)
    {
        if (root->data > x)
        {
            res = root->data;

            root = root->left;
        }

        else if (root->data < x)
        {
            root = root->right;
        }

        else
        {
            return x;
        }
    }

    return res;
}

int main()
{
    node *root = new node(50);

    root->left = new node(30);

    root->right = new node(70);

    root->left->left = new node(20);

    root->left->right = new node(40);

    root->right->right = new node(80);

    root->right->left = new node(60);

    root->right->left->left = new node(55);

    root->right->left->right = new node(65);

    int x;

    cin >> x;

    cout << ceilBST(root, x) << endl;

    return 0;
}
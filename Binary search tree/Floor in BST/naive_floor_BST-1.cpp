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

int floorBST(node *root, int x)
{
    stack<int> s;

    if (root->left->data > x)
    {
        return -1;
    }

    while (root != NULL)
    {
        if (root->data > x)
        {
            root = root->left;
        }

        else if (root->data < x)
        {
            s.push(root->data);

            root = root->right;
        }

        else
        {
            return root->data;
        }
    }

    return s.top();
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

    cout << floorBST(root, x) << endl;

    return 0;
}
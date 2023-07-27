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

void inorder(node *root, vector<int> &v1)
{
    if (root != NULL)
    {
        inorder(root->left, v1);

        v1.push_back(root->data);

        cout << root->data << " ";

        inorder(root->right, v1);
    }
}



bool check_BST(node *root)
{
    vector<int> v1, v2;

    inorder(root, v1);

    v2 = v1;

    sort(v2.begin(), v2.end());

    if (v1 == v2)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(8);

    root->right = new node(20);

    root->right->left = new node(13);

    root->right->right = new node(24);

    if (check_BST(root) == true)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}
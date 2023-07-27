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

void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";

        preorder(root->left);

        preorder(root->right);
    }
}

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

int preIndex = 0;

node *cTree(int in[], int pre[], int is, int ie)
{
    if (is > ie)
    {
        return NULL;
    }

    node *root = new node(pre[preIndex++]);

    int inIndex;

    for (int i = is; i <= ie; i++)
    {
        if (in[i] == root->data)
        {
            inIndex = i;
            break;
        }
    }

    root->left = cTree(in, pre, is, inIndex - 1);
    root->right = cTree(in, pre, inIndex + 1, ie);

    return root;
}

int main()
{
    int n;

    cin >> n;

    int in[n];

    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }

    int m;

    cin >> m;

    int pre[m];

    for (int j = 0; j < m; j++)
    {
        cin >> pre[j];
    }

    node *root = cTree(in, pre, 0, n - 1);

    inorder(root);

    cout << endl;

    preorder(root);
}
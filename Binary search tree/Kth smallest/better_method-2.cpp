#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    int lcount;

    node *left;

    node *right;

    node(int data)
    {
        this->data = data;

        this->lcount = 0;

        this->left = NULL;

        this->right = NULL;
    }
};

node *insert(node *root, int x)
{
    if (root == NULL)
    {
        return new node(x);
    }

    if (root->data > x)
    {
        root->left = insert(root->left, x);

        root->lcount++;
    }

    else if (root->data < x)
    {
        root->right = insert(root->right, x);
    }

    return root;
}

node *kth_smallest(node *root, int k)
{
    if (root == NULL)
    {
        return NULL;
    }

    int count = root->lcount + 1;

    if (count == k)
    {
        return root;
    }

    else if (count > k)
    {
        return kth_smallest(root->left, k);
    }

    else
    {
        return kth_smallest(root->right, k - count);
    }
}

int main()
{
    node *root = NULL;

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int x : arr)
    {
        root = insert(root, x);
    }

    int k;

    cin >> k;

    node *res = kth_smallest(root, k);

    if (res == NULL)
    {
        cout << "There are less than k nodes in the BST";
    }
    else
    {
        cout << "K-th Smallest Element is " << res->data;
    }
    return 0;
}
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

void inorder(node *root, vector<int> &v)
{
    if (root != NULL)
    {
        inorder(root->left, v);

        v.push_back(root->data);

        inorder(root->right, v);
    }
}

void pair_sum(node *root, int x)
{
    vector<int> v;

    inorder(root, v);

    int n = v.size();

    int arr[n];

    std::copy(v.begin(), v.end(), arr);

    int start = 0;

    int end = n - 1;

    while (start < end)
    {
        if (arr[start] + arr[end] > x)
        {
            end--;
        }

        else if (arr[start] + arr[end] < x)
        {
            start++;
        }

        else
        {
            cout << "yes" << endl;
            return;
        }
    }

    cout << "no" << endl;
    return;
}

int main()
{
    node *root = new node(10);

    root->left = new node(8);

    root->left->left = new node(4);

    root->left->right = new node(9);

    root->right = new node(20);

    root->right->left = new node(11);

    root->right->right = new node(30);

    root->right->right->left = new node(25);

    int x;

    cin >> x;

    pair_sum(root, x);

    return 0;
}
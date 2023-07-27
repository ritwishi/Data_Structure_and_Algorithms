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

void print_k_dis(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        cout << root->data << " ";
    }

    else
    {
        print_k_dis(root->left, k - 1);

        print_k_dis(root->right, k - 1);
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->right = new node(30);

    root->left->left = new node(40);

    root->left->right = new node(50);

    root->right->right = new node(70);

    int k;

    cin >> k;

    print_k_dis(root, k);

    return 0;
}
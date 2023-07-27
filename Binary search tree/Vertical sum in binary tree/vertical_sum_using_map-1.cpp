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

void v_sum(node *root, int hd, map<int, int> &mp)
{
    if (root == NULL)
    {
        return;
    }

    v_sum(root->left, hd - 1, mp);

    mp[hd] = mp[hd] + root->data;

    v_sum(root->right, hd + 1, mp);
}

void v_sum_r(node *root)
{
    map<int, int> mp;

    v_sum(root, 0, mp);

    for (auto x : mp)
    {
        cout << x.second << " ";
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->left->left = new node(30);

    root->left->right = new node(40);

    root->right = new node(50);

    v_sum_r(root);

    return 0;
}
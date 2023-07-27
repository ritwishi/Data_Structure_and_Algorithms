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

void v_traversal(node *root)
{
    map<int, vector<int>> mp;

    queue<pair<node *, int>> q;

    q.push({root, 0});

    while (q.empty() == false)
    {
        auto it = q.front();

        node *curr = it.first;

        int hd = it.second;

        mp[hd].push_back(curr->data);

        q.pop();

        if (curr->left != NULL)
        {
            q.push({curr->left, hd - 1});
        }

        if (curr->right != NULL)
        {
            q.push({curr->right, hd + 1});
        }
    }

    for (auto x : mp)
    {
        for (auto y : x.second)
        {
            cout << y << " ";
        }

        cout << endl;
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->left->left = new node(40);

    root->left->right = new node(50);

    root->right = new node(30);

    v_traversal(root);

    return 0;
}
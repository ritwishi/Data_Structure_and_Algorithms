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

void spiral_print(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;

    bool reverse = false;

    stack<int> s;

    q.push(root);

    while (q.empty() == false)
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            node *curr = q.front();
            q.pop();

            if (reverse)
            {
                s.push(curr->data);
            }

            else
            {
                cout << curr->data << " ";
            }

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }

            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }

        if (reverse)
        {
            while (s.empty() == false)
            {
                cout << s.top() << " ";
                s.pop();
            }
        }

        reverse = !reverse;
    }
}

int main()
{
    node *root = new node(1);

    root->left = new node(2);

    root->right = new node(3);

    root->left->left = new node(4);

    root->left->right = new node(5);

    root->left->left->left = new node(8);

    root->left->left->right = new node(9);

    root->right->left = new node(6);

    root->right->left->left = new node(10);

    root->right->right = new node(7);

    spiral_print(root);
}
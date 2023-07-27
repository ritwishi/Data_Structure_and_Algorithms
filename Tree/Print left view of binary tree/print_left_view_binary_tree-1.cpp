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

void print_left(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;

    q.push(root);

    while (q.empty() == false)
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            node *curr = q.front();

            q.pop();

            if (i == 0)
            {
                cout << curr->data << " ";

                if (curr->left != NULL)
                {
                    q.push(curr->left);
                }

                if (curr->right != NULL)
                {
                    q.push(curr->right);
                }
            }
        }
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->right = new node(30);

    root->right->right = new node(60);

    root->left->left = new node(40);

    root->left->right = new node(50);

    print_left(root);

    return 0;
}
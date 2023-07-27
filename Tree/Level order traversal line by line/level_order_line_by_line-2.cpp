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

void level_order_line(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;

    q.push(root);

    while (q.empty() == false)
    {
        int count = q.size();

        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();

            q.pop();

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

        cout << endl;
    }
}

int main()
{
    node *root = new node(10);

    root->left = new node(20);

    root->right = new node(30);

    root->left->left = new node(40);

    root->left->right = new node(50);

    root->right->right = new node(60);

    root->right->right->left = new node(70);

    root->right->right->right = new node(80);

    level_order_line(root);

    return 0;
}
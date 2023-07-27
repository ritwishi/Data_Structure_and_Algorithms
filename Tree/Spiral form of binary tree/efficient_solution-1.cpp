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

    stack<node *> s1;
    stack<node *> s2;

    s1.push(root);

    while (s1.empty() == false || s2.empty() == false)
    {
        while (s1.empty() == false)
        {
            node *curr = s1.top();
            s1.pop();

            cout << curr->data << " ";

            if (curr->left != NULL)
            {
                s2.push(curr->left);
            }

            if (curr->right != NULL)
            {
                s2.push(curr->right);
            }
        }

        while (s2.empty() == false)
        {
            node *curr = s2.top();
            s2.pop();

            cout << curr->data << " ";

            if (curr->right != NULL)
            {
                s1.push(curr->right);
            }

            if (curr->left != NULL)
            {
                s1.push(curr->left);
            }
        }
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
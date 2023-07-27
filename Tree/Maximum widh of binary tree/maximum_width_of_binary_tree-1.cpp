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

int max_width(node *root)
{
    int res=0;

    queue<node *> q;

    q.push(root);

    while (q.empty() == false)
    {
        int count = q.size();

        res=max(res,count);

        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();

            q.pop();

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

    return res;
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

    cout<<max_width(root)<<endl;

    return 0;
}
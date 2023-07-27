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

void printlist(node *head)
{
    node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";

        curr = curr->right;
    }

    cout << endl;
}

node *BTToDLL(node *root)
{
    static node *prev = NULL;
    
    if (root == NULL)
    {
        return NULL;
    }

    node *head = BTToDLL(root->left);

    if (prev == NULL)
    {
        head = root;
    }

    else
    {
        root->left = prev;

        prev->right = root;
    }

    prev = root;

    BTToDLL(root->right);

    return head;
}
int main()
{
    node *root = new node(10);

    root->left = new node(5);

    root->right = new node(20);

    root->right->left = new node(30);

    root->right->right = new node(35);

    node *head = BTToDLL(root);

    printlist(head);

    return 0;
}
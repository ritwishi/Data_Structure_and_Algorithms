#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;

     node *left;

     node *right;

    node(int data)
    {
        this->data=data;

        this->left=NULL;

        this->right=NULL;
    }
};

void kth_smallest(node *root,int k,int &count)
{
    if(root!=NULL)
    {
        kth_smallest(root->left,k,count);

    count++;

    if(count==k)
    {
        cout<<root->data;

        return;
    }

    kth_smallest(root->right,k,count);
    }
}

int main()
{
    node *root=new node(50);

    root->left=new node(20);

    root->left->left=new node(10);

    root->left->right=new node(40);

    root->right=new node(100);

    root->right->left=new node(70);

    root->right->left->left=new node(60);

    root->right->left->right=new node(80);

    root->right->right=new node(120);

    int k;

    cin>>k;

    int count=0;

    kth_smallest(root,k,count);

    return 0;

}
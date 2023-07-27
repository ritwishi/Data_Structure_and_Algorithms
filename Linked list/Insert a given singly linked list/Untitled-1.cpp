#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *next;

    node(int data)
    {
        this->data=data;

        this->next=NULL;
    }
};

void print(node *head)
{
    node *curr=head;

    while(curr!=NULL)
    {
        cout<<curr->data<<" ";

        curr=curr->next;
    }
}

node *insert_pos(node *head,int x,int pos)
{
    node *curr=new node(x);
    
    node *temp=head;

    node *prev=temp;

    node *fast=temp->next;

    if(pos==1)
    {
        curr->next=head;
        return curr;
    }

    for(int i=0;i<pos-2 && temp!=NULL;i++)
    {
        temp = temp->next;

       
    }

    if(temp==NULL)
    {
        return head;
    }

    cout<<"hey"<<endl;

    cout<<curr->data<<endl;
    cout<<prev->data<<endl;
    cout<<fast->data<<endl;

    curr->next=fast;


    prev->next=curr;

    return head;
}

int main()
{
    node *head=new node(10);

    head->next=new node(30);

    head->next->next=new node(50);

    head->next->next->next=new node(70);

    print(head);

    cout<<endl;

    int x;

    cin>>x;

    int pos;

    cin>>pos;

   head= insert_pos(head,x,pos);

   print(head);

   return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    node *next;

    node(int data)
    {
        this->data = data;

        this->next = NULL;
    }
};

void print(node *head)
{
    node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";

        curr = curr->next;
    }
}

node *insert_pos(node *head, int x)
{
    	node *temp1=head;
	
	int count=0;
	
	while(temp1!=NULL)
	{
	    count++;
	    
	    temp1=temp1->next;
	}

    cout<<count<<endl;
	
	int mid=0;
	
	if(count%2==0)
	{
	    mid=count/2;
	}
	else
	{
	    mid=count/2+1;
	}

    int pos=mid+1;
	
	node *curr=new node(x);
	
	node *temp=head;
	
	if(pos==1)
	{
	    curr->next=head;
	    
	    return curr;
	}
	
	
	
	for(int i=0;i<pos-2&&temp!=NULL;i++)
	{
	    temp=temp->next;
	}
	
	if(temp==NULL)
	{
	    return head;
	}
	
	curr->next=temp->next;
	
	temp->next=curr;
	
	return head;
}

int main()
{
    node *head = new node(664);

    head->next = new node(489);


    print(head);

    cout << endl;

    int x;

    cin >> x;


    head = insert_pos(head, x);

    print(head);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node * next;
};

node * newnode(int data)
{
	node * temp=new node;
	temp->data=data;
	temp->next=NULL;
	
	return temp;
}

void recursiveReverse(struct node** head_ref)
{
    node* first;
    node* rem;
    if(*head_ref == NULL)
    return ;
    
    first=*head_ref;
    rem=first->next;
    if(rem==NULL)
    return;
    
    recursiveReverse(&rem);
    first->next->next=first;
    
    first->next=NULL;
    
    *head_ref=rem;
}

int main()
{
	node * head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	recursiveReverse(&head);
	
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	
}

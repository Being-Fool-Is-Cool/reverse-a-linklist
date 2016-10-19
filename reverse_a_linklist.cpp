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

void reverse(struct node** head_ref)
{
    struct node* prev   = NULL;
    struct node* current = *head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

int main()
{
	node * head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	reverse(&head);
	//printList(head);
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	
}

//Reversing the list in S.L.L using recursive function
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=0, *temp=0;
void create()
{
	struct node *newnode=NULL;
	int n,i;
	printf("\nEnter no. of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->link=newnode;
			temp=newnode;
		}
	}
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
struct node *Reverse(struct node*head)
{
	if(head==NULL || head->link==NULL)
	return head;
	struct node *newhead = Reverse(head->link);
	head->link->link=head;
	head->link=NULL;
	return newhead;
}
int main()
{
	create();
	display();
	head=Reverse(head);
	printf("\nAfter Reversing:");
	display();
	return 0;
}

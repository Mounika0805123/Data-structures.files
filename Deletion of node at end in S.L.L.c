//Deletion of node at end in S.L.L
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
int main()
{
	create();
	struct node *prevnode=0;
	display();
	temp=head;
	while(temp->link!=0)
	{
		prevnode=temp;
		temp=temp->link;
	}
	free(temp);
	prevnode->link=0;
	printf("\nAfter deleting:");
	display();
	return 0;
}

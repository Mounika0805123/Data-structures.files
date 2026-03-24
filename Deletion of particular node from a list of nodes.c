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
	int i,pos;
	printf("\nEnter position:");
	scanf("%d",&pos);
	temp=head;
	if(head==NULL)
	{
		printf("\nList is empty");
		
	}
	else if(pos==1)
	{
		head=temp->link;
		free(temp);
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
	}
	prevnode=temp->link;
	temp->link=prevnode->link;
	prevnode->link=0;
	free(prevnode);
	display();
	return 0;
}

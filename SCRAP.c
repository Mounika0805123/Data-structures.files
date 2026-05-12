//Inserting a node at a particular position in S.L.L
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
	do
}
int main()
{
	create();
	display();
		struct node *enode=0;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter newly created node data:");
	scanf("%d",&enode->data);
	enode->link=0;
	if(head==0)
	{
		head=temp=enode;
		temp->link=enode;
	}
	else
	{
		enode->link=head;
		head=enode;
		temp->link=head;
	}
display();
    return 0;
}


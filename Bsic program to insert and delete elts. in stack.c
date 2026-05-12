#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
	int a;
	if(top==MAX-1)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter Element:");
		scanf("%d",&a);
		top++;
		stack[top]=a;
	}
}
void pop()
{
	int temp;
	if(top==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		temp=stack[top];
		printf("\nThe Top Element is:%d",temp);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\nThe Top most element is:%d",stack[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}
int main()
{
	int choice,ch=1;
	while(ch)
	{
		printf("\n1.push()\n2.pop()\n3.peek()\n4.display()");
		printf("\nEnter your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
			    pop();
				break;
			case 3:
			peek();
			break;
			case 4:
			display();
			break;
			default:
			printf("\nInvalid option");		
		}
		printf("\nDo you Another option:");
		scanf("%d",&ch);
	}
	return 0;
}

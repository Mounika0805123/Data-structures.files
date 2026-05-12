#include<stdio.h>
#include<stdio.h>
#define MAXSIZE 500
void bubblesort(int arr[],int maxsize);
int arr[n],n;
int main()
{
	int i;
	printf("\nhow many arrays you want to sort:");
	scanf("%d",&n);
	printf("\nenter the values one by one:");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %i:"i);
		scanf("%d",&arr[i]);
	}
	printf("\nArray before sorting:\n");
	for(i=0;i<n;i++)
	printf("[%i]",arr[i]);
	printf("\n");
	bubblesort(arr,n);
	printf("\nAfter sorting:\n");
	for(i=0;i<n;i++)
	printf("[%i]",arr[i]);
}
void bubblesort(int arr[],int n)
{
	int i,j,temp;
}
for(i=0;i<n-1;i++)
{
	for(j=i;j<n;j++)
	{
	if(arr[i]>arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
}
}

#include<stdio.h>
struct student
{
	int marks;
	
};
 int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter student %d marks: ",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
		
	}
	avg=(float)total/n;
	printf("total marks=%d\naverage=%f",total,avg);
	return 0;
}

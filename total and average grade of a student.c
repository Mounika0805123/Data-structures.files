#include<stdio.h>
int main()
{
	int maths,phy,dld,cp,bi,total;
	float avg;
	printf("Enter 5 subjects marks:");
	scanf("%d%d%d%d%d",&maths,&phy,&dld,&cp,&bi);
	total=(maths+phy+dld+cp+bi);
	avg=(total)/5.0;
	printf("Total Marks are:%d",total);
	printf("\nAverage:%.2f",avg);
	return 0;
}

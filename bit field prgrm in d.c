#include<stdio.h>
struct time
{
	unsigned int h : 5;
	unsigned int m : 6;
	unsigned int s : 6;
};
int main()
{
	struct time t;
	unsigned int hh,mm,ss;
	
	printf("enter time in hh mm ss format: ");
	scanf("%u %u %u  ",&hh, &mm, &ss);
	t.h=hh;
	t.m=mm;
	t.s=ss;
	printf("  \n %d hh: %d mm: %d ss",t.h,t.m,t.s);
	return 0;
}

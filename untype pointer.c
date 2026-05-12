#include<stdio.h>
int main()
{
	int a=10;
	float b=3.26;
	char c='v';
	void *ptr;
	ptr=&a;
	printf("ptr pointer value:%d\n",*(int*)ptr);
	ptr=&b;
	printf("ptr pointing value:%f\n",*(float*)ptr);
	ptr=&c;
	printf("ptr pointing value:%c\n",*(char*)ptr);
	return 0;
}

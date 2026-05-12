#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr=&ptr;
	printf("value of a is:%d\n",a);
	printf("adress of a :%x\n",&a);
	printf("value of ptr:%x\n",ptr);
	printf("adress of ptr:%x\n",&ptr);
	printf("ptr pointing value:%d\n",*ptr);
	printf("value of dptr:%x\n",dptr);
	printf("adress of dptr:%x\n",&dptr);
	printf("dptr pointing value:%d\n",**dptr);
	return 0;
}

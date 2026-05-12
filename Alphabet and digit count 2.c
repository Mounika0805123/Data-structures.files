#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i,l=0,u=0,v=0,c=0,d=0,s=0;
	printf("Enter any string:");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			u++;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			l++;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		a[i]= tolower(a[i]);
		if(a[i]=='a' || a[i]=='e' || a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			v++;
		}
		else if(a[i]>=0 && a[i]<=9)
		{
			d++;
		}
		else if(a[i]==' ')
		{
			s++;
		}
		else
		{
			c++;
		}
	}
	printf("uppercase count\n:%d",u);
	printf("lowercase count\n:%d",l);
	printf("vowel count\n:%d",v);
	printf("consonant count:\n%d",c);
	printf("digit count:\n%d",d);
	printf("space count:\n%d",s);
	return 0;
}

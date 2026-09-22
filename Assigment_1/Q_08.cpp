#include<stdio.h>
int main()
{
	int s,a,b,c,d,e,f;
	printf("enter s = ");
	scanf("%d", &s);

	a = s /60;
	b = s%60;

	printf(" this is sec= %d\n",b);
	
	c=a/60;
	d = a%60;	
		printf("this is min= %d\n",d);
		
	e=c/24;
	f=c%24;
	printf(" this is hours =  %d\n",f);
	printf("this is day =  %d",e);

}

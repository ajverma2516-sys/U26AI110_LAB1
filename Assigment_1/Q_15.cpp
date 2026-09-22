#include<stdio.h>
int main()
{
   float m,p,c,h,e,t,a;
   printf("enter math number = ");
   scanf("%f",&m);
   printf("enter physics number = ");
   scanf("%f",&p);
   printf("enter chemistry number = ");
   scanf("%f",&c);
   printf("enter hindi number = ");
   scanf("%f",&h);
   printf("enter english number = ");
   scanf("%f",&e);
	
	t=(m+p+c+h+e)/5;
	
	if(t>=80)
	{
		printf("first division");
		
	}
	
	else if(t>=60)
	{
		printf("secnod division");
		
	}
	else if(t>=33)
	{
		printf("third division");
		
	}
	else
	{
		printf("faill");
	}
	
	
}

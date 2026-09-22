#include<stdio.h>
int main()
{
	int s,m,h,a,b;
	printf("enter sec = ");
	scanf("%d", &s);

	a=s/60;
	s=s%60;
	h= a/60;
	m= a%60;
	
	
	
	
	printf("time= %d : %d : %d",h,m,s);
	
	
	
	
	
	
}

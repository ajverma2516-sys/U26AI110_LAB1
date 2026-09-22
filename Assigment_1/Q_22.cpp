#include <stdio.h>
int main ()
{
	int i,n;
	printf("enter number = ");
	scanf("%d",&n);
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	
		
	}
	
	printf("%d", fact);
	
	
	
}

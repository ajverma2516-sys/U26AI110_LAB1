#include<stdio.h>
#include<math.h>
int main ()
{
	int y,x,n;
	printf("enter x = ");
	scanf("%d",&x);
	printf("enter n = ");
	scanf("%d",&n);
	if(n == 1)
	{  y = 1+x;
		printf("y = %d", y);
	}
	else if (n==2)
	{  y = 1+x/n;
		printf("y = %d",y);
	}
	
	else if (n == 3)
	{
		y= 1+pow(x,n);
		printf("y = %d",y);
	}
	if( n>3 || n<1  )
{
	y= 1+ x*n;
	printf("y = %d",y);
	}	
}

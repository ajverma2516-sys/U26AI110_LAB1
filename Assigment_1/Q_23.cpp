#include<stdio.h>
int main ()
{
	int a,n,ans=1;
	printf ("enter number = ");
	scanf("%d",&a);
	printf("power = ");
	scanf("%d",&n);
	  
	for( int i=1;i<=n;i++)
	{
      ans = ans*a;

}
	printf("%d",ans);
}

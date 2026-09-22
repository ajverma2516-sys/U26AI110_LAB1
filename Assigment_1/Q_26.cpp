#include<stdio.h>
int main ()
{
 int i, n,evensum = 0,oddsum = 0;
 printf("enter number = ");
 scanf("%d",&n);
  	
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
	evensum=evensum+i;
	}
	else{
		
		oddsum += i;
	}
	
}
/*//if(n%2 == 0){
//	printf("%d",evensum);
//}else{
	printf("%d",oddsum);*/
printf("even sum  %d oddsum  %d",evensum,oddsum);
}



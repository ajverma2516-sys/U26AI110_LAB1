#include<stdio.h>
int main()
{

float a,b,c;
 printf("enter number = ");
 scanf("%f %f %f",&a,&b,&c);
 if(a>=b && a>=c)
 {
 	printf("max num = %.2f",a);
 	
 }
 else if(b>=a && b>=c)
 {
 	printf("max num = %.2f",b);
 	
 }
 else if(c>=a && c>=b)
{
	printf("max num = %.2f",c);
 } 
 
 
 
}

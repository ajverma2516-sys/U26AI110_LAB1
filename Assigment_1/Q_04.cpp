#include<stdio.h>
int main()
{ 
 float f,c,d;
 printf("enter f = ");
 scanf("%f", &f);
 
 c= (f-32)*5/9;
 printf(" c =  %.2f\n",c);
 printf(" enter c = ");
 scanf("%f", &c);
 f= (c*9/5)+32;
 printf("f = %.2f", f);
	
	
}

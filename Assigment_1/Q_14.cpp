#include<stdio.h>
int main ()
{
	
	char a;
	printf("enter =  ");
	scanf("%c",&a);
	if(a>='A' &&  a<='Z' )
	printf("this is capital latter");
    else if(a>='a' && a<='z')
    {
    	printf("this is small latter");
    	
	}
    else if(a>='0' && a<='9')
    {
    	printf("this is number");
	}







}

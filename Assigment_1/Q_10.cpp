#include<stdio.h>
int main()
{   
float m,p,c,e,cm;
printf("enter m = ");
scanf("%f", &m);
printf("enter p = ");
scanf("%f",&p);
printf("enter c = ");
scanf("%f", &c);
printf("enter e = ");
scanf("%f", &e);
cm= m/2+p/2+c/2+e;


if(e>100 || m>200 ||p>200||c>200){
	printf("not vaild");
}

else
{
	printf("cm = %.2f",cm);
	  
}

return 0;
}





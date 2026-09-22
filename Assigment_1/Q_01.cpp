#include<stdio.h>
int main()
{
	float principle, rate, time, si,total;
	printf(" p = ");
	scanf("%f", &principle);
	printf("r = ");
	scanf("%f", &rate);
	printf("t = ");
	scanf("%f", &time);
	si = (principle*rate*time)/100;
	
	printf("si = %.2f\n", si);
	total = si+principle;
	printf("total princepal = %.2f", total);
	
	
	
}

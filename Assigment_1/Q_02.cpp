#include<stdio.h>
int main()
{
	float English;
    float Hindi;
    float Math;
    float Physics;
    float Chemistry;
	printf("Enter your English number = ");
	scanf("%f",&English);
	printf("Enter your Hindi number = ");
	scanf("%f",&Hindi);
	printf("Enter your Math  number = ");
	scanf("%f",&Math);
	printf("Enter your Physics number = ");
	scanf("%f",&Physics);
	printf("Enter your Chemistry numbern = ");
	scanf("%f",&Chemistry);
	float total_percentage = ((English+Hindi+Math+Physics+Chemistry)*100)/500;
	printf("your total percentage = %.2f", total_percentage);
	
	
}


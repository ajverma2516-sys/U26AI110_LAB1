#include<stdio.h>
int main ()
{
char ch;
int a,b;
  printf("what you want = ");
  scanf("%c",&ch);
 printf("enter the calculation: ");
 scanf("%d  %d",&a,&b);
 switch(ch){
 	case '+': printf("%d",a+b);
 	          break;
 	case '-': printf("%d",a-b);
 	         break;
	case '*': printf("%d",a*b);
	          break;
	case '/': 
	          
 	         
 	
 	if(b!=0){
 		printf("%d",a/b);
	 }
	 else{
	 printf("Zero sae divide karke nhi dunga");}
	 break;
 	
 		default : printf("not vaild");
 	
 }
	
	
}

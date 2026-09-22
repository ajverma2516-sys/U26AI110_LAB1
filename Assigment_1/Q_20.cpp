#include<stdio.h>
int main ()
{
int ch;
int a,b;
  printf("what you want 1 is for +, 2 is for -, 3 is for *, 4 is for / = ");
  scanf("%d",&ch);
 printf("enter two number = ");
 scanf("%d %d",&a,&b);
 switch(ch){
 	case 1: printf(" sum = %d",a+b);
 	          break;
 	case 2: printf("sub = %d",a-b);
 	         break;
	case 3: printf(" mul= %d",a*b);
	          break;
	case 4: 
	          
 	         
 	
 	if(b!=0){
 		printf(" div= %d",a/b);
	 }
	 else{
	 printf("Zero sae divide karke nhi dunga");}
	 break;
 	
 		default : printf("not vaild");
 	
 }
	
	
}

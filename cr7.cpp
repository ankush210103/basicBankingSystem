#include<stdio.h>


int main(){
	
   int num1;
   int num2;
   int opt;
   
   printf("Entre First number : ");
   scanf("%d",&num1);
   printf("Entre Second number : ");
   scanf("%d",&num2);
   printf("\n");
    printf("\n");
    printf("Entre 1 for addition\n ");
     printf("\n");
     printf("\n");
    printf("Entre 2 for Multiplication\n");
     printf("\n");
	  printf("\n");
    printf("Entre 3 for Division\n");
     printf("\n");
      printf("\n");
    printf("Entre 4 for Subtraction\n ");
    printf("\n"); printf("\n");
   printf("Entre the operation you want to perform : ");
   scanf("%d",&opt);
   
   printf("\n");
   
   
   switch(opt){
   	
   	case 1: 
   	printf("Sum is %d", num1+num2);
   	break;
   	
   	case 2:
   	printf("Multiplication is %d", num1*num2);
   	break;
   	
   	case 3:
   		printf("Division is %d",num1/num2);
   		break;
   		
   	case 4:	
   	printf("Subtraction is %d", num1-num2);
   	break;
   	
   	default :
   		printf("invalid operation");
   		break;
   	
   	
   	
   	
   	
   	
   	
   }
	
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

       struct user{
       	char ac[50];
       	char phone[50];
       	char password[50];
       	float balance;
       	
	   };
    

   
   int main(){
   	
   	     int opt;
   	     FILE *fp;
   	     char filename[50];
   	   struct user usr;
   	   char phone[50];
   	   char pword[50];
   	   float amount;
   	   int choice;
   	  char count = 'y'; 
   	  printf("\nWhat do you want to do?\n\n");
   	   printf("1. Register an account\n");
   	   printf("2. Login to an account\n\n");
      
        printf("\tEntre your choice : ");
        scanf("%d",&opt);
       
       
       switch(opt){
       	
       	case 1:
       		
       		system("cls");
       		printf("\nEntre your account number : ");
       		scanf("%s",&usr.ac);
       	printf("\nEntre your phone number :");
       	scanf("%s",usr.phone);
       	printf("\nEntre your new password : ");
       	scanf("%d",&usr.password);
       	usr.balance = 0;
       	strcpy(filename,usr.phone);
       	
       	fp = fopen(strcat(filename,".dat"),"w");
       	
       	fwrite(&usr,sizeof(struct user),1,fp);
       	
       	
       	if(fwrite != 0){
       		printf("\nAccount registured succesfully");
		   }else{
		   	printf("\nSomething went wrong try again");
		   }
		   fclose(fp);
		   break;
		   
		   case 2:
		   	system("cls");
		   	printf("\nPlease entre your phone number : ");
		   	scanf("%s",&phone);
		   	printf("\nEntre your password : ");
		   	scanf("%s",&pword);
		   	
		   	strcpy(filename,phone);
		   	fp = fopen(strcat(filename,".dat"),"r");
		   	
		   	
		   	if(fp == NULL){
		   		printf("\nAccount number not registured yet");
			   } else{
			   fread(&usr,sizeof(struct user),1,fp);
			   fclose(fp);
			   }
			   
			   if(strcmp(pword,usr.phone) != 0){
			   	printf("\n\tWelcome %s", usr.phone);
			   	
			   	while(count == 'y'){
			   		system("cls");
			   		printf("\n1. Press 1 to check balance.");
			   		printf("\n2. Press 2 to deposit an amount.");
			   		printf("\n3. Press 3 to cash withdrawl.");
			   		printf("\n4. Press 4 to transfer the balance");
			   		printf("\n5. Press 5 to change the password");
			   		
			   		printf("\n\nEntre you choice");
			   		scanf("%d",&choice);
			   		
			   		switch(choice){
			   			
			   			case 1:
			   				printf("\nYour current balance is Rs. %.2f",usr.balance);
			   			break;
			   			case 2:
			   				printf("\nPlease entre the amount you want to deposit : ");
			   				scanf("%f",&amount);
			   				
			   				usr.balance+= amount;
			   				fp = fopen(filename,"w");
			   				fwrite(&usr, sizeof(struct user),1,fp);
			   				
			   				if(fwrite != NULL){
			   					
			   					printf("\nCash deposited sucessfully  ");
			   				
							   } else{
							   	printf("\nError in depositing cash");
							   }
							   fclose(fp);
							   break;
						case 3:
						printf("\nEntre the amount");
						scanf("%f",&amount);
						
						usr.balance -= amount;	 
							fp = fopen(filename,"w");
			   				fwrite(&usr, sizeof(struct user),1,fp);
			   				
			   				if(fwrite != NULL){
			   					
			   					printf("\nYou have withdrawn Rs. %.2f",amount);
			   				
							   } else{
							   	printf("\nError");
							   }
							   fclose(fp);
							   break;  
						case 4:
							printf("Please entre the phone number to transfer the balance");
							scanf("%s",&phone);
							   printf("\nEntre the amount");
							   scanf("%f",&amount);
							   	
							   	strcpy(filename,phone);
							   	
							   	fp = fopen(strcat(filename,".dat")"r");
							   	if(fp == NULL){
							   		printf("\nPhone number not registerd yet.");
								   } else{
								   	fread(&usr)
								   }
							   			   			
			   			
			   			
			   			
					   }
			   		
			   		
			   		
			   		
			   		printf("\n\nDo you want to continue the transaction[y/n] : ");
			   		scanf("%s",&count);
				   }
			   	
			   	
			   	
			   	
			   } else{
			   	printf("Invalid password");
			   }
		   	
		   	
       	
       	
       	
	   }
        
	
  
   	return 0;
   }
   
  

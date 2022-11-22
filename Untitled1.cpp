#include<stdio.h>
#include<stdlib.h>
#include<string.h>

       struct user {
       	
       	char phone[50];
       	char ac[50];
       	char password[50];
       	float balance;
       	
	   };
  
  
  
    int main(){
    	
    	struct user usr,usr1;
    	int opt,choice;
    	FILE *fp;
    	char cont = 'y';
    	char filename[50];
    	char phone[50];
    	char pword[50];
    	float amount;
 
    	printf("\nWhat do you want to do?");
    	printf("\n\n1. Register an account");
    	printf("\n2. Login to an account");
    	
    	
    	printf("\n\n Your choice : ");
    	scanf("%d",&opt);
    	
    	switch(opt){
    		
    		case 1:
    		system("cls");
    		printf("Entre your account number : ");
    		scanf("%s",usr.ac);
    		printf("\nEntre your phone number :");
    		scanf("%s",usr.phone);
    		printf("\nEntre your new password :");
    		scanf("%s",usr.password);
    		usr.balance = 0;
    		strcpy(filename,usr.phone);
    		fp = fopen(strcat(filename,".dat"),"w");
    		
    		fwrite(&usr,sizeof(struct user),1,fp);
    		if(fwrite !=0){
    			
    			printf("\n\nAccount succesfully registered");
			} else{
				
				printf("\n\nSomething went rong try again");
			}
			fclose(fp);
			break;
			
			case 2:
				system("cls");
				printf("\nPhone number : ");
				scanf("%s",phone);
				printf("\nPassword : ");
				scanf("%s",pword);
				strcpy(filename,phone);
				fp = fopen(strcat(filename,".dat"),"r");
				if(fp == NULL) {
					
					printf("\nAccount number not registered");
					
				} else {
				
				fread(&usr, sizeof(struct user),1,fp);
				fclose(fp);
				
				if(strcmp(pword,usr.password) != 0){
					printf("\n\tWelcome %s", usr.phone);
				  while(cont == 'y'){
				  	
				  	system("cls");
				  	printf("\n\n1. Press 1 to check balance");
				  	printf("\n2. Press 2 to deposit an amount");
				  	printf("\n3. Press 3 to cash withdraw");
				  	printf("\n4. Press 4 to transfer the balance");
				  	printf("\n5. Press 5 to change the password");
				  	
				  	printf("\n\nYour choice : ");
				  	scanf("%d",&choice);
				  	 
				  	 
				  	 switch(choice){
				  	 	
				  	 	case 1:
				  	 		
				  	 		printf("\nYour current balance is Rs.%.2f",usr.balance);
				  	 		break;
				  	 		
				  	 	case 2:
						   
						   printf("\nEntre the amount : ");
						   scanf("%f",&amount);
						   usr.balance += amount;
						   fp = fopen(filename,"w");
						   fwrite(&usr,sizeof(struct user),1,fp);
						   if(fwrite != NULL) printf("\nSuccesfull Deposited.");
						   fclose(fp);
				  	 	    break;
				  	 	    
				  	 	    case 3:
				  	 	    	 printf("\nEntre the amount : ");
						   scanf("%f",&amount);
						   usr.balance -= amount;
						   fp = fopen(filename,"w");
						   fwrite(&usr,sizeof(struct user),1,fp);
						   if(fwrite != NULL) printf("\nYou have withdrawn Rs. %.2f",amount);
						   fclose(fp);
				  	 	    break;
				  	 	    case 4:
							
							printf("\nPlease entre the phone number to transfer the balance : ");
							
							scanf("%s",&phone);
							
							printf("\nPlease entre the amount to trasfer : ");
							scanf("%f",&amount);
								strcpy(filename,phone);
							
								fp = fopen(strcat(filename,".dat"),"r");
				  	 	    	if(fp == NULL){
				  	 	    		printf("\nPhone number not registered");
				  	 	    		return 0;
								   } else {
								   		fread(&usr1,sizeof(struct user),1,fp);
				  	 	    	fclose(fp);
								   	
								   		 if(amount>usr.balance) printf("\nInsufficient Balance");  	
				  	 	    else{
				  	 	    
				  	 	    
				  	 	    
				  	 	    	fp = fopen(filename,"w");
				  	 	    	usr1.balance+=amount;
				  	 	    	fwrite(&usr1,sizeof(struct user),1,fp);
				  	 	    	fclose(fp);
				  	 	    	if(fwrite != NULL) {
				  	 	    		printf("\nYou have succesfull transferred the amount");
				  	 	    		strcpy(filename,usr.phone);
				  	 	    		fp = fopen(strcat(filename,".dat"),"w");
				  	 	    		usr.balance -= amount;
				  	 	    		fwrite(&usr,sizeof(struct user),1,fp);
				  	 	    		fclose(fp);
								   }
				  	 	    	
				  	 	    	
							   }
								   	
								   }
								   
								   break;
						case 5:
						printf("\nPlease entre the new password : ");
						scanf("%s", &pword);		   
						fp = fopen(filename,"w");
						strcpy(usr.password,pword);
						fwrite(&usr,sizeof(struct user),1,fp);
						if(fwrite != NULL){
								printf("\n\nPassword succesfully changed");	 
						}
					
						break;
						
						default:
							printf("Invalid option, Please try another one");
				  	 	    
					   }
				  	 
				  	 
				  	 
				  	printf("\n\nDo you want to continue the transaction [y/n] : ");
				  	scanf("%s",&cont);
				  	
				  	
				  	
				  }
				}  else {
					
					printf("\nInvalid password");
				}
			}
				break;
		default:
		printf("\nInvalid options");		
				
		}
    	
    	
    	return 0;
	}

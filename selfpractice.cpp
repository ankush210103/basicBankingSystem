#include<stdio.h>

int main(){
	
	int n;
	printf("Print number for that table : ");
	scanf("%d",&n);
	
	for(int i =1;i<=10;i++){
		
		printf("%d\n",i*n);
	}
	
	
	
	return 0;
}

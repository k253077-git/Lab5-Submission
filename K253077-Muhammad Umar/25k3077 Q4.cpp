#include <stdio.h>

int main(){
	
	int max = 5000, Amount;
	
	printf("Enter your withdraw amount: ");
	scanf("%d", &Amount);
	
	if(Amount <= max && Amount % 20 == 0){
		printf("Withdrawn Approved");
	} else {
     printf("Withdrawl Denied");
   }
	
	
}

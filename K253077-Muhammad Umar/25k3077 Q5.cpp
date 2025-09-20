#include <stdio.h>

int main(){
	
	int num;
	
	printf("Enter the num: ");
	scanf("%d", &num);
	
	if(num%3==0 && num%5==0){
		printf("%d is divisible by both", num);
	} else {
     printf("%d is not divisible by both", num);
   }
	
	
}

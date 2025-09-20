#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age: ");
	scanf(" %d", &age);
	
	if(age>40){
	printf("Senior");
   } else if(age > 18){
   	printf("Adult");
   } else if(age > 13){
   	printf("Teen-Ager");
   }else {
   	printf("child");
   }
	
}

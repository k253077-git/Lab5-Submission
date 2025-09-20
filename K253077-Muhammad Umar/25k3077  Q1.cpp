#include <stdio.h>

int main(){
	
	char light;
	
	printf("Enter the color of light: (R,Y,G) ");
	scanf(" %c", &light);
	
	if(light == 'R'){
	printf("Stop");
   } else if(light == 'Y'){
   	printf("Caution");
   } else {
   	printf("Go");
   }
	
}

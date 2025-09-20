#include <stdio.h>

int main(){
	
	int rating=0;
	printf("Rate the movie 'The lion king' from 1-5: ");
	scanf("%d", &rating);
	
	if(rating= 5){
		printf("%d : Excellent");
	} else if(rating == 4){
		printf("%d : Good");
	} else if(rating == 3){
		printf("%d : Average");
	} else if(rating == 3){
		printf("%d : Poor");
	} else {
		printf("%d : Terrible");
	}
	
}

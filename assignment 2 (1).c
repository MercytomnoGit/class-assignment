#include <stdio.h>
#include<stdlib.h>

int main(){
	system("color a");
	int principle, time, rate, S_interest;
	
	//Asks the user to enter the principle amount
	printf("Enter the principle amount: \n");
	scanf("%d", &principle);
	
printf("Enter the time: \n");
	scanf("%d", &time);	
	//printf("You have entered %d years \n", time);
	
	printf("Enter the rate: \n");
	scanf("%d", &rate);
	
	S_interest = principle * time * rate/100;
	
	printf("Your simple interest is %d: ", S_interest);
	

	return 0;
}
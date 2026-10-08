#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int secretNumber, guess, attempts = 0;
	
	//seed the random number generator using current time 
	srand(time(0));
	
	//generate a random number between 1 and 100
	secretNumber = (rand() % 100) + 1;
	
	printf("==============================================\n");
	printf("  \n WELCOME TO THE NUMBER GUESSING GAME   \n");
	printf("=================================================\n");
	printf("I have picked a number between 1 and 100.\n");
	printf("Can you guess what it is?\n\n");
	
	//Game loop
	do{
		printf("Enter your guess: ");
		
		//Validate input
		if(scanf("%d", &guess) != 1){
			printf("Invalid input! Please enter an integer.\n");
			return 1;
		}
		attempts++;
		
		if (guess > secretNumber){
			printf("Too high! Try a lower number.\n\n");
		}else if (guess < secretNumber){
			printf("Too low! Try a higher number.\n\n");
		}else{
			printf("\n============================================\n");
			printf("CONGRATULATIONS! You guessed it!\n", secretNumber);
			printf("Total attempts taken: %d\n", attempts);
			printf("===============================================\n");
		}
	}
	while (guess != secretNumber);
	
	return 0;
	
}
